# XISO integration results — 2026-10-31

**Status: all six stages delivered; accepted by the user for final release v0.9.5.**
The user reported "works great!" after testing the image-only `TEST` layout and
requested this project's final build, version bump, commit and push. That is an
overall release acceptance, not a separately recorded pass for every physical
test case. Original automated evidence and initial deployments are retained below.

## Repeatable gate

From the repository root, build the game and checks in **both** configurations:

```powershell
cmake --build build --config Debug --target doa1u_recomp xiso_reader_check xbox_file_backend_check xbox_image_file_check disc_bootstrap_check sofdec_io_check fmv_path_check sofdec_check
cmake --build build --config Release --target doa1u_recomp xiso_reader_check xbox_file_backend_check xbox_image_file_check disc_bootstrap_check sofdec_io_check fmv_path_check sofdec_check
pwsh -NoProfile -File tools/check_xiso_integration.ps1
```

The script accepts `-Image`, `-Extracted`, `-BuildDirectory` and `-Configuration`.
It does not build, deploy or launch the game. It records each command's log, exit
code and duration in a fresh build-local directory and stops on failure. Expected
negative-fixture diagnostics are not failures when their check exits successfully.
It also records the game EXE/PDB hashes, when present.

This run's evidence: `build/xiso-integration-20261031-204701-805/`.
Build logs: `build/stage6-build-debug.log`, `build/stage6-build-release.log`.
All **21 gate commands exited zero**:

| Gate | Result |
| --- | --- |
| Complete game and all check targets | Build/link passed in Debug and Release |
| Configuration flags | 40 generated projects checked; Debug `/Od /Ob0` with symbols, Release `/O2 /Ob2` without PDB generation |
| Backend ownership | One selected file implementation; all seven isolated CMake selector cases passed |
| Game source selection | Normal 128 sources; diagnostic 129 sources; expected adapter/probe selection |
| Reader, each configuration | 5,167 checks; all 289 files / 4,386,916,844 payload bytes compared with extracted originals |
| Xbox image API/bridge, each configuration | 5,778 checks; same complete content comparison; 8,000 concurrent reads across dismount |
| Host API, each configuration | 74 checks, including writable saves, relative paths, FATX behavior and virtual disks |
| Bootstrap, each configuration | 352 checks, including both modes, identity rejection, discovery and fresh-process lifetime |
| Movie acquisition, each configuration | 204 checks / 23 success and fault scenarios |
| Actual movie-wrapper paths, each configuration | 43 checks |
| Movie decode parity | All four Debug/Release × folder/image manifests exactly match the pre-change baseline |

Movie parity includes all defined B/G/R bytes and PCM samples for the complete
opening (2,174 frames) and ending (2,901 frames). Five accepted SFDs total
593,889,280 acquired bytes per manifest. The sixth retains the preexisting
512 MiB size-cap rejection. Alpha remains unspecified, as before; buffering and
decoder bodies are unchanged. See [baseline provenance](reference/sofdec-baseline.md).
No deterministic scheduler-forced close-during-read race was injected; the
existing shared-ownership review and concurrent lifetime checks remain the evidence.

## Test deployment

Verified Release v0.9.1 EXE: **45,611,520 bytes**.

```text
SHA-256: 0DF33F6825118958979453818AC4BAEBF188AB0332B5606EE5E689587F235446
Folder: H:\Projects\DOA1U\XISO\doa1u_recomp.exe
Image:  H:\Projects\DOA1U\XISO-Image\doa1u_recomp.exe
```

Both deployed EXEs were rehashed against the verified build. No Release PDB was
deployed. Previous executable, settings, saves and logs were backed up under
`.backups/xiso-stage6-20261031-204820-558/` before replacing the folder-mode EXE.
Exact deployment paths/hash are also recorded in the evidence's `deployment.json`.

The fresh `XISO-Image` directory has **no extracted game assets**. Its `disc.xiso`
is a hard link to the original 4,387,635,200-byte input image, not a second copy or
an extraction. Image contents were not modified. Settings, UDATA, TDATA and license
notices were copied from `XISO`; settings/saves in the two test directories are
independent and are not automatically merged back.

