# Graphics settings â€” first implementation (2026-10-27)

## User controls

- F1 opens/closes **DOA1U - Graphics settings**.
- The title-bar X closes just the panel, not the game.
- **Aspect ratio** applies immediately: 4:3 or 16:9. The host window reshapes
  to match; arbitrary manual window sizes use a fitted game viewport.
- **Save configuration**, fixed at the bottom of the panel, saves preferences
  to `doa1u_graphics.ini` beside the executable. The file is also created with
  defaults at first launch. No working-directory-dependent paths or registry
  configuration. Unsaved changes last only for the current process.
- Closing the panel does not save. While open, keyboard input is consumed by
  the panel; ESC does not accidentally reset the game. Close it to resume
  normal keyboard/ESC input. This overlay does not automatically pause gameplay.

**Aspect ratio and window size are active. Internal resolution and texture filtering
are now active on NRI/D3D11.** The default renderer now uses
NRI's D3D11 backend; the legacy direct-D3D11 renderer remains available for
comparison/fallback. FXAA and 2x/4x SSAA are active on NRI/D3D11;
GPU/API selection remains a saved placeholder.
New resolution/filtering functionality is NRI-only; legacy retains its previous
window-sized framebuffer and fixed filtering.
See [NRI migration](nri-renderer.md) for architecture, fallback and test handoff.

Window and internal-resolution preferences are stored separately for 4:3 and
16:9. Window choices that do not fit the current monitor's work area, including
borders and DPI-aware decoration estimates, cannot be selected. Internal
resolution choices are not restricted by monitor size.

- 4:3 window choices: 640x480, 800x600, 1024x768, 1280x960, 1400x1050.
- 4:3 internal presets: 640x480 through 3200x2400.
- 16:9 window/internal presets: 1280x720, 1600x900, 1920x1080, 2560x1440,
  3200x1800, 3840x2160. Window fit restrictions still apply.
- Filtering: nearest, bilinear, trilinear, anisotropic (2/4/8/16x).
- AA: Off, SSAA (2/4 samples), FXAA. MSAA/SMAA are visible but disabled.
- Temporal methods (TAA, DLSS, DLAA, FSR 4.1) and frame generation are out of
  scope following the user's correction; no inactive temporal controls added.

The INI contains `[Graphics]` and a format `Version=1`. AspectRatio is 0 (4:3)
or 1 (16:9). Window43/Window169 and Render43/Render169 are active preset indices.
Filtering is 0 nearest, 1 bilinear, 2 trilinear, 3 anisotropic; Anisotropy is
0/1/2/3 for 2x/4x/8x/16x. GPU/backend and AA remain saved preferences.
Adapters use DXGI LUIDs rather than unstable enumeration indices. Missing or
out-of-range numeric values use safe defaults. Writes use a sibling temporary
file and atomic replacement; a failed save is reported in the panel.
Dear ImGui layout logging/autosave files are disabled; this creates no generic
`imgui.ini` in the current directory. Existing game saves are untouched.

## Implementation

`src/render/widescreen.c` supplies three link-time shadows, with generated
definitions renamed `_gen` and preserved in `tools/reapply_gen_edits.py`:

- 0x1847B3: original D3DX projection constructor, changes only the native
  0x5CC50 gameplay-camera scope to 16:9; vertical FOV and near/far remain
  original. The 4:3 path calls the unmodified constructor.
- 0x63420: original sphere visibility routine with conservatively widened
  horizontal bounds during widescreen gameplay; no force-visible bypass.
- 0x5C850: tags original stage backdrop submission for aspect-correct cover
  treatment (vertical cropping instead of stretching).

The existing named `set_camera_draw_stage` shadow brackets camera setup.
Private subchannel-7 markers travel through the original ring-space-aware D3D
method writer. The NV2A executor passes ordered presentation metadata and
explicit pretransformed/3D classification in `Nv2aBatch`. Never infer queued
draw context from unsynchronized guest CPU flags. Metadata resets at flip.

The D3D11 backend keeps original logical guest pixel coordinates independent
of host output dimensions. World geometry uses the wider projection; menus,
HUD and movies remain centered in a 4:3 safe area. Stage backdrops cover the
wide frame without pixel stretching. No larger Xbox framebuffer allocation.

