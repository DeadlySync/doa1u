"""Compile actual trace hook offline: verify record layout, bound, read-only RAM."""
from pathlib import Path
import importlib.util
import subprocess

root = Path(__file__).resolve().parents[1]
build = root / 'build/collision_trace_check'
build.mkdir(exist_ok=True)
code = r'''
#include "common/guest_runtime.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
ptrdiff_t g_xbox_mem_offset;
void sub_00042C50_gen(void) {}
void sub_000701B0_gen(void) {}
void fighter_collision_trace_frame(uint64_t);
uintptr_t fighter_collision_root_access(uint32_t, const char *, unsigned);
int main(int argc, char **argv) {
    unsigned char *ram = calloc(1, 0x700000);
    assert(ram && argc == 2);
    g_xbox_mem_offset = (ptrdiff_t)ram;
    memset(ram + 0x30D9A0, 0x5A, 0xB0);
    memset(ram + 0x347E00, 0xA5, 0x2000);
    if (strcmp(argv[1], "off"))
        assert(!_putenv_s("RECOMP_COLLISION_TRACE", argv[1]));
    else assert(!_putenv_s("RECOMP_COLLISION_TRACE", ""));
    assert(fighter_collision_root_access(0x30D9A8, "test_before", 11)
           == (uintptr_t)(ram + 0x30D9A8));
    GMEM32(0x30D9A8) = 0;
    assert(fighter_collision_root_access(0x30D9A8, "test_after", 12)
           == (uintptr_t)(ram + 0x30D9A8));
    /* The hook must observe the write without undoing/changing it. */
    assert(GMEM32(0x30D9A8) == 0);
    memset(ram + 0x30D9A0, 0x5A, 0xB0);
    for (unsigned i = 0; i < 7202; ++i) fighter_collision_trace_frame(i);
    for (unsigned i = 0; i < 0xB0; ++i) assert(ram[0x30D9A0+i] == 0x5A);
    for (unsigned i = 0; i < 0x2000; ++i) assert(ram[0x347E00+i] == 0xA5);
    free(ram);
}
'''
source = build / 'check.c'
exe = build / 'check.exe'
source.write_text(code)
subprocess.run(['cl.exe', '/nologo', '/O2', '/I' + str(root / 'src'),
                str(source), str(root / 'src/render/fighters/fighter_isolation.c'),
                '/Fe:' + str(exe), '/Fo:' + str(build) + '/'], check=True, cwd=build)
disabled = subprocess.run([str(exe), 'off'], check=True, cwd=build, capture_output=True, text=True)
assert '[COLLISION root]' not in disabled.stderr
trace = build / 'state.bin'
enabled = subprocess.run([str(exe), str(trace)], check=True, cwd=build, capture_output=True, text=True)
assert '5A5A5A5A -> 00000000 previous_access=test_before:11 observed_at=test_after:12' in enabled.stderr
spec = importlib.util.spec_from_file_location('collision_trace', root / 'tools/collision_trace.py')
reader = importlib.util.module_from_spec(spec)
spec.loader.exec_module(reader)
assert trace.stat().st_size == 8 + 7200 * reader.RECORD_SIZE
count = 0
for frame, data in reader.records(trace):
    assert frame == count
    start = reader.offset(0x30D9A0, 0xB0)
    assert data[start:start + 0xB0] == b'\x5a' * 0xB0
    start = reader.offset(0x347E00, 0x2000)
    assert data[start:start + 0x2000] == b'\xa5' * 0x2000
    count += 1
assert count == 7200
subprocess.run(['python', str(root / 'tools/collision_trace.py'), str(trace)], check=True)
print('PASS: disabled/enabled hook, raw snapshots, frame numbering, read-only memory, 7200-frame bound, CSV')
