#!/usr/bin/env bash
set -euo pipefail

if [[ $# -ne 1 ]]; then
    echo "Usage: $(basename "$0") <name>"
    echo "  Opens build/trace/tb_<name>_waves.vcd in GTKWave"
    exit 1
fi

NAME="$1"
VCD="build/trace/tb_${NAME}.vcd"

if [[ ! -f "$VCD" ]]; then
    echo "Error: '${VCD}' not found. Did you run the simulation first?"
    exit 1
fi

gtkwave "$VCD" &
