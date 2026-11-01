# XISO implementation checkpoints

Approved design: [xiso-backend-plan.md](xiso-backend-plan.md).
Work in self-contained stages, verify each stage, and pause before starting the next.
Do not deploy until integration checks pass. Existing folder-backed gameplay stays intact.

## Stages

- [x] **1. Read-only storage core.** Add a C-compatible C++ XDVDFS reader: validated mount, immutable case-insensitive index, lookup, directory enumeration, explicit-offset bounded reads, and deterministic cleanup. Add an isolated CMake test target and meaningful synthetic/malformed-image tests; validate against the local image without launching the game. No Xbox routing or startup changes yet.
- [x] **2. CMake ownership and adapter seam.** Select the project-owned Xbox file implementation exactly once; preserve the public Xbox API and existing host-file/virtual-disk behavior. Add internal disc classification and storage linkage. Verify Debug/Release source selection without changing gameplay routing prematurely.
- [x] **3. Xbox API image routing.** Implement read-only image open/read/position/query/directory/volume operations, relative paths, duplicate/close lifetimes and bridge interoperability. Preserve completion behavior and writable host drives. Verify offline API contract tests.
- [x] **4. Bootstrap and automatic image discovery.** Search beside the EXE like the INI config; keep `Doa1.xbe` hardcoded and require its root-file presence, valid XBE/certificate structure, expected title ID and supported full-XBE SHA-256 in both source modes. Fail/log incorrect or ambiguous images and identity mismatches; retain extracted-folder mode when no image exists. Preserve saves, retain the mount while F1 opens graphics/resolution/controller settings, and remount/revalidate on fresh-process ESC restarts. Verify startup offline before physical testing.
- [x] **5. FMV acquisition.** Preserve Xbox movie paths and use the native Xbox file API in our Sofdec wrapper. Keep pl_mpeg and current buffered decoding behavior unchanged. Verify file/decode parity.
- [x] **6. Integration and deployment gate.** Run complete content comparisons, backend/API/lifetime/identity checks, Debug/Release builds and FMV parity checks. Then coordinate user tests for startup/FMVs, Training, Arcade/endings, save/load, F1 settings and ESC restart in both modes. Deploy only after automated checks pass. Accepted for final release by the user; detailed coverage remains distinguished from general sign-off in the results.

## Resume record

- 2026-10-31: Checklist created before implementation. Stage 1 starting; later stages intentionally pending.
- Each completed stage must record changed files, verification commands/results, limitations, and the next exact action here.
- Pauses are user-requested checkpoints, not blockers or permission to silently begin the next stage.
- 2026-10-31, after Stage 3: User revised Stage 4 to hardcoded `Doa1.xbe` plus automatic image discovery beside the EXE. The initial presence-only identity rule is superseded by the correction below. Stage 4 remains pending.
- 2026-10-31, latest correction: User requested **both certificate title-ID and full-XBE SHA-256 checks**, in addition to filename/structural checks. The measured local baseline is title ID `0x54430006`, SHA-256 `8d4c14a7443f6d3aca4577fde7759abbb9863aeb97833f7f8af0054b59d40787` (4,354,048 bytes). **ESC restarts in a fresh process; F1 opens the launcher/settings for graphics, resolution and controllers.** The earlier F1-restart description was incorrect. Discovery/identity rules and test gates are corrected in the design. Plan updates only; remain paused before Stage 4.

### Stage 1 complete — 2026-10-31

Changed files:

- `src/filesystem/xiso_reader.h`, `xiso_reader.cpp`, `README.md`: C-compatible read-only storage core and ownership/lifetime documentation. No third-party source imported.
- `cmake/XisoReader.cmake`, `CMakeLists.txt`: excluded-from-default-build static library and offline test target. Neither is linked into the game/Xbox kernel yet.
- `tools/xiso_reader_check.cpp`, `xiso_reader_c_check.c`, `.gitignore`: repeatable offline regression plus actual C compilation/linkage coverage; tools explicitly unignored.
- This checklist and approved design status updated. No game launch, deployment, commit, or push performed.

Verification (run from `doa1u_port`):

