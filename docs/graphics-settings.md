# Graphics and display settings

Open **F1** for the Display and Graphics pages. **Save** persists settings in
`doa1u_graphics.ini` beside the EXE; moving an install should include that file.

## Display

- **Window Type:** Windowed or Full Screen. Full Screen uses the monitor's
  desktop dimensions without changing its display resolution/refresh rate.
- **Borderless:** independent of Windowed/Full Screen; removes the window frame.
- **Aspect Ratio:** 4:3 or 16:9 gameplay. Menus, HUD and FMVs retain 4:3 proportions.
- **Window Size:** presentation size, separate from the internal render size.
  Windowed presets must fit the selected monitor's work area and decoration.
- **Internal Resolution:** controls the game's rendering resolution independently
  of the host window, with downsampling when rendering larger than presentation.
- **Monitor:** selects the display. GPU selection is governed by the OS; there
  is no separate in-app GPU-adapter selector.

Window/internal-resolution preferences are stored independently for each aspect
ratio. Arbitrary user window sizes retain the fitted game viewport.

## Graphics

- **Backend:** Direct3D 11, Direct3D 12 or Vulkan through NRI; applies after restart.
- **Texture filtering:** nearest, bilinear, trilinear or anisotropic.
- **2D scaling:** Lanczos2 with adjustable anti-ringing strength; the Sharp 2D
  option changes sampling without changing composition size. Legacy SNN-related
  code/config fields are not a promise of an additional active user-facing mode.
- **Anti-aliasing:** Off, FXAA, SSAA, MSAA or SMAA 1x High. SSAA supports 2x/4x;
  MSAA supports requested 2x/4x/8x with supported color/depth sample-count fallback.
  These are spatial techniques, not temporal AA.

Rendering/scaling options share the NRI D3D11/D3D12/Vulkan path. The native settings
UI is composed separately from guest scene rendering. HUD/movie aspect handling
and output-resolution 2D composition retain the final implementation's ordering.

See [rendering architecture](rendering.md), [launcher/controls](launcher.md) and
[verification](verification.md) for the code boundary and retained checks.
