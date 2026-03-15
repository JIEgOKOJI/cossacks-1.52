#!/usr/bin/env python3
"""
transform_ai_dll.py - Transform Ghidra-decompiled AI DLL .c files into compilable code.

AI DLLs differ from Mission DLLs:
- They export InitAI() and ProcessAI() (not OnInit/ProcessScenary)
- They load game API via GetModuleHandle + GetProcAddress into a function pointer table
- They have wrapper functions that call API through those pointers

This script:
1. Extracts the DAT_ → API function mapping from the init function
2. Replaces (*DAT_xxx)(args) with direct API calls
3. Replaces wrapper FUN_ calls with direct API calls
4. Removes CRT boilerplate, GetProcAddress init, etc.
5. Produces clean C source linked against libdmcr.a

Usage:
    python3 transform_ai_dll.py <decompiled.c> <original.dll> <output.c>
"""

import sys
import re
import os

# Import shared utilities from transform_dll.py
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from transform_dll import (
    PEData, resolve_string_refs, transform_chkesp,
    remove_stack_fill, split_into_functions
)


def extract_api_mapping(source, pe):
    """Extract DAT_addr → API_name mapping from the GetProcAddress init function.

    AI DLLs call FUN_xxx(s_ApiName_ADDR) which does GetProcAddress(hModule, "ApiName")
    and stores result in DAT_yyy. Pattern:
        _DAT_xxx = FUN_xxx(s_ApiName_ADDR);
    or: DAT_xxx = FUN_xxx(s_ApiName_ADDR);
    """
    mapping = {}
    for m in re.finditer(
        r'_?(DAT_[0-9a-f]+)\s*=\s*(?:FUN_[0-9a-f]+|GetProcAddress)\s*\('
        r'(?:[^,]+,\s*)?s_(\w+?)_100[0-9a-f]+\)',
        source
    ):
        dat = m.group(1)
        api_name = m.group(2)
        mapping[dat] = api_name
    return mapping


def find_wrapper_functions(blocks, api_mapping):
    """Find simple wrapper functions that just call a single API via function pointer.

    Pattern: void FUN_xxx(params) { (*DAT_yyy)(params); return; }
    Returns dict: wrapper_FUN_name → API_name
    """
    wrappers = {}
    for block in blocks:
        m = re.match(r'// Function: (FUN_\w+)', block)
        if not m:
            continue
        fn_name = m.group(1)
        # Find all DAT_ function pointer calls
        calls = re.findall(r'\(\*_?(DAT_[0-9a-f]+)\)', block)
        # Simple wrapper: exactly one DAT_ call, small function body
        if len(calls) == 1 and block.count('{') <= 2:
            dat = calls[0]
            if dat in api_mapping:
                wrappers[fn_name] = api_mapping[dat]
    return wrappers


