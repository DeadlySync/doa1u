# XISO-backed file I/O: validated implementation plan

Status: **complete; accepted for final release v0.9.5**, 2026-10-31.
All six implementation stages are delivered. Startup selects image or
extracted-folder mode; movies use the same native Xbox file API. The complete
automated gate passes in Debug and Release. The user verified the relocated
image-only deployment in `TEST`, reported that it works great, and requested
the final release. This is an overall user sign-off, not a claim of separately
recorded results for every physical test case or historical bug.
Evidence and deployment details: [integration results](xiso-integration-results.md).
Progress and exact resume point: [implementation checklist](xiso-implementation-checklist.md).

## Stage 4 discovery rules — user correction, 2026-10-31

- Keep `Doa1.xbe` hardcoded in source as the root executable name. It is already
  hardcoded in `src/filesystem/disc_bootstrap.cpp`; do not add a configurable XBE name or substitute
  `default.xbe`.
- Discover the disc image beside the Windows executable, using the same
  executable-directory convention as `doa1u_graphics.ini`, independent of the
  current working directory. No mandatory command-line image path or file picker.
  Scan non-recursively for `*.xiso` and `*.iso`, covering names such as `.iso.xiso`
  and the existing `.xiso.iso`; do not hardcode the container filename.
- A single candidate must mount as valid XDVDFS and contain a root **file** named
  `Doa1.xbe` (case-insensitive lookup). **Latest user instruction: require both
  the expected certificate title ID and the SHA-256 of the complete XBE.** Root
  filename presence alone is no longer sufficient. Keep normal XBE
  format/length/section/certificate-bound checks before memory initialization.
  Apply the same identity checks to extracted-folder mode.
- Embed the supported identity as source constants, not a runtime-generated
  trust baseline or a CMake dependency on game files. The current verified local
  `Doa1.xbe` is **4,354,048 bytes**, certificate title **DOAU1**, title ID
  **`0x54430006`**, SHA-256:

  ```text
  8d4c14a7443f6d3aca4577fde7759abbb9863aeb97833f7f8af0054b59d40787
  ```

  Read the certificate address from XBE header offset `0x118`, convert its guest
  address using the image base at `0x104`, validate the certificate bounds and
  read its title ID at certificate offset `+0x08`. Hash the original complete
  XBE bytes already acquired for loading, before guest-memory/import patching;
  initialize memory from those same verified bytes. Do not hash the entire ISO,
  create a separate payload scan or accept an unknown hash merely because its
  title ID matches. Additional executable revisions require an explicitly
  validated supported title-ID/hash pair.
- Invalid candidate or missing `Doa1.xbe`: fail startup and log the candidate's
  full filename and reason. Identity mismatch also fails, logging expected and
  actual title ID/hash when available. Do not silently fall back to extracted files after
  finding an incorrect image. Multiple candidates: fail and log the filenames
  instead of choosing by filesystem enumeration order. With no image candidate,
  preserve the existing extracted-folder mode using adjacent `Doa1.xbe`.
- Keep saves/settings beside the EXE. **ESC restarts the game; F1 opens the
  launcher/settings panel** for graphics, resolution and controller changes.
  Opening the F1 panel does not restart or remount the disc. The ESC restart creates a **new
  process** (`src/runtime/soft_restart.c`), so discover/mount/index once per new
  process, including ESC restarts. Do not attempt to preserve pointers/handles
  across process termination. Retain one mount throughout each process lifetime.

### Why the XBE is still read

The Windows executable supplies the recompiled native functions; it does not
replace the original guest memory image. `src/main.c` acquires verified original
`Doa1.xbe` bytes through `disc_bootstrap` and passes that same buffer to
`xbox_MemoryLayoutInit`. The memory loader copies the header and
sections to their original Xbox addresses: constants, vtables/function-address
tables, initialized globals, library data, kernel imports and the TLS template.
It currently also copies original code sections for memory inspection; those
bytes are not the normal native execution path. Startup calls the compiled
`xbe_entry_point()`, not the XBE as a Windows executable. Stage 4 changes the
source of those bytes from an extracted file to the indexed image, without
extracting the XBE to disk. Removing that runtime dependency would require a
separate data-image packaging/refactoring effort, not just recompiling functions.

