#!/usr/bin/env python3
"""
transform_dll.py - Transform Ghidra-decompiled DLL .c files into compilable code.

Extracts game logic (OnInit, ProcessScenary), removes CRT boilerplate,
resolves DAT_/s_ references from the original DLL binary, and produces
a clean C source ready for x64 compilation.

Usage:
    python3 transform_dll.py <decompiled.c> <original.dll> <output.c>
"""

import sys
import re
import struct
import os

def usage():
    print(f"Usage: {sys.argv[0]} <decompiled.c> <original.dll> <output.c>")
    sys.exit(1)

def read_decompiled(path):
    """Read the decompiled C file and return its content."""
    with open(path, 'r') as f:
        return f.read()

def split_into_functions(source):
    """Split source into individual function blocks.
    Each block starts with '// Function:' comment."""
    blocks = re.split(r'(?=^// Function:)', source, flags=re.MULTILINE)
    return [b for b in blocks if b.strip()]

def identify_game_functions(blocks):
    """Identify game function blocks vs CRT runtime blocks.
    Returns dict with 'oninit', 'process', 'helpers' (list), 'dllmain', 'header'."""
    result = {'helpers': []}

    # CRT boundary — 'entry' is the CRT entry point, everything at or after 
    # it is runtime code. __chkesp is just a utility, skip its definition only.
    CRT_SKIP = {'__chkesp', '__amsg_exit', '_malloc', '__exit',
                '__initterm', '__ioterm', '__CrtSetReportFile', '__calloc_dbg',
                '__FF_MSGBANNER', '_rand', 'FID_conflict:AtlIsValidAddress'}

    past_entry = False

    for block in blocks:
        # Header (before first function)
        if not block.startswith('// Function:'):
            result['header'] = block
            continue

        # Get function name
        m = re.match(r'// Function: (\S+) @', block)
        if not m:
            continue
        fname = m.group(1)

        # Check CRT boundary: 'entry' marks CRT start
        if fname == 'entry':
            past_entry = True
            continue

        # Skip known CRT utility definitions
        if fname in CRT_SKIP or fname.startswith('__'):
            continue

        # Skip everything after entry()
        if past_entry:
            continue

        # Named OnInit / ProcessScenary
        if fname == 'OnInit':
            result['oninit'] = block
            continue
        if fname == 'ProcessScenary':
            result['process'] = block
            continue

        # DllMain wrapper: calls OnInit()
        if 'OnInit()' in block and 'param_2 == 1' in block:
            result['dllmain'] = block
            continue

        # Any other FUN_ before entry = game helper
        # But skip CRT DllMainCRTStartup (contains GetVersion/GetCommandLine)
        # And skip SEH/exception handler functions (contain EH/exception types)
        if fname.startswith('FUN_'):
            if 'GetVersion' in block or 'GetCommandLine' in block:
                continue
            if 'EHExceptionRecord' in block or '_CONTEXT' in block or 'EHRegistrationNode' in block:
                continue
            if '_s_FuncInfo' in block or 'PEXCEPTION_RECORD' in block:
                continue
            if 'TIME_ZONE_INFORMATION' in block or 'DaylightDate' in block:
                continue
            if '__fclose_lk' in block:
                continue
            if '__CallSettingFrame' in block:
                continue
            if '__startOneArgErrorHandling' in block or '__math_exit' in block or '__CxxThrowException' in block:
                continue
            if '__fload_withFB' in block or '__ctrandisp2' in block:
                continue
            if '__amsg_exit' in block:
                continue
            if 'UNRECOVERED_JUMPTABLE' in block:
                continue
            result['helpers'].append((fname, block))

    return result

def find_unnamed_game_functions(blocks):
    """For DLLs where OnInit/ProcessScenary are unnamed FUN_ functions,
    identify them by structure. Stops at CRT boundary (entry, __chkesp, 
    __amsg_exit, _rand, etc.)."""
    CRT_NAMES = {'entry', '__chkesp', '__amsg_exit', '_malloc', '__exit',
                 '__initterm', '__ioterm', '__CrtSetReportFile', '__calloc_dbg',
                 '__FF_MSGBANNER', '_rand'}
    
    game_funs = []
    for block in blocks:
        if not block.startswith('// Function:'):
            continue
        m = re.match(r'// Function: (\S+) @', block)
        if not m:
            continue
        fname = m.group(1)
        
        # Stop at any CRT function
        if fname in CRT_NAMES or fname.startswith('__'):
            break
        
        if fname.startswith('FUN_'):
            game_funs.append((fname, block))

    return game_funs


class PEData:
    """Extract strings and data from the original 32-bit DLL PE binary."""

    def __init__(self, dll_path):
        self.data = open(dll_path, 'rb').read()
        self.sections = self._parse_sections()
        self.image_base = self._get_image_base()

    def _get_image_base(self):
        pe_offset = struct.unpack_from('<I', self.data, 0x3C)[0]
        return struct.unpack_from('<I', self.data, pe_offset + 0x34)[0]

    def _parse_sections(self):
        pe_offset = struct.unpack_from('<I', self.data, 0x3C)[0]
        num_sections = struct.unpack_from('<H', self.data, pe_offset + 6)[0]
        opt_hdr_size = struct.unpack_from('<H', self.data, pe_offset + 20)[0]
        sec_offset = pe_offset + 24 + opt_hdr_size
        sections = []
        for i in range(num_sections):
            off = sec_offset + i * 40
            name = self.data[off:off+8].rstrip(b'\x00').decode('ascii', errors='replace')
            vsize = struct.unpack_from('<I', self.data, off + 8)[0]
            vaddr = struct.unpack_from('<I', self.data, off + 12)[0]
            rawsize = struct.unpack_from('<I', self.data, off + 16)[0]
            rawptr = struct.unpack_from('<I', self.data, off + 20)[0]
            sections.append({
                'name': name, 'vaddr': vaddr, 'vsize': vsize,
                'rawptr': rawptr, 'rawsize': rawsize
            })
        return sections

    def rva_to_file_offset(self, rva):
        for sec in self.sections:
            if sec['vaddr'] <= rva < sec['vaddr'] + sec['rawsize']:
                return sec['rawptr'] + (rva - sec['vaddr'])
        return None

    def read_string_at_va(self, va):
        """Read null-terminated ASCII string at virtual address."""
        rva = va - self.image_base
        off = self.rva_to_file_offset(rva)
        if off is None:
            return None
        end = self.data.index(b'\x00', off)
        return self.data[off:end].decode('ascii', errors='replace')

    def read_bytes_at_va(self, va, size):
        """Read raw bytes at virtual address."""
        rva = va - self.image_base
        off = self.rva_to_file_offset(rva)
        if off is None:
            return None
        return self.data[off:off+size]


