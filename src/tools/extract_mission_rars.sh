#!/bin/bash
# extract_mission_rars.sh - Extract all .rar archives in game data directory
#
# Cossacks uses unrar.dll on Windows to lazily extract .m3d map files from .rar
# archives at runtime. On macOS/Linux, we pre-extract them instead.
#
# Usage: bash extract_mission_rars.sh [game_data_dir]
#   game_data_dir defaults to the script's directory or current directory
#
# Requires: unrar (brew install unrar / apt install unrar)

set -e

GAME_DIR="${1:-.}"

if ! command -v unrar &>/dev/null; then
    echo "ERROR: 'unrar' not found. Install it:"
    echo "  macOS:  brew install unrar"
    echo "  Linux:  sudo apt install unrar"
    exit 1
fi

if [ ! -d "$GAME_DIR" ]; then
    echo "ERROR: Directory not found: $GAME_DIR"
    exit 1
fi

TOTAL=0
EXTRACTED=0
SKIPPED=0
FAILED=0

while IFS= read -r rar; do
    TOTAL=$((TOTAL + 1))
    dir=$(dirname "$rar")
    base=$(basename "$rar" .rar)

    # Check if content already extracted (m3d is the typical content)
    if [ -f "$dir/$base.m3d" ]; then
        SKIPPED=$((SKIPPED + 1))
        continue
    fi

    # Extract to same directory as the .rar file
    if unrar x -o- -inul "$rar" "$dir/" 2>/dev/null; then
        echo "Extracted: $rar"
        EXTRACTED=$((EXTRACTED + 1))
    else
        echo "FAIL: $rar"
        FAILED=$((FAILED + 1))
    fi
done < <(find "$GAME_DIR" -name "*.rar" -type f)

echo ""
echo "=== RAR Extraction Summary ==="
echo "Total: $TOTAL  Extracted: $EXTRACTED  Skipped (already exists): $SKIPPED  Failed: $FAILED"
