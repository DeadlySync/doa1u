# DOA1U roadmap — final v0.9.5

Updated 2026-10-31. v0.9.5 is the final build of this project. 
No further implementation is planned.

## Delivered

- [x] Native Windows gameplay, video and audio; retain original game behavior.
- [x] NRI D3D11/D3D12/Vulkan rendering, internal-resolution scaling, 4:3/16:9,
  filtering, anti-aliasing and separate HUD/movie proportions.
- [x] F1 Display/Graphics/Controls launcher, window type/borderless options,
  monitor selection, settings persistence, embedded branding/icon and versioned title.
- [x] Statically linked SDL3 controller support, remapping and launcher navigation;
  last-active keyboard/controller sharing on P1, independent P2 controller.
- [x] User-confirmed Hayabusa Training throw correction and Training stack-cycle fixes.
- [x] B2–B5 resolved by the animation-loading correction, as explicitly confirmed
  by the user: vault animation, stage collision/ring-outs/floating, victory replay
  truncation and incorrect attract-mode animations.
- [x] Debug `/Od /Ob0` with full PDBs; Release `/O2 /Ob2` without PDB generation.
- [x] Quiet Release by default; pure `create_logs.bat` opt-in for the three logs,
  retained across ESC restart, without enabling gameplay/debug overrides.
- [x] Direct image-backed gameplay without extraction, preserving the Xbox file API.
- [x] Automatic adjacent-image discovery and supported `Doa1.xbe` title-ID/hash checks;
  writable host saves, F1 mount retention and ESC fresh-process restart.
- [x] Xbox-backed movie acquisition with unchanged buffered decoder and verified
  complete BGR/PCM parity.
- [x] Six-stage implementation, Debug/Release automated integration gate, test
  deployment. See [verification](verification.md)
  and [retained regression checks](../tools/REGRESSION_TESTS.md).

## Six-stage image backend roadmap

| Stage | Work | Status |
| --- | --- | --- |
| 1 | Validated read-only XDVDFS reader and immutable path index | Complete |
| 2 | CMake backend ownership; retain Xbox API and host storage | Complete |
| 3 | Image-backed Xbox file operations and handle lifetimes | Complete |
| 4 | Image discovery, XBE identity and process-lifetime bootstrap | Complete |
| 5 | FMV acquisition through the Xbox API; decode parity | Complete |
| 6 | Integration checks, deployment and release | Complete |

## Closed historical issues

These are closed, not remaining roadmap work:

- [x] B2: Hayabusa vault-over-Kasumi animation.
- [x] B3: Jann Lee-stage collision, false ring-outs and floating.
- [x] B4: victory replay truncation after a CPU round win.
- [x] B5 (reused ID): incorrect attract-mode animations. The earlier head issue
  was already closed separately.

This shared-cause/result statement records the user's confirmation, not a new
independent investigation or additional code change.

## Out of scope

- Online mode not implemented; online play is unsupported.
- Linux and Mac systems are not supported.
