# coding: utf-8
"""Update logic2_results.csv.

Run this file when you want to refresh the logic2 CSV results.

Example from the project root:
    python "Trial_Final\\logic2\\update_csv.py"
"""

from __future__ import annotations

import subprocess
import sys
from pathlib import Path


SCRIPT_DIR = Path(__file__).resolve().parent
POWERSHELL_RUNNER = SCRIPT_DIR / "run_logic2.ps1"


def main() -> int:
    if not POWERSHELL_RUNNER.is_file():
        print(f"Could not find {POWERSHELL_RUNNER}")
        return 1

    command = [
        "powershell.exe",
        "-NoProfile",
        "-ExecutionPolicy",
        "Bypass",
        "-File",
        str(POWERSHELL_RUNNER),
    ]
    completed = subprocess.run(command)
    return completed.returncode


if __name__ == "__main__":
    sys.exit(main())
