# DOA1U launcher proposal

Status: implemented, pending manual in-game/device acceptance testing.

## Implementation handoff — 2026-10-30

User approved the refined v3 mockup and explicitly authorized implementation.
Display/Graphics/Controls now use the approved charcoal, cream, purple and gold
layout, embedded subdued Kasumi/arena art, smaller permanent ESC notice and
ImGui-only Quit/Save/Play footer. The background plate is
[launcher-background.png](assets/launcher-background.png), generated with built-in
imagegen by removing all UI from the approved v3 reference while preserving the
subdued character/arena. The gold header is sampled from the approved mockup.

Missing/invalid INI opens a 1280x720 first-run window before guest initialization.
Save alone stays there; Play saves before continuing. The same HWND is retained
when creating the chosen game renderer. Valid INI skips startup settings. F1
opens (never toggles closed); in-session Save/Play dismiss. Original match pause
handler receives a synthetic Start edge; previously paused matches are not
blindly resumed. Original-game pause eligibility is retained, not replaced with
a host simulation freeze. Runtime backend choices remain deferred until restart.

Monitor device names persist independently of OS-controlled GPU selection.
SDL3 3.4.18 is pinned/vendored; distribute `SDL3.dll` beside the executable.
The port-owned runtime override now routes both guest controller handles to
distinct host slots rather than hardcoding every guest read to port zero.

Final defaults remain deferred as agreed. Provisional graphics values preserve
the previous defaults. Keyboard uses the previous primary keys, with **P** for
Xbox Start because Enter is reserved, and WASD (not duplicate keypad aliases).
Provisional pads use White=L1 and Black=L2 as requested; original Xbox LT uses
R1 to avoid a duplicate/unbound target, and original RT uses R2. All profiles
remain independently remappable; these are not claimed as final approved maps.

Verification: standalone `launcher_check` passes virtual two-player join/routing,
third-pad exclusion, disconnect/slot retention/replacement, gameplay suppression,
binding conflicts/Undo/defaults/capture, Save/Play failure handling, INI and hidden
WARP rendering of all three pages. Hidden NRI presentation checks pass D3D11,
D3D12 and Vulkan. The first diagnostic run exposed an ImGui texture-reference
crash and displayed an OS error dialog; corrected to managed texture references
and registered external textures, then rechecked successfully with dialogs off.
No live game was launched or automated. Physical controller/Bluetooth behavior,
actual match pause/resume, monitor movement and first-run backend handoff need
manual acceptance testing.

## Look and feel

Latest refined mockup: [subdued artwork and smaller notice](assets/launcher-final-mockup-v3.png).
Keep Kasumi darkened, desaturated and faded into the background (roughly 25–30%
visual intensity), so interacting with the menu is the focus. The permanent ESC
notice should be noticeably smaller than PC SETTINGS, while remaining readable.
Generated with built-in imagegen from v2; edit prompt: subdue Kasumi and petals,
reduce the ESC notice to about 65% of its previous font size, preserve all else.

Use the user-supplied Dragon's Crown Pro launcher image as the visual reference:
charcoal background and panels, cream text, muted purple selection/highlights,
gold Play button, left navigation, and a large settings panel on the right.
Branding and artwork should belong to DOA1U, not the reference game.

**Approved final visual direction:** [launcher mockup](assets/launcher-approved-design.png).
User approved this generated design for the launcher: gold DOA Ultimate header,
subdued arena background, low-contrast Kasumi artwork on the far right, charcoal
panels, purple selection, cream text, and gold Play button. This approval selects
the visual design, not an already implemented screen. Keep the source mockup as
the layout/art reference. Generated with the built-in imagegen tool; prompt:
"16:9 DOA1U desktop launcher UI, charcoal panels, cream text, purple active Display
navigation, gold logo/Play, faint arena and Kasumi at far right, Display/Graphics/
Controls navigation, Aspect Ratio/Window size/Monitor rows, Quit/Save/Play footer."

