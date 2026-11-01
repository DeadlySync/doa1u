# Sofdec movie acquisition and decoding

`fmv.c` retains the original movie-ID table, guest sequencing, display rectangle,
audio control and host-clock behavior. It copies the **full Xbox filename** from
guest memory instead of stripping its drive/device prefix. An unterminated,
truncated or unmapped guest string fails instead of opening a different filename.
The existing `MAX_PATH`-sized guest filename buffer is retained.

`sofdec_io.c` is a private acquisition helper, not a replacement filesystem API.
It uses the existing native `xbox_NtCreateFile`, `xbox_NtQueryInformationFile`,
`xbox_NtReadFile` and `xbox_NtClose` declarations. Opens are read-only/synchronous;
size comes from `XboxFileStandardInformation`. Explicit-offset reads use up to
1 MiB per call, accept positive short reads, and reject zero progress, premature
EOF, invalid byte counts, errors or unexpected pending completion. No guest thunk
or process-wide `fopen` hook is involved. The handle is closed before decoding;
failure frees partial acquisition buffers and clears outputs.

Full paths such as `d:\doa1\ss_opn.sfd` select the existing image or folder
backend. In folder mode they resolve against the configured game root, not the
working directory. The native host translator expects the existing Xbox drive
prefix spelling (`D:\`, not `D:/`); this stage does not expand the public path API.
The retained `Doa1.xbe` movie table uses backslash drive paths.

`sofdec.c` still demuxes the **complete memory buffer**, concatenates ADX packets,
decodes PCM and uses the same pl_mpeg video decoder. Its demux/ADX/frame bodies
and `src/third_party/pl_mpeg.h` are unchanged. Defining pl_mpeg's existing
`PLM_NO_STDIO` option removes unused host-file entry points; the buffer API remains.
There is no incremental decoding/streaming-memory reduction in this stage.

The preexisting **512 MiB movie cap** is unchanged. Five SFDs in the supplied disc
fit; `DOA2/doa2_op.sfd` is 553,394,176 bytes and is rejected before allocation/read,
as it was previously. This port's original DOA1 table selects the available
`DOA1/ss_opn.sfd` and `DOA1/ss_end.sfd` at IDs 19 and 20. Do not interpret extra
DOA2 acquisition checks as full DOA2 decoder/gameplay support.

## Offline checks

```powershell
cmake --build build --config Debug --target sofdec_io_check fmv_path_check sofdec_check doa1u_recomp
& .\build\Debug\sofdec_io_check.exe
& .\build\Debug\fmv_path_check.exe
& .\build\Debug\sofdec_check.exe folder '..\XISO' build/sofdec-debug-folder.json
& .\build\Debug\sofdec_check.exe image 'path\game.xiso.iso' build/sofdec-debug-image.json
# Repeat with Release and separate output manifests, then compare all four:
python tools/check_sofdec_parity.py docs/reference/sofdec-baseline.json build/sofdec-debug-folder.json build/sofdec-debug-image.json build/sofdec-release-folder.json build/sofdec-release-image.json
```

- `sofdec_io_check` compiles the actual acquisition helper with only its four
  native Xbox calls mocked. It checks 23 success/fault scenarios, positive short
  reads, the chunk boundary, invalid sizes/directories, pending/error/EOF cases,
  invalid byte counts, output reset and handle-close attempts. Allocation failure
  is handled in production but is not fault-injected by this harness.
- `fmv_path_check` compiles actual `fmv.c` with a decoder spy and mocked guest-call
  execution. It verifies unchanged full filenames, existing ID fallback,
  cdecl/error-state writes, length limits and the guest-memory edge. No guest
  functions or audio playback run.
- `sofdec_check` links the **actual selected Xbox backend and production decoder**.
  It hashes five fully acquired SFDs and records the existing oversized-sixth-file
  rejection. Both DOA1 movies decode to EOF; every defined color byte and every
  PCM sample is hashed. No window, guest code, renderer or audio device is used.

See [baseline provenance](../../docs/reference/sofdec-baseline.md). pl_mpeg leaves
the fourth/alpha byte untouched in BGRA conversion; comparing it would hash
uninitialized allocation bytes. Tests pack and hash B/G/R only, without modifying
production frames. Alpha initialization/render behavior is unchanged.

The checks are excluded from default builds; building them does not deploy.
Stage 6's automated gate passes in both configurations and Release test copies
are deployed. A real image-only launch completed the opening movie, and the user
accepted the relocated image-only build for final release v0.9.5. This overall
sign-off does not claim itemized physical A/V or every gameplay-case verification.
See the [integration results](../../docs/xiso-integration-results.md).