Dear ImGui v1.92.5 is vendored with its MIT license and official Win32/DX11
backends. Only the bridge/UI uses C++17; guest/runtime sources remain C.
Overlay draws to the presentation RTV **after** copying persistent scene color,
not into persistent guest scene storage. This avoids stale panel trails during
pause. Resize recreates host color/depth resources and initializes depth;
the ordered semaphore completion fix remains in place.

## Verification / handoff

- Release compiled/linked; matching EXE and PDB deployed to XISO.
- Source audit: 37 handwritten C/header files, 123 macros, 78 addresses, clean.
- Release/diagnostic source selection checks pass (116/117 game sources).
- Reapply dry-run: all three new shadows present, 0 missing. One unrelated
  pre-existing patch still pending; full regeneration/reapply was not run.
- Offline `widescreen_shadow_check` passes: original 4:3 projection, gameplay
  aspect override, original vertical FOV/near/far, stack/register preservation,
  scoped backdrop markers, widened/restored culling bounds, menu culling.
- **No game launch or captures this iteration.** Live UI, INI persistence and
  widescreen visual correctness await user testing; do not mark user-verified.

Suggested user check: F1 -> 16:9 -> close via X; inspect live match, pause,
ring-out, menus/HUD and movie proportions. Reopen, change placeholder choices,
save, then ESC relaunch and check selections/aspect reload. Switch back to 4:3
to check the original framing. Check rendering regressions, especially edge
visibility, shadows/effects and backdrop cropping, across stages.

Historical first-widescreen-build SHA256 (superseded by the NRI handoff):

- EXE: `05AC5FC874E5F43074D758019248BFD9FCFCEF9A3CF2384C32DAB4EE608BEB8E`
- PDB: `3D7C0589332D876E2B990D8ED2C72792907F67385E4A025DBBFBC8C944E6DB29`

## Window-size activation — 2026-10-27

User confirms aspect-ratio switching works. Window-size presets now apply live
between frames, using exact client dimensions with DPI-aware window borders.
Switching aspect applies its separately saved window preset. Save configuration
persists both choices; startup restores the active aspect's choice. Options that
exceed the current monitor work area are disabled. A saved size that no longer
fits falls back to a smaller preset (or proportional fit on very small screens),
without overwriting the saved preference. Resizing keeps the window on-screen.
Manual resizing remains available. Internal-resolution controls remain placeholders;
this change does not implement independent internal rendering resolution.
Release build passed and matching EXE/PDB deployed with hash verification.
No game launch; live size, maximized-window restore and save/restart checks await user testing.

## Independent resolution and filtering activation - 2026-10-27

On the default NRI/D3D11 renderer, F1 -> Display and resolution -> Internal
resolution changes actual host scene color/depth dimensions next frame,
independently of window dimensions and monitor size: existing 4:3 presets
640x480..3200x2400; 16:9 presets1280x720..3840x2160. Guest logical coordinates,
Xbox allocations and guest semaphore ordering are unchanged. Gameplay, UI and
movie proportions are preserved.

NRI presents through a bilinear clamp-to-edge full-screen pass with black bars
for manually resized windows of a different aspect. ImGui stays at window
resolution. Window resize recreates only the swapchain, preserving scene/depth.
Internal resize resamples retained scene color and initializes new depth;
old targets retire behind the current host fence, avoiding a blank pause scene.

Filtering applies next frame via NRI sampler descriptors: nearest/bilinear use
base mip only; trilinear interpolates full mip chains; anisotropic uses2/4/8/16x.
Host-generated BGRA mips use area-box reduction including odd dimensions and
alpha-weighted color to limit transparent-edge fringes. These are generated
host mips, not decoded original Xbox mip levels. Mutable P8 changes refresh
all levels; asset invalidation and frame-retired lifetimes remain intact.
Movies stay bilinear. This control does not change presentation scaling or
ImGui font sampling. Filtering cannot add detail absent from source textures.

Save configuration persists existing INI fields beside EXE; startup loads them.
No version/index migration or overwrite of user choices. AA, GPU selection,
D3D12/Vulkan remain placeholders; audio desync remains OPEN and deferred.

Release compile/link passed; matching EXE/PDB deployed and hashes matched.
Offline actual HLSL compilation passed (three shared + two presentation
shaders), actual CPU mip tests passed (1x1, odd/one-dimensional, alpha-edge,
transparent and base preservation), source audit and OFF/ON selection passed.
No game launch or GPU runtime validation; live testing belongs to the user.

