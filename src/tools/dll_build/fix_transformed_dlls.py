#!/usr/bin/env python3
"""
Fix known issues in transformed DLL source files:
1. AI DLLs: sprintf with format string but missing args (Ghidra artifact)
   - Pattern: sprintf(&DAT_buf, &DAT_fmt) where fmt contains %s%s
   - Fix: replace with buf[0] = '\0' (return empty string)
2. Mission DLLs: long long vars passed to ShowPageParam (variadic %d mismatch)
   - Pattern: ShowPageParam("...", DAT_xxx, ...) where DAT_xxx is long long
   - Fix: cast to (int) for each DAT_ arg
3. Mission DLLs: pointer truncation (int)local_x → (intptr_t)local_x
   - Pattern: *(int *)((int)local_xxx + offset)
   - Fix: *(int *)((intptr_t)local_xxx + offset)
"""
import os
import re
import sys
import glob


def fix_ai_sprintf(filepath):
    """Fix sprintf(&buf, &fmt) with no additional args in AI DLLs."""
    with open(filepath, 'r') as f:
        content = f.read()
    
    original = content
    
    # Pattern: sprintf(&DAT_xxx, &DAT_yyy); where there are ONLY 2 args
    # This is the broken pattern from Ghidra where format string has %s%s but no args
    # We replace with: DAT_xxx[0] = '\0';
    pattern = r'sprintf\(&(DAT_[0-9a-fA-F]+),&(DAT_[0-9a-fA-F]+)\);'
    
    def replace_sprintf(m):
        buf_name = m.group(1)
        return f'{buf_name}[0] = \'\\0\';  /* fixed: sprintf had format %s%s but missing args */'
    
    content = re.sub(pattern, replace_sprintf, content)
    
    if content != original:
        with open(filepath, 'w') as f:
            f.write(content)
        return True
    return False


def get_long_long_vars(content):
    """Get set of all DAT_ variable names declared as long long."""
    ll_vars = set()
    for m in re.finditer(r'^long long (DAT_[0-9a-fA-F]+)\b', content, re.MULTILINE):
        ll_vars.add(m.group(1))
    return ll_vars


def fix_showpageparam(filepath):
    """Cast long long DAT_ variables to (int) when passed to ShowPageParam."""
    with open(filepath, 'r') as f:
        content = f.read()
    
    original = content
    ll_vars = get_long_long_vars(content)
    
    if not ll_vars:
        return False
    
    # Find ShowPageParam calls and cast long long DAT_ args to (int)
    # Pattern: ShowPageParam("...", arg1, arg2, ...) 
    # We need to handle multi-line calls too
    
    def fix_showpageparam_call(m):
        full_match = m.group(0)
        # Parse the args after the first string arg
        # Find the opening paren after ShowPageParam
        idx = full_match.index('(')
        prefix = full_match[:idx+1]
        rest = full_match[idx+1:]
        
        # Find the first arg (string literal)
        # Could be "#PAGE0" or similar
        parts = []
        depth = 0
        current = ''
        in_string = False
        i = 0
        while i < len(rest):
            ch = rest[i]
            if ch == '"' and (i == 0 or rest[i-1] != '\\'):
                in_string = not in_string
            if not in_string:
                if ch == '(':
                    depth += 1
                elif ch == ')':
                    if depth == 0:
                        parts.append(current)
                        break
                    depth -= 1
                elif ch == ',' and depth == 0:
                    parts.append(current)
                    current = ''
                    i += 1
                    continue
            current += ch
            i += 1
        
        if len(parts) < 2:
            return full_match
        
        # First part is the format string, keep as-is
        new_parts = [parts[0]]
        changed = False
        for p in parts[1:]:
            stripped = p.strip()
            # Check if this arg is a bare long long DAT_ variable or expression with one
            # Cast any standalone DAT_ references that are long long
            new_p = p
            for var in ll_vars:
                # Match standalone variable name (not inside &DAT_ or as part of a string)
                # Handle: DAT_xxx, DAT_xxx * expr, expr * DAT_xxx, expr + DAT_xxx etc.
                # But NOT &DAT_xxx (that's an address, different)
                var_pattern = r'(?<![&\w])(' + re.escape(var) + r')(?!\w)'
                if re.search(var_pattern, new_p):
                    # Wrap the entire expression in (int)(...)
                    new_p = ' (int)(' + new_p.strip() + ')'
                    changed = True
                    break
            new_parts.append(new_p)
        
        if not changed:
            return full_match
        
        return prefix + ','.join(new_parts) + ')'
    
    # Match ShowPageParam calls (possibly multi-line)
    content = re.sub(
        r'ShowPageParam\([^;]*\)',
        fix_showpageparam_call,
        content,
        flags=re.DOTALL
    )
    
    if content != original:
        with open(filepath, 'w') as f:
            f.write(content)
        return True
    return False


