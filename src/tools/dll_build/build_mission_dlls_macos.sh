#!/bin/bash
# build_mission_dlls_macos.sh - Transform and compile all mission DLLs as macOS bundles (arm64)
#
# Usage: bash build_mission_dlls_macos.sh
#
# Reads decompiled .c files from ../../decompiled/missions/
# Reads original .dll binaries from $GAME_DIR/missions/
# Produces .dylib bundles in ../../dist/macOS-arm64/missions/
# Requires dmcr built at ../../dist/macOS-arm64/dmcr

set +e

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
SRC_ROOT="$(cd "$SCRIPT_DIR/../.." && pwd)"
DECOMP_DIR="$SRC_ROOT/decompiled"
GAME_DIR="${GAME_DIR:-$HOME/Documents/cossacks}"
DIST_DIR="$SRC_ROOT/dist/macOS-arm64"
BUILD_DIR="$SRC_ROOT/transformed"
DMCR="$DIST_DIR/dmcr"

CC=cc
CFLAGS="-std=gnu89 -w -Wno-int-conversion -Wno-incompatible-pointer-types"
CFLAGS="$CFLAGS -Wno-implicit-function-declaration -I$SCRIPT_DIR -I$SRC_ROOT/platform"
LDFLAGS="-bundle -bundle_loader $DMCR"

TOTAL=0
OK=0
FAIL=0
SKIP=0

if [ ! -f "$DMCR" ]; then
    echo "ERROR: dmcr not found at $DMCR"
    exit 1
fi

# Process each decompiled .c file (excluding ai/ and unrar/)
find "$DECOMP_DIR" -name "*.c" -not -path "*/ai/*" -not -path "*/unrar/*" -not -path "*/usermissions/*" | sort | while read decomp_c; do
    # Get relative path: missions/Poland/Misspo01/Mission.c
    rel="${decomp_c#$DECOMP_DIR/}"
    dir="$(dirname "$rel")"
    base="$(basename "$rel" .c)"

    # Find corresponding original DLL
    orig_dll="$GAME_DIR/$dir/$base.dll"
    if [ ! -f "$orig_dll" ]; then
        SKIP=$((SKIP + 1))
        continue
    fi

    TOTAL=$((TOTAL + 1))

    # Output paths
    out_c="$BUILD_DIR/$dir/$base.c"
    out_dylib="$DIST_DIR/$dir/$base.dylib"

    mkdir -p "$BUILD_DIR/$dir" "$(dirname "$out_dylib")"

    # Transform
    if ! python3 "$SCRIPT_DIR/transform_dll.py" "$decomp_c" "$orig_dll" "$out_c" 2>/dev/null; then
        echo "FAIL transform: $rel"
        FAIL=$((FAIL + 1))
        continue
    fi

    # Fix argument counts (Ghidra sometimes omits/adds arguments)
    python3 "$SCRIPT_DIR/fix_arg_counts.py" --file "$out_c" 2>/dev/null

    # Compile + link in one step
    if ! $CC $CFLAGS $LDFLAGS -o "$out_dylib" "$out_c" 2>/dev/null; then
        echo "FAIL compile: $rel"
        FAIL=$((FAIL + 1))
        continue
    fi

    echo "OK: $out_dylib"
    OK=$((OK + 1))
done

echo ""
echo "=== macOS Mission DLL Build Summary ==="
echo "Total: $TOTAL  OK: $OK  Fail: $FAIL  Skip: $SKIP"
