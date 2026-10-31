# Build configurations

Use `--config Debug` for debugging, CDB attachment, source stepping, and stack
investigations. Use `--config Release` for the original optimized build.

| Setting | Debug | Release |
| --- | --- | --- |
| Compiler optimization | `/Od /Ob0` | `/O2 /Ob2` |
| CRT | Debug DLL (`/MDd`) | Release DLL (`/MD`) |
| Symbols | `/Zi`, full linker PDB | Disabled; no compiler/linker PDB |
| Frame pointers | Preserved throughout | Existing game setting retained |
| Link-time optimization | Disabled | Unchanged |
| Remove unreferenced functions | Disabled | Enabled for game |
| Fold identical functions | Disabled | Existing game setting retained (disabled) |
| Incremental linking | Disabled | Disabled |
| Game address randomization | Existing fixed-address setup retained | Unchanged |

Configuration is in `cmake/BuildConfigurations.cmake`. Debug overrides runtime
libraries that hard-code `/O2`, without changing upstream sources. The previous
Release-to-Debug mirroring helper and the proposed `/Ob3` tuning are no longer
used. `DOA1U_DIAGNOSTIC` remains independent of configuration.

SDL deliberately retains its previously shipped assertion level (`release`)
through `cmake/ControllerSDL.cmake`. Turning on SDL's stricter Debug assertions
exposed the existing startup/render-thread event-pump handoff at
`SDL_PumpEventsInternal` (`SDL_IsMainThread_REAL`). This configuration change does
not fix or redesign that handoff. SDL still builds unoptimized with full Debug
symbols; application Debug assertions remain enabled.

## Verification

From the port root:

```powershell
python tools/check_build_configs.py build
cmake --build build --config Debug --target launcher_check
./build/Debug/launcher_check.exe
cmake --build build --config Debug --target doa1u_recomp
python tools/check_debug_symbols.py build/Debug/doa1u_recomp.exe
```

The last command loads symbols and source lines with Windows DbgHelp without
launching the game. It verifies the native entry point and the recovered throw
lookup function. Keep each Debug EXE with its matching PDB. Release produces no
PDB; archive/remove stale Release PDBs when deploying a new Release EXE.
