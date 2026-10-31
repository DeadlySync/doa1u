# Hayabusa throw: paired guest-state comparison

The user confirms the same throw is correct in xemu, with a completely different
animation and no sinking. Treat this as a port defect, not an original-game bug.
The port's original-code height reset is established, but may be downstream of
the animation/state mismatch. Do not replace it with an unconditional floor clamp.

## Manual xemu evidence (no RenderDoc)

Use the same training stage, Hayabusa/player slot, opponent, facing and throw.
First capture **during the throw**; then capture **after recovery to standing**.
Pause the emulator with **Machine > Pause** (not the game's Start menu), then
open **Debug > Monitor**. The following commands only read guest virtual memory
and write evidence files; they do not modify the game or its saves.

During the throw, paste these separately into the monitor:

```text
memsave 0x30d9a0 0xb0 "H:/Projects/DOA1U/XISO/captures/xemu-throw-config.bin"
memsave 0x336e00 0x13400 "H:/Projects/DOA1U/XISO/captures/xemu-throw-motion.bin"
```

Resume with Machine > Pause, let the throw finish, pause again, and run:

```text
memsave 0x30d9a0 0xb0 "H:/Projects/DOA1U/XISO/captures/xemu-after-config.bin"
memsave 0x336e00 0x13400 "H:/Projects/DOA1U/XISO/captures/xemu-after-motion.bin"
```

Keep any monitor error text. Do not use `pmemsave`: these are guest **virtual**
addresses. No new port reproduction or build is needed for this comparison.
The monitor/menu and memsave syntax were checked against bundled xemu source
(`ui/xui/menubar.cc`, `hmp-commands.hx`). This has not been live-tested by the agent.

## Offline inspection

`tools/compare_collision_state.py` compares those blocks with an explicitly
selected existing port trace frame. Frame 1160 of collision-89-1927 is the last
frame before the height drop; 1161 is the first incorrect-height frame.
Action/category labels remain raw original values, not asserted move names.
Absolute heap pointers can differ across runtimes. A chosen port frame is not
automatically time-aligned to the emulator dump.

```powershell
python doa1u_port/tools/compare_collision_state.py XISO/captures/collision-89-1927/state.bin --frame 1160 --config XISO/captures/xemu-throw-config.bin --motion XISO/captures/xemu-throw-motion.bin
```
