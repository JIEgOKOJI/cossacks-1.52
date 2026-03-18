#!/usr/bin/env python3
"""Auto-fix missing function arguments in transformed mission DLLs.

Parses game_api.h to get expected parameter counts, then scans each .c file
for calls with fewer arguments and pads them with 0s.
Also removes extra arguments when there are too many.
"""
import re
import sys
import glob
import os

def parse_game_api(header_path):
    """Parse game_api.h and return {func_name: param_count}."""
    funcs = {}
    with open(header_path) as f:
        content = f.read()

    # Match declarations like: __declspec(dllimport) TYPE FuncName(params);
    for m in re.finditer(r'__declspec\(dllimport\)\s+\w[\w*\s]*?\b(\w+)\s*\(([^)]*)\)\s*;', content):
        name = m.group(1)
        params = m.group(2).strip()
        if params == '' or params == 'void':
            funcs[name] = 0
        elif params == '...':
            continue  # skip pure variadic
        else:
            # Count params (including ... for variadic)
            param_list = [p.strip() for p in params.split(',')]
            # Filter out '...' from count
            param_list = [p for p in param_list if p != '...']
            funcs[name] = len(param_list)
            if '...' in params:
                funcs[name] = -1  # variadic, skip

    return funcs

def count_args(args_str):
    """Count arguments in a call, handling nested parens/brackets and strings."""
    if not args_str.strip():
        return 0
    depth = 0
    count = 1
    in_string = False
    escape = False
    for ch in args_str:
        if escape:
            escape = False
            continue
        if ch == '\\' and in_string:
            escape = True
            continue
        if ch == '"':
            in_string = not in_string
            continue
        if in_string:
            continue
        if ch in '([':
            depth += 1
        elif ch in ')]':
            depth -= 1
        elif ch == ',' and depth == 0:
            count += 1
    return count

def find_call_end(text, start):
    """Find the end of a function call starting at '(' position.
    Returns the index after the closing ')' or -1 if not found."""
    depth = 0
    in_string = False
    escape = False
    i = start
    while i < len(text):
        ch = text[i]
        if escape:
            escape = False
            i += 1
            continue
        if ch == '\\' and in_string:
            escape = True
            i += 1
            continue
        if ch == '"':
            in_string = not in_string
            i += 1
            continue
        if in_string:
            i += 1
            continue
        if ch == '(':
            depth += 1
        elif ch == ')':
            depth -= 1
            if depth == 0:
                return i + 1
        i += 1
    return -1

def fix_file(filepath, funcs):
    """Fix function calls with wrong argument counts."""
    with open(filepath, 'r') as f:
        content = f.read()

    original = content
    changed = True
    iterations = 0

    while changed and iterations < 10:
        changed = False
        iterations += 1
        new_content = []
        i = 0

        while i < len(content):
            # Try to match a function call
            m = re.match(r'(\b(\w+)\s*)\(', content[i:])
            if m:
                func_name = m.group(2)
                if func_name in funcs and funcs[func_name] >= 0:
                    expected = funcs[func_name]
                    paren_start = i + m.start() + len(m.group(1))
                    call_end = find_call_end(content, paren_start)

                    if call_end > 0:
                        args_str = content[paren_start + 1:call_end - 1]
                        actual = count_args(args_str)

                        if actual < expected:
                            # Add missing 0 args
                            missing = expected - actual
                            if actual == 0:
                                pad = ','.join(['0'] * missing)
                            else:
                                pad = ',' + ','.join(['0'] * missing)
                            new_call = content[i:call_end - 1] + pad + ')'
                            new_content.append(new_call)
                            i = call_end
                            changed = True
                            continue
                        elif actual > expected and expected > 0:
                            # Remove extra args
                            # Split args and keep only expected number
                            args = []
                            depth = 0
                            in_str = False
                            esc = False
                            current = []
                            for ch in args_str:
                                if esc:
                                    esc = False
                                    current.append(ch)
                                    continue
                                if ch == '\\' and in_str:
                                    esc = True
                                    current.append(ch)
                                    continue
                                if ch == '"':
                                    in_str = not in_str
                                    current.append(ch)
                                    continue
                                if in_str:
                                    current.append(ch)
                                    continue
                                if ch in '([':
                                    depth += 1
                                    current.append(ch)
                                elif ch in ')]':
                                    depth -= 1
                                    current.append(ch)
                                elif ch == ',' and depth == 0:
                                    args.append(''.join(current))
                                    current = []
                                else:
                                    current.append(ch)
                            args.append(''.join(current))

                            if len(args) > expected:
                                trimmed = ','.join(args[:expected])
                                prefix = content[i:paren_start + 1]
                                new_call = prefix + trimmed + ')'
                                new_content.append(new_call)
                                i = call_end
                                changed = True
                                continue

            new_content.append(content[i])
            i += 1

        content = ''.join(new_content)

    if content != original:
        with open(filepath, 'w') as f:
            f.write(content)
        return True
    return False


if __name__ == '__main__':
    import argparse
    parser = argparse.ArgumentParser()
    parser.add_argument('--file', help='Fix a single file instead of all missions')
    args = parser.parse_args()

    src_root = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    header = os.path.join(src_root, 'tools', 'dll_build', 'game_api.h')

    funcs = parse_game_api(header)
    # Don't fix variadic functions
    funcs = {k: v for k, v in funcs.items() if v >= 0}

    # Exclude common C library / internal functions that happen to match
    exclude = {'return', 'if', 'while', 'for', 'switch', 'sizeof', 'printf',
               'sprintf', 'fprintf', 'memset', 'memcpy', 'malloc', 'free',
               'OnInit', 'ProcessScenary', 'DllMain'}
    for e in exclude:
        funcs.pop(e, None)

    if args.file:
        # Single file mode (used by build scripts)
        if fix_file(args.file, funcs):
            print(f'Fixed: {args.file}')
    else:
        # Batch mode: fix all missions and AI
        print(f"Loaded {len(funcs)} function prototypes from game_api.h")
        for name, count in sorted(funcs.items()):
            print(f"  {name}: {count} args")

        fixed = 0
        for d in ['transformed/missions', 'transformed/ai']:
            search_dir = os.path.join(src_root, d)
            for filepath in sorted(glob.glob(os.path.join(search_dir, '**', '*.c'), recursive=True)):
                if fix_file(filepath, funcs):
                    print(f'Fixed: {os.path.relpath(filepath, src_root)}')
                    fixed += 1

        print(f'\nTotal files fixed: {fixed}')