## Real startup observation

Launched the image-mode EXE with the evidence directory as its working directory,
deliberately different from the EXE directory. Initial PID: `147048`.
`image-start.json` records the launch; `image-start.stdout.log` and
`image-start.stderr.log` contain startup/runtime output.

Observed in the real process, not a headless harness:

- Found adjacent `disc.xiso` independently of the working directory.
- Verified root `Doa1.xbe`: title ID `0x54430006`, full SHA-256
  `8d4c14a7443f6d3aca4577fde7759abbb9863aeb97833f7f8af0054b59d40787`.
- Initialized guest memory/kernel and started game execution.
- Played `d:\doa1\ss_opn.sfd`, queued 3,228,855 audio samples/channel and completed
  all 2,174 frames at 73.230 seconds without a recorded crash at this checkpoint.

These log observations do **not** verify physical picture/audio quality,
synchronization, controller navigation, Training or Arcade behavior.

## User acceptance — final sign-off

The earlier deferred-test handoff is superseded. The user moved the deployment
to `H:\Projects\DOA1U\TEST` with exactly one image and reported that it works
great, accepting it as the project's final build. EXE, INI, UDATA/TDATA and license
files were verified after relocation. The image bootstrap independently passed
the expected XBE title ID and complete hash checks. TEST runtime output also
records successful source verification and save-file opens.

The user did not provide a case-by-case physical test matrix or explicitly
itemize a fresh folder-mode retest. Do not turn overall sign-off into invented
per-case Training/Arcade/ending, A/V synchronization, save persistence or controller
results. Previous automated full-content/decoder/API evidence covers both modes;
the accepted interactive deployment is image-only. No further work is scheduled
unless the user reports an issue.

After final acceptance the user explicitly clarified that B2–B5 were all solved
by the animation-loading correction. Those historical issues are now closed in
the roadmap; this specific confirmation supersedes their former deferred status.
No code change, version bump or new physical-test run accompanies this correction.

F1 must retain the existing mount/index. ESC must start a fresh process that
rediscovers, remounts and revalidates its source. The headless gate checks those
ownership/discovery contracts but cannot establish the physical UI behavior.

## Final v0.9.5 build and opt-in logging

The final request additionally disables default Release log files and supplies
the pure [create_logs.bat](../src/create_logs.bat) launcher. See
[logging policy and checks](logging.md). Debug's default logging is retained.
No gameplay-default flags were removed or changed.

- Full Debug/Release game and check builds passed. The complete **21-command**
  integration gate passed again after the logging change:
  `build/xiso-integration-20261031-211249-847/`.
- A packaging-only CMake adjustment subsequently refreshes the batch in every
  configuration at generate time, including when no EXE relink is otherwise
  needed. Both final builds passed. Source/configuration checks passed again.
- The exact final Release EXE and generated batch passed real-window smoke tests
  in `build/logging smoke & paths 20261031-211526/`. Default and explicit-zero
  logging created no log files; batch opt-in produced all three nonempty files.
  Each case reached the v0.9.5 game window, restarted via ESC into a different
  process, and closed normally. Verified startup appeared in the restarted logs.
  Paths containing spaces/ampersands and a different working directory passed.
- File/ProductVersion: **0.9.5**. Release has no PDB file or PE CodeView reference.
- Final EXE: **45,612,544 bytes**, SHA-256
  `EA700C9CFB27D68F901789DF0BBB236FB15F7D05634F15D6194674F0FE68291A`.
- Deployed EXE and generated batch to `H:\Projects\DOA1U\TEST`, both rehashed.
  The INI and all five save files were verified unchanged. Previous EXE/settings/
  saves and old logs are preserved in
  `.backups/final-v0.9.5-20261031-211559-806/`; old logs were archived, not discarded.
  Exact hashes and deployment details accompany the final smoke evidence.

Earlier v0.9.1 deployment hashes above are historical, not the final executable.
The final logging smoke tests execute real guest startup/restart, not full
Training/Arcade gameplay or physical A/V certification; prior user acceptance is
recorded separately above.
