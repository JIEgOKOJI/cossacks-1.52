#!/bin/bash
# Decompile all game DLLs using Ghidra headless mode
# Preserves directory structure relative to game root

set -e

GAME_DIR="/Users/ildarkarimov/Documents/cossacks"
PROJECT_DIR="/Users/ildarkarimov/Documents/cossacks-1.52/src"
OUT_DIR="$PROJECT_DIR/decompiled"
GHIDRA="/opt/homebrew/Cellar/ghidra/12.0.4/libexec/support/analyzeHeadless"
SCRIPT_DIR="$PROJECT_DIR/tools"
GHIDRA_PROJ="/tmp/ghidra_decompile_proj"

export JAVA_HOME="/opt/homebrew/Cellar/openjdk@21/21.0.10/libexec/openjdk.jdk/Contents/Home"

# Clean old project
rm -rf "$GHIDRA_PROJ"
mkdir -p "$GHIDRA_PROJ"

# Find all DLLs (excluding SDL2, IChat, IntExplorer, botva2, etc - only game logic DLLs)
find "$GAME_DIR" -name "*.dll" | while read -r dll; do
    # Get relative path from game dir
    rel="${dll#$GAME_DIR/}"
    
    # Skip non-game DLLs
    case "$rel" in
        SDL2*.dll|IChat*.dll|IntExplorer*.dll|botva2.dll|InnoCallback.dll|cew.dll|gw_server.dll|minmm.dll)
            echo "SKIP: $rel (system/third-party)"
            continue
            ;;
    esac
    
    # Create output directory preserving structure
    out_subdir="$OUT_DIR/$(dirname "$rel")"
    mkdir -p "$out_subdir"
    
    # Output filename: replace .dll with .c
    base=$(basename "$dll" .dll)
    out_file="$out_subdir/${base}.c"
    
    if [ -f "$out_file" ]; then
        echo "SKIP: $rel (already decompiled)"
        continue
    fi
    
    echo "DECOMPILE: $rel -> $out_file"
    
    # Set output dir for the Ghidra script
    export GHIDRA_OUT_DIR="$out_subdir"
    
    # Run Ghidra headless
    rm -rf "$GHIDRA_PROJ/tmp_dll"
    "$GHIDRA" "$GHIDRA_PROJ" tmp_dll \
        -import "$dll" \
        -overwrite \
        -postScript DecompileDLL.java \
        -scriptPath "$SCRIPT_DIR" \
        -deleteProject \
        2>&1 | grep -E "SCRIPT:|ERROR|Decompiled" || true
    
    # Rename the output if needed (Ghidra script names it *_decompiled.c)
    decompiled_file="$out_subdir/${base}_decompiled.c"
    if [ -f "$decompiled_file" ]; then
        mv "$decompiled_file" "$out_file"
        echo "  OK: $(wc -l < "$out_file") lines"
    else
        echo "  WARN: no output for $rel"
    fi
done

echo ""
echo "=== DONE ==="
echo "Decompiled files in: $OUT_DIR"
find "$OUT_DIR" -name "*.c" | wc -l | xargs echo "Total files:"
