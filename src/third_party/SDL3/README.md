# SDL3: embedded controller dependency

DOA1U uses **SDL 3.4.18**, built from source and statically linked into the game
and offline launcher checker. No SDL3 DLL is needed at runtime.

## Provenance

- Upstream: https://github.com/libsdl-org/SDL
- Release: https://github.com/libsdl-org/SDL/releases/tag/release-3.4.18
- Source archive: `SDL3-3.4.18.zip` from that release.
- SHA-256: `9cd42377704398796071b8597cd7e21da254a43bad98c4199739647adc13fa6f`
- Upstream commit: `829a65d769d935c4852f8159e964312c0957260a`.
- `upstream/` is an unmodified copy of the complete source archive. Retaining
  the tree avoids hand-maintaining SDL's internal dependency graph. Not every
  retained source file is compiled or linked.

## Enabled functionality

`cmake/ControllerSDL.cmake` in the project root selects a static build with
joystick/gamepad, HIDAPI controller drivers, Windows XInput and virtual
joysticks. SDL's event queue, timer, synchronization, allocation, platform and
other internal support are retained as required by upstream's build system.
The game uses discovery/hotplug, controller identification, buttons/axes,
rumble, button names and event timestamps. The checker uses virtual joysticks.

Audio, video, GPU, rendering, camera, general-purpose haptics, power, sensors,
dialogs and tray subsystems are disabled. Controller rumble remains in the
joystick drivers. SDL examples, upstream test programs, test library and
installation are disabled. DOA1U's own tests live in `tools/launcher_check.cpp`.
No SDL upstream source modifications are necessary.

## Licenses and attribution

SDL is Copyright (C) 1997-2026 Sam Lantinga and contributors, distributed under
the zlib license. See [the complete license](upstream/LICENSE.txt) and
[upstream credits](upstream/CREDITS.md). Original notices and bundled component
licenses are retained in the unmodified tree, including HIDAPI's license files
under `upstream/src/hidapi/`. For HIDAPI, this integration uses the original
permissive license in `upstream/src/hidapi/LICENSE-orig.txt`, one of the choices
explicitly offered by its `LICENSE.txt`; all alternative license files remain
intact as part of the unmodified distribution.
Do not remove upstream notices or claim upstream code as DOA1U-authored.

DOA1U's adapter lives separately in `src/controller/`. This README and the
project CMake configuration document our integration, not upstream changes.

## Updating the vendor snapshot

Download the official release archive, verify its hash, replace `upstream/`
without editing its contents, then update the version/hash/commit above. When
committing a refreshed snapshot, use `git add -f src/third_party/SDL3/upstream`:
upstream's own ignore rules hide several shipped shader files, while the
project's generic platform ignore rules hide ARM64/Win32 packaging fixtures.
Those archive files should be retained even though our build does not use them.
Re-run `launcher_check`, inspect the game import table for the absence of
`SDL3.dll`, and perform physical-controller testing.
