# Host controller adapter

`host_input.cpp` / `host_input.h` are DOA1U-owned code, formerly under
`src/frontend/`. They own SDL initialization and polling, device discovery,
P1/P2 slot assignment, bindings and capture, rumble, focus/menu suppression,
keyboard/controller last-active selection, and ImGui controller navigation.
Guest callers read locked Xbox-format state snapshots through the existing
`host_input_*` interface. The Xbox runtime adapter remains in
`src/xboxrecomp/src/input/xinput_device.c`.

SDL is built statically from the pinned, unmodified source in
`../third_party/SDL3/upstream`. Feature choices live in
`../../cmake/ControllerSDL.cmake`, not in upstream files. SDL does not own our
window, renderer, audio, or keyboard/mouse input. Win32 ImGui gamepad polling is
disabled so it cannot overwrite SDL's routed controller events.

## Verification

Build `launcher_check` in Release and run it without starting the game. Its SDL
virtual controllers exercise hotplug, slots, ownership, mapping/capture and F1
panel navigation. SDL's separate test framework is not required. Test input is
kept separate from the user's settings.

The game and checker link `SDL3::SDL3-static`; neither requires `SDL3.dll`.
Physical-controller testing should cover USB/Bluetooth hotplug, P1/P2, rumble,
and the F1 launcher after changing this configuration.