def collect_data_refs(source):
    """Collect all DAT_ and s_ references from the source code.
    Returns two sets: dat_addrs and str_refs (with name and address)."""
    dat_refs = set(re.findall(r'DAT_([\da-fA-F]+)', source))
    str_refs = set(re.findall(r's_\w+_([\da-fA-F]+)', source))
    return dat_refs, str_refs


def resolve_string_refs(source, pe):
    """Replace s_Name_ADDR references with actual string literals."""
    def repl_str(m):
        full = m.group(0)
        addr = int(m.group(1), 16)
        s = pe.read_string_at_va(addr)
        if s is not None:
            # Escape backslashes and quotes
            s = s.replace('\\', '\\\\').replace('"', '\\"')
            return f'"{s}"'
        return full
    return re.sub(r's_\w+_([\da-fA-F]+)', repl_str, source)


def classify_dat_refs(source, pe):
    """Classify DAT_ references by how they're used and what data is at that address.

    Strategy:
    - If used with & AND the bytes at that address look like a GAMEOBJ
      (8 bytes of zeroes or small ints) → GAMEOBJ
    - If used with & AND the bytes look like printable ASCII → char[] string
    - If used without & (as value, assigned to, etc.) → int variable
    """
    refs = {}

    # Collect all unique addresses referenced
    all_addrs = set()
    for m in re.finditer(r'DAT_([\da-fA-F]+)', source):
        all_addrs.add(m.group(1))

    for addr_hex in all_addrs:
        va = int(addr_hex, 16)
        used_with_amp = bool(re.search(r'&DAT_' + addr_hex + r'\b', source))
        used_without_amp = bool(re.search(r'(?<!\&)\bDAT_' + addr_hex + r'\b', source))
        assigned_to = bool(re.search(r'(?<!\&)\bDAT_' + addr_hex + r'\s*=', source))
        # Check if used as a value (in comparison, arithmetic, etc.)
        used_as_value = bool(re.search(r'[<>=!+\-*/]\s*DAT_' + addr_hex + r'\b', source))
        # Check if used as function pointer: (*DAT_xxx)(
        used_as_funcptr = bool(re.search(r'\(\*DAT_' + addr_hex + r'\)\s*\(', source))
        # Check if dereferenced: *DAT_xxx (assignment target or read)
        used_as_ptr = bool(re.search(r'(?<!\()\*DAT_' + addr_hex + r'\b', source))
        # Check if subscripted: DAT_xxx[...]
        used_as_array = bool(re.search(r'\bDAT_' + addr_hex + r'\s*\[', source))

        if used_as_funcptr:
            refs[addr_hex] = 'funcptr'
        elif used_as_ptr or used_as_array:
            refs[addr_hex] = 'ptr'
        elif assigned_to or (used_without_amp and used_as_value):
            # If assigned to or used in comparison/arithmetic, it's a variable
            refs[addr_hex] = 'var'
        elif used_with_amp and not used_without_amp:
            # Only used as &DAT_xxx → pointer to something
            # Check if it's a string
            s = pe.read_string_at_va(va)
            if s and len(s) >= 1 and all(c in _PRINTABLE for c in s):
                refs[addr_hex] = 'string'
            else:
                refs[addr_hex] = 'gameobj'
        elif used_without_amp and not used_with_amp:
            refs[addr_hex] = 'var'
        else:
            # Used both ways → check content
            s = pe.read_string_at_va(va)
            if s and len(s) >= 1 and all(c in _PRINTABLE for c in s):
                refs[addr_hex] = 'string'
            else:
                refs[addr_hex] = 'gameobj'

    return refs

_PRINTABLE = set(
    'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ'
    '0123456789_#() .,;:!?-+*/=<>@&%$^~[]{}|\\\'"'
)


def transform_chkesp(code):
    """Remove __chkesp() patterns from Ghidra decompiled code.

    Pattern 1: API_call(args); varName = __chkesp();
       → varName = API_call(args);
    Pattern 2: API_call(args); __chkesp();
       → API_call(args);
    Handles multi-line statements (e.g., function calls spanning several lines).
    """
    lines = code.split('\n')
    result = []
    i = 0
    while i < len(lines):
        line = lines[i]
        stripped = line.strip()

        # Check if NEXT line contains __chkesp()
        if i + 1 < len(lines) and '__chkesp()' in lines[i + 1]:
            next_stripped = lines[i + 1].strip()

            # Current line might be end of multi-line statement
            # Collect the full statement by looking backwards in result
            if stripped.endswith(';'):
                # Build full multi-line statement
                stmt_lines = [line]
                # Walk backward through result to find the start of this statement
                j = len(result) - 1
                while j >= 0:
                    prev = result[j].strip()
                    # Statement start: contains function call opening or assignment
                    stmt_lines.insert(0, result[j])
                    if (prev.endswith(';') or prev.endswith('{') or 
                        prev.endswith('}') or prev.endswith(':') or prev == ''):
                        # This is a previous statement/label, not part of current one
                        stmt_lines.pop(0)
                        break
                    j -= 1
                
                # Remove collected lines from result
                lines_to_remove = len(stmt_lines) - 1  # -1 because current line not in result yet
                result = result[:len(result) - lines_to_remove]
                
                full_stmt = '\n'.join(stmt_lines)
                full_stripped = ' '.join(l.strip() for l in stmt_lines)
                indent = stmt_lines[0][:len(stmt_lines[0]) - len(stmt_lines[0].lstrip())]

                # Case: "iVar = __chkesp();" → absorb return value
                m_assign = re.match(r'(\w+)\s*=\s*__chkesp\(\);', next_stripped)
                if m_assign:
                    var = m_assign.group(1)
                    call = full_stripped.rstrip(';')
                    result.append(f'{indent}{var} = {call};')
                    i += 2
                    continue

                # Case: just "__chkesp();" → remove it, keep statement
                if next_stripped == '__chkesp();':
                    for sl in stmt_lines:
                        result.append(sl)
                    i += 2
                    continue

        # Standalone __chkesp() line
        if stripped == '__chkesp();':
            i += 1
            continue

        result.append(line)
        i += 1

    return '\n'.join(result)


