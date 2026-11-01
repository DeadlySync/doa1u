# Read-only XISO storage core

`xiso_reader.cpp` and its C header implement a small metadata-only XDVDFS reader.
They are project-owned code; no extract-xiso, XEMU or other third-party source has
been copied or adapted into this component. There is no new vendored dependency
or third-party license payload. Format references used during investigation:

- [XboxDev/extract-xiso](https://github.com/XboxDev/extract-xiso/blob/master/extract-xiso.c)
- Local toolkit format notes: `../xboxrecomp/docs/formats/disc-image.md`

The existing Xbox API remains the integration boundary. This reader deliberately
does not implement drive mappings, guest handles, file positions, NTSTATUS,
completion callbacks, saves, or movie decoding. `xbox_image_file.cpp` supplies
the file adapter below; `disc_bootstrap.cpp` integrates startup and the Sofdec
wrapper now uses the same native Xbox API. Gameplay integration remains a later stage in
[the checklist](../../docs/xiso-implementation-checklist.md).

Mount validates both descriptor signatures, bounds, record boundaries, directory
link connectivity, duplicate normalized paths and repeated directory extents.
All parsing is iterative and resource-bounded. The immutable index includes empty
directories. Lookup uses ASCII case folding, preserves original byte names, and
does not depend on host locale. Supported partition-base probes are listed in
the reader; arbitrary raw/compressed/split image containers are not implemented.
Limits are explicit in the public header, with a distinct limit-exceeded result.

Reads use independent Win32 OVERLAPPED operations/events on a read-only handle.
No shared seek pointer or payload preload is used. The image cannot be concurrently
opened for writing while mounted. Callers must finish reads and discard borrowed
entries before unmount. The Xbox adapter owns per-open positions and mount
lifetime; this API does not expose fake native handles.

## Offline verification

```powershell
cmake --build build --config Debug --target xiso_reader_check
& .\build\Debug\xiso_reader_check.exe
# Optional: validates a supplied image and compares selected files (all SFDs,
# both XBEs and two command/data files) against an extracted folder.
& .\build\Debug\xiso_reader_check.exe 'path\game.xiso.iso' 'path\extracted'
# Add --full to compare every indexed file, streaming bounded chunks.
```

The fixture suite creates and removes its own temporary images, including a
sparse image larger than 4GiB. It does not launch the game or modify source images.
The check targets remain excluded from the default build. The reader is a private
dependency of `xbox_kernel`. Production startup now discovers and validates a
source before guest initialization; the deployed build is unchanged.

## Xbox file adapter ownership

`xbox_file.c` is the existing tracked `kernel_file.c` implementation, relocated
unchanged in Stage 2 and extended with internal image dispatch in Stage 3. It
retains the upstream Xbox API, Win32/POSIX host-file code, local FATX fixes and
virtual-disk routing. This file originates
from xboxrecomp; its MIT notice is retained in
[LICENSE.xboxrecomp.txt](LICENSE.xboxrecomp.txt). The no-import statement above
applies to the new XISO reader, not this retained kernel implementation.

`cmake/XboxFileBackend.cmake` replaces exactly one expected `kernel_file.c` source
on the existing `xbox_kernel` target. Public declarations and ABI remain unchanged;
the tracked bridge adds only the necessary internal image-handle routing. There
is no second competing implementation and no
upstream checkout modification. Configuration fails if ownership is ambiguous.

`xbox_disc_path.h` declares the internal classification seam implemented alongside
the existing symbolic-link resolver in `kernel_path.c`. Disc paths are not inferred
from host directories or `XBOX_TREE_GAME` (which also includes writable hard-disk
paths). Registered aliases take precedence over static drive meanings. Relative
names are explicitly deferred to the handle-aware adapter. Classification
does not create directories, fire translation hooks, open files or mount images.
The adapter uses it before host translation when an image is mounted.

## Read-only Xbox API routing (Stage 3)

`xbox_image_file.h/.cpp` is project-owned C++ with a private C interface, not a
replacement public Xbox API. Offline tests mount through that interface. Stage 4
connects startup; without a mount, folder-backed operation is retained.

- Disc paths and registered disc aliases use the immutable index. Missing image
  files never fall back to host files. Writable drives and aliases remapped to
  hard-disk storage stay host-backed. Counted ANSI paths and directory-root-relative
  opens are supported, with the existing 512-byte absolute path budget.
- Each open owns a cursor and directory enumeration state. Duplicate handles share
  this open object; independent opens do not. Reads and positions are 64-bit;
  byte counts, partial reads and EOF are reported through existing Xbox structures.
- Each handle is a real waitable Win32 event registered privately, not a pointer
  disguised as a HANDLE. The tracked bridge routes duplicate and size IOCTL calls
  before native file-only APIs, retains read/APC/event completion processing, and
  completes image directory requests. Guest-token exhaustion closes new objects.
- Handles and active calls retain shared ownership of the mount and OS event.
  Dismount removes only the device's current mount; existing opens (including
  relative opens through old roots) remain valid until their last owner is gone.
  Startup must keep the mount for the process lifetime (including F1 settings)
  and coordinate shutdown. ESC restarts into a new process, which remounts.
