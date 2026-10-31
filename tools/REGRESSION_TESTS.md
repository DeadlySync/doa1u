# Retained regression checks

2026-10-31 launcher_check additionally covers Window Type INI persistence,
independent Borderless/Windowed/Full Screen controls, all four actual hidden
HWND style/geometry combinations, windowed preset restoration, unchanged
desktop resolution/refresh and internal-resolution preferences, and Display
content ScrollMax.y=0 at720p. No live game test is implied.

2026-10-31 launcher_check now verifies P1 last-active keyboard/pad selection
with connected pads: whole-state replacement, held inputs/repeats/host shortcuts,
P2 isolation, axis drift/hysteresis, menu/focus suppression, disconnect keyboard
fallback and slot-preserving replacement. Hidden suite PASS; physical device
and actual gameplay switching remain manual user checks.

These are offline CPU/source checks, not live-game automation. Keep them: they
protect fixes rather than collecting one-off investigation artifacts. Run from
the workspace root in an x64 Visual Studio Developer Command Prompt with Python.

| Check in doa1u_port/tools | Purpose |
| --- | --- |
| throw_move_lookup_check.c | Production 570E0 shadow: 131072 player/selector/action cases, register/stack preservation and captured DD regression; build/run target throw_move_lookup_check |
| antialiasing_check.cpp | Production FXAA/SSAA shaders on headless D3D11 WARP, with pixel readback |
| check_pb_submission.c | Real pushbuffer decoder: wraps, split packets, CALL/RETURN, GET timing |
| check_head_pose_gate.py | Lifted head gate including observed downed/victory cases |
| check_test_match_selection.py | Diagnostic selection and one-time scene-mode initialization |
| check_nri_targets.py | Guest color/depth identity and draw-selected presentation |
| check_nri_texture_cache.py | Same-frame P8 palette/index changes and reuse |
| check_nri_mips.py | Mip dimensions and transparent-pixel weighting |
| check_guest_draw_state.py | Depth policy and all alpha comparison operations |
| check_nri_shaders.py | Shared shader compilation |
| check_game_loop_cycle.py | Game-loop stack-cycle regression |
| check_vblank_schedule.py | Vblank schedule regression |
| check_source_config.cmake, audit_source.py | Source/configuration checks |

Python compiler-based checks build into doa1u_port/build, not the game directory.
The selection script generates its C test; compile and run that generated file.

Example decoder regression (no game launched):

```bat
cl /nologo /O2 doa1u_port/tools/check_pb_submission.c /Fodoa1u_port/build/check_pb_submission.obj /Fedoa1u_port/build/check_pb_submission.exe
doa1u_port\build\check_pb_submission.exe
```

The resolved rendering investigation record is in
reference/investigations/resolved-rendering-20261028/README.md.

AA regression, from the port root (no game/window/hardware GPU):

```powershell
cmake --build build --config Release --target antialiasing_check
./build/Release/antialiasing_check.exe
```

## Multi-API production renderer check

Build `nri_backend_check` in Release. Run once per API (`d3d11`, `d3d12`, `vulkan`).
This synthetic headless check includes the actual production backend and NRI UI
bridge. It creates all scene/AA pipelines and reads back known scene/UI pixels
across 12 Off/FXAA/SSAA2x/4x frames. No game, guest code, files or input injection.
NRI validation is enabled; optional API validation uses RECOMP_NRI_VALIDATION=1.
Errors log/return failure without NRI's default breakpoint dialog. Run with an
external timeout when automating. This does not establish full game parity.

Add `--present` to each API invocation for hidden-window swapchain tests (the
window is never shown): acquire/present, resize/recreate, pause and AA switching.
Set `$env:RECOMP_NRI_VALIDATION='1'` for native API validation; D3D11/12 InfoQueue
errors/corruption fail the check. Require exit zero AND a PASS marker. The real
Win32 F1 settings panel and gameplay still require user testing.

Texture filtering: run `nri_backend_check d3d11 --filter` (also `d3d12`, `vulkan`).
Eight frames exercise actual texture cache/decode/upload/mip generation, textured
production draw and readback: nearest vs bilinear magnification, bilinear vs
trilinear minification, anisotropic 2x/4x/8x/16x with matching directional footprints.
The synthetic decoder supplies alternating black/white columns. Assert measured
contrast: nearest >=250, bilinear magnification 150..210, bilinear minification
>=100 vs trilinear <=3, directional anisotropic detail >=100. AA disabled to isolate
filtering. These test sampler execution; saved-setting mapping is code-reviewed.