def identify_ai_functions(blocks, api_mapping, wrapper_funs):
    """Classify function blocks into AI game logic vs infrastructure.

    Returns dict with 'initai', 'processai', 'helpers', skipping:
    - CRT boilerplate (entry, __amsg_exit, etc.)
    - GetProcAddress init function (FUN_100032b0-like)
    - GetProcAddress wrapper (FUN_10003250-like)
    - Simple API wrappers (already in wrapper_funs)
    """
    result = {'helpers': [], 'extra_exports': [], 'crt_replacements': {}}

    NAMED_EXPORTS = {'InitAI', 'ProcessAI', 'ProcessLandAI',
                     'ProcessMiddleSeaAI', 'OnInit'}

    CRT_SKIP = {
        'entry', '__chkesp', '__amsg_exit', '_malloc', '__exit',
        '__initterm', '__ioterm', '__CrtSetReportFile', '__calloc_dbg',
        '__FF_MSGBANNER', '_rand', 'FID_conflict:AtlIsValidAddress',
    }

    # Find entry point address to use as CRT boundary
    entry_addr = None
    for block in blocks:
        m = re.match(r'// Function: entry @ 0x([0-9a-fA-F]+)', block)
        if m:
            entry_addr = int(m.group(1), 16)
            break

    for block in blocks:
        if not block.startswith('// Function:'):
            continue
        m = re.match(r'// Function: (\S+) @', block)
        if not m:
            continue
        fname = m.group(1)

        # Named exports
        if fname == 'InitAI':
            result['initai'] = block
            continue
        if fname == 'ProcessAI':
            result['processai'] = block
            continue
        if fname in NAMED_EXPORTS:
            result['extra_exports'].append((fname, block))
            continue

        # Skip CRT
        if fname in CRT_SKIP or fname.startswith('__'):
            continue
        # Skip entry and everything after it
        if fname == 'entry':
            break

        # Skip API wrappers
        if fname in wrapper_funs:
            continue

        # Skip GetProcAddress init (contains GetModuleHandleA)
        if 'GetModuleHandleA' in block:
            continue
        # Skip GetProcAddress wrapper (contains GetProcAddress)
        if 'GetProcAddress' in block and 'MessageBoxA' in block:
            continue

        # Skip SEH/exception handlers
        if 'EHExceptionRecord' in block or '_CONTEXT' in block:
            continue

        # Skip CRT helpers leaked through (contain CRT patterns)
        if 'GetCommandLine' in block or 'GetVersion' in block:
            continue
        if '__amsg_exit' in block or 'DAT_1000d7f' in block:
            continue
        if 'UNRECOVERED_JUMPTABLE' in block:
            continue
        if '__fclose_lk' in block or '__CallSettingFrame' in block:
            continue
        if 'TIME_ZONE_INFORMATION' in block or 'DaylightDate' in block:
            continue
        # CRT sprintf/printf (pattern: 0x7fffffff buffer limit + 0x42 flag)
        if '0x7fffffff' in block and '0x42' in block:
            if fname.startswith('FUN_'):
                result['crt_replacements'][fname] = 'sprintf'
            continue
        # CRT FPU trap init (pattern: __cfltcvt, __fptrap, __fassign)
        if '__cfltcvt' in block or '__fptrap' in block or '__fassign' in block:
            continue
        if 'PTR___fptrap' in block:
            continue
        # CRT KERNEL32 helper (IsProcessorFeaturePresent check)
        if 'KERNEL32' in block or 'IsProcessorFeaturePresent' in block:
            continue
        # CRT: function that only calls other CRT-like functions
        if 'LoadLibraryA' in block and 'user32.dll' in block:
            continue

        # Game helper — but only if before CRT entry point
        if fname.startswith('FUN_'):
            addr_m = re.search(r'@ 0x([0-9a-fA-F]+)', block)
            if addr_m and entry_addr:
                fn_addr = int(addr_m.group(1), 16)
                if fn_addr >= entry_addr:
                    continue  # CRT code, skip
            result['helpers'].append((fname, block))

    return result


def replace_funcptr_calls(code, api_mapping):
    """Replace (*DAT_xxx)(args) with direct API calls.

    Patterns:
      (*DAT_1000c06c)(&var, n, 0x32, 0x32)  → TryUnit(&var, n, 0x32, 0x32)
      (*_DAT_1000bf60)(&var, "string")       → RegisterUnitType(&var, "string")
    Also handles: DAT_xxx != (code *)0x0 → 1 (always true after init)
    """
    # Build a single regex that matches any API DAT reference
    if not api_mapping:
        return code

    # Build lookup dict that handles both _DAT and DAT prefixes
    all_dats = {}
    for dat, api_name in api_mapping.items():
        all_dats[dat] = api_name
        all_dats['_' + dat] = api_name

    # Single-pass replacement for all patterns
    dat_pattern = '|'.join(re.escape(d) for d in sorted(all_dats.keys(), key=len, reverse=True))

    # Replace (*DAT_xxx)( → ApiName(
    code = re.sub(
        r'\(\*(' + dat_pattern + r')\)\s*\(',
        lambda m: all_dats[m.group(1)] + '(',
        code
    )

    # Replace DAT_xxx != (code *)0x0 → 1 and == → 0
    code = re.sub(
        r'(' + dat_pattern + r')\s*!=\s*\((code|void)\s*\*\)0x0',
        '1', code
    )
    code = re.sub(
        r'(' + dat_pattern + r')\s*==\s*\((code|void)\s*\*\)0x0',
        '0', code
    )

    # Handle local variable aliasing: localvar = DAT_xxx; (*localvar)(args)
    # Build reverse map: for each local var assigned from an API DAT, track the API name
    alias_map = {}  # local_var → api_name
    for m in re.finditer(r'(\w+)\s*=\s*_?(DAT_[0-9a-f]+)\s*;', code):
        local_var = m.group(1)
        dat = m.group(2)
        if dat in api_mapping:
            alias_map[local_var] = api_mapping[dat]

    if alias_map:
        # Replace (*localvar)(  with ApiName( for all aliases at once
        alias_pattern = '|'.join(re.escape(v) for v in alias_map.keys())
        code = re.sub(
            r'\(\*(' + alias_pattern + r')\)\s*\(',
            lambda m: alias_map[m.group(1)] + '(',
            code
        )
        # Replace localvar != (void/code *)0x0 → 1
        code = re.sub(
            r'(' + alias_pattern + r')\s*!=\s*\((void|code)\s*\*\)0x0',
            '1', code
        )

    # Remove assignment lines where local var was set from an API DAT
    # Process line by line to avoid regex backtracking on huge alternations
    api_dat_set = set(api_mapping.keys()) | set('_' + d for d in api_mapping.keys())
    cleaned_lines = []
    assign_re = re.compile(r'^\s*\w+\s*=\s*(_?DAT_[0-9a-f]+)\s*;$')
    for line in code.split('\n'):
        m = assign_re.match(line)
        if m and m.group(1) in api_dat_set:
            continue  # skip this assignment line
        cleaned_lines.append(line)
    code = '\n'.join(cleaned_lines)

    return code


