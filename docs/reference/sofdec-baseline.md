# Pre-XISO-FMV output baseline

`sofdec-baseline.json` contains only sizes, metadata and SHA-256 digests, not game
payloads. It was measured on 2026-10-31 **before changing production acquisition**,
using a snapshot of `src/fmv/sofdec.c` from commit
`126c6309c8c60746666a03e500ac27f0298ae6ef` (v0.9.1).

- Snapshot remains build-local at `build/stage5-reference/sofdec_reference.c`.
- SHA-256 of the snapshot decoded as text and normalized to LF:
  `5192f2d35708fcd4688ed9538a4396de333ca31a212212a7bb8461f6f765ef17`.
- Probe source: `tools/sofdec_check.cpp`, compiled with
  `SOFDEC_HOST_REFERENCE`. This mode uses extracted files and the unchanged legacy
  stdio-backed decoder, with no Xbox kernel dependency.
- Reference executable: `build/stage5-reference/out/Release/sofdec_reference.exe`,
  MSVC 14.51.36231, `/O2 /Ob2`.
- Inputs: all six local extracted SFDs; all complete defined color output and ADX
  PCM from the two DOA1 movies. The existing 512 MiB cap rejects the sixth file.
- Production decoder/demux/ADX bodies were compared directly to this pre-change
  source snapshot and remain identical. The pl_mpeg header was not edited.

The reference was initially measured over four-byte BGRA pixels. Verification
showed that pl_mpeg's conversion writes B/G/R only, leaving alpha uninitialized.
Those nondeterministic four-byte digests were discarded. The retained manifest
uses packed B/G/R, frame after frame in decode order, and raw signed-16-bit
little-endian interleaved PCM. The reference executable was rerun using this
corrected **test-only** digest definition; no decoder fix was applied.

| Movie | Video | Frames | Audio | Samples per channel |
| --- | --- | ---: | --- | ---: |
| `DOA1/ss_opn.sfd` | 320x176, 29.97 fps | 2,174 | 44,100 Hz, stereo | 3,228,855 |
| `DOA1/ss_end.sfd` | 288x224, 29.97 fps | 2,901 | 44,100 Hz, stereo | 4,259,968 |

Stage 5's Debug/folder, Debug/image, Release/folder and Release/image manifests
all match the retained baseline exactly. This establishes acquisition/decode
parity on these inputs/toolchain, not physical A/V synchronization or UI/gameplay
verification. Reproduce comparisons with `tools/check_sofdec_parity.py` and the
commands in [the FMV README](../../src/fmv/README.md).
