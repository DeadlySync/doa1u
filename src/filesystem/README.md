# Image-backed Xbox filesystem

The final backend keeps xboxrecomp's **public Xbox file API** and selects one
project-owned implementation through CMake. No external runtime source is edited.
The retained host implementation derives from xboxrecomp under MIT; see
[LICENSE.xboxrecomp.txt](LICENSE.xboxrecomp.txt). The read-only reader/adapter and
bootstrap are project-owned code; no extract-xiso or Xemu source was imported.

## Components

| File | Responsibility |
| --- | --- |
| `xiso_reader.h/.cpp` | C-compatible, read-only XDVDFS mount/index/lookup/enumeration/explicit-offset reads |
| `xbox_disc_path.h` | Internal disc/host/relative classification, using existing path/link resolution |
| `xbox_file.c` | Existing host/FATX/virtual-disk behavior plus mounted-image dispatch |
| `xbox_image_file.h/.cpp` | Private mount registry, per-open state, Xbox operation routing and handle lifetimes |
| `disc_bootstrap.h/.cpp` | EXE-relative discovery, supported XBE identity, verified data and process lifetime |

`cmake/XboxFileBackend.cmake` replaces exactly one expected `kernel_file.c` source
on the existing `xbox_kernel` target. Configuration fails if ownership is missing,
duplicated or unauditable. Other sources, public headers/signatures and guest ABI
remain unchanged. Tracked bridge overrides route image handles only where needed.

## Discovery and identity

Startup searches **only beside the EXE**, using `GetModuleFileNameW`, for
case-insensitive `.iso`/`.xiso` extensions. Double extensions work. Multiple
candidates fail and are logged; an invalid candidate never silently falls back
to extracted files. No candidate selects adjacent extracted `Doa1.xbe`/assets.

The root executable name is hardcoded as **`Doa1.xbe`**. In both source modes,
startup checks file/header/image/section/certificate bounds, the certificate title
ID and complete original-XBE SHA-256:

```text
Title ID: 0x54430006
XBE size: 4,354,048 bytes
SHA-256:  8d4c14a7443f6d3aca4577fde7759abbb9863aeb97833f7f8af0054b59d40787
```

System BCrypt hashes that original buffer once; the same verified bytes initialize
guest memory before import patching. Acquisition is capped at 64 MiB. The whole
image is not hashed or preloaded, and no game file is required at CMake time.
Image bootstrap pins the adapter-owned index rather than creating a second mount.

F1 retains the existing mount while settings are open. ESC starts a fresh process
which rediscovers, reindexes and revalidates. Failed bootstrap releases its owned
mount/buffer. Normal shutdown releases the bootstrap owner; outstanding adapter
handles/reads retain their shared ownership until finished.

## Reader behavior

The reader parses bounded little-endian XDVDFS metadata into an immutable full-
path index, preserving original byte names with ASCII case-insensitive lookup.
Directories, including empty ones, are indexed. Indexing happens once per mount,
not on every file read. There is no persistent index cache or compiled sector map.

Validation rejects malformed descriptors/footers, invalid directory links/order,
cycles/shared children, duplicate names, invalid names and out-of-image extents.
Entry/metadata/table/depth/path limits are explicit in `xiso_reader.h` and produce
a distinct limit error. Unsupported compressed/split containers are not implemented.

Reads use a read-only Win32 handle and independent OVERLAPPED offsets/events,
not a shared seek pointer. Concurrent reads are supported while the caller keeps
the mount alive. Direct reader callers must finish calls and release borrowed
entries before unmounting; the Xbox adapter enforces its own shared ownership.
The mounted image cannot be opened concurrently for writing.

## Xbox operations and writable storage

- Disc/device paths and registered disc aliases use the image index. Missing
  image files never fall through to host decoys. Drive aliases explicitly remapped
  to writable hard-disk storage remain host-backed.
- Existing counted ANSI paths, relative opens through directory handles and the
  resolver's 512-byte absolute-path budget are retained. Image discovery supports
  wide filenames; other preexisting host path conventions are not reimplemented.
- Every open has position/directory state. Independent opens have independent
  cursors; duplicates share the open object. Sizes, offsets and seeks are 64-bit.
- Handles are real waitable Win32 events in a private registry. The bridge retains
  guest tokens, waits and existing completion/APC/event behavior. Handle-table
  exhaustion and failed outputs clean up newly opened objects.
- Dismount prevents new absolute opens against that mount, but old handles and
  root-relative opens retain access until their last owner is gone.
- Read, size/attributes/position, directories/restart/filter, volume/geometry and
  supported device-size queries are routed. Directory queries return one entry
  per request. Unsupported information/IOCTL classes return errors.
- Create/overwrite/write/delete/rename/metadata mutation of disc files are rejected;
  setting an open file's position is supported. Ordinary saves/settings/cache
  retain host-backed EXE-relative paths; raw partition probes stay virtual/fileless.

The preexisting bare CdRom handle/DVD authentication responses are retained.
This is filename-based disc access, not an ATAPI/raw-sector emulator. Movie
acquisition uses the same native Xbox API; see [FMV](../fmv/README.md).

## Checks

See [verification](../../docs/verification.md) and the
[regression inventory](../../tools/REGRESSION_TESTS.md). The complete native-reader
and Xbox-API comparisons passed for all 289 files / 4,386,916,844 payload bytes in
Debug and Release, alongside malformed fixtures, identity/lifetime/completion and
writable-host compatibility tests. The reusable checks and baseline metadata remain.