```powershell
cmake --build build --config Debug --target xiso_reader_check
& .\build\Debug\xiso_reader_check.exe '..\Dead or Alive 1 Ultimate (USA, Japan) (En,Ja).xiso.iso' '..\XISO' --full
cmake --build build --config Release --target xiso_reader_check
& .\build\Release\xiso_reader_check.exe
python tools/check_build_configs.py build
cmake -DDOA1U_DIAGNOSTIC=OFF -P tools/check_source_config.cmake
```

Results:

- Both test targets build with `/W4 /WX`; Debug uses `/Od /Ob0`, Release `/O2 /Ob2`. Build-config checker passes all 33 generated projects; existing source-selection check passes.
- Debug full-image check: **5,167 checks passed**, including byte-for-byte comparisons of **all 289 files** (4,386,916,844 payload bytes) with extracted originals. All XBEs and all six SFDs included.
- Native mount observation: **1.693ms**, 289 files, **9 directories including root**, **22,848 metadata bytes read**. Cache state uncontrolled; not a cold-storage guarantee. This is the native reader's exact read count, distinct from the earlier Python benchmark.
- Release synthetic suite: **186 checks passed**. Both modes include **8,000 concurrent reads**, >4GiB sparse extents, prefixed partitions, EOF/partial/zero-length reads, original casing/full-path keys, zero-sized and FF/zero-filled empty directories, multi-sector tables, 255-byte names, depth/path limits, read-only sharing and failed-mount cleanup.
- Malformed fixtures cover descriptor/footer corruption, truncated tables, extent bounds, tree cycles/shared children, invalid pointers/order, unreachable entries, duplicate paths, invalid names and directory aliases/cycles.

Known boundaries:

- Win32, read-only, byte names with ASCII case folding. No compressed/split container support or persistent index cache. Explicit metadata/depth/path limits are documented in the public header and return a distinct limit error.
- Concurrent calls are supported while mounted; callers must finish calls and release borrowed entries before unmount. The future adapter must own per-open positions and mount lifetime.
- Public Xbox API routing, bridge handles, game bootstrap and FMV access have **not** changed. Full gameplay/decode parity validation remains Stage 6.

Stage 1's resume action was Stage 2; completed below.

### Stage 2 complete — 2026-10-31

Changed files:

- Moved `src/xboxrecomp/src/kernel/kernel_file.c` to **`src/filesystem/xbox_file.c`**, preserving its content exactly (compared with the committed override, ignoring line-ending representation only). Existing Win32/POSIX implementation, public Xbox API, FATX behavior and virtual-disk routing are retained.
- Added `cmake/XboxFileBackend.cmake`; integrated it after the storage-core target is defined. It replaces exactly one expected upstream file source on the existing `xbox_kernel` target, links `doa1u_xiso_reader` privately, and preserves the other target sources/options/headers. Upstream checkout unmodified; no competing file implementation is compiled.
- Added internal `src/filesystem/xbox_disc_path.h`, implemented alongside the existing link resolver in tracked `kernel_path.c`. Pure classification distinguishes disc/host/handle-relative/invalid paths. Registered drive mappings take precedence. Writable hard-disk paths are NOT classified as disc merely because the old classifier calls them GAME. It does not open/mount anything or alter existing file-open routing.
- Added `tools/xbox_file_backend_check.c` (explicitly unignored), linked against the actual selected `xbox_kernel`, and `tools/check_xiso_backend.py` (covered by the existing check-tool ignore exception).
- Updated filesystem/source documentation and retained xboxrecomp's MIT notice as `src/filesystem/LICENSE.xboxrecomp.txt` for the relocated implementation.

Verification:

```powershell
cmake --build build --config Debug --target xbox_file_backend_check
cmake --build build --config Release --target xbox_file_backend_check
python tools/check_xiso_backend.py build --self-test
python tools/check_build_configs.py build
cmake -DDOA1U_DIAGNOSTIC=OFF -P tools/check_source_config.cmake
# For EACH configuration, use a new empty fixture directory:
$fixtureRoot = Join-Path (Resolve-Path build).Path ('xiso-backend-fixture-' + [guid]::NewGuid().ToString('N'))
New-Item -ItemType Directory -Path $fixtureRoot | Out-Null
& .\build\Debug\xbox_file_backend_check.exe $fixtureRoot
# Repeat with a new directory and build\Release\xbox_file_backend_check.exe.
```

Results:

- Selected production backend and compatibility executable build/link in **Debug and Release**. Both final native runs pass **74 checks**: disc/device-prefix boundaries, case/separators, root/relative names, dynamic mappings (including D: remapped to writable storage), chained/cyclic/unsupported links, bounded output and invalid paths.
- Real host API checks pass save write/reopen, native RootDirectory-relative opens, deferred FATX regrow retaining underlying bytes, and ordinary overwrite truncation. Virtual partition-table reads, cross-page write/read, duplicate lifetime and host volume geometry pass; no partition image files are created.
- Generated MSVC project check confirms exactly one `xbox_file.c`, no compiled `kernel_file.c`, one bridge/path/virtual-disk source each, and one storage-core dependency in Debug/Release.
- Seven isolated CMake selector cases pass: valid absolute/relative sources accepted; missing, duplicate, wrong-location, repeated selection and unauditable generator-expression sources rejected.
- Build-configuration check passes **34 projects**, preserving Debug `/Od /Ob0` with symbols and Release `/O2 /Ob2` without PDB generation. Existing source-selection check passes (127 game sources). `git diff --check` passes.

Boundaries and pause:

- No Xbox public header, guest bridge, generated guest source, startup or FMV change. Disc classification is **not yet used by file opens**. Internal path budget is currently the existing resolver's 512-byte budget; handle-relative paths must be resolved against handle type in Stage 3.
- No game launch, full game executable build, deployment, commit or push. Tests write only newly-created build-local fixtures. Existing deployed Release v0.9.1 remains untouched.

Stage 2's resume action was Stage 3; completed below.

### Stage 3 complete — 2026-10-31

Changed files:

- Added private C-compatible `src/filesystem/xbox_image_file.h/.cpp`, compiled into the existing `xbox_kernel` target. It owns mount lifetime, registered waitable OS events, per-open shared objects/cursors and directory state. No public Xbox declaration or generated guest code changed.
- Extended `src/filesystem/xbox_file.c` with image dispatch before the existing host/virtual-disk implementations: open/read/write rejection, file and volume queries, position updates, directory enumeration, full attributes, delete/rename rejection, flush and device size/geometry. Missing image names cannot fall back to host decoys. Host-backed writable drives and registered remappings remain intact.
- Audited the tracked guest bridge's direct native handle uses and waits. `kernel_bridge.c` now routes image duplicate/device-size requests through the adapter, retains async tracking on duplicates, consumes managed close-source tokens, completes image directory events/APCs and releases new objects when guest-token allocation fails. Image opens also reject invalid/missing output slots without leaking the new object. Existing synthetic bare DVD device/authentication behavior is unchanged.
- Added `tools/xbox_image_file_check.cpp`; CMake links the actual selected production backend. `tools/check_xiso_bridge.py` extracts actual tracked bridge bodies into a build-local headless harness, with mocked guest memory/registers, logging, unrelated thread objects and APC execution. Existing source-selection checker now also requires exactly one image adapter. Updated source/filesystem documentation.

Verification (from `doa1u_port`):

```powershell
cmake --build build --config Debug --target xbox_image_file_check xbox_file_backend_check
cmake --build build --config Release --target xbox_image_file_check xbox_file_backend_check
# EACH execution uses a new build-local fixture root; no game launch.
$fixtureRoot = Join-Path (Resolve-Path build).Path ('xiso-api-fixture-' + [guid]::NewGuid().ToString('N'))
& .\build\Debug\xbox_image_file_check.exe $fixtureRoot '..\Dead or Alive 1 Ultimate (USA, Japan) (En,Ja).xiso.iso' '..\XISO'
# Repeat with a new root and build\Release\xbox_image_file_check.exe.
# Also run xbox_file_backend_check.exe in each config with a fresh existing directory.
python tools/check_xiso_backend.py build --self-test
python tools/check_build_configs.py build
cmake -DDOA1U_DIAGNOSTIC=OFF -P tools/check_source_config.cmake
git diff --check
```

Results:

- **Debug and Release: 5,778 image/API/bridge checks passed per configuration**, including **all 289 files / 4,386,916,844 bytes** read via the actual public Xbox APIs and compared byte-for-byte with extracted files. All six SFDs and both XBEs included; no decoder changes involved.
- Synthetic checks cover case/device paths, counted non-NUL names, relative opens after closing parent roots, independent and duplicated/shared cursors, 64-bit seeks, >4GiB extents, EOF/partial/zero reads, query lengths/attributes/timestamps, share conflicts, directory short-buffer retries/restart/filters/sticky EOF, volume/geometry/64-bit partition size, read-only mutations and host fallback decoys.
- **8,000 reads from eight threads across dismount** pass per run; old root-relative opens remain valid after dismount, and final close releases the image's write-sharing lock. Active adapter calls pin their shared handle/mount ownership; callers must not start new operations using already-closed handles. A deterministic scheduler-forced close-during-read race is not injected by this harness.
- Guest bridge harness verifies 32-bit status/count layout, fresh duplicate tokens/shared cursor, close-source/async bookkeeping, native waitable events, deferred APC queue arguments and inline completion, image directory completion, image IOCTL routing and full guest-handle-table cleanup without native-handle growth. Actual guest callback execution/gameplay remains Stage 6.
- Existing selected-backend compatibility suite remains **74 checks passed in both Debug and Release**, covering writable saves, host-relative paths, FATX deferred regrow/ordinary truncation and virtual partition devices. Mounted-image save writes and D: remapping to host storage also pass the new suite.
- CMake source uniqueness and all **seven selector cases pass**. The isolated selector compiler-detection check required execution outside the sandbox; it passes with the installed MSVC toolchain. Build-config checker passes **35 projects**, retaining Debug `/Od /Ob0` and symbols, Release `/O2 /Ob2` without PDBs. Production bridge and adapter compile in both configurations. Source check passes 127 game sources; `git diff --check` passes.

Boundaries and pause:

- No production startup mount/selection, executable identity validation, launcher/UI change, FMV acquisition or decoder change yet. Consequently normal game launches still use the extracted folder. The mount interface is internal and exercised only by offline tests until Stage 4.
- Win32 read-only filename API, ASCII case folding, existing 512-byte absolute path budget, directory class 1/single-entry iteration. No ATAPI/raw-sector emulation, new persistent index cache or arbitrary container support. Existing native-host and in-memory raw hard-disk device paths are retained.
- No full game executable build, game launch, deployment, commit or push. Existing deployed Release v0.9.1 remains untouched. All test writes are newly-created build-local fixtures; original image and extracted game files are read only.

Stage 3's resume action was Stage 4; completed below.


### Stage 4 complete — 2026-10-31

Changed files:

- `src/filesystem/disc_bootstrap.h/.cpp`: main-thread C-compatible startup owner, nonrecursive EXE-directory discovery via `GetModuleFileNameW`, root `Doa1.xbe` acquisition, bounded structural validation, certificate title-ID check and full-original-XBE SHA-256 via the Windows system BCrypt provider. Expected identity is embedded in source; no game file is a CMake input.
- `src/filesystem/xbox_image_file.h/.cpp`: internal bounded bootstrap acquisition pins and reuses the adapter's existing mount/index, without requiring initialized guest memory or mounting twice.
- `src/main.c`: replaces the old stdio loader with bootstrap before memory initialization, initializes memory from the same verified buffer, and releases the bootstrap owner on memory-init failure or normal shutdown. Host saves/settings stay beside the EXE. Existing F1 settings and ESC fresh-process restart handlers are unchanged.
- `CMakeLists.txt`, `cmake/XboxFileBackend.cmake`: compile bootstrap once into the selected kernel, link system `bcrypt`, add the excluded offline `disc_bootstrap_check` target. `tools/check_xiso_backend.py` additionally verifies bootstrap source uniqueness in Debug/Release.
- `tools/disc_bootstrap_check.cpp`, `.gitignore`: repeatable offline discovery, identity, ownership and fresh-process checks. Documentation and this resume record updated.

Verification (from `doa1u_port`):