def replace_wrapper_calls(code, wrapper_funs):
    """Replace calls to wrapper FUN_xxx with direct API calls.

    E.g. FUN_10003210(param) → AssignFormUnit(param)
    Also replaces thunk_ prefixed variants.
    """
    for fun_name, api_name in wrapper_funs.items():
        code = re.sub(
            r'\bthunk_' + re.escape(fun_name) + r'\b',
            api_name, code
        )
        code = re.sub(
            r'\b' + re.escape(fun_name) + r'\b',
            api_name, code
        )
    return code


def cleanup_ghidra_types(code):
    """Replace Ghidra-specific types with standard C types."""
    replacements = [
        (r'\bundefined8\b', 'long long'),
        (r'\bundefined4\b', 'int'),
        (r'\bundefined3\b', 'int'),
        (r'\bundefined2\b', 'short'),
        (r'\bundefined1\b', 'char'),
        (r'\bundefined\b', 'int'),
        (r'\buint\b', 'unsigned int'),
        (r'\bcode\s*\*', 'void *'),
        (r'\bulong\b', 'unsigned long'),
        (r'\bushort\b', 'unsigned short'),
        (r'\bbool\b', 'BOOL'),
        (r'\bint1\b', 'char'),
        (r'\bint3\b', 'int'),
        (r'\bint2\b', 'short'),
        (r'\bint8\b', 'long long'),
        (r'\blonglong\b', 'long long'),
        (r'\bulonglong\b', 'unsigned long long'),
    ]
    for pattern, repl in replacements:
        code = re.sub(pattern, repl, code)

    # Replace Ghidra pseudo-ops with C equivalents
    # CONCAT31(a, b) → ((a << 8) | b)  — 3-byte + 1-byte → 4-byte
    code = re.sub(r'\bCONCAT31\s*\(([^,]+),\s*([^)]+)\)',
                  r'((\1 << 8) | \2)', code)
    code = re.sub(r'\bCONCAT44\s*\(([^,]+),\s*([^)]+)\)',
                  r'(((long long)\1 << 32) | (unsigned int)\2)', code)
    # SBORROW4(a, b) → ((int)(a) < 0 && (int)(b) > 0) — overflow check approx
    code = re.sub(r'\bSBORROW4\s*\(([^,]+),\s*([^)]+)\)', r'0', code)
    # SUB41(a, b) → (int)((a) - (b))
    code = re.sub(r'\bSUB41\s*\(([^,]+),\s*([^)]+)\)',
                  r'((char)(\1))', code)

    return code