def resolve_indirect_calls(code):
    """Resolve indirect function pointer calls back to direct calls.
    
    Ghidra pattern:
        pcVarN = FuncName_exref;  (already transformed to (void*)&FuncName)
        ...
        (*pcVarN)(args);
    
    Strategy: track assignments, replace each (*pcVarN)(args) with the
    function that was most recently assigned to pcVarN.
    """
    lines = code.split('\n')
    # Track var -> function mapping at each point
    ptr_state = {}
    result = []

    for line in lines:
        stripped = line.strip()

        # Match: pcVarN = (void*)&FuncName;
        m = re.match(r'\s*(\w+)\s*=\s*\(void\*\)&(\w+);', stripped)
        if m:
            var = m.group(1)
            func = m.group(2)
            ptr_state[var] = func
            # Remove this dead assignment line
            continue

        # Match: (*pcVarN)(args)  inside expressions
        new_line = line
        for var, func in ptr_state.items():
            new_line = re.sub(
                r'\(\*' + re.escape(var) + r'\)\s*\(',
                func + '(', new_line)

        result.append(new_line)

    return '\n'.join(result)


def fix_extra_args(code):
    """Fix decompiler artifacts where functions get extra bogus arguments.
    Known: GetDiff(a, b) → GetDiff(a)  — decompiler merged two calls."""
    # GetDiff takes exactly 1 arg. If decompiled as GetDiff(a, expr), 
    # the second arg was from a different call. Comment out the whole line.
    code = re.sub(
        r'^(\s*\w+\s*=\s*)GetDiff\(\w+,\s*[^;]+;',
        r'// FIXME(decompiler): \g<0>',
        code, flags=re.MULTILINE)
    return code


def remove_stack_fill(code):
    """Remove MSVC debug stack fill boilerplate:
    puVar = local_xxx;
    for (iVar = 0xNN; iVar != 0; iVar = iVar + -1) {
      *puVar = 0xcccccccc;
      puVar = puVar + 1;
    }
    Also remove the local_xxx array declaration and related vars."""
    # Remove the for-loop pattern
    code = re.sub(
        r'\s*\w+\s*=\s*local_\w+;\s*\n'
        r'\s*for\s*\([^)]*0xcccccccc[^}]*\}\s*\n?',
        '\n', code, flags=re.DOTALL)

    # Simpler pattern variant
    code = re.sub(
        r'\s*\w+\s*=\s*local_\w+;\s*\n'
        r'\s*for\s*\(\w+\s*=\s*0x\w+;\s*\w+\s*!=\s*0;\s*\w+\s*=\s*\w+\s*\+\s*-1\)\s*\{\s*\n'
        r'\s*\*\w+\s*=\s*0xcccccccc;\s*\n'
        r'\s*\w+\s*=\s*\w+\s*\+\s*1;\s*\n'
        r'\s*\}\s*\n?',
        '\n', code)

    # Broken stack-fill pattern: for-header destroyed by SEH/ExceptionList removal
    # Leaves orphaned: puVar = local_xxx; \n iVar = iVar + -1) { \n *puVar = 0xcccccccc; ...
    code = re.sub(
        r'\s*\w+\s*=\s*local_\w+;\s*\n'
        r'\s*\w+\s*=\s*\w+\s*\+\s*-?\d+\)\s*\{\s*\n'
        r'\s*\*\w+\s*=\s*0xcccccccc;\s*\n'
        r'\s*\w+\s*=\s*\w+\s*\+\s*1;\s*\n'
        r'\s*\}\s*\n?',
        '\n', code)

    # Remove unused large local array declarations (stack fill buffers):
    # Only remove if the variable is not used elsewhere in the code (after fill removal)
    for m in re.finditer(r'(\s*\w+\s+(local_\w+)\s*\[([89]\d*|\d{2,})\];\s*\n)', code):
        var_name = m.group(2)
        # Count all occurrences including the declaration
        uses = len(re.findall(r'\b' + re.escape(var_name) + r'\b', code))
        if uses <= 1:  # only the declaration itself
            code = code.replace(m.group(1), '\n', 1)

    # Remove "local_8 = 0x1000xxxx;" (SEH return address patterns)
    code = re.sub(r'\s*local_\w+\s*=\s*0x1000\w+;\s*\n', '\n', code)

    return code


