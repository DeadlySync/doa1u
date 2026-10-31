# Retained regression checks

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