def fix_pointer_truncation(filepath):
    """Fix (int)local_xxx pointer truncation → (intptr_t)local_xxx."""
    with open(filepath, 'r') as f:
        content = f.read()
    
    original = content
    
    # Pattern: (int)local_xxx where local_xxx is a local variable used as pointer
    # Specifically: *(int *)((int)local_xxx + offset)
    # Replace with: *(int *)((intptr_t)local_xxx + offset)
    content = re.sub(
        r'\(int\)(local_[0-9a-fA-F_]+)',
        r'(intptr_t)\1',
        content
    )
    
    # Also fix (int)pvVar patterns
    content = re.sub(
        r'\(int\)(pvVar\d+)',
        r'(intptr_t)\1',
        content
    )
    
    # Also add #include <stdint.h> if intptr_t is used and not included
    if 'intptr_t' in content and 'stdint.h' not in content:
        # Add after the last #include
        content = re.sub(
            r'(#include\s+<[^>]+>\s*\n)(?!#include)',
            r'\1#include <stdint.h>\n',
            content,
            count=1
        )
    
    if content != original:
        with open(filepath, 'w') as f:
            f.write(content)
        return True
    return False


def fix_hex_resource_constants(filepath):
    """Fix hex constants like 0xfffff830 that should be negative ints.
    
    In original 32-bit code, 0xfffff830 = -2000 as signed int.
    On 64-bit, 0xfffff830 is unsigned int (4294965296).
    When passed to AddResource(byte, byte, int), it should be -2000.
    Cast these to (int) to ensure correct sign extension.
    """
    with open(filepath, 'r') as f:
        content = f.read()
    
    original = content
    
    # Pattern: AddResource(nat, id, 0xffff????) where the hex value is > 0x7FFFFFFF
    # These are negative amounts meant as signed 32-bit ints
    def fix_addresource_hex(m):
        prefix = m.group(1)
        hex_val = m.group(2)
        suffix = m.group(3)
        val = int(hex_val, 16)
        if val > 0x7FFFFFFF and val <= 0xFFFFFFFF:
            # Convert to signed 32-bit
            signed_val = val - 0x100000000
            return f'{prefix}{signed_val}{suffix}'
        return m.group(0)
    
    content = re.sub(
        r'(AddResource\([^,]+,[^,]+,)(0x[fF][0-9a-fA-F]+)(\))',
        fix_addresource_hex,
        content
    )
    
    if content != original:
        with open(filepath, 'w') as f:
            f.write(content)
        return True
    return False


def main():
    base_dir = os.path.dirname(os.path.abspath(__file__))
    src_dir = os.path.dirname(os.path.dirname(base_dir))
    
    # Fix AI DLLs
    ai_dir = os.path.join(src_dir, 'transformed', 'ai')
    ai_fixed = 0
    if os.path.isdir(ai_dir):
        for f in sorted(glob.glob(os.path.join(ai_dir, '*.c'))):
            name = os.path.basename(f)
            if fix_ai_sprintf(f):
                print(f"  [AI] Fixed sprintf in {name}")
                ai_fixed += 1
    print(f"AI DLLs: fixed sprintf in {ai_fixed} files")
    
    # Fix mission DLLs
    missions_dir = os.path.join(src_dir, 'transformed', 'missions')
    spp_fixed = 0
    ptr_fixed = 0
    hex_fixed = 0
    if os.path.isdir(missions_dir):
        for root, dirs, files in os.walk(missions_dir):
            for fname in sorted(files):
                if not fname.endswith('.c'):
                    continue
                fpath = os.path.join(root, fname)
                relpath = os.path.relpath(fpath, missions_dir)
                
                if fix_showpageparam(fpath):
                    print(f"  [Mission] Fixed ShowPageParam in {relpath}")
                    spp_fixed += 1
                
                if fix_pointer_truncation(fpath):
                    print(f"  [Mission] Fixed pointer truncation in {relpath}")
                    ptr_fixed += 1
                
                if fix_hex_resource_constants(fpath):
                    print(f"  [Mission] Fixed hex resource constants in {relpath}")
                    hex_fixed += 1
    
    print(f"Mission DLLs: fixed ShowPageParam in {spp_fixed} files")
    print(f"Mission DLLs: fixed pointer truncation in {ptr_fixed} files")
    print(f"Mission DLLs: fixed hex resource constants in {hex_fixed} files")


if __name__ == '__main__':
    main()