def generate_var_declarations(dat_types, pe):
    """Generate C variable declarations for all DAT_ references."""
    lines = []
    sorted_addrs = sorted(dat_types.keys(), key=lambda x: int(x, 16))

    for addr_hex in sorted_addrs:
        dtype = dat_types[addr_hex]
        va = int(addr_hex, 16)

        if dtype == 'gameobj':
            lines.append(f'long long DAT_{addr_hex} = 0;')
        elif dtype == 'string':
            s = pe.read_string_at_va(va)
            if s:
                s_esc = s.replace('\\', '\\\\').replace('"', '\\"')
                lines.append(f'char DAT_{addr_hex}[] = "{s_esc}";')
            else:
                lines.append(f'char DAT_{addr_hex}[] = "";')
        elif dtype == 'funcptr':
            lines.append(f'int (*DAT_{addr_hex})() = 0;')
        elif dtype == 'ptr':
            lines.append(f'int *DAT_{addr_hex} = 0;')
        else:
            raw = pe.read_bytes_at_va(va, 4)
            if raw:
                val = struct.unpack_from('<i', raw)[0]
                lines.append(f'int DAT_{addr_hex} = {val};')
            else:
                lines.append(f'int DAT_{addr_hex} = 0;')

    return '\n'.join(lines)


