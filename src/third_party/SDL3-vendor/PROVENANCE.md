# SDL3 dependency

Official SDL release **3.4.18**, Visual C++ development package.

- Source: https://github.com/libsdl-org/SDL/releases/tag/release-3.4.18
- Archive: `SDL3-devel-3.4.18-VC.zip`
- Archive SHA256: `78D84602AE616CFE26B33A73B7D3B9B6B56E8A6650E53D92C9C6CA938F747ACD`
- License: `SDL3-3.4.18/LICENSE.txt` (zlib).
- Headers, CMake package metadata, x64 import library and redistributable are
  vendored for offline Windows x64 builds. Other architectures/debug artifacts
  in the downloaded development package are not required or tracked.
- CMake copies `SDL3.dll` next to the executable. Distribute it with the game.

Only the host input backend is replaced through the port-owned runtime overlay;
the original guest Xbox controller interface is retained.