- Create/overwrite/delete/rename, write access and metadata mutations are rejected
  as read-only. File position is the supported mutable state. Basic, standard,
  network, internal and position file queries are implemented; directory queries
  support `XboxFileDirectoryInformation`, one entry per request, restart and
  ASCII `*`/`?` filters. Volume classes 1/3/4/5/7 describe a read-only XDVDFS disc
  with 2048-byte sectors. Unsupported classes/IOCTLs return errors.

The pre-existing synthetic bare `\Device\CdRom0` bridge handle and DVD
authentication responses are retained. This is filename-based disc access, not
an ATAPI/raw-sector emulator. No generated guest code, public kernel header,
bootstrap, Sofdec or pl_mpeg change is part of Stage 3.

Additional offline checks:

```powershell
cmake --build build --config Debug --target xbox_file_backend_check
python tools/check_xiso_backend.py build --self-test
$fixtureRoot = Join-Path (Resolve-Path build).Path ('xiso-backend-fixture-' + [guid]::NewGuid().ToString('N'))
New-Item -ItemType Directory -Path $fixtureRoot | Out-Null
& .\build\Debug\xbox_file_backend_check.exe $fixtureRoot
```

The native check links the selected production `xbox_kernel`, not a second copy
of the implementation. Only logging and the drive-link registry are mocked. The
fixture directory contains only temporary save/cache test data, never game data.

Image API and bridge checks (repeat with `Release`):

```powershell
cmake --build build --config Debug --target xbox_image_file_check
$fixtureRoot = Join-Path (Resolve-Path build).Path ('xiso-api-fixture-' + [guid]::NewGuid().ToString('N'))
& .\build\Debug\xbox_image_file_check.exe $fixtureRoot
# Optional full content comparison through the public Xbox APIs:
& .\build\Debug\xbox_image_file_check.exe "$fixtureRoot-full" 'path\game.xiso.iso' 'path\extracted'
```

The image check links the actual production file adapter and additionally compiles
actual tracked bridge function bodies into a headless guest-memory harness.
`tools/check_xiso_bridge.py` generates those bodies under `build`, failing if
their source boundaries change. Only guest registers/memory, logging, unrelated
thread-object bookkeeping and APC execution are mocked. Tests cover guest token
layout, duplicate/close/async bookkeeping, directory and read completion, native
waits, 64-bit size IOCTLs and full-handle-table cleanup. This is offline contract
coverage, not a substitute for Stage 6 gameplay/FMV verification.

## Bootstrap and executable identity (Stage 4)

`disc_bootstrap.h/.cpp` owns the main-thread startup/shutdown policy. With a NULL
directory argument it uses `GetModuleFileNameW`, not the current working directory.
It scans only the EXE directory for `.iso`/`.xiso` extensions, case-insensitively.
Multiple candidates fail with every candidate logged. An invalid candidate fails
without falling back to extracted files. No candidate selects adjacent extracted
`Doa1.xbe`; no image filename or XBE filename setting is introduced.

The hardcoded root `Doa1.xbe` must be a file with valid header, image, section and
certificate bounds, title ID `0x54430006`, and supported complete-XBE SHA-256
`8d4c14a7443f6d3aca4577fde7759abbb9863aeb97833f7f8af0054b59d40787`.
The same rules apply to extracted mode. Windows' system BCrypt SHA-256 provider
hashes the original buffer once, before guest memory/import patching; that exact
buffer initializes memory. Acquisition is capped at 64 MiB. The whole ISO is not
hashed, and there is no game-file dependency at CMake configuration time.

Image acquisition uses `doa1u_image_load_file`, which pins the existing adapter
mount/index. There is no second mount or separate bootstrap index. Startup errors
log the full source path/reason; structurally valid identity mismatches log expected
and actual IDs/hashes. Failed startup releases its mount and buffer. Normal shutdown
releases the bootstrap owner; outstanding adapter handles/reads still pin their
own shared ownership. Saves/settings retain the existing EXE-relative paths.

F1 opens graphics/resolution/controller settings and never calls bootstrap again.
ESC uses the existing fresh-process restart: the new process discovers, mounts,
indexes and verifies anew. No mount state is shared between processes.

```powershell
cmake --build build --config Debug --target disc_bootstrap_check doa1u_recomp
$fixtureRoot = Join-Path (Resolve-Path build).Path ('xiso-bootstrap-' + [guid]::NewGuid().ToString('N'))
& .\build\Debug\disc_bootstrap_check.exe $fixtureRoot 'path\Doa1.xbe' 'path\game.xiso.iso'
# Repeat with Release and a new fixture root. The optional real-image argument
# creates a read-only-use hard link under the fixture root (same volume needed).
```

These tests never run guest code. They cover both source modes, wrong ID/hash,
malformed structures, case-insensitive root lookup, ambiguity, no silent fallback,
nonrecursive discovery, writable host saves, mount/handle cleanup and fresh-process
rediscovery/revalidation. A copied headless probe tests the production NULL-directory
path from a different CWD. Physical coverage is recorded separately from these tests.
Stage 5 now redirects FMV acquisition through the native Xbox API; see the
[FMV README](../fmv/README.md). Complete movie acquisition and BGR/PCM parity pass
offline in Debug/Release and both source modes. Stage 6's full automated gate now
passes in both modes. The user accepted the relocated image-only build for final
release v0.9.5; the sign-off does not claim an exhaustive physical test matrix. See the
[integration results](../../docs/xiso-integration-results.md).