def collect_remaining_dats(code, api_mapping, pe):
    """Collect DAT_ references that are NOT API function pointers.
    These are AI state variables. Read initial values from PE binary.
    Also declares API DATs that are still referenced (used as values, not just calls)."""
    import struct
    api_dats = set(api_mapping.keys())
    all_dats = set(re.findall(r'_?(DAT_[0-9a-f]+)', code))
    state_dats = sorted(all_dats - api_dats, key=lambda x: int(x[4:], 16))

    lines = []
    for dat in state_dats:
        va = int(dat[4:], 16)
        # Check if used as &DAT_ (GAMEOBJ or string)
        used_with_amp = bool(re.search(r'&' + dat + r'\b', code))
        used_as_value = bool(re.search(r'[<>=!+\-*/]\s*_?' + dat + r'\b', code))
        assigned = bool(re.search(r'_?' + dat + r'\s*=', code))
        # Check if &DAT_ is used with pointer arithmetic (&DAT_ + expr)
        used_as_array_base = bool(re.search(r'&' + dat + r'\s*[+\-]', code))

        if used_with_amp and not assigned and not used_as_value:
            if used_as_array_base:
                # Array base: use char for byte-level pointer arithmetic
                lines.append(f'char {dat} = 0;')
            else:
                # Likely a GAMEOBJ passed by pointer
                lines.append(f'long long {dat} = 0;')
        else:
            # Regular int variable - read initial value from PE
            raw = pe.read_bytes_at_va(va, 4)
            if raw and len(raw) == 4:
                val = struct.unpack_from('<i', raw)[0]
                lines.append(f'int {dat} = {val};')
            else:
                lines.append(f'int {dat} = 0;')
    return '\n'.join(lines)