SMAA/MSAA: run `nri_backend_check <api> --smaa` / `--msaa` for each API.
SMAA checks actual three-pass HIGH output: diagonal smoothing, flat colors, source
alpha (opaque/translucent) and post-AA UI. MSAA cycles supported 2x/4x/8x targets,
checks resolved edge coverage and rejects farther geometry using multisampled
depth. `--present` now runs 20 frames switching all five modes and MSAA sample
counts; simulates reduced capability masks to check fallback, plus resize,
same-size recreation and pause. No game launched. Original offscreen/filter and
WARP regressions remain required. Native D3D12 breaks are disabled in the test
only; errors still fail through InfoQueue and NRI validation.


Sharp 2D: `nri_backend_check <api> --sharp2d` with native validation enabled
checks actual production snapshots/composition/readback: binary texture edges
under anisotropic scene filtering and all five AA modes, single alpha blending,
texture-mutation isolation, invalidation at later world draws, original-sampler
mapping and integer 4:3/16:9 viewport sizing. `--present` also submits translucent
2D, toggles Sharp 2D, and retains snapshots through pause, resize and AA changes.
Run on D3D11/D3D12/Vulkan; no game or visible window is launched.


FVF HUD regression: `--sharp2d` now deliberately clears the old screen-space hint
and supplies the real `0x144` FVF domain. It varies the 3D sampler and toggles
original/sharp rendering on retained snapshots, checks semantic world overrides,
16:9 HUD layout and post-AA pixels. `widescreen_shadow_check` also checks XYZRHW
FVF variants, world/program handles, ABI-preserving ordered metadata and direct
shader-selection reset. `check_pb_submission.c` tests domain packets split across
submissions with an intervening draw, preserving order and existing GET timing.


Same-size toggle revision: `--sharp2d` now asserts identical on/off viewport
bounds in 4:3 and 16:9, replacing integer-size expectations. Original/sharp
pixel checks, all AA modes and hidden presentation regressions remain enabled.

SNN preview: nri_backend_check <api> --snn checks all four SNN/nearest
combinations across all five AA methods. Analytical stripe readback verifies
source-resolution SNN before scaling, original/nearest sampling and preserved
semi-transparent alpha. Also checks revision-cache invalidation and raw snapshot
isolation. --present exercises SNN toggles during hidden presentation, pause
and resize. Run native/NRI validation on d3d11, d3d12 and vulkan.

## Launcher and SDL3 input

`cmake --build build --config Release --target launcher_check`, then run
`build/Release/launcher_check.exe` from a writable output directory. This does
not run the game. It uses SDL virtual controllers and a hidden WARP window.
Checks cover two-player join/routing, ignored third controller, disconnect and
replacement slots, menu input suppression, conflict swaps, player isolation,
single-assignment Undo, non-undoable defaults, reserved keys, capture priority,
INI save/reload/validation and pause ownership. It renders all three actual
launcher pages and writes `launcher-page-{0,1,2}.png` for inspection.

Manual validation still required: physical wired/Bluetooth controllers,
multi-monitor placement, startup-to-selected-backend transition and the game's
pause/resume path (including a previously paused match). Never substitute this
check for running those scenarios manually.

### First-run Play / retained-window thread regression (2026-10-30)

`launcher_check` also executes the actual startup launcher hidden, saves/Plays,
then reuses its exact HWND on a different rendering thread. It verifies the
owner continues servicing synchronous messages, input is queued and F1 reaches
ImGui only on the renderer thread, and UI context recreation works. Replacement
swapchains on that retained HWND are checked with native DX11 and all three NRI
backends (D3D11/D3D12/Vulkan). Temporary test INI only; no guest code executes.
The check now uses hardware graphics for the handoff section, WARP for page
captures. Manual first-run Play acceptance remains a separate user check.

### Enter / launcher pause gate (2026-10-30)

`launcher_check` validates default Enter-to-Start snapshots, assignable Enter,
exact-old-default migration without changing custom profiles, actual highlighted
Save activation via ImGui keyboard events, guest frame wait/resume and host audio
pause-call state (audio function is a stub in this test). `nri_backend_check
<api> --present` exercises the production backend's paused UI-only loop for five
repaints without new guest frames, then resumes; runs on all three APIs. Audible
bank/APU/FMV pause/resume and game timing remain manual acceptance checks.