## Findings

- Existing Xbox API declarations, NTSTATUS structures and guest bridge remain the API. Do not recreate them or modify generated guest loaders.
- CMake currently copies upstream into build/xboxrecomp-runtime, then applies src/xboxrecomp overrides. kernel_file.c is already a tracked override. Upstream xbox_kernel explicitly compiles kernel_file.c and kernel_path.c.
- Current kernel_file.c implements the public Xbox APIs using Win32 calls, not a preexisting pluggable storage interface. A project-owned routing layer is necessary, but the existing host-file behavior must be retained rather than rewritten.
- Stage 5 replaced the wrapper's original stdio acquisition with native Xbox open/query/read/close calls in `src/fmv/sofdec_io.c`. `fmv.c` now preserves full Xbox paths. pl_mpeg still receives the same memory buffer; its header and decoder/demux bodies are unchanged. The existing `PLM_NO_STDIO` option excludes unused host-file entry points; no global fopen macro or third-party source edit is involved. Both DOA1 movies match pre-change complete BGR/PCM output in Debug/Release and image/folder modes; see `docs/reference/sofdec-baseline.md`.
- Startup explicitly loads Doa1.xbe, NOT default.xbe. Stage 4 replaced its original stdio loader with EXE-relative discovery and identity validation before kernel initialization. Image bootstrap pins the adapter-owned index to acquire the XBE without initialized guest memory; later Xbox calls share that mount.
- Existing kernel_bridge.c has native-handle assumptions outside file reads: duplicate-object handling calls DuplicateHandle, and a device query uses GetFileSizeEx. Audit these and wait/object lifetime paths before introducing virtual handles. Existing virtual-disk integration provides a routing precedent; it must continue working.

## Real local image validation

Image: Dead or Alive 1 Ultimate (USA, Japan) (En,Ja).xiso.iso, 4,387,635,200 bytes. Partition base0. Existing toolkit Python parser found289 files, no duplicate normalized full paths and no extents outside the image. This is initial structural validation, not proof against every malformed tree.

Byte-for-byte SHA256 comparisons against extracted files passed for Doa1.xbe, default.xbe, two SFDs (ss_opn and ss_end), ks_cmd.bin and hate_kin.bin. Six SFDs exist in the image.

Initial open/walk/dictionary run:10.8ms, cache state uncontrolled. Fifty subsequent warm-cache runs:0.420ms minimum,0.434ms median,0.636ms maximum. Python implementation, no native C++ performance promise. Directory reads requested35,648 bytes in23 calls; image payload was not scanned. True cold-disk/network-drive time has not been measured.

## Format versus layout

Reject invalid XDVDFS descriptors, directory pointers, loops, malformed names and out-of-bounds extents. The format is fixed, but valid repacked images can assign different sectors to the same paths. Therefore hardcoded offsets identify an exact layout, not the format in general.

Recommendation: embed the reader in the executable, create the immutable normalized full-path index at mount, then retain it for that process lifetime, including F1 settings-panel use. ESC launches a new process, which rebuilds the index. This small metadata operation does not justify a persistent index initially. If profiling later demonstrates a startup problem on another storage device, add a cached manifest validated against image size, partition base and directory metadata. A compile-time embedded offset manifest is possible but must verify the image layout before use; it must not make game-image availability a mandatory CMake prerequisite.

## Implementation stages