if __name__ == '__main__':
    if len(sys.argv) < 4:
        usage()

    decomp_path = sys.argv[1]
    dll_path = sys.argv[2]
    out_path = sys.argv[3]

    source = read_decompiled(decomp_path)
    pe = PEData(dll_path)

    # Split into function blocks
    blocks = split_into_functions(source)

    # Identify game functions
    game = identify_game_functions(blocks)

    # If OnInit/ProcessScenary not found by name, find by structure
    if 'oninit' not in game or 'process' not in game:
        fun_blocks = find_unnamed_game_functions(blocks)
        if len(fun_blocks) >= 2:
            has_dllmain = False
            game_only = []
            for name, block in fun_blocks:
                if 'OnInit()' in block and 'param_2 == 1' in block:
                    has_dllmain = True
                    continue
                game_only.append((name, block))
            if len(game_only) >= 2:
                assigned_names = set()
                if 'oninit' not in game:
                    game['oninit'] = game_only[0][1]
                    game['oninit_name'] = game_only[0][0]
                    assigned_names.add(game_only[0][0])
                if 'process' not in game:
                    game['process'] = game_only[1][1]
                    game['process_name'] = game_only[1][0]
                    assigned_names.add(game_only[1][0])
                # Additional unnamed helpers (after the first 2)
                existing_names = {n for n, _ in game['helpers']}
                for name, block in game_only[2:]:
                    if name not in existing_names:
                        game['helpers'].append((name, block))
                # Remove oninit/process from helpers if they were there
                game['helpers'] = [(n, b) for n, b in game['helpers']
                                   if n not in assigned_names]
            elif len(game_only) == 1:
                if 'oninit' not in game:
                    game['oninit'] = game_only[0][1]

    if 'oninit' not in game:
        print(f"ERROR: Could not find OnInit in {decomp_path}", file=sys.stderr)
        sys.exit(1)

    # Combine game function code: helpers first (forward declarations not needed),
    # then OnInit, then ProcessScenary
    code_parts = []
    helper_names_void = set()
    for name, block in game.get('helpers', []):
        # Track which helpers return void (for fixing void assignment later)
        m = re.search(r'^void\s+(?:__\w+\s+)?' + re.escape(name) + r'\s*\(', block, re.MULTILINE)
        if m:
            helper_names_void.add(name)
        code_parts.append(block)
    for key in ['oninit', 'process']:
        if key not in game:
            continue
        code_parts.append(game[key])

    raw_code = '\n'.join(code_parts)

    # Replace thunk_FUN_ calls with FUN_ (Ghidra thunk wrappers)
    raw_code = re.sub(r'\bthunk_FUN_', 'FUN_', raw_code)

    # Remove PTR_s_ references BEFORE resolve_string_refs to prevent
    # partial s_ matches inside PTR_s_ names (e.g. pruss_GE__1003ddf4)
    raw_code = re.sub(r'\bPTR_s_\w+\b', '0', raw_code)

    # Resolve string references (s_Name_ADDR -> "Name")
    raw_code = resolve_string_refs(raw_code, pe)

    # Classify and collect DAT_ references
    dat_types = classify_dat_refs(raw_code, pe)

    # For string DAT_ refs, remove & prefix: &DAT_xxx → DAT_xxx
    for addr_hex, dtype in dat_types.items():
        if dtype == 'string':
            raw_code = raw_code.replace(f'&DAT_{addr_hex}', f'DAT_{addr_hex}')

    # Remove __chkesp patterns
    raw_code = transform_chkesp(raw_code)
    # Remove any remaining __chkesp() calls
    raw_code = re.sub(r'\b__chkesp\s*\(\)', '0', raw_code)

    # Fix void function return value assignments: var = void_FUN_xxx(...) → void_FUN_xxx(...)
    for vfn in helper_names_void:
        # Remove "var = " (optionally with cast) before void function calls
        raw_code = re.sub(r'\b\w+\s*=\s*(?:\([^)]*\)\s*)*(' + re.escape(vfn) + r'\b)',
                          r'\1', raw_code)

    # Fix void API function return value assignments
    VOID_API_FUNCS = [
        'AddResource', 'AllowAttack', 'AssignNation',
        'AttackBuildingsInZone', 'AttackEnemyInZone', 'AttackZoneByArtillery',
        'ChangeFriends', 'ChangeUnitParam', 'ClearLightSpot', 'ClearSelection',
        'DisableMission', 'DisableUpgrade', 'DoMessagesBrief', 'DoNotUseSelInAI',
        'EnableMission', 'EnableUnit', 'EnableUpgrade', 'FreeTimer', 'HINT',
        'InitialUpgrade', 'LooseGame', 'PastePiece',
        'ProduceOneUnit', 'ProduceUnit', 'ProduceUnitFast',
        'PushAllUnitsAway', 'PushUnitAway', 'RefreshScreen',
        'RegisterDynGroup', 'RegisterVar', 'RegisterVisibleZone', 'RegisterZone',
        'RemoveGroup', 'RemoveUnitFromGroup', 'RepairBuildingsBySel',
        'RunAI', 'RunTimer', 'SaveSelectedUnits',
        'SelAttackGroup', 'SelAutoKill', 'SelChangeNation', 'SelErase',
        'SelectBuildingsInZone', 'SelectTypeOfUnitsInZone',
        'SelectUnits', 'SelectUnits1', 'SelectUnitsInZone', 'SelectUnitsType',
        'SendUnitsToTransport', 'SetAIProperty', 'SetDestPoint',
        'SetLightSpot', 'SetLooseText', 'SetPlayerName', 'SetReadyState',
        'SetResource', 'SetStandGround', 'SetStandartVictory',
        'SetStartPoint', 'SetTrigg', 'SetTutorial', 'SetUnitInfo',
        'SetVictoryText', 'SetWTrigg',
        'ShowAlarm', 'ShowCentralText', 'ShowPage', 'ShowPageParam', 'ShowVictory',
        'StartAI', 'TakeFood', 'TakeStone', 'TakeWood',
    ]
    for vfn in VOID_API_FUNCS:
        raw_code = re.sub(r'\b\w+\s*=\s*(' + re.escape(vfn) + r'\b)',
                          r'\1', raw_code)

    # Remove Ghidra stack-fill boilerplate
    raw_code = remove_stack_fill(raw_code)

    # Remove 'undefined4' type → replace with 'int'
    raw_code = re.sub(r'\bundefined8\b', 'long long', raw_code)
    raw_code = re.sub(r'\bundefined4\b', 'int', raw_code)
    raw_code = re.sub(r'\bundefined3\b', 'int', raw_code)
    raw_code = re.sub(r'\bundefined2\b', 'short', raw_code)
    raw_code = re.sub(r'\bundefined1\b', 'char', raw_code)
    raw_code = re.sub(r'\bundefined\b', 'int', raw_code)

    # Replace Ghidra types
    raw_code = re.sub(r'\buint\b', 'unsigned int', raw_code)
    raw_code = re.sub(r'\bcode\s*\*', 'void *', raw_code)
    raw_code = re.sub(r'\bulong\b', 'unsigned long', raw_code)
    raw_code = re.sub(r'\bushort\b', 'unsigned short', raw_code)
    raw_code = re.sub(r'\bbool\b', 'BOOL', raw_code)
    raw_code = re.sub(r'\bint1\b', 'char', raw_code)
    raw_code = re.sub(r'\bint3\b', 'int', raw_code)
    raw_code = re.sub(r'\bint2\b', 'short', raw_code)
    raw_code = re.sub(r'\bint8\b', 'long long', raw_code)
    raw_code = re.sub(r'\blonglong\b', 'long long', raw_code)
    raw_code = re.sub(r'\bulonglong\b', 'unsigned long long', raw_code)
    raw_code = re.sub(r'\bunkbyte10\b', 'char', raw_code)
    raw_code = re.sub(r'\bfloat10\b', 'long double', raw_code)
    raw_code = re.sub(r'\buint3\b', 'int', raw_code)

    # Fix Windows type names that need 'struct' keyword in C
    raw_code = re.sub(r'\b_SYSTEMTIME\b', 'SYSTEMTIME', raw_code)
    raw_code = re.sub(r'\b_TIME_ZONE_INFORMATION\b', 'TIME_ZONE_INFORMATION', raw_code)
    raw_code = re.sub(r'\b_FILETIME\b', 'FILETIME', raw_code)
    raw_code = re.sub(r'\b_CONTEXT\b', 'CONTEXT', raw_code)

    # Remove C++ artifacts not needed in C
    raw_code = re.sub(r'\bexception\b', 'int', raw_code)
    raw_code = re.sub(r'\bBADSPACEBASE\b', 'int', raw_code)

    # Remove SEH ExceptionList references (x86 fs:[0] chain, not needed on x64)
    raw_code = re.sub(r'^.*\bExceptionList\b.*$\n?', '', raw_code, flags=re.MULTILINE)

    # Remove SEH label references: puStack_c = &LAB_xxx;
    raw_code = re.sub(r'^.*&LAB_\w+.*$\n?', '', raw_code, flags=re.MULTILINE)

    # Second pass: remove broken stack-fill loops left after SEH removal
    # SEH removal may break for-loop headers that contained ExceptionList references,
    # leaving orphaned loop bodies with 0xcccccccc still present
    raw_code = remove_stack_fill(raw_code)
    # Remove any stray 0xcccccccc lines (broken loops that remove_stack_fill missed)
    raw_code = re.sub(r'^.*0xcccccccc.*$\n?', '', raw_code, flags=re.MULTILINE)

    # Remove Ghidra stack reference artifacts: stack0xNNNNNNNN
    raw_code = re.sub(r'^.*\bstack0x\w+\b.*$\n?', '', raw_code, flags=re.MULTILINE)

    # Replace Ghidra subpiece notation: var._O_S_ → access via cast
    # For struct member dots like x.field._0_4_ we need to handle the leftmost variable
    # Simple approach: remove the subpiece accessor entirely for simple cases
    # var._0_4_ → (*(int*)&var)    (read first 4 bytes)
    # var._4_4_ → *(int*)((char*)&var + 4)
    # For chained access like obj.field._0_4_ this won't work with &, so just use the base
    def subpiece_replace(m):
        var = m.group(1)
        offset = m.group(2)
        size = int(m.group(3))
        type_map = {1: 'char', 2: 'short', 3: 'int', 4: 'int', 8: 'long long'}
        ctype = type_map.get(size, 'int')
        # If var is a struct field (preceded by . in the original), this won't capture it
        # For local vars: var._0_4_ → (*(int*)&var)
        if offset == '0' and size == 4:
            return f'(*(int*)&{var})'
        elif offset == '0' and size == 2:
            return f'(*(short*)&{var})'
        return f'*({ctype}*)((char*)&{var} + {offset})'
    # Only match if preceded by space/semicolon/comma/paren/= (not preceded by .)
    # to avoid breaking struct.field._N_M_ patterns
    raw_code = re.sub(r'(?<![.\w])(\w+)\._(\d+)_(\d+)_', subpiece_replace, raw_code)
    # For remaining struct.field._N_M_ patterns, just remove the subpiece (cast the field)
    raw_code = re.sub(r'\.(\w+)\._(\d+)_(\d+)_', r'.\1', raw_code)

    # Remove CRT float formatting helpers (entire lines)
    raw_code = re.sub(r'^.*\b__fassign\b.*$\n?', '', raw_code, flags=re.MULTILINE)
    raw_code = re.sub(r'^.*\b__cfltcvt\b.*$\n?', '', raw_code, flags=re.MULTILINE)
    raw_code = re.sub(r'^.*\b__cropzeros\b.*$\n?', '', raw_code, flags=re.MULTILINE)
    raw_code = re.sub(r'^.*\b__positive\b.*$\n?', '', raw_code, flags=re.MULTILINE)

    # Remove CRT FPU initialization calls
    raw_code = re.sub(r'^.*\b__ms_p5_mp_test_fdiv\b.*$\n?', '', raw_code, flags=re.MULTILINE)
    raw_code = re.sub(r'^.*\b__setdefaultprecision\b.*$\n?', '', raw_code, flags=re.MULTILINE)

    # Remove swi(3) debug break calls (CRT assertion interrupt)
    raw_code = re.sub(r'\bswi\(3\)', '((void)0)', raw_code)

    # Remove PTR___fptrap references — replace with NULL function pointer
    raw_code = re.sub(r'\bPTR___fptrap_\w+\b', '((void(*)(void))0)', raw_code)

    # Remove PTR_DAT_ references — replace with 0
    raw_code = re.sub(r'\bPTR_DAT_\w+\b', '0', raw_code)

    # Remove PTR_FUN_ references — replace with stub function name
    raw_code = re.sub(r'\bPTR_FUN_(\w+)\b', r'FUN_\1', raw_code)

    # Remove PTR_LAB_ references — replace with 0
    raw_code = re.sub(r'\bPTR_LAB_\w+\b', '0', raw_code)

    # Remove standalone PTR_ without identifier suffix — replace with ptr_var
    raw_code = re.sub(r'\bPTR_\b', 'ptr_var', raw_code)

    # Fix &0 left from PTR_DAT_/PTR_s_ → 0 replacement: &0 is not a valid lvalue
    raw_code = re.sub(r'&0\b', '((int*)0)', raw_code)

    # Remove CRT debug break pattern: pcVar = (void*)((void)0); (*pcVar)();
    raw_code = re.sub(r'^\s*\w+\s*=\s*\(void\s*\*\)\s*\(\(void\)0\)\s*;\s*$\n?', '', raw_code, flags=re.MULTILINE)
    raw_code = re.sub(r'\(\*pcVar\d*\)\s*\(\)', '((void)0)', raw_code)

    # Remove assignments of void results
    raw_code = re.sub(r'^\s*\w+\s*=\s*\(\(void\)0\)\s*;\s*$\n?', '', raw_code, flags=re.MULTILINE)

    # UNRECOVERED_JUMPTABLE — Ghidra couldn't decompile switch/jump, make it a no-op
    raw_code = re.sub(r'\(\*\(void\s*\*\)\s*UNRECOVERED_JUMPTABLE\)\s*\(\)', '((void)0)', raw_code)
    raw_code = re.sub(r'\bUNRECOVERED_JUMPTABLE\b', '0', raw_code)

    # Fix Ghidra register artifacts
    raw_code = re.sub(r'\bregister0x\w+\b', '0', raw_code)

    # Fix indirect calls through void*: (*(void *)expr)(args) → ((int(*)())expr)(args)
    raw_code = re.sub(r'\(\*\(void\s*\*\)\s*', '((int(*)())', raw_code)

    # Remove dead assignments to literal 0 (from replaced PTR_DAT/PTR_PTR)
    raw_code = re.sub(r'^\s*0\s*=\s*[^;]*;\s*$\n?', '', raw_code, flags=re.MULTILINE)
    raw_code = re.sub(r'^\s*\(\(void\(\*\)\(void\)\)0\)\s*=\s*[^;]*;\s*$\n?', '', raw_code, flags=re.MULTILINE)
    # Remove dead assignments in comma expressions: 0 = expr,
    raw_code = re.sub(r'\b0\s*=\s*[^,;]+,\s*', '', raw_code)

    # Fix FILE internal member access (MSVC _flag → _file for mingw)
    # Just remove lines accessing FILE internals — they're CRT-specific
    raw_code = re.sub(r'^.*->_flag\b.*$\n?', '', raw_code, flags=re.MULTILINE)
    raw_code = re.sub(r'^.*\._flag\b.*$\n?', '', raw_code, flags=re.MULTILINE)
    raw_code = re.sub(r'^.*->_cnt\b.*$\n?', '', raw_code, flags=re.MULTILINE)

    # Fix msvcrt name-mangled C stdlib functions
    raw_code = re.sub(r'\b_rand\b', 'rand', raw_code)
    raw_code = re.sub(r'\b_srand\b', 'srand', raw_code)
    raw_code = re.sub(r'\b_strncpy\b', 'strncpy', raw_code)
    raw_code = re.sub(r'\b_strlen\b', 'strlen', raw_code)
    raw_code = re.sub(r'\b_strncmp\b', 'strncmp', raw_code)

    # Fix Ghidra FPU intrinsic names
    raw_code = re.sub(r'\bfcos\b', 'cos', raw_code)
    raw_code = re.sub(r'\bfsin\b', 'sin', raw_code)
    raw_code = re.sub(r'\bfabs\b', 'fabs', raw_code)
    raw_code = re.sub(r'\bfsqrt\b', 'sqrt', raw_code)
    raw_code = re.sub(r'\bfpatan\b', 'atan2', raw_code)
    raw_code = re.sub(r'\bSQRT\b', 'sqrt', raw_code)
    raw_code = re.sub(r'\b__ftol\s*\(\)', '0', raw_code)
    raw_code = re.sub(r'\b__ftol\b', '(int)', raw_code)
    raw_code = re.sub(r'\boperator_new\b', 'malloc', raw_code)
    raw_code = re.sub(r'\boperator_delete\b', 'free', raw_code)

    # Remove calling conventions not needed on x64
    raw_code = re.sub(r'\b__thiscall\b', '', raw_code)
    raw_code = re.sub(r'\b__fastcall\b', '', raw_code)

    # Replace C++ destructor calls: int::~int(...) → ((void)0)
    raw_code = re.sub(r'\w+::~\w+\([^)]*\)', '((void)0)', raw_code)
    # Replace C++ RTTI references: type_info::vftable → 0
    raw_code = re.sub(r'\w+::\w+', '0', raw_code)

    # Fix &0 from RTTI/PTR_ replacements (second pass)
    raw_code = re.sub(r'&0\b', '((int*)0)', raw_code)

    # Replace C++ 'this' keyword with valid C identifier
    raw_code = re.sub(r'\bthis\b', 'this_ptr', raw_code)

    # Replace Ghidra SUB84(expr, offset) → (int)(expr)
    raw_code = re.sub(r'\bSUB84\s*\(([^,]+),\s*\d+\)', r'(int)(\1)', raw_code)

    # Replace Ghidra NAN() pseudo-function (FPU NaN check) with 0
    # Game floats are never NaN; this is from x87 FUCOM decompilation
    raw_code = re.sub(r'\bNAN\s*\([^)]*\)', '0', raw_code)

    # Remove CONCAT macros — Ghidra's byte concatenation artifacts
    # CONCAT31(0xcccccc, param) → (int)param, CONCAT11 etc.
    # Process innermost first using balanced-paren matching
    def replace_innermost_concat(code):
        """Find and replace the innermost CONCAT (one with no nested CONCAT in args)."""
        # Find all CONCAT positions
        for m in re.finditer(r'CONCAT\d+\(', code):
            start = m.start()
            paren_start = m.end() - 1  # position of '('
            # Find matching close paren
            depth = 1
            pos = m.end()
            while pos < len(code) and depth > 0:
                if code[pos] == '(':
                    depth += 1
                elif code[pos] == ')':
                    depth -= 1
                pos += 1
            if depth != 0:
                continue
            paren_end = pos - 1  # position of matching ')'
            inner = code[m.end():paren_end]
            # Skip if inner contains another CONCAT (not innermost)
            if 'CONCAT' in inner:
                continue
            # Find the last comma at depth 0 (separates args)
            comma_pos = -1
            depth = 0
            for i, ch in enumerate(inner):
                if ch == '(':
                    depth += 1
                elif ch == ')':
                    depth -= 1
                elif ch == ',' and depth == 0:
                    comma_pos = i
            if comma_pos < 0:
                continue
            last_arg = inner[comma_pos + 1:].strip()
            # Replace the entire CONCAT call with (int)last_arg
            replacement = '(int)' + last_arg
            return code[:start] + replacement + code[paren_end + 1:]
        return code  # no innermost found

    max_iters = 50
    for _ in range(max_iters):
        if not re.search(r'CONCAT\d+\(', raw_code):
            break
        new_code = replace_innermost_concat(raw_code)
        if new_code == raw_code:
            break
        raw_code = new_code

    # Replace _DAT_xxx (overlapping symbol artifacts) with DAT_\1_ovl
    # These are separate int variables overlapping a GAMEOBJ at the same address
    raw_code = re.sub(r'\b_DAT_([\da-fA-F]+)', r'DAT_\1_ovl', raw_code)

    # Replace xxx_exref with (void*)&xxx — Ghidra import reference artifacts
    raw_code = re.sub(r'(\w+)_exref\b', r'(void*)&\1', raw_code)

    # Resolve indirect calls through function pointers loaded from _exref
    # Pattern: pcVarN = (void*)&Func; ... (*pcVarN)(args) → Func(args)
    raw_code = resolve_indirect_calls(raw_code)

    # Fix decompiler artifacts: functions called with too many arguments
    # GetDiff takes 1 arg but sometimes decompiled with 2
    raw_code = fix_extra_args(raw_code)

    # Fix function signatures: rename FUN_ to OnInit/ProcessScenary
    if 'oninit_name' in game:
        raw_code = raw_code.replace(game['oninit_name'], 'OnInit')
    if 'process_name' in game:
        raw_code = raw_code.replace(game['process_name'], 'ProcessScenary')

    # Fix named function headers — normalize signatures to void(void)
    # First, capture original params so we can declare them as locals if used in body
    for func_name in ('OnInit', 'ProcessScenary'):
        # Match any return type (void, int, etc.) + optional calling convention
        pat = re.compile(
            r'^(\w[\w\s*]*?\s+(?:__\w+\s+)?' + func_name + r')\s*\(([^)]*)\)\s*\n\{',
            re.MULTILINE)
        m_sig = pat.search(raw_code)
        if m_sig and m_sig.group(2).strip() != 'void' and m_sig.group(2).strip() != '':
            # Extract param names from the old signature
            params_str = m_sig.group(2)
            param_names = re.findall(r'\b(param_\d+)\b', params_str)
            if param_names:
                # Replace signature with void() — K&R style unspecified params
                old_header = m_sig.group(0)
                new_header = f'__declspec(dllexport) void {func_name}()\n{{'
                raw_code = raw_code.replace(old_header, new_header, 1)
                # Add local int declarations for removed params after opening brace
                decls = '\n'.join(f'  int {p} = 0;' for p in param_names)
                raw_code = raw_code.replace(new_header, new_header + '\n' + decls, 1)
            else:
                raw_code = re.sub(
                    r'^(\w[\w\s*]*?\s+(?:__\w+\s+)?' + func_name + r')\s*\([^)]*\)',
                    r'__declspec(dllexport) void ' + func_name + '()',
                    raw_code, count=1, flags=re.MULTILINE)
        elif m_sig is None:
            # Just try the simpler regex (params might already be void or missing)
            raw_code = re.sub(
                r'^(\w[\w\s*]*?\s+(?:__\w+\s+)?' + func_name + r')\s*\([^)]*\)',
                r'__declspec(dllexport) void ' + func_name + '()',
                raw_code, count=1, flags=re.MULTILINE)

    # Fix C++ bool literals
    raw_code = re.sub(r'\btrue\b', '1', raw_code)
    raw_code = re.sub(r'\bfalse\b', '0', raw_code)

    # Remove assignments of void export function results: var = OnInit(...) → OnInit(...)
    for func_name in ('OnInit', 'ProcessScenary'):
        raw_code = re.sub(r'\b\w+\s*=\s*(' + func_name + r'\s*\([^)]*\))', r'\1', raw_code)

    # Fix _local_XX and _param_XX artifacts (Ghidra name-mangled locals/params)
    raw_code = re.sub(r'\b_local_(\w+)\b', r'local_\1', raw_code)
    raw_code = re.sub(r'\b_param_(\w+)\b', r'param_\1', raw_code)

    # Remove // Function: comments
    raw_code = re.sub(r'^// Function:.*$\n?', '', raw_code, flags=re.MULTILINE)
    # Remove /* WARNING: */ comments
    raw_code = re.sub(r'/\* WARNING:.*?\*/', '', raw_code, flags=re.DOTALL)
    # Remove address comments like /* 0x1012  1  OnInit */
    raw_code = re.sub(r'/\*\s*0x[\da-f]+\s+\d+\s+\w+\s*\*/', '', raw_code)

    # Generate variable declarations
    var_decls = generate_var_declarations(dat_types, pe)

    # Collect _ovl overlay variables and add declarations  
    ovl_addrs = set(re.findall(r'DAT_([\da-fA-F]+)_ovl', raw_code))
    for addr_hex in sorted(ovl_addrs):
        va = int(addr_hex, 16)
        raw = pe.read_bytes_at_va(va, 4)
        val = struct.unpack_from('<i', raw)[0] if raw else 0
        var_decls += f'\nint DAT_{addr_hex}_ovl = {val};'

    # Classify OneUnit variables: used with GetUnitInfo/SetUnitInfo
    oneunit_addrs = set()
    for m in re.finditer(r'GetUnitInfo\([^,]+,[^,]+,\s*&DAT_([\da-fA-F]+)\)', raw_code):
        oneunit_addrs.add(m.group(1))
    for m in re.finditer(r'SetUnitInfo\(\s*&DAT_([\da-fA-F]+)\)', raw_code):
        oneunit_addrs.add(m.group(1))
    for addr_hex in oneunit_addrs:
        # Replace long long declaration with OneUnit
        var_decls = var_decls.replace(
            f'long long DAT_{addr_hex} = 0;',
            f'OneUnit DAT_{addr_hex} = {{0}};')

    # UnitExCaps variables: used with GetUnitExCaps
    excaps_addrs = set()
    for m in re.finditer(r'GetUnitExCaps\([^,]+,\s*&DAT_([\da-fA-F]+)', raw_code):
        excaps_addrs.add(m.group(1))
    for addr_hex in excaps_addrs:
        var_decls = var_decls.replace(
            f'long long DAT_{addr_hex} = 0;',
            f'UnitExCaps DAT_{addr_hex} = {{0}};')

    # Generate stubs for FUN_ functions referenced but not defined
    used_funs = set(re.findall(r'\b(FUN_[\da-fA-F]+)\b', raw_code))
    defined_funs = set(re.findall(r'^\w[\w\s\*]*\b(FUN_[\da-fA-F]+)\s*\(', raw_code, re.MULTILINE))
    missing_funs = used_funs - defined_funs
    fun_stubs = ''
    for fn in sorted(missing_funs):
        fun_stubs += f'int {fn}() {{ return 0; }}\n'

    # Generate forward declarations for defined FUN_ functions to prevent
    # "conflicting types" when a function is called before its definition
    fwd_decls = ''
    for m in re.finditer(r'^(\w[\w\s\*]*\b(?:FUN_[\da-fA-F]+)\s*\([^)]*\))\s*$', raw_code, re.MULTILINE):
        sig = m.group(1).strip()
        # Remove __cdecl since we already handle calling conventions
        sig = re.sub(r'\b__cdecl\b\s*', '', sig)
        fwd_decls += f'{sig};\n'

    # Build output file
    header = '#include "game_api.h"\n#include <stdlib.h>\n#include <stdio.h>\n#include <math.h>\n\n'
    header += '/* Global variables */\n'
    if re.search(r'\bptr_var\b', raw_code):
        header += 'int ptr_var = 0;\n'
    if re.search(r'\bthis_ptr\b', raw_code):
        header += 'int this_ptr = 0;\n'
    header += var_decls + '\n'
    if fun_stubs:
        header += '\n/* Stubs for missing internal functions */\n'
        header += fun_stubs + '\n'
    if fwd_decls:
        header += '\n/* Forward declarations */\n'
        header += fwd_decls + '\n'

    # DllMain
    dllmain = '''
BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}
'''

    output = header + raw_code + '\n' + dllmain

    # Write output
    os.makedirs(os.path.dirname(out_path) or '.', exist_ok=True)
    with open(out_path, 'w') as f:
        f.write(output)

    print(f"OK: {out_path} ({len(dat_types)} data refs)")
