# Opt-in Release logging

Release v0.9.5 creates no `run.log`, `run.err` or `xbox_kernel.log` by default.
Ordinary stdout/stderr diagnostics go to `NUL`, and the kernel file logger is
disabled before formatting messages. Existing log files are left untouched;
they are not deleted or truncated by a quiet launch.

## Create logs

Keep [create_logs.bat](../src/create_logs.bat) beside `doa1u_recomp.exe` and
double-click the batch. CMake generates a copy beside each configuration's
executable and refreshes it even when only the batch changes.
Alternatively, invoke the source copy with the game's full EXE path:

```bat
src\create_logs.bat "H:\Projects\DOA1U\TEST\doa1u_recomp.exe"
```

This is a **pure Windows batch file**. It sets `DOA1U_LOGS=1` and
`XBOX_LOG_LEVEL=2` (INFO), runs the game, and captures stdout/stderr. All three
files are created **beside the executable**, independent of the caller's working
directory. Existing logs are replaced for the logging session; ESC also starts
a fresh set when it restarts the game. Environment changes are local to the
batch and its game/ESC children, not permanent system settings.

Only logging changes. The batch does not enable trace-every-function, memory/GPU
dumps, watchdogs, crash dumps, gameplay overrides or diagnostic builds. The normal
startup and error paths, file-operation diagnostics, movie/runtime messages and
kernel INFO/WARN/ERROR messages are sufficient for ordinary investigation.
`XBOX_LOG_LEVEL=3`/`4` can be used manually for additional available DEBUG/TRACE
messages; that setting alone does not enable Release log files.

Debug keeps logging enabled by default and preserves explicit stdout/stderr
redirection used by debuggers. `DOA1U_LOGS=0` explicitly disables logs in either
configuration; `DOA1U_LOGS=1` enables them. Values other than exactly `1` disable
the policy when the variable is present. F1 does not change logging policy.

The private `doa1u_logging.h` policy and tracked `kernel_thunks.c` override keep
the public Xbox API and external xboxrecomp checkout unchanged. The latter is a
copy of the existing upstream implementation with only logging initialization
changed; its MIT notice remains in `src/xboxrecomp/LICENSE`.

## End-to-end check

```powershell
python tools/check_release_logging.py build/Release/doa1u_recomp.exe 'path/game.xiso.iso' 'path/doa1u_graphics.ini'
```

The Windows check opens real game windows in fresh build-local fixtures with
copied EXEs/INI and image hard links. It tests absent/zero opt-in flags and the
actual batch, including paths with spaces/ampersands. Each case must reach the
v0.9.5 game window, survive ESC into a different process and close normally.
Quiet cases must create no logs; the batch case must create three nonempty files
with verified XBE/game-start evidence. No user save or image content is modified.
