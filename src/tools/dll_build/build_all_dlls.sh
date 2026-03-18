#!/bin/bash
# build_all_dlls.sh - Transform and compile all decompiled DLLs for x64
#
# Usage: bash build_all_dlls.sh
#
# Reads decompiled .c files from ../../decompiled/
# Reads original .dll binaries from $GAME_DIR
# Produces x64 DLLs in ../../dist/Windows-x64/

set -e

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
SRC_ROOT="$(cd "$SCRIPT_DIR/../.." && pwd)"
DECOMP_DIR="$SRC_ROOT/decompiled"
GAME_DIR="${GAME_DIR:-$HOME/Documents/cossacks}"
DIST_DIR="$SRC_ROOT/dist/Windows-x64"
BUILD_DIR="$SRC_ROOT/transformed"

CC=x86_64-w64-mingw32-gcc
CFLAGS="-std=gnu89 -w -Wno-int-conversion -Wno-incompatible-pointer-types -Wno-implicit-function-declaration -I$SCRIPT_DIR"
LDFLAGS="-shared"
LDLIBS="-L$SCRIPT_DIR -ldmcr -lm"

TOTAL=0
OK=0
FAIL=0
SKIP=0

mkdir -p "$BUILD_DIR"

# Process each decompiled .c file
find "$DECOMP_DIR" -name "*.c" -not -path "*/ai/*" -not -path "*/unrar/*" | sort | while read decomp_c; do
    # Get relative path: missions/Poland/Misspo01/Mission.c
    rel="${decomp_c#$DECOMP_DIR/}"
    dir="$(dirname "$rel")"
    base="$(basename "$rel" .c)"

    # Find corresponding original DLL
    orig_dll="$GAME_DIR/$dir/$base.dll"
    if [ ! -f "$orig_dll" ]; then
        echo "SKIP: $rel (no original DLL)"
        SKIP=$((SKIP + 1))
        continue
    fi

    TOTAL=$((TOTAL + 1))

    # Output paths
    out_c="$BUILD_DIR/$dir/$base.c"
    out_o="$BUILD_DIR/$dir/$base.o"
    out_dll="$DIST_DIR/$dir/$base.dll"

    mkdir -p "$BUILD_DIR/$dir" "$(dirname "$out_dll")"

    # Transform
    if ! python3 "$SCRIPT_DIR/transform_dll.py" "$decomp_c" "$orig_dll" "$out_c" 2>/dev/null; then
        echo "FAIL transform: $rel"
        FAIL=$((FAIL + 1))
        continue
    fi

    # Fix argument counts (Ghidra sometimes omits/adds arguments)
    python3 "$SCRIPT_DIR/fix_arg_counts.py" --file "$out_c" 2>/dev/null

    # Compile
    if ! $CC $CFLAGS -c "$out_c" -o "$out_o" 2>/dev/null; then
        echo "FAIL compile: $rel"
        FAIL=$((FAIL + 1))
        continue
    fi

    # Link
    if ! $CC $LDFLAGS -o "$out_dll" "$out_o" $LDLIBS 2>/dev/null; then
        echo "FAIL link: $rel"
        FAIL=$((FAIL + 1))
        continue
    fi

    echo "OK: $out_dll"
    OK=$((OK + 1))
done

echo ""
echo "=== Build Summary ==="
echo "Total: $TOTAL  OK: $OK  Fail: $FAIL  Skip: $SKIP"