**Kasumi artwork update:** use the [user-selected Kasumi image](https://www.fightersgeneration.com/np2/char1/kasumi-d25.jpg)
as the source for the launcher background character artwork, replacing the
generated Kasumi depiction in the mockup. Preserve the approved layout/palette:
place/crop the artwork on the far right, subdue contrast and fade into the dark
background so settings remain readable. The rest of the approved design is
unchanged. This records asset direction; the mockup has not yet been regenerated.

**Permanent header notice:** directly below **PC SETTINGS**, in smaller readable
text, display exactly: **"Pressing ESC will restart the game"**. Keep this visible
on every launcher/settings page, both at startup and via F1.

## Navigation

- **Display** (initial page)
- **Graphics**
- **Controls**

No Play page. Play remains a persistent footer action. Drop all other pages
from the reference, including Gameplay, Cheats and Trophies.

## Display page

| Setting | Control / values | Current implementation |
| --- | --- | --- |
| Aspect Ratio | 4:3 / 16:9 selector | Working aspect-ratio setting. Replaces the proposed Windowed / Borderless control; no duplicate display-mode row. |
| Window size | Resolution-preset dropdown for the selected aspect ratio | Working presets, live resizing and startup-size restoration. |
| Monitor | Available-monitor dropdown | New setting; monitor selection and opening the game on the selected monitor need implementation. |

16:9 expands gameplay horizontally; menus, HUD and movies retain 4:3 proportions.
Windowed / borderless selection is not part of this proposal.

## Graphics page

| Setting | Control / values | Current implementation |
| --- | --- | --- |
| Rendering backend | DirectX 11 / DirectX 12 / Vulkan | Working; selected before game startup. |
| Internal resolution | Resolution-preset dropdown | Working, independent of window size. |
| 3D texture filtering | Nearest / Bilinear / Trilinear / Anisotropic | Working. |
| Anisotropy | 2x / 4x / 8x / 16x | Working; show only for anisotropic filtering. |
| 2D filtering | Lanczos2 + anti-ringing checkbox | Working. SNN and nearest experiments remain dormant and are not exposed. |
| Anti-ringing strength | 0-100% slider; default 80% | Working; relevant when 2D filtering is enabled. No shader recompilation needed. |
| Anti-aliasing | Off / SSAA / MSAA / FXAA / SMAA | Working. |
| AA quality | SSAA: 2x / 4x; MSAA: 2x / 4x / 8x | Working; show only the control relevant to the chosen method. |

**No GPU-selection control or GPU-selection implementation.** Let the operating
system choose the GPU. Monitor selection is separate from GPU selection.

## Controls page

Include a Controls screen in the same navigation and visual style.

| Element | Agreed behavior |
| --- | --- |
| Device-type selector | Pill-style buttons: **Keyboard**, **PS4**, **PS5**, **Switch Pro**, **Xbox**. |
| Availability | Enable a pill only when its device type is available; unavailable types remain visible but disabled. Update availability on connection/disconnection. Keyboard is normally available, but do not assume it unconditionally. |
| Default selection | Keyboard, using the current keyboard bindings as defaults. Do not introduce a new keyboard layout. |
| Remapping | Allow keyboard-key and PS4/PS5/Switch Pro/Xbox-button remapping. Show current bindings for the selected type. |
| Default mappings | Define P1/P2 controller defaults together with the final configuration defaults. Prior requested mapping White → L1 / Black → L2 is recorded for that definition; the complete default map is not finalized. |
| Local players | Two-player local **versus**, with distinct devices routed to P1 and P2; not cooperative or online play. Preconnected devices use press-to-join; newly connected devices fill empty slots. |

Device-type pills select the mapping view, not a physical player assignment.
With two controllers of the same type, P1/P2 still need distinct physical-device
assignments, determined by the join rules below. Agreed
layout: **P1 on the left, P2 on the right**, each with a
simple compact list of original Xbox inputs and adjacent text-box-style binding
fields. Clicking a field starts binding capture; pressing a controller button
(or a keyboard key in the keyboard view) assigns that input to the selected row.
No manual device dropdown is currently requested.

### Player join rules (agreed)

- For controllers already connected at application startup, show **Press a button
  to join**. First controller pressed becomes P1; second distinct controller
  pressed becomes P2. Do not infer historical connection order from enumeration.
- Newly connected controllers after application startup fill empty player slots
  in connection order (P1, then P2), without displacing an assigned controller.
- A physical controller cannot occupy both slots.
- If an assigned controller disconnects, **pause the game** using its existing
  pause path. Reconnection must not automatically resume gameplay.
- With two assigned controllers, the second is P2. A third/additional controller
  must not displace either player; ignore its gameplay/navigation/binding input.
- Keep a still-connected controller in its existing player slot when the other
  disconnects; a newly connected controller fills the empty slot under the rules
  above. Exact same-device reconnect identity handling is an implementation detail
  to verify, not permission to silently exchange P1/P2.

### Input priority and menu navigation

- Controllers take priority over keyboard for gameplay. When a controller is
  identified/available, keyboard is not a gameplay input source except the host
  shortcuts: **Esc restarts the game**, **F1 opens the launcher**. Enter is a
  normal keyboard gameplay binding, defaulting to Xbox Start.
  Do not merge keyboard gameplay input into a connected controller's state.
- The launcher supports **controller, mouse and keyboard navigation**, including
  when a controller is connected. Gameplay suppression does not disable launcher
  keyboard navigation. Enter activates the highlighted button unless a binding
  field is awaiting capture, in which case Enter is assigned to that field.
- No unbound targets and no multiple bindings: each target has exactly one
  assigned input in its player/device mapping. Existing alternative keyboard
  defaults must be reduced to one choice when final defaults are defined.
- At the top of each controller/keyboard mapping view, provide **Restore default
  bindings** for that device mapping, not a global graphics/config reset. Restore
  the final default mappings once those have been defined.
- Restoring defaults is **not undoable**. Clear that mapping's last-assignment
  Undo record when restoring defaults so Undo cannot resurrect pre-reset bindings.

### Undoing an unintended binding

- **Undo is the logical original-Xbox B action**, initially exposed through the
  default B/Circle mapping. Follow the current binding, not a hardcoded physical
  button: if physical X is mapped to Xbox B, physical X becomes Undo.
- If a binding field is awaiting input, capture the next valid button as the
  assignment, including the button currently mapped to B. Capture takes priority
  over Undo and does not immediately undo its own assignment.
- If no field is awaiting input, a fresh press of the currently B-mapped button
  reverts the last assignment. Restore both sides if it caused a swap. Consume
  the captured press until release so it cannot also trigger Undo.
- Do not use Esc for binding cancellation; Esc is already the game-restart key.
- Accepted captures update the selected mapping immediately; writing the INI
  remains the Save/Play responsibility unless separately agreed.
- Keyboard **Backspace** performs Undo outside capture. While a field is awaiting
  input, capture takes priority, so Backspace remains assignable.
- Clicking outside an awaiting binding field means **do not assign**: cancel
  capture and preserve its prior binding. This does not undo a completed change.
- Undo history contains **only the last assignment**, including both sides of a
  swap. Do not add multi-step history. Keep it scoped to the relevant player/device
  mapping; unrelated players' mappings are not modified by Undo.
- **Esc and F1 are reserved host shortcuts**, including during capture.
  Enter is remappable and defaults to original Xbox Start; outside binding
  capture it activates the keyboard-highlighted launcher button. This supersedes
  the earlier exclusive Enter-to-pause rule.

### Binding conflicts: swap, do not duplicate

When assigning an input already bound to another target in the same player's
mapping, swap the two bindings automatically. Do not silently duplicate the
input, clear the other target or require a conflict dialog.

Example, where rows are original Xbox targets:

| Target | Before | After assigning Square to Y |
| --- | --- | --- |
| X | PS4 Square | PS4 Triangle |
| Y | PS4 Triangle | PS4 Square |

The displaced input (Triangle) moves to the previous target (X) of the newly
assigned input (Square). Apply conflicts within the relevant player/device
mapping; editing P1 must not rewrite P2's bindings.

Use SDL3 for unified controller input, including wired/wireless support. Replace
the current host input backend through project-owned xboxrecomp overrides, using
the same correction technique already used by this port; do not replace the
entire toolkit or modify the separate upstream checkout. Preserve the guest Xbox
input interface. This is an implementation decision, not completed support.

## Persistent footer (ImGui interface only)

Render the footer whenever the ImGui launcher/settings interface is visible,
both before first play and when opened with F1. No footer is drawn over normal
gameplay outside that interface.

| Action | Proposed behavior |
| --- | --- |
| Quit | Quit the entire game application, just like closing the window. |
| Save | Save the selected configuration to the existing INI file. First-run: do not start gameplay. In-session: dismiss settings, preserving a pre-existing pause and resuming only a settings-owned pause. |
| Play | Save the selected configuration, then start/resume gameplay with it, except deferred backend changes described below. No separate Play page. A save failure must not be treated as a successful save. |

Play must create an INI even if the user changes nothing and keeps all default
values. Final default values will be defined later; current implementation
defaults are not automatically the agreed launcher defaults.

## Startup flow (agreed)

- Use the existing settings INI (`doa1u_graphics.ini`), not a new launcher flag
  or separate launcher configuration file.
- If the INI exists: load settings and start the game directly; skip the launcher.
- If the INI cannot be parsed, show the launcher with default values instead
  of starting gameplay with invalid settings.
- If the INI does not exist: create the game application's own window in
  **windowed 1280 x 720 (720p), 16:9**, and display the launcher there.
- Do not begin guest game execution behind the first-run launcher. Start the
  game only after the user clicks **Play**, which saves the INI first.
- **Save** alone must not start the game. Do not implicitly create the INI merely
  by opening the first-run launcher.
- The launcher is a screen inside the game window, not a separate executable.
  After Play, transition to gameplay using the selected settings.
- The fixed first-run launcher size/aspect does not override the user's chosen
  gameplay window size/aspect.

## In-game settings (agreed)

- **F1** pauses gameplay and audio while displaying ImGui. The original match-only
  pause request proved insufficient in live testing. The launcher now holds the
  guest at a frame boundary while the GPU repaints the retained scene and UI,
  and pauses audio device consumption/mixing without flushing playback queues.
  The original in-game pause state remains unchanged, preserving an existing
  pause when Save/Play dismisses the launcher.
- Pressing F1 again does **not** dismiss the interface. **Save** and **Play** save
  and dismiss it, returning to gameplay subject to preserving an existing pause.
  Save never starts the guest game from the first-run launcher. Quit/window close
  exits the application rather than dismissing back to gameplay.
- Keep rendering the menu and processing its input while the game is paused.
- Use the current game resolution, window size and aspect ratio; opening settings
  must not reset the window to the first-run launcher dimensions.
- Expose the same Display, Graphics and Controls screens in this menu.
- Exact pause entry/exit integration must be inspected before implementation;
  preserve a game that was already paused rather than blindly toggling it.

## Rendering-backend changes (agreed)

- If the user changes D3D11 / D3D12 / Vulkan in the F1 interface during a game,
  display a modal pop-up: **"Changing the rendering backend requires restarting
  the game. The selected backend will be used on the next launch."**
- The pop-up has one **OK** button. After acknowledgment, allow normal interaction:
  edit other settings, Save, Play/resume, or Quit. Do not force a restart.
- Keep the current renderer active for the entire running session. Play does
  not switch it. Save/Play persist the selected backend for the next game launch.
- Distinguish the active renderer from the pending selection in the interface.
- Before initial gameplay, backend selection is intended to apply when Play starts
  the game; renderer initialization for the launcher must accommodate this.

## Open decisions

- Final default configuration values (to be defined by the user later).
  Includes complete P1/P2 controller default mappings.
- Final production artwork assets matching the approved mockup.

## Discussion record

- User supplied the visual reference and requested definitions before implementation.
- Initial inventory proposed Play, Display and Graphics pages plus GPU selection.
- User removed the Play page and GPU selection, requested monitor selection,
  and replaced Windowed / Borderless display-mode choices with 4:3 / 16:9.
- User chose the label **Aspect Ratio**, made Play save before starting, and
  specified INI-gated first-run launcher in a 1280x720 window. Existing INI skips
  the launcher. F1 uses the game's pause path and shows ImGui at current sizing.
- User added Controls and dropped all remaining reference pages.
- User chose SDL3 via project-owned xboxrecomp overrides, local two-player versus,
  remapping for keyboard and all four controller families, current keyboard
  defaults, and availability-driven device-type pills.
- User clarified footer is part of ImGui only, at startup and via F1: Quit exits
  the entire application; Save writes INI; Play saves even untouched defaults
  and starts/resumes. Final defaults are deferred. Runtime backend edits show
  an OK-only restart notice and remain pending until the next game launch.
- User approved the generated launcher mockup as final visual design. F1 cannot
  dismiss settings; Save/Play dismiss in-session. Invalid INI returns to launcher
  defaults. User proposes P1-left/P2-right Controls layout.
- User finalized compact P1-left/P2-right original-input lists with clickable
  binding fields and press-to-assign capture. Conflicting assignments swap the
  existing bindings (Square-to-Y displaces Triangle to X). Complete controller
  defaults will be defined alongside configuration defaults.
- User chose controller connection-order assignment with controller preference
  over keyboard gameplay input (Esc restart, F1 launcher, Enter pause remain).
  Launcher navigation supports controller/mouse/keyboard. B/Circle reverts the
  last binding assignment; no unbound or multiple bindings are allowed.
- User clarified capture takes priority over Undo; outside capture, Undo follows
  the current logical Xbox B binding (e.g. physical X if assigned to B), rather
  than a fixed physical B/Circle button.
- User accepted press-to-join for controllers already present at startup:
  first pressed P1, second distinct controller P2. Newly connected controllers
  fill empty player slots in connection order.
- User requires pause on controller disconnect, second controller P2, third and
  subsequent controllers ignored. Keyboard Backspace undoes the last assignment;
  clicking outside capture cancels without assignment. History is one assignment
  only. Add top-of-view Restore default bindings per controller/keyboard mapping.
- User adds permanent small header text below PC SETTINGS: "Pressing ESC will
  restart the game". Restore default bindings is NOT undoable; clear its prior
  assignment history.
- User accepted reserving Esc/F1/Enter for host restart/launcher/pause actions,
  even during capture; they cannot be remapped to gameplay targets. This also
  means final keyboard defaults cannot retain legacy Enter-to-Xbox-Start binding.
- The earlier definition-only phase did not authorize implementation. User
  subsequently finalized the proposal, approved v3 and authorized implementation;
  see the implementation handoff above for completed work and validation limits.

### First-run Play handoff correction � 2026-10-30

The retained startup HWND now has a dedicated owner thread which keeps pumping
native messages after Play, while input is dispatched to the game's rendering
thread. This avoids synchronous Win32/DXGI initialization blocking on the guest
thread. The exact same window is preserved. DX11 startup resources are flushed
before backend replacement. Hidden actual-Play and cross-thread same-HWND
replacement checks pass D3D11, D3D12 and Vulkan; live user acceptance pending.

### Enter / complete F1 pause clarification � 2026-10-30

User verified first-run Play now works with no INI. Enter was intended as default
Xbox Start, not an exclusive host pause shortcut. Enter must also activate the
highlighted launcher button during keyboard navigation. Earlier discussion of
reserving Enter (recorded above for history) is superseded. Only Esc/F1 remain
reserved; binding capture can assign Enter like other gameplay keys.

Untouched provisional P-to-Start keyboard profiles migrate in memory to Enter;
customized profiles remain untouched. No existing INI is edited until Save/Play.
F1 must pause gameplay AND audio, not merely cover a running game. Host frame
pause, APU/mixer/device pause, bank voice pause, and movie clock/output pause
implement that requirement without changing the original guest's pause state.

Automated checks cover Enter input/capture, default migration, highlighted Save
activation through real ImGui, guest frame wait/resume and UI audio-pause calls.
Three NRI backends pass paused-overlay repaint/resume. Audible live-game and
physical controller acceptance remain manual; no live game was run by the agent.

### Keyboard navigation / Graphics layout refinement - 2026-10-30

Sidebar, content and display cards share navigation focus so Tab/Shift+Tab and
arrows reach individual buttons. Initial/opening focus goes to the active page.
Graphics uses DX11/DX12/Vulkan buttons, indented bullet rows for conditional
Anisotropy and SSAA/MSAA quality. "2D filtering" label precedes its checkbox;
anti-ringing strength label precedes its slider, always visible but disabled
when 2D filtering is off. Filtering implementation/INI fields remain unchanged.

### Display / Graphics refinement - 2026-10-30

User requested removing Active renderer status, moving Internal Resolution to
Display, spacing aspect buttons, removing dots from indented labels, moving
Anti-ringing strength text to right of 2D checkbox while preserving slider size.
Implemented all; Display cards tightened to fit four rows at 720p. Backend
restart popup/selection semantics unchanged. Anti-ringing slider remains on its
own row at the same horizontal offset/width and disables with 2D filtering.
Hidden launcher suite passes including navigation, Enter and handoff; screenshots
inspected. No live game launched; INI untouched. Release EXE/PDB deployed/hash
verified: EXE 88B7E1F517C6C2E4ED15F1B4DB795DE9566AD09A3EC97DEBA80DE49C3ECEA4C6
PDB 16D58CCBC057642A6B1C9856C16F90E9334A61DFA33405E9E8649DEBD75CBBC8

### Save keeps launcher open - latest correction 2026-10-30

User explicitly corrects prior Save-dismiss agreement: Save ONLY persists config,
including when opened with F1. It must keep menu visible, simulation and audio
paused. Only Play saves then dismisses/resumes (or starts on first run).
Changed dismissal condition to Play only. Hidden tests verify both direct Save
and Enter-activated highlighted Save stay open, hold guest wait/audio pause, then
Play resumes. Hidden launcher suite passes; no live game launched, INI untouched.
Release deployed/hash verified:
EXE 4944E88B13C680147A31054CDE03F3B7FD4819572BF8ADC67472CC160C8AD4AA
PDB 911285E1F20E05A81940C600126787C70A25CD17DD379F8741D765A1E440687F
