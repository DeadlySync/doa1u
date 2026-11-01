"""Windows end-to-end check: real Release startup, batch opt-in and ESC children.

Uses isolated fixture copies/hard links, never modifies the supplied image/INI.
Opens and closes only game windows belonging to these fixture executables.
"""
import argparse
import ctypes as C
from ctypes import wintypes as W
import json
import hashlib
import os
from pathlib import Path
import shutil
import subprocess
import time


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("exe", type=Path)
    parser.add_argument("image", type=Path)
    parser.add_argument("ini", type=Path)
    parser.add_argument("--batch", type=Path, default=Path("src/create_logs.bat"))
    args = parser.parse_args()
    exe, image, ini, batch = [p.resolve(strict=True) for p in
                              (args.exe, args.image, args.ini, args.batch)]
    root = exe.parent.parent / ("logging smoke & paths " + time.strftime("%Y%m%d-%H%M%S"))
    root.mkdir()  # Deliberately includes spaces and a cmd metacharacter.
    user, kernel = C.WinDLL("user32", use_last_error=True), C.WinDLL("kernel32", use_last_error=True)
    callback_type = C.WINFUNCTYPE(W.BOOL, W.HWND, W.LPARAM)
    user.EnumWindows.argtypes = [callback_type, W.LPARAM]
    user.GetWindowThreadProcessId.argtypes = [W.HWND, C.POINTER(W.DWORD)]
    user.GetClassNameW.argtypes = [W.HWND, W.LPWSTR, C.c_int]
    user.GetWindowTextW.argtypes = [W.HWND, W.LPWSTR, C.c_int]
    user.PostMessageW.argtypes = [W.HWND, W.UINT, W.WPARAM, W.LPARAM]
    kernel.OpenProcess.argtypes = [W.DWORD, W.BOOL, W.DWORD]
    kernel.OpenProcess.restype = W.HANDLE
    kernel.QueryFullProcessImageNameW.argtypes = [W.HANDLE, W.DWORD, W.LPWSTR, C.POINTER(W.DWORD)]
    kernel.CloseHandle.argtypes = [W.HANDLE]
    kernel.WaitForSingleObject.argtypes = [W.HANDLE, W.DWORD]
    kernel.TerminateProcess.argtypes = [W.HANDLE, W.UINT]

    def window(target, exclude_pid=0):
        found = []

        @callback_type
        def visit(hwnd, unused):
            pid, cls = W.DWORD(), C.create_unicode_buffer(128)
            user.GetWindowThreadProcessId(hwnd, C.byref(pid))
            user.GetClassNameW(hwnd, cls, len(cls))
            if pid.value == exclude_pid or cls.value != "DOA1UNRI":
                return True
            process = kernel.OpenProcess(0x1000, False, pid.value)
            if process:
                try:
                    path, count = C.create_unicode_buffer(32768), W.DWORD(32768)
                    if kernel.QueryFullProcessImageNameW(process, 0, path, C.byref(count)):
                        if os.path.normcase(path.value) == os.path.normcase(str(target)):
                            title = C.create_unicode_buffer(512)
                            user.GetWindowTextW(hwnd, title, len(title))
                            found.append((hwnd, pid.value, title.value))
                finally:
                    kernel.CloseHandle(process)
            return True

        user.EnumWindows(visit, 0)
        return found[0] if found else None

    def wait_window(target, exclude_pid=0):
        deadline = time.monotonic() + 45
        while time.monotonic() < deadline:
            found = window(target, exclude_pid)
            if found:
                if "v0.9.5" not in found[2]:
                    raise RuntimeError(f"Wrong window version: {found[2]!r}")
                return found
            time.sleep(0.2)
        raise RuntimeError(f"No game window for {target}")

    def close_game(target):
        found = window(target)
        if not found:
            return
        hwnd, pid, _ = found
        process = kernel.OpenProcess(0x100001, False, pid)
        if not process:
            raise C.WinError(C.get_last_error())
        try:
            user.PostMessageW(hwnd, 0x10, 0, 0)  # WM_CLOSE, normal shutdown.
            if kernel.WaitForSingleObject(process, 15000) != 0:
                kernel.TerminateProcess(process, 1)  # Only this isolated fixture.
                raise RuntimeError("Fixture game did not close normally")
        finally:
            kernel.CloseHandle(process)

    results = []
    logs = ("run.log", "run.err", "xbox_kernel.log")
    for name, logging_value in (("quiet-default", None), ("quiet-zero", "0"), ("batch-enabled", "1")):
        folder = root / name
        folder.mkdir()
        game = folder / "doa1u_recomp.exe"
        shutil.copy2(exe, game)
        shutil.copy2(ini, folder / "doa1u_graphics.ini")
        os.link(image, folder / "disc.xiso")
        env = os.environ.copy()
        env.pop("DOA1U_RESTART_PARENT_PID", None)
        env.pop("DOA1U_LOGS", None)
        env["XBOX_LOG_LEVEL"] = "4"  # Must not independently enable quiet logging.
        if logging_value is not None:
            env["DOA1U_LOGS"] = logging_value
        if name == "batch-enabled":
            # Test the actual pure batch, including its explicit EXE argument.
            command = f'"{os.environ["COMSPEC"]}" /d /s /c ""{batch}" "{game}""'
        else:
            command = [str(game)]
        process = subprocess.Popen(command, cwd=root, env=env,
                                   creationflags=subprocess.CREATE_NO_WINDOW,
                                   stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
        try:
            hwnd, initial_pid, title = wait_window(game)
            time.sleep(3)
            # Each mode must survive ESC into a new process with the same policy.
            user.PostMessageW(hwnd, 0x100, 0x1B, 0)  # WM_KEYDOWN VK_ESCAPE.
            _, restarted_pid, _ = wait_window(game, exclude_pid=initial_pid)
            time.sleep(3)
            close_game(game)
            process.wait(timeout=15)
            sizes = {log: (folder / log).stat().st_size for log in logs if (folder / log).exists()}
            if name == "batch-enabled":
                if set(sizes) != set(logs) or not all(sizes.values()):
                    raise RuntimeError(f"Missing/empty batch logs: {sizes}")
                stderr = (folder / "run.err").read_text(errors="replace")
                stdout = (folder / "run.log").read_text(errors="replace")
                if "[DISC] Verified" not in stderr or "Starting game..." not in stdout:
                    raise RuntimeError("Restarted logs lack verified game startup")
                if "[CRASH]" in stderr:
                    raise RuntimeError("Crash in logged fixture")
            elif sizes:
                raise RuntimeError(f"Quiet release created logs: {sizes}")
            results.append(dict(mode=name, initial_pid=initial_pid, restarted_pid=restarted_pid,
                                window_title=title, log_bytes=sizes, result="PASS",
                                exe_sha256=hashlib.sha256(game.read_bytes()).hexdigest(),
                                batch_sha256=hashlib.sha256(batch.read_bytes()).hexdigest()))
            print(f"PASS {name}: startup/ESC restart; logs={sizes}", flush=True)
        finally:
            close_game(game)
            if process.poll() is None:
                process.terminate()
                process.wait(timeout=15)
    if any((root / log).exists() for log in logs):
        raise RuntimeError("Logs leaked into the unrelated working directory")
    (root / "results.json").write_text(json.dumps(results, indent=2), encoding="utf-8")
    print(f"Evidence: {root}")


if __name__ == "__main__":
    main()
