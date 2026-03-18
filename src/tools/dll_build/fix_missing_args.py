#!/usr/bin/env python3
"""Fix Ghidra decompilation artifacts: function calls with missing arguments.

When Ghidra couldn't determine all arguments for a function call, it omitted them.
On x86 cdecl this worked (garbage stack values), but with proper prototypes on ARM64
the compiler rejects calls with wrong argument counts.

This script adds default (0/NULL) values for missing arguments.
"""
import re
import sys
import glob
import os

# Fixes: (regex_pattern, replacement)
# Each entry matches the specific bad call and adds missing args as 0
FIXES = [
    # CreateObject0: needs 6 args (GAMEOBJ*, GAMEOBJ*, GAMEOBJ*, byte, GAMEOBJ*, byte)
    # Pattern: CreateObject0 with only 2 args — add 4 zeros
    (r'CreateObject0\s*\(([^,]+),\s*([^,)]+)\)\s*;',
     r'CreateObject0(\1, \2, 0, 0, 0, 0);'),
    # CreateObject0 with 4 args — add 2 zeros
    (r'CreateObject0\s*\(([^,]+),\s*([^,]+),\s*([^,]+),\s*([^,)]+)\)\s*;',
     r'CreateObject0(\1, \2, \3, \4, 0, 0);'),
    # CreateObject0 with 5 args — add 1 zero
    (r'CreateObject0\s*\(([^,]+),\s*([^,]+),\s*([^,]+),\s*([^,]+),\s*([^,)]+)\)\s*;',
     r'CreateObject0(\1, \2, \3, \4, \5, 0);'),

    # AttackEnemyInZone: needs 3 args (GAMEOBJ*, GAMEOBJ*, byte)
    # 2 args → add 0
    (r'AttackEnemyInZone\s*\(([^,]+),\s*([^,)]+)\)\s*;',
     r'AttackEnemyInZone(\1, \2, 0);'),

    # AttackZoneByArtillery: needs 3 args (GAMEOBJ*, GAMEOBJ*, byte)
    # 2 args → add 0
    (r'AttackZoneByArtillery\s*\(([^,]+),\s*([^,)]+)\)\s*;',
     r'AttackZoneByArtillery(\1, \2, 0);'),

    # SelectUnits1: needs 3 args (byte, GAMEOBJ*, BOOL)
    # 2 args → add 0
    (r'SelectUnits1\s*\(([^,]+),\s*([^,)]+)\)\s*;',
     r'SelectUnits1(\1, \2, 0);'),

    # SelectUnits: needs 2 args (GAMEOBJ*, BOOL)
    # 1 arg → add 0
    (r'SelectUnits\s*\(([^,)]+)\)\s*;',
     r'SelectUnits(\1, 0);'),

    # GetDiff: needs 1 arg (byte NI)
    # 0 args → add 0
    (r'GetDiff\s*\(\)\s*',
     r'GetDiff(0)'),

    # RunTimer: needs 2 args (byte ID, int Long)
    # 1 arg → add 0
    (r'RunTimer\s*\(([^,)]+)\)\s*;',
     r'RunTimer(\1, 0);'),

    # SetTrigg: needs 2 args (byte ID, byte Val)
    # 1 arg → add 0
    (r'SetTrigg\s*\(([^,)]+)\)\s*;',
     r'SetTrigg(\1, 0);'),

    # Trigg: needs 1 arg (byte ID)
    # 0 args → add 0
    (r'Trigg\s*\(\)',
     r'Trigg(0)'),

    # SetLightSpot: needs 3 args (GAMEOBJ*, int, byte)
    # 2 args → add 0
    (r'SetLightSpot\s*\(([^,]+),\s*([^,)]+)\)\s*;',
     r'SetLightSpot(\1, \2, 0);'),

    # SetUnitInfo: needs 1 arg (OneUnit*)
    # 0 args → add 0
    (r'SetUnitInfo\s*\(\)\s*;',
     r'SetUnitInfo(0);'),

    # GetTotalAmount0: needs 1 arg (GAMEOBJ*)
    # 0 args → add 0
    (r'GetTotalAmount0\s*\(\)',
     r'GetTotalAmount0(0)'),

    # SelSendAndKill: needs 4 args
    # 0 args → add 4 zeros
    (r'SelSendAndKill\s*\(\)\s*;',
     r'SelSendAndKill(0, 0, 0, 0);'),

    # SelSendTo: needs 4 args
    # 0 args → add 4 zeros
    (r'SelSendTo\s*\(\)\s*;',
     r'SelSendTo(0, 0, 0, 0);'),
]

def fix_file(filepath):
    with open(filepath, 'r') as f:
        content = f.read()

    original = content
    for pattern, replacement in FIXES:
        content = re.sub(pattern, replacement, content)

    if content != original:
        with open(filepath, 'w') as f:
            f.write(content)
        return True
    return False

if __name__ == '__main__':
    src_root = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    transformed = os.path.join(src_root, 'transformed', 'missions')

    fixed = 0
    for filepath in sorted(glob.glob(os.path.join(transformed, '**', '*.c'), recursive=True)):
        if fix_file(filepath):
            print(f'Fixed: {os.path.relpath(filepath, src_root)}')
            fixed += 1

    print(f'\nTotal files fixed: {fixed}')
