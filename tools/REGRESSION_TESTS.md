# Retained regression checks

These are offline CPU/source checks, not live-game automation. Keep them: they
protect fixes rather than collecting one-off investigation artifacts. Run from
the workspace root in an x64 Visual Studio Developer Command Prompt with Python.

| Check in doa1u_port/tools | Purpose |
| --- | --- |
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
