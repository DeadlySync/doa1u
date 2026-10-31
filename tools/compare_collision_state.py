"""Compare a frozen xemu guest-state dump with one recorded port frame.

Heap pointers may differ between runtimes; compare action/counter/flag values,
not absolute loaded-asset addresses. A selected frame is not automatically a
time-aligned match to the emulator snapshot.
"""
import argparse
import struct
from pathlib import Path

from collision_trace import offset, records


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('trace', type=Path)
    parser.add_argument('--frame', type=int, required=True)
    parser.add_argument('--config', type=Path, required=True)
    parser.add_argument('--motion', type=Path, required=True)
    args = parser.parse_args()
    config, motion = args.config.read_bytes(), args.motion.read_bytes()
    if len(config) != 0xB0 or len(motion) != 0x13400:
        parser.error('Expected 0xB0 config bytes and 0x13400 motion bytes')
    port = next((data for frame, data in records(args.trace)
                 if frame == args.frame), None)
    if port is None:
        parser.error('Requested port frame is absent')

    def emulator(va, fmt):
        if 0x30D9A0 <= va < 0x30DA50:
            return struct.unpack_from(fmt, config, va - 0x30D9A0)
        return struct.unpack_from(fmt, motion, va - 0x336E00)

    def native(va, fmt):
        return struct.unpack_from(fmt, port, offset(va, struct.calcsize(fmt)))

    print(f'xemu snapshot versus port frame {args.frame} (not time-aligned)')
    for player in range(2):
        base = 0x30D9A0 + player * 0x58
        fields = [('root XYZ', base + 4, '<3f'),
                  ('action/category', base + 0x2A, '<4B'),
                  ('flags +34..3B', base + 0x34, '<8B'),
                  ('motion frame', 0x34869C + player * 2, '<h'),
                  ('keyframe', 0x336EE4 + player * 2, '<h'),
                  ('root motion XYZ', 0x348CC0 + player * 12, '<3f'),
                  ('motion flags', 0x337174 + player, '<B')]
        print(f'P{player + 1}:')
        for name, va, fmt in fields:
            print(f'  {name:22} xemu={emulator(va, fmt)} port={native(va, fmt)}')


if __name__ == '__main__':
    main()
