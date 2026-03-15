#!/bin/bash
# build_ai_dlls.sh - Transform and compile all AI DLLs for x64
#
# Usage: bash build_ai_dlls.sh
#
# Reads decompiled .c files from ../../decompiled/ai/
# Reads original .dll binaries from $GAME_DIR/ai/
# Produces x64 DLLs in ../../dist/Windows-x64/ai/

set +e  # Don't exit on first error — continue building all DLLs

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
SRC_ROOT="$(cd "$SCRIPT_DIR/../.." && pwd)"
DECOMP_DIR="$SRC_ROOT/decompiled/ai"
GAME_DIR="${GAME_DIR:-$HOME/Documents/cossacks}"
DIST_DIR="$SRC_ROOT/dist/Windows-x64/ai"
BUILD_DIR="$SRC_ROOT/transformed/ai"

CC=x86_64-w64-mingw32-gcc
CFLAGS="-std=gnu89 -w -I$SCRIPT_DIR"
LDFLAGS="-shared"
LDLIBS="-L$SCRIPT_DIR -ldmcr"

TOTAL=0
OK=0
FAIL=0

mkdir -p "$BUILD_DIR" "$DIST_DIR"

for decomp_c in "$DECOMP_DIR"/*.c; do
    base="$(basename "$decomp_c" .c)"
    orig_dll="$GAME_DIR/ai/$base.dll"

    if [ ! -f "$orig_dll" ]; then
        echo "SKIP: $base (no original DLL at $orig_dll)"
        continue
    fi

    TOTAL=$((TOTAL + 1))
    out_c="$BUILD_DIR/$base.c"
    out_dll="$DIST_DIR/$base.dll"

    # Transform
    if ! python3 "$SCRIPT_DIR/transform_ai_dll.py" "$decomp_c" "$orig_dll" "$out_c" 2>&1; then
        echo "FAIL transform: $base"
        FAIL=$((FAIL + 1))
        continue
    fi

    # Compile + Link
    if ! $CC $CFLAGS $LDFLAGS -o "$out_dll" "$out_c" $LDLIBS 2>&1; then
        echo "FAIL compile: $base"
        FAIL=$((FAIL + 1))
        continue
    fi

    echo "OK: $out_dll"
    OK=$((OK + 1))
done

echo ""
echo "=== AI DLL Build Summary ==="
echo "Total: $TOTAL  OK: $OK  Fail: $FAIL"
