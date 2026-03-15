#!/bin/bash
# build_ai_dlls_macos.sh - Compile all AI DLLs as macOS bundles (arm64)
#
# Usage: bash build_ai_dlls_macos.sh
#
# Reads transformed .c files from ../../transformed/ai/
# Produces .dylib bundles in ../../dist/macOS-arm64/ai/
# Requires dmcr built at ../../dist/macOS-arm64/dmcr

set +e

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
SRC_ROOT="$(cd "$SCRIPT_DIR/../.." && pwd)"
BUILD_DIR="$SRC_ROOT/transformed/ai"
DIST_DIR="$SRC_ROOT/dist/macOS-arm64/ai"
DMCR="$SRC_ROOT/dist/macOS-arm64/dmcr"

CC=cc
# Clang 16+ promotes some warnings to errors; downgrade them back
CFLAGS="-std=gnu89 -w -Wno-int-conversion -Wno-incompatible-pointer-types"
CFLAGS="$CFLAGS -Wno-implicit-function-declaration -I$SCRIPT_DIR -I$SRC_ROOT/platform"
LDFLAGS="-bundle -bundle_loader $DMCR"

TOTAL=0
OK=0
FAIL=0

if [ ! -f "$DMCR" ]; then
    echo "ERROR: dmcr not found at $DMCR"
    exit 1
fi

mkdir -p "$DIST_DIR"

for src_c in "$BUILD_DIR"/*.c; do
    base="$(basename "$src_c" .c)"
    out_dylib="$DIST_DIR/$base.dylib"

    TOTAL=$((TOTAL + 1))

    if ! $CC $CFLAGS $LDFLAGS -o "$out_dylib" "$src_c" 2>&1; then
        echo "FAIL: $base"
        FAIL=$((FAIL + 1))
        continue
    fi

    echo "OK: $out_dylib"
    OK=$((OK + 1))
done

echo ""
echo "=== macOS AI DLL Build Summary ==="
echo "Total: $TOTAL  OK: $OK  Fail: $FAIL"