1. Add src/filesystem/xiso_reader.cpp with a C-compatible interface: mount/unmount, lookup, explicit-offset bounded reads and directory iteration. Parse little-endian XDVDFS metadata with checked64-bit arithmetic and bounded iterative tree traversal. Preserve original names plus normalized case-insensitive full paths. Store only metadata; no full-image preload. Read-only image handle remains open, with independent per-open positions and synchronized/explicit-offset host reads.
2. Add a CMake integration module that selects the project-owned file implementation for xbox_kernel exactly once, replacing its kernel_file.c source entry. Preserve kernel.h, public signatures, bridge ABI and the current host implementation semantics in the replacement. Keep source ownership explicit and fail configuration if the expected source entry is absent or duplicated. Reuse existing path/link resolution; add disc classification and image-directory-relative handling without routing writable drives into the image. Do not replace the entire xboxrecomp runtime.
3. Route Xbox file operations through the adapter: create/open, read, query/set position, size/attributes, directories/restart/filter, volume queries, close and duplicate lifetimes. Preserve I/O status counts, EOF/partial-read behavior, event/completion behavior and existing bridge completion processing. Reject mutation of read-only disc files. Host-backed saves/settings/cache and in-memory partition probes retain their existing paths. Audit root-directory handles and direct Win32 handle uses; extend internal routing only where required, without changing the public API.
4. Discover the image beside the EXE according to the rules above, before hardcoded Doa1.xbe loading and guest memory setup. Share the mounted storage core with the later Xbox API. Require root Doa1.xbe, valid structure/certificate, expected title ID and supported complete-XBE SHA-256 before boot, in both image and extracted modes. Fail and log incorrect/ambiguous images or identity mismatches; preserve extracted-folder mode only when no image candidate exists. Preserve saves/settings beside the EXE. F1 opens settings without restarting/remounting; ESC creates a fresh process which rediscovers/remounts/revalidates the image. Cleanup only after outstanding reads/handles finish.
5. Replace stdio movie acquisition in our Sofdec wrapper with native xbox_NtCreateFile/xbox_NtQueryInformationFile/xbox_NtReadFile/xbox_NtClose calls (not guest thunk calls). Keep full Xbox paths in fmv.c. Retain the existing memory-buffer demux/ADX/video decoding behavior initially. True incremental FMV demux/audio streaming is separate work; image-backed reads alone do not eliminate current movie buffering.
6. Verify offline before gameplay: synthetic valid/malformed images, empty/nested dirs, tree cycles, case/separator handling, extents beyond4GiB, EOF/partial reads, independent opens/concurrent reads, relative paths, duplicate/close/wait lifetimes, read-only enforcement and saves remaining host-backed. Check supported XBE identity, malformed certificate bounds, wrong title ID and wrong hash (including a changed XBE retaining the correct title ID) in both source modes. Compare indexed file content against extracted originals, including XBE and every SFD. Verify CMake source uniqueness in Debug/Release. Test FMV decoded output parity. Then physical gameplay: startup/opening movie, Training, Arcade/endings, save/load, F1 settings/graphics/resolution/controller changes without remount, and ESC restart in both extracted and image modes. Do not deploy until checks pass.

## Reference choice

extract-xiso is a good XDVDFS traversal/offset reference and independent listing/content oracle. Its CLI extraction, creation and rewrite machinery is not a drop-in runtime file backend. Prefer a small read-only implementation over importing the entire CLI. If code is copied/adapted, pin the exact revision and retain the full modified-BSD notice, attribution and advertising acknowledgement present in its source header; do not describe it simply as standard BSD-3-Clause.

XEMU is the wrong abstraction for this feature: its ATAPI path reads sectors through QEMU block backends; the emulated Xbox system supplies filesystem behavior. Importing those hardware/block layers would not supply the native filename-based Xbox API adapter we need. Inspect file-level licenses if reusing anything; do not assume every XEMU file shares the repository's top-level license.

References:
- https://github.com/XboxDev/extract-xiso/blob/master/extract-xiso.c
- https://github.com/xemu-project/xemu/blob/master/hw/ide/atapi.c
- Existing ../xboxrecomp/tools/xiso/xdvdfs.py (local format reference, not a robust production parser as-is).
