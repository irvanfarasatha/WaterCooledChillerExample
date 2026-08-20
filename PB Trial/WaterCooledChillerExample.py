# coding: utf-8
"""Run WaterCooledChillerExample7 with OpenModelica.

This script uses the OpenModelica installation that Modex is using.  It does
not require JModelica, pymodelica, FMPy, or a pre-built FMU.
"""

import argparse
import os
import shutil
import subprocess
import sys
from pathlib import Path


DEFAULT_MODEL = "WaterCooledChillerExample.WaterCooledChillerExample7"
DEFAULT_OMC = Path(r"C:\Program Files\OpenModelica1.27.0-64bit\bin\omc.exe")
DEFAULT_START_TIME = 13046400.0
DEFAULT_STOP_TIME = 13651200.0
DEFAULT_INTERVALS = 500
DEFAULT_TOLERANCE = 1e-6


def modelica_path(path):
    return path.resolve().as_posix()


def find_omc(user_value):
    candidates = []

    if user_value:
        candidates.append(Path(user_value))

    env_value = os.environ.get("OMC_PATH")
    if env_value:
        candidates.append(Path(env_value))

    omc_on_path = shutil.which("omc")
    if omc_on_path:
        candidates.append(Path(omc_on_path))

    candidates.append(DEFAULT_OMC)

    for candidate in candidates:
        if candidate.is_file():
            return candidate

    searched = "\n".join("  - " + str(candidate) for candidate in candidates)
    raise FileNotFoundError(
        "OpenModelica compiler was not found. Checked:\n"
        + searched
        + "\n\nInstall OpenModelica or pass --omc \"C:\\path\\to\\omc.exe\"."
    )


def write_mos(args, repo_dir, run_dir):
    model_file = repo_dir / "WaterCooledChillerExample7.mo"
    if not model_file.is_file():
        raise FileNotFoundError(f"Could not find model file at {model_file}")

    mos_file = run_dir / "run_watercooledchillerexample.mos"
    mos_file.write_text(
        "\n".join(
            [
                'loadModel(Modelica, {"3.2.2"});',
                'loadModel(Buildings, {"6.0.0"});',
                'loadString("package WaterCooledChillerExample annotation(uses(Modelica(version = \\"3.2.2\\"), Buildings(version = \\"6.0.0\\"))); end WaterCooledChillerExample;");',
                f'loadFile("{modelica_path(model_file)}");',
                (
                    f"simulate({args.model}, "
                    f"startTime={args.start_time}, "
                    f"stopTime={args.stop_time}, "
                    f"numberOfIntervals={args.intervals}, "
                    f"tolerance={args.tolerance});"
                ),
                "getErrorString();",
                "",
            ]
        ),
        encoding="utf-8",
    )
    return mos_file


def run_openmodelica(omc, mos_file, run_dir):
    result = subprocess.run(
        [str(omc), str(mos_file)],
        cwd=str(run_dir),
        text=True,
        capture_output=True,
    )

    log_file = run_dir / "openmodelica_run.log"
    log_file.write_text(
        "STDOUT\n======\n"
        + result.stdout
        + "\nSTDERR\n======\n"
        + result.stderr,
        encoding="utf-8",
    )

    return result, log_file


def result_file_from_output(output):
    for line in output.splitlines():
        line = line.strip()
        if line.startswith("resultFile = "):
            value = line.split("=", 1)[1].strip().strip(",").strip('"')
            if value:
                return Path(value)
    return None


def main():
    # Use the repository root package layout. OpenModelica package loading is
    # fragile when the package file sits in "PB Trial" because the folder name
    # contains a space.
    repo_dir = Path(__file__).resolve().parents[1]

    parser = argparse.ArgumentParser(
        description="Run WaterCooledChillerExample7 with OpenModelica."
    )
    parser.add_argument("--model", default=DEFAULT_MODEL)
    parser.add_argument("--start-time", type=float, default=DEFAULT_START_TIME)
    parser.add_argument("--stop-time", type=float, default=DEFAULT_STOP_TIME)
    parser.add_argument("--intervals", type=int, default=DEFAULT_INTERVALS)
    parser.add_argument("--tolerance", type=float, default=DEFAULT_TOLERANCE)
    parser.add_argument("--omc", default=None, help="Path to omc.exe")
    parser.add_argument(
        "--run-dir",
        default=str(repo_dir / "runs" / "openmodelica"),
        help="Directory for generated simulation files",
    )
    args = parser.parse_args()

    run_dir = Path(args.run_dir).resolve()
    run_dir.mkdir(parents=True, exist_ok=True)

    try:
        omc = find_omc(args.omc)
        mos_file = write_mos(args, repo_dir, run_dir)
        print(f"OpenModelica: {omc}")
        print(f"Model:         {args.model}")
        print(f"Run dir:       {run_dir}")
        print("Starting simulation...")

        result, log_file = run_openmodelica(omc, mos_file, run_dir)
        output = result.stdout + result.stderr
        result_file = result_file_from_output(output)

        if (
            result.returncode != 0
            or "The simulation finished successfully" not in output
            or result_file is None
        ):
            print("\nSimulation failed.")
            print(f"Full log: {log_file}")
            print("\nLast OpenModelica output:")
            print("\n".join(output.splitlines()[-40:]))
            return 1

        print("\nSimulation finished successfully.")
        print(f"Result file: {result_file}")
        print(f"Full log:    {log_file}")
        return 0

    except Exception as exc:
        print(f"\nError: {exc}")
        return 1


if __name__ == "__main__":
    sys.exit(main())