```powershell
cmake --build build --config Debug --target disc_bootstrap_check xbox_image_file_check xbox_file_backend_check doa1u_recomp
cmake --build build --config Release --target disc_bootstrap_check xbox_image_file_check xbox_file_backend_check doa1u_recomp
# EACH execution needs a fresh absolute fixture root; repeat with Release.
$fixtureRoot = Join-Path (Resolve-Path build).Path ('xiso-bootstrap-' + [guid]::NewGuid().ToString('N'))
& .\build\Debug\disc_bootstrap_check.exe $fixtureRoot '..\XISO\Doa1.xbe' '..\Dead or Alive 1 Ultimate (USA, Japan) (En,Ja).xiso.iso'
# xbox_image_file_check: a DIFFERENT fresh root, no game arguments for synthetic regression.
# xbox_file_backend_check: a DIFFERENT fresh root, create that directory first.
python tools/check_xiso_backend.py build
python tools/check_build_configs.py build
cmake -DDOA1U_DIAGNOSTIC=OFF -P tools/check_source_config.cmake
git diff --check
```

Results:

- Full game executable and offline targets **build/link in Debug and Release**. Debug retains `/Od /Ob0` and symbols; Release retains `/O2 /Ob2` without PDB generation. Build-config check passes **36 projects**, backend/bootstrap source uniqueness passes, and existing source-selection check passes **127 game sources**.
- **352 bootstrap checks passed in each configuration**. Both image and extracted modes accept the measured baseline and return the exact original 4,354,048 bytes. Real original-image discovery/acquisition succeeds using a build-local hard link, without copying/extracting the image or writing its payload.
- Both source modes reject truncated/malformed headers, certificate pointers/sizes, section tables/extents, wrong title IDs, and modified XBEs retaining the correct title ID but an unknown SHA-256. Errors log the full selected source and reason; valid-structure identity logs include expected/actual ID and hash. Failed image validation releases the mount, allowing the next valid source to open.
- Discovery tests cover mixed-case root filename, `.iso`/`.xiso`/double extensions, multiple candidates, wrong/missing root XBE, root XBE that is a directory, ignored nested images and image-named directories, and invalid image rejection despite valid adjacent extracted files.
- Headless subprocess probes verify repeated fresh-process discovery plus changed-XBE rejection after relaunch. A copied test EXE exercises the production NULL-directory path from a **different CWD**. These validate the process boundary used by ESC, not actual UI key delivery or the guest restart sequence.
- Bootstrap-owned mounts are shared by actual public Xbox APIs; outstanding handles survive release of the bootstrap owner and final close releases the image's sharing lock. Writes remain ordinary host save files under the supplied EXE-directory root in both modes, including a Unicode fixture directory.
- Existing image/API/bridge synthetic suite: **218 checks plus 8,000 concurrent reads across dismount** per configuration. Existing host/FATX/virtual-disk suite: **74 checks per configuration**. Stage 3's all-289-file/full-payload parity result remains the prior full-content verification; this stage does not repeat that 4.39 GB scan.

Boundaries and pause:

- No game launch, gameplay assertion, deployment, commit or push. Deployed Release v0.9.1 is unchanged. The test-only fresh-process probes are console programs and never execute the game/guest.
- No FMV acquisition or decoder changes. Image-only gameplay is not ready for deployment until Stage 5 redirects the Sofdec wrapper's host stdio reads, followed by Stage 6 integration gates.
- Main's preexisting host path/log setup still uses ANSI/MAX_PATH conventions; discovery/XBE acquisition itself uses wide Win32 paths. Existing Xbox host-path limits are not expanded by this stage. Only the measured supported title-ID/hash pair is accepted; other executable revisions require an explicit verified source update.
- F1 settings do not rediscover/remount. ESC terminates the old process and the new process mounts/indexes/verifies once; abrupt process termination relies on OS handle cleanup, as before. Actual F1/ESC gameplay and callbacks remain Stage 6 physical tests.

Stage 4's resume action was Stage 5; completed below.


### Stage 5 complete — 2026-10-31

Changed files:

- `src/fmv/fmv.c`: preserves the full original Xbox movie path (drive/device and separators), instead of stripping the prefix and opening a CWD-relative host file. Rejects unterminated/truncated/unmapped guest strings without reading past the guest-memory edge. Movie-ID lookup, rectangle, sequencing, audio clock/control and guest-return behavior are otherwise unchanged.
- `src/fmv/sofdec_io.h/.c`: private acquisition helper using native Xbox `NtCreateFile`, `NtQueryInformationFile`, `NtReadFile` and `NtClose`, with no guest thunks, public filesystem API replacement or stdio redirection macro. Read-only synchronous open, 64-bit size validation, existing 512 MiB cap, explicit-offset chunks up to 1 MiB, positive short-read support and failure cleanup/output reset.
- `src/fmv/sofdec.c/.h`: calls the acquisition helper; original demux/ADX/frame bodies remain identical. Uses pl_mpeg's existing `PLM_NO_STDIO` configuration to exclude unused host-file entry points. The third-party header itself is untouched; decoding remains fully memory-buffered.
- `cmake/SofdecChecks.cmake`, `CMakeLists.txt`, `.gitignore`: compile acquisition into the game and add excluded headless targets `sofdec_io_check`, `fmv_path_check` and `sofdec_check`.
- New check sources and `tools/check_sofdec_parity.py`: fault-injected acquisition, actual movie-start path wrapper, production-backend acquisition/decode manifests and baseline comparison.
- `docs/reference/sofdec-baseline.json`, `.md`: payload-free output baseline measured using the legacy stdio decoder snapshot before editing production acquisition. Source provenance/digest, toolchain and digest definition retained. New FMV README plus plan/filesystem/source/checklist status updated.

Verification (from `doa1u_port`):

```powershell
cmake --build build --config Debug --target sofdec_io_check fmv_path_check sofdec_check doa1u_recomp
cmake --build build --config Release --target sofdec_io_check fmv_path_check sofdec_check doa1u_recomp
# Repeat the following with Release and separate manifest paths:
& .\build\Debug\sofdec_io_check.exe
& .\build\Debug\fmv_path_check.exe
& .\build\Debug\sofdec_check.exe folder '..\XISO' build/stage5-debug-folder.json
& .\build\Debug\sofdec_check.exe image '..\Dead or Alive 1 Ultimate (USA, Japan) (En,Ja).xiso.iso' build/stage5-debug-image.json
python tools/check_sofdec_parity.py docs/reference/sofdec-baseline.json build/stage5-debug-folder.json build/stage5-debug-image.json build/stage5-release-folder.json build/stage5-release-image.json
python tools/check_xiso_backend.py build
python tools/check_build_configs.py build
cmake -DDOA1U_DIAGNOSTIC=OFF -P tools/check_source_config.cmake
git diff --check
```

Results:

- Full game executable and all new check targets **build/link in Debug and Release**. Debug retains `/Od /Ob0` with symbols, Release `/O2 /Ob2` without PDB generation. Configuration checker passes **40 current generated projects (including the build-local legacy reference probe)**; source selection passes **128 game sources** and backend/bootstrap uniqueness remains correct.
- **204 native acquisition checks / 23 scenarios** and **43 actual movie-wrapper path/register/boundary checks** pass in each configuration. Scenarios include open/query/read/close failures, partially returned open handles, error/pending/inconsistent I/O status, directory/zero/negative/oversize size queries, short/inconsistent query counts, 1 MiB chunk boundaries, repeated positive short reads, zero progress, premature EOF, bad byte counts and output/close cleanup. Allocation failure is handled but not explicitly fault-injected.
- All four manifests (**Debug/folder, Debug/image, Release/folder, Release/image**) exactly match the pre-change baseline. Five complete acquired SFD payloads (**593,889,280 bytes per manifest**) match SHA-256; the sixth (`DOA2/doa2_op.sfd`, 553,394,176 bytes) retains the prior expected >512 MiB rejection. No game data was extracted or modified.
- Opening movie: **2,174 frames**, 320x176 at 29.97 fps, 44,100 Hz stereo, **3,228,855 samples/channel**. Ending: **2,901 frames**, 288x224 at 29.97 fps, same audio format, **4,259,968 samples/channel**. All defined B/G/R bytes from every frame and all PCM samples match the legacy stdio decoder, not just selected frames/statistics.
- The first full-BGRA digest comparison correctly exposed **preexisting unwritten alpha bytes** in pl_mpeg's conversion. The test now packs/hashes every B/G/R byte and excludes alpha; the legacy reference was rerun using that same test-only definition. No production frame mutation, alpha fix, decoder change or relaxed color/PCM comparison was applied.
- Local XBE movie-table inspection confirms IDs 19/20 use `d:\doa1\ss_opn.sfd` and `d:\doa1\ss_end.sfd`. A probe initially used `D:/`, which the existing native host prefix translator does not recognize; the probe was corrected to the game's native `D:\` prefix, not by changing the public API. Full drive/device paths stay intact. Host-folder reads now work independently of the process CWD.
- Direct source comparison against `build/stage5-reference/sofdec_reference.c` verifies demux/ADX/frame bodies unchanged. Wrapper host-stdio calls are removed; the third-party pl_mpeg header is not edited. `git diff --check` passes.

