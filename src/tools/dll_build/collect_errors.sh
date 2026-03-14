#!/bin/bash
# Collect compile errors from all DLLs
SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
SRC_ROOT="$(cd "$SCRIPT_DIR/../.." && pwd)"
DECOMP_DIR="$SRC_ROOT/decompiled"
GAME_DIR="${GAME_DIR:-$HOME/Documents/cossacks}"
CC=x86_64-w64-mingw32-gcc
BUILD_DIR="/tmp/dll_build_x64"

TOTAL=0; COMPILE_OK=0; COMPILE_FAIL=0; LINK_FAIL=0; SKIP=0; LINK_OK=0

> /tmp/compile_errors.log

find "$DECOMP_DIR" -name "*.c" -not -path "*/ai/*" -not -path "*/unrar/*" | sort | while IFS= read -r decomp_c; do
    rel="${decomp_c#$DECOMP_DIR/}"
    dir="$(dirname "$rel")"
    base="$(basename "$rel" .c)"
    orig_dll="$GAME_DIR/$dir/$base.dll"
    
    if [ ! -f "$orig_dll" ]; then
        continue
    fi

    out_c="$BUILD_DIR/$dir/$base.c"
    out_o="$BUILD_DIR/$dir/$base.o"
    mkdir -p "$BUILD_DIR/$dir"

    python3 "$SCRIPT_DIR/transform_dll.py" "$decomp_c" "$orig_dll" "$out_c" 2>/dev/null
    
    errs=$($CC -w -I"$SCRIPT_DIR" -c "$out_c" -o "$out_o" 2>&1)
    if [ $? -ne 0 ]; then
        echo "=== COMPILE FAIL: $rel ===" >> /tmp/compile_errors.log
        echo "$errs" >> /tmp/compile_errors.log
    else
        errs=$($CC -shared -L"$SCRIPT_DIR" -ldmcr -o /dev/null "$out_o" 2>&1)
        if [ $? -ne 0 ]; then
            echo "=== LINK FAIL: $rel ===" >> /tmp/compile_errors.log  
            echo "$errs" >> /tmp/compile_errors.log
        fi
    fi
done

echo "Done. Errors in /tmp/compile_errors.log"
wc -l /tmp/compile_errors.log
