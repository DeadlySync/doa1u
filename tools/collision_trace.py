"""Read DOACOL01 snapshots; raw address fields deliberately avoid guessed names."""
import argparse
import csv
import struct
from pathlib import Path

BLOCKS = ((0x30D9A0, 0xB0), (0x336E00, 0x400), (0x347E00, 0x2000),
          (0x6E9A98, 0x10), (0x6E9B48, 0x10), (0x30AE30, 0x10))
RECORD_SIZE = 8 + sum(size for _, size in BLOCKS)


def records(path):
    with open(path, 'rb') as source:
        if source.read(8) != b'DOACOL01':
            raise ValueError('Not a DOACOL01 trace')
        while data := source.read(RECORD_SIZE):
            if len(data) != RECORD_SIZE:
                raise ValueError('Incomplete final record')
            frame, = struct.unpack_from('<Q', data)
            yield frame, data


def offset(address, size):
    start = 8
    for base, length in BLOCKS:
        if base <= address and address + size <= base + length:
            return start + address - base
        start += length
    raise ValueError(f'Address {address:#x} not captured')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('trace', type=Path)
    parser.add_argument('--csv', type=Path)
    args = parser.parse_args()
    target = args.csv or args.trace.with_suffix('.csv')
    # Root XYZ read from fighter config; remaining fields retain raw VA names.
    fields = []
    for player in range(2):
        prefix = f'p{player + 1}_'
        config = 0x30D9A0 + player * 0x58
        for name, delta in (('root_x', 4), ('root_y', 8), ('root_z', 12)):
            fields.append((prefix + name, '<f', offset(config + delta, 4)))
        for address in (0x348070, 0x348278, 0x348818, 0x348B98):
            fields.append((prefix + f'f_{address:x}', '<f', offset(address + player * 4, 4)))
        for address in (0x336EE4, 0x347F00, 0x347F04, 0x348814):
            fields.append((prefix + f's16_{address:x}', '<h', offset(address + player * 2, 2)))
        for address in (0x337174, 0x337178, 0x348618):
            fields.append((prefix + f'u8_{address:x}', '<B', offset(address + player, 1)))
        fields.append((prefix + 'script_347ef4', '<I', offset(0x347EF4 + player * 4, 4)))
    count = 0
    with open(target, 'w', newline='') as output:
        writer = csv.writer(output)
        writer.writerow(['frame'] + [name for name, _, _ in fields])
        for frame, data in records(args.trace):
            writer.writerow([frame] + [struct.unpack_from(fmt, data, pos)[0]
                                      for _, fmt, pos in fields])
            count += 1
    print(f'{count} frames -> {target}')


if __name__ == '__main__':
    main()