### Training move-list dimming (2026-10-30)

Capture `XISO/captures/training-dimming-23191-4372/training_frame1258.rdc`
(D3D12): events 3617 (guest target) and 7336 (HUD replay) sample a stale
texture on a full-screen black 0x90000000 rectangle. Its coordinates have a
1/32-pixel bias; the bottom-right UV is garbage. Executor ignored texture
CONTROL0 enable bit 30. Respect it while retaining disabled bindings; explicit
CPU texture decoding temporarily enables its private saved texture state.
Full-canvas untextured overlays now tolerate subpixel bias and cover the wide
world in both original drawing and post-AA replay. Ordinary HUD sizing unchanged.

- From a VS x64 developer shell: `python tools/check_texture_enable.py`
  exercises the actual extracted texture-register decoder, all four stages,
  disabled binding updates and re-enabling without rebinding.
- Build `nri_backend_check`, then run `nri_backend_check <api> --dimming`
  for `d3d11`, `d3d12`, `vulkan`. Pixel checks cover the captured alpha/UV
  fixture in 4:3 and 16:9, direct target and post-AA replay. All pass.
- Source-config OFF/ON checks and Release build pass. In-game user retest pending.

### F1 launcher controller navigation (2026-10-31)

launcher_check attaches a virtual P1 SDL controller after game-window handoff and F1 opening. D-pad Down and South navigate to and activate Graphics; guest gameplay stays neutral. This reproduced the missing HasGamepad flag before the fix: Win32 NewFrame overwrote SDL navigation with independent XInput polling. IMGUI_IMPL_WIN32_DISABLE_GAMEPAD makes SDL the sole menu controller source, preserving slot routing and capture/release suppression. Hidden regression passes; physical-controller retest pending.

F1 panel-focus regression: controller activation of Display, Graphics or Controls transfers focus to its first control; Left returns to the sidebar. Synthetic controller navigation reaches a P1 binding and captures a replacement keyboard key. Passed 2026-10-31.

### Embedded SDL3 controller build (2026-10-31)

Adapter moved to src/controller. Pinned unmodified SDL 3.4.18 upstream source is statically built using cmake/ControllerSDL.cmake; unused multimedia subsystems and SDL test library disabled, HID/XInput/virtual joysticks retained. launcher_check passes with old SDL3 DLLs removed from build and XISO directories. Import table confirms no SDL3.dll dependency. Source configuration checks pass for diagnostics OFF/ON. Archive-byte verification: all 2183 upstream files identical. Physical USB/Bluetooth/rumble retest remains with the user.

### Controllers branch completion - 0.9.0 (2026-10-31)

User confirmed all tested controllers are working after the static SDL integration and F1 panel-navigation fixes. Release version is 0.9.0, shared by VERSIONINFO and startup/NRI/legacy window titles. This closes the controllers implementation milestone; no Git identifier or auto-increment counter is embedded.

### Debug baseline mirrors Release (2026-10-31)

cmake/MirrorReleaseToDebug.cmake copies Release compiler/resource/linker flags to Debug and mirrors configuration-specific target options across runtime, NRI, SDL and app targets without editing upstream sources. Debug uses the Release CRT/optimization and existing symbol/crash-stack options. Output directories remain separate; DOA1U_DIAGNOSTIC is independent. After configuring, run: python tools/check_build_configs.py build. The check compares compiler/linker/resource properties across 31 generated x64 projects (only configuration identities and output locations differ), and verifies SDL generated headers are identical. Diagnostic OFF/ON source-selection checks pass.

Verified: Debug launcher_check passes across D3D11/D3D12/Vulkan; Debug game EXE and matching PDB build successfully. Import inspection shows no debug CRT or SDL DLL dependency. Existing XISO Release deployment left unchanged.

### Final Debug/Release separation (2026-10-31, supersedes the copied baseline)

Debug is now /Od /Ob0 /Zi /Oy-, debug CRT, full PDB, no incremental linking, NOREF/NOICF and no IPO. Release remains the original /O2 /Ob2; proposed /Ob3 tuning removed. All 31 generated project settings checked. Debug launcher_check and game EXE/PDB build passed. Offline DbgHelp resolves WinMain and sub_000570E0 with source lines from the matching PDB. Use Debug for all future debugging. XISO not replaced. SDL keeps its prior release assertion level because enabling debug-only assertions exposes the existing startup/render-thread event-pump handoff; details in docs/build-configurations.md.