Suggested checks: keep window fixed and change internal resolution low/high in
both aspects; compare all filters, especially floor minification under trilinear
and anisotropy2x vs16x; resize manually; change internal size while paused;
inspect HUD/movies/frontend artwork; save, ESC restart, verify selections reload.

## Non-temporal anti-aliasing (2026-10-28)

Open **F1 > Anti-aliasing** and select **FXAA** or **SSAA**. Changes apply at
the next frame boundary; **Save configuration** persists them. Off is still the
default. This section supersedes earlier placeholder/validation notes above.

- **FXAA:** spatial luma-contrast edge filtering at the selected internal
  resolution. No motion history or jitter. Flat regions bypass filtering.
  This compact shader follows the edge-directed approach described in the
  [NVIDIA FXAA white paper](https://developer.download.nvidia.com/assets/gamedev/files/sdk/11/FXAA_WhitePaper.pdf).
- **2x SSAA:** render at twice the internal width, then average each 2x1 sample
  pair. **4x SSAA:** double both axes and average each 2x2 block. Pixel aspect
  remains correct; 2x SSAA improves horizontal sampling only. The displayed
  render size makes the extra GPU/memory cost explicit.
- Both paths produce an internal-resolution image before ordinary window
  scaling. Therefore window resize/downsampling is independent of AA mode.
- Native settings UI is drawn afterward and stays sharp. Original Xbox HUD
  and movies are part of the guest scene and are included in the AA pass.
- Guest color/depth identities and fence ordering are unchanged. Mode, sample
  count and resolution changes reuse the existing fence-retired resize path;
  retained scenes are resampled, not discarded during pause.
- Existing INI method IDs remain unchanged (Off0, SSAA1, MSAA2, FXAA3, SMAA4).
  Saved MSAA/SMAA values safely run as Off until a supported mode is selected.
  Legacy D3D11 fallback does not implement AA; its AA controls are disabled.

Offline validation uses actual production HLSL on D3D11 WARP, with pixel
readback: flat colors/borders/alpha preservation, smoothing of a high-contrast
stair-step diagonal, distant flat-region preservation, exact 2x/4x sample
averages and non-power-of-two dimensions. Shader compilation and existing
color-target/depth/alpha regressions also pass. In-game appearance/performance
and live mode switching still need user validation; no game automation is used.


## Independent sharp 2D presentation (2026-10-30)

F1 > Texture filtering separates **3D texture filter** from **Sharp 2D textures**.
Sharp 2D defaults on; Save configuration persists `Sharp2D=1`/`0` without changing
existing setting IDs. This supersedes the older global-filter description.

- Unchecked: 2D respects guest nearest/linear min/mag requests, independently of
  the 3D dropdown. Checked: nearest, with guest repeat/clamp axes preserved.
- A trailing depth/stencil-independent pretransformed HUD/menu run is composed
  at output resolution after scene AA/scaling and before native F1 UI.
- Sharp artwork uses centered integer multiples of the original 480-line canvas.
  Existing 4:3/non-square-Xbox-pixel and widescreen rules remain intact. Extra
  margins are intentional. Below-original outputs fit proportionally to avoid
  clipping. Vertex boundaries snap to pixels. This is integer canvas sizing,
  not a promise that every source texel is square.
- Full-canvas flat overlays/fades retain the scene-fit viewport to also cover
  the area outside the smaller integer-sized HUD.
- No arbitrary reordering: subsequent world/depth/stencil/background draws
  invalidate the deferred run. Earlier/interleaved 2D stays in the scene and may
  still receive scene AA/scaling. Stage backgrounds never move over fighters;
  their depth-independent texture sampling is still separate.
- Guest targets receive all original draws in order. Per-target pre-HUD color,
  CPU draw/state and immutable GPU texture snapshots preserve pause. Texture
  copies are deduplicated per revision; palette changes/cache eviction cannot
  alter replayed artwork. Resize/AA changes preserve pre-HUD color. Superseded
  GPU resources retire behind existing fences.
- Movies stay bilinear; native F1 UI is unchanged. The checkbox is disabled on
  legacy D3D11; NRI D3D11/D3D12/Vulkan share the new path.

Synthetic checks are not gameplay verification. Inspect character-select/menu
artwork, HUD and fades in both aspects, on/off, with different AA methods;
check Save/restart and pause/resize. No sharpening kernel or replacement assets.


### FVF-aware HUD fix (2026-10-30)

Training screenshots showed COM TYPE/STAND responding to the 3D filter, with no
visible checkbox effect. The initial transform-path heuristic was insufficient.
The original sprite/HUD setup `0x9C5F0` selects XYZRHW FVF `0x144` and disables Z;
quad helpers `0x5EAB0`/`0x5EFD0` use `0x104`, and flat overlays use `0x44`.
These semantics do not depend on whether XDK uses a passthrough vertex program.

SetVertexShader (`0x167BD0`) now emits a private ordered vertex-domain packet
through the existing ring writer, preserving the guest ABI. The executor stamps
it onto batches independently of the legacy transform-path hint. Explicit
XYZRHW wins for filtering/layout/classification; explicit world FVF cannot be
misclassified from a screen-space hint. Arbitrary shader handles are unknown;
direct SelectVertexShader (`0x167870`) clears stale FVF metadata. Domain is GPU
state and persists across flips until selection changes; background layout
markers remain separate. Generation reapply rules preserve both shadows.

Eligible trailing HUD now uses the output-resolution composition pass in BOTH
checkbox states. Off retains original min/mag sampling and proportional layout;
on applies nearest, integer canvas sizing and pixel snapping. Retained pause
snapshots respond to the checkbox without requiring guest redraw. This replaces
the earlier checked-only composition behavior. Earlier/depth-dependent/interleaved
draws retain original ordering and are not blindly moved into the HUD tail.

Regression coverage includes XYZRHW domain with the old screen hint false,
3D-filter variation, original/sharp toggles on retained snapshots, post-AA pixel
readback, 16:9 layout, ABI-preserving marker emission and direct shader reset.
User retest of the actual training HUD is still required; no live game run by agent.


### Same-size sharp toggle (2026-10-30, supersedes integer sizing above)

User confirmed the sharp effect works, but requested identical composition sizes
in both states. Removed integer-canvas size quantization. Both states now share
the same aspect-fitted viewport and pixel-aligned geometry; only texture sampling
changes (original versus nearest). No checkbox-induced shrinking or extra margins.
Post-AA/output-resolution composition and FVF classification are unchanged.
Native/NRI-validated sharp-HUD pixels and presentation/resize/pause checks pass on
D3D11/D3D12/Vulkan, including identical on/off viewport bounds in 4:3 and 16:9.
Actual same-size update awaits user testing.

### Optional SNN smoothing (2026-10-30)

NRI exposes independent SNN smoothing (2D) (default off, saved as SNN2D) and
Sharp 2D textures (nearest) checkboxes. Both off retains original sampling;
SNN only smooths then uses original sampling; nearest only retains the sharp
path; both applies SNN at source resolution FIRST, then nearest scaling.
All combinations share identical layout/composition size. Movies/native UI
are unaffected.

The preview uses a gentle fixed radius-one symmetric-nearest-neighbor mean:
choose the closest color from each of four opposite neighbor pairs, then average
with the center. Comparisons/averaging use premultiplied RGBA; original center
alpha is preserved. This is not a bit-exact reproduction of GIMP's filter or
its default radius. Filtered GPU images are cached by texture revision; raw
HUD snapshots remain available for non-destructive paused toggles.

### Lanczos2 preview replaces active SNN/nearest controls (2026-10-30)

Single checkbox: 2D filtering (Lanczos2 + anti-ringing), default on. SNN and
nearest implementations/settings remain dormant in source; old INI choices do
not enable them. Unchecked retains original sampling. Same layout and size.
HLSL adaptation of Hyllian/Jararaca's libretro lanczos2-sharp.cg: 16 radial taps,
window sinc 0.5, sinc 1.0, central 2x2 anti-ringing bounds. Transparent artwork
uses premultiplied RGBA, normalized/clamped alpha, then straight-alpha blending.
Applied per 2D draw during scaling, including output-resolution HUD replay;
not a source-resolution blur or a whole-scene postfilter. Movies remain bilinear.

Anti-ringing strength slider: 0-100%, default 80% (= upstream 0.8). Changes live
without rebuilding shaders or restarting; Save configuration persists it as
LANCZOS2_AR_STRENGTH integer percent, plus Lanczos2D checkbox. Lower values permit
more ringing; higher values constrain overshoot. Shader attribution/license
notice in src/render/common/lanczos2-LICENSE.txt.
Focused DXBC/SPIR-V compilation and hidden presentation/resize/toggle smoke
checks on D3D11/D3D12/Vulkan; no broad regression rerun during visual tuning.