Boundaries and pause:

- No game launch, physical A/V/controller/UI/restart test, deployment, commit or push. Deployed Release v0.9.1 remains unchanged. Headless tests do not execute guest code or open a window/audio device.
- The current full-movie memory buffering and 512 MiB cap are intentional existing behavior. Extra DOA2 file acquisition coverage is not a claim of DOA2 gameplay/decoder support.
- Alpha bytes remain unspecified as before; the BGR/PCM parity result is not an alpha-initialization or renderer-blending guarantee. Guest thunks/callback execution, timing, skip behavior and physical synchronization remain Stage 6.
- Existing host path limits/prefix rules, save paths and F1/ESC implementation are unchanged. No new public Xbox API or third-party source/license dependency was introduced.

Stage 5's resume action was Stage 6; authorized and in progress below.

### Stage 6 complete — automated gate passed; user final acceptance — 2026-10-31

- [x] Review the Stage 1–5 implementation and build the complete game and all
  offline checks in Debug and Release.
- [x] Run complete content/backend/API/lifetime/identity, source/configuration and
  movie-parity gates. **All 21 commands passed**. Each configuration passed 5,167
  reader, 5,778 image/API/bridge, 74 host API, 352 bootstrap, 204 movie acquisition
  and 43 actual movie-path checks. All 289 files / 4,386,916,844 payload bytes
  matched extracted originals through both the reader and Xbox APIs. Four movie
  manifests matched the pre-change BGR/PCM baseline exactly.
- [x] Add `tools/check_xiso_integration.ps1` (explicitly unignored) to reproduce
  the complete headless gate and record logs, exit codes, timings and build hashes.
  It does not build, deploy or launch the game. No production changes were needed
  after review; Debug/Release settings remain intact.
- [x] Deploy the verified Release EXE after automated success, preserving the
  previous executable/settings/saves/logs in
  `.backups/xiso-stage6-20261031-204820-558/`. Rehash both deployed EXEs against
  build SHA-256 `0DF33F6825118958979453818AC4BAEBF188AB0332B5606EE5E689587F235446`.
  Folder mode: `H:\Projects\DOA1U\XISO`; isolated image mode:
  `H:\Projects\DOA1U\XISO-Image`. No Release PDB deployed.
- [x] Prepare image-only testing without extracted assets: `disc.xiso` is a hard
  link to the unchanged original image; settings/saves/licenses were copied and
  are independent from the extracted deployment.
- [x] Launch the actual image-only game from a different working directory.
  Observed successful image discovery, expected XBE ID/hash verification, guest
  startup and opening movie completion (2,174 frames). No physical A/V quality
  claim follows from those logs.
- [x] Coordinate physical tests and obtain final user acceptance. The user tested
  the relocated image-only `TEST` deployment, reported "works great!", and
  requested v0.9.5 as the project's final build. This closes the acceptance gate
  by user sign-off; it does not fabricate itemized results for every requested
  physical case or a fresh folder-mode run. See the results for coverage limits.
- [x] Record final acceptance. No additional integration failure was reported.
  Prepare the requested v0.9.5 build and commit/push all project source changes.

Full commands, counts, limitations, test matrix and deployment details:
[integration results](xiso-integration-results.md). Machine evidence is under
`build/xiso-integration-20261031-204701-805/`; build logs are
`build/stage6-build-debug.log` and `build/stage6-build-release.log`.

**Final handoff:** all six stages complete. The earlier deferred-test handoff is
superseded by the user's final acceptance and explicit v0.9.5 commit/push request.
The active deployment is now `H:\Projects\DOA1U\TEST`, with exactly one adjacent
image, INI, UDATA/TDATA and licenses. Its image bootstrap and XBE identity checks
passed after relocation. No user game data was relocated or deleted by the agent.
See [project roadmap](roadmap.md) for delivered scope, user-confirmed B2–B5 closure
and out-of-scope features.