### Release without PDBs (2026-10-31)

Release compiler/linker symbols disabled, including inherited NRI options; /O2 /Ob2 retained. All 31 generated configurations pass checks. Full Release game build created no PDB; PE contains no CodeView/PDB reference (only non-symbol POGO metadata). EXE deployed to XISO with SHA256 match; stale Release PDBs archived outside build/deployment. Debug offline DbgHelp still resolves WinMain and sub_000570E0 with source lines.


### User-run training crash capture (2026-10-31)

capture_training_crash.ps1 -PrepareOnly passes. CDB synthetic second-chance exception test successfully writes full dump. XISO batch wrapper installed; actual game reproduction pending. Debug training entry currently exits without a native logger report or dump; not established to be the original Release fault.

Capture correction: explicit sxd av is required (sxd * alone left default AV first-chance breaks). Added -o, sxi ibp/epr to follow restarted children. Full production command-file test with capture_debugger_check.c passes: expected parent/child AVs reach handlers; parent exits; child fatal E0424450 captured SECOND CHANCE. Earlier game dumps were expected startup APU reads, NOT the Training crash.

Capture AC97 correction: sxi sse swallowed the runtime TF event, causing startup reset-bit loop. Use sxe -c "gn" sse. Synthetic production-command test now verifies single-step delivery in parent and child, expected AV forwarding, child fatal capture; PASS. Frozen game hang evidence saved and owned process closed. Actual Training failure remains uncaptured.


### Debug audio wait stack exhaustion (2026-10-31)

Training dump164448 shows 1B559F/1B55A6 recursion consuming >1MiB fiber allocation. Guest jump cycle now one native activation. Production-body /Od /Ob0 harness passes 1M polls from all3 entries with zero native stack growth, correct guest state and bypass cases. Debug built/deployed EXE+PDB hash checked; source symbols pass. Physical Training retest pending; original Release CRT fault not yet linked.


### Training frame-cycle native recursion (2026-10-31)

Capture164832-606 shows corrupt RET in task11 and neighboring task12 saved context with hundreds of44320/445DF frames. Entire44320/443A0/445DF tail-cycle now local continuation dispatcher. Actual production-body /Od/Ob0 harness passes1Mframes per3entries, stackvariation608/624/608bytes, stable guestESP. Debug rebuilt/deployed pair hashes checked, source symbols pass. Physical retest pending; Release failure not conclusively linked.

### Task frame cycle and native stack guards (2026-10-31)

Capture training-capture-20261031-165347-983: second-chance execute AV at RIP6. Task9 native RSP F38FFAB8 is below its entire F3900000..F3A00000 allocation. Captured native stack contains about675 repetitions of 166B0/167F0/16AC4. Converted only their three verified guest tail edges into a local constant-stack dispatcher; real calls and public entry points preserved. Reapply helper validates exact edges and is idempotent. Actual-production-body /Od /Ob0 harness passes1M frames from each entry, native stack span48 bytes, stable guestESP.

CreateFiber(1MiB) committed the full reservation without a remaining growth guard. Use CreateFiberEx(64KiB initial commit, same1MiB reservation) to restore guarded growth. Production-fiber harness asserts PAGE_GUARD below StackLimit and passes400000 switches plus256 task lifecycles. Debug game rebuilt; source-symbol checks pass; EXE/PDB deployed to XISO with matching hashes. Physical Training retest pending. Original Release UCRT read has not been conclusively linked.

### Release deployment after Training fixes (2026-10-31 17:07)

User reports Debug Training no longer crashed in their retest (provisional fix). Requested Release built successfully with all audio/Training/task-frame constant-stack fixes and guarded native fibers. Configuration check passes31 targets: Release /O2 /Ob2, no PDB or PE CodeView reference. XISO executable replaced and SHA256 verified65A4362731920FE1FABEF96D645EE22E75665FD8D1EA9D2519A21071FA727464. Previous matching Debug EXE/PDB archived at workspace symbol-archive/debug-before-release-20261031-170708. Release gameplay retest pending.

### v0.9.1 completion (2026-10-31)

User confirmed the optimized Release build works in gameplay after the Training stack-cycle repairs. Version bumped to0.9.1 via app_version.h, shared by VERSIONINFO and window titles.