def main():
    if len(sys.argv) < 4:
        print(f"Usage: {sys.argv[0]} <decompiled.c> <original.dll> <output.c>")
        sys.exit(1)

    decomp_path = sys.argv[1]
    dll_path = sys.argv[2]
    out_path = sys.argv[3]

    with open(decomp_path, 'r') as f:
        source = f.read()
    pe = PEData(dll_path)

    # Step 1: Extract DAT_ → API mapping from init function
    api_mapping = extract_api_mapping(source, pe)
    print(f"  Found {len(api_mapping)} API function pointers")

    # Step 2: Split into function blocks
    blocks = split_into_functions(source)

    # Step 3: Find wrapper functions
    wrapper_funs = find_wrapper_functions(blocks, api_mapping)
    print(f"  Found {len(wrapper_funs)} wrapper functions")

    # Step 4: Identify game logic functions
    game = identify_ai_functions(blocks, api_mapping, wrapper_funs)
    if 'initai' not in game:
        print(f"ERROR: InitAI not found in {decomp_path}", file=sys.stderr)
        sys.exit(1)
    if 'processai' not in game:
        # Generate stub ProcessAI that calls ProcessLandAI if available
        has_land = any(n == 'ProcessLandAI' for n, _ in game['extra_exports'])
        if has_land:
            game['processai'] = 'void ProcessAI(void)\n{\n  ProcessLandAI();\n}\n'
            print("  ProcessAI not found — generated stub calling ProcessLandAI")
        else:
            print(f"ERROR: ProcessAI not found in {decomp_path}", file=sys.stderr)
            sys.exit(1)
    print(f"  Found {len(game['helpers'])} helper functions, " +
          f"{len(game['extra_exports'])} extra exports")

    # Step 4b: Reachability filter — only keep helpers called from exports
    export_code = game.get('initai', '') + game.get('processai', '')
    for _, block in game['extra_exports']:
        export_code += block
    helper_map = {name: block for name, block in game['helpers']}
    reachable = set()
    worklist = set(re.findall(r'\b(FUN_[0-9a-f]+)\b', export_code))
    while worklist:
        fn = worklist.pop()
        if fn in reachable or fn not in helper_map:
            continue
        reachable.add(fn)
        # Find FUN_ calls within this helper
        worklist.update(re.findall(r'\b(FUN_[0-9a-f]+)\b', helper_map[fn]))
    game['helpers'] = [(n, b) for n, b in game['helpers'] if n in reachable]
    if len(reachable) < len(helper_map):
        print(f"  Pruned {len(helper_map) - len(reachable)} unreachable helpers")

    # Step 5: Assemble game code
    code_parts = []
    for name, block in game['helpers']:
        code_parts.append(block)
    for name, block in game['extra_exports']:
        code_parts.append(block)
    code_parts.append(game['initai'])
    code_parts.append(game['processai'])
    raw_code = '\n'.join(code_parts)

    # Step 6: Apply transformations
    raw_code = resolve_string_refs(raw_code, pe)
    raw_code = replace_funcptr_calls(raw_code, api_mapping)
    raw_code = replace_wrapper_calls(raw_code, wrapper_funs)
    # Replace CRT functions with stdlib equivalents
    for crt_fun, stdlib_name in game.get('crt_replacements', {}).items():
        raw_code = re.sub(r'\b' + re.escape(crt_fun) + r'\b', stdlib_name, raw_code)
    raw_code = re.sub(r'\bthunk_FUN_', 'FUN_', raw_code)
    raw_code = transform_chkesp(raw_code)
    raw_code = re.sub(r'\b__chkesp\s*\(\)', '0', raw_code)
    raw_code = remove_stack_fill(raw_code)
    raw_code = cleanup_ghidra_types(raw_code)

    # Remove _DAT_ prefix (normalize to DAT_)
    raw_code = re.sub(r'\b_DAT_', 'DAT_', raw_code)

    # Remove SEH/exception artifacts
    raw_code = re.sub(r'^.*\bExceptionList\b.*$\n?', '',
                      raw_code, flags=re.MULTILINE)
    raw_code = re.sub(r'^.*&LAB_\w+.*$\n?', '',
                      raw_code, flags=re.MULTILINE)
    raw_code = re.sub(r'^.*0xcccccccc.*$\n?', '',
                      raw_code, flags=re.MULTILINE)
    raw_code = re.sub(r'^.*\bstack0x\w+\b.*$\n?', '',
                      raw_code, flags=re.MULTILINE)

    # Remove calling conventions
    raw_code = re.sub(r'\b__cdecl\b', '', raw_code)
    raw_code = re.sub(r'\b__thiscall\b', '', raw_code)
    raw_code = re.sub(r'\b__fastcall\b', '', raw_code)

    # Remove Ghidra function/comment headers
    raw_code = re.sub(r'^// Function:.*$\n?', '', raw_code, flags=re.MULTILINE)
    raw_code = re.sub(r'^/\* WARNING:.*?\*/$\n?', '', raw_code,
                      flags=re.MULTILINE | re.DOTALL)
    raw_code = re.sub(r'^\s*/\*\s*0x[0-9a-f]+\s+\d+\s+\w+\s*\*/$\n?', '',
                      raw_code, flags=re.MULTILINE)

    # Collect remaining DAT_ variables (AI state)
    var_decls = collect_remaining_dats(raw_code, api_mapping, pe)

    # Add __declspec(dllexport) to InitAI and ProcessAI
    raw_code = re.sub(
        r'^(void\s+InitAI\s*\()',
        r'__declspec(dllexport) \1',
        raw_code, flags=re.MULTILINE
    )
    raw_code = re.sub(
        r'^(void\s+ProcessAI\s*\()',
        r'__declspec(dllexport) \1',
        raw_code, flags=re.MULTILINE
    )
    # Add dllexport to extra exports (ProcessLandAI, ProcessMiddleSeaAI, OnInit)
    for ename, _ in game['extra_exports']:
        raw_code = re.sub(
            r'^(void\s+' + re.escape(ename) + r'\s*\()',
            r'__declspec(dllexport) \1',
            raw_code, flags=re.MULTILINE
        )

    # DllMain
    dllmain = '''
BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reason; (void)reserved;
    return TRUE;
}
'''

    # Write output
    with open(out_path, 'w') as f:
        f.write('/* Auto-generated from %s */\n' % os.path.basename(decomp_path))
        f.write('#include "game_api.h"\n\n')
        f.write('/* AI state variables */\n')
        f.write(var_decls)
        f.write('\n\n/* Forward declarations */\n')
        # Add forward declarations for named exports that may be called before definition
        for ename, _ in game['extra_exports']:
            if re.search(r'\b' + re.escape(ename) + r'\s*\(', raw_code):
                f.write(f'void {ename}(void);\n')
        # Collect all FUN_ still referenced
        funs_referenced = set(re.findall(r'\b(FUN_[0-9a-f]+)\b', raw_code))
        # Extract actual signatures from function definitions
        fun_sigs = {}
        for m in re.finditer(
            r'^(\w[\w\s\*]*?)\s+(FUN_[0-9a-f]+)\s*(\([^)]*\))',
            raw_code, re.MULTILINE
        ):
            ret_type, fname, params = m.group(1), m.group(2), m.group(3)
            fun_sigs[fname] = f'static {ret_type} {fname}{params};'
        for fn in sorted(funs_referenced):
            if fn in fun_sigs:
                f.write(fun_sigs[fn] + '\n')
            else:
                f.write(f'static void {fn}();\n')
        f.write('\n')
        f.write(raw_code)
        f.write(dllmain)

    print(f"  Written to {out_path}")


if __name__ == '__main__':
    main()






