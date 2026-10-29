"""Exercise the production guest-vblank schedule without launching the game."""
from pathlib import Path
import re
import subprocess

root = Path(__file__).resolve().parents[1]
source = (root / 'src/xboxrecomp/src/kernel/kernel_bridge.c').read_text(encoding='utf-8')
code = source[source.index('#define VBLANK_RESTART_NS'):source.index('/* RECOMP_VBLANK without the 60 Hz schedule:')]
build = root / 'build/vblank_schedule_check'
build.mkdir(exist_ok=True)
harness = r'''
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#define XBOX_VBLANK_PACED 2
static int mode = 2, raised;
static int kernel_vblank_mode(void) { return mode; }
static long long kernel_clock_ms(void) { return 0; }
static void kernel_vblank_count(long long t) { (void)t; }
static void kernel_vblank_raise(void) { raised++; }
static void check(int ok) { if (!ok) { puts("FAIL schedule"); exit(1); } }
'''
tests = r'''
int main(void) {
    uint64_t next, now = 1000000000ull;
    check(kernel_vblank_tick_ns(now, &next) && raised == 1);
    check(next == now + 1000000000ull / 60);
    for (unsigned i=1; i<=600; i++) {
        now = next;
        check(!kernel_vblank_tick_ns(now-1, &next));
        check(kernel_vblank_tick_ns(now, &next));
    }
    check(raised == 601 && now == 11000000000ull);
    /* Short background/scheduling stall, formerly a burst of old vblanks. */
    now = next + 70000000ull;
    check(kernel_vblank_tick_ns(now, &next));
    check(next > now + 16000000ull);
    for (unsigned i=1; i<=15; i++)
        check(!kernel_vblank_tick_ns(now+i*1000000ull, &next));
    check(kernel_vblank_tick_ns(next, &next));
    now = next + 5000000000ull;
    check(kernel_vblank_tick_ns(now, &next) && next > now+16000000ull);
    mode = 0;
    check(!kernel_vblank_tick_ns(now, &next) && next == 0);
    puts("PASS guest vblank: 60Hz grid, early calls, short/long stall rebasing, disabled mode");
}
'''
test = build / 'check.c'
test.write_text(harness + code + tests)
exe = build / 'check.exe'
subprocess.run(['cl.exe', '/nologo', '/W4', str(test), '/Fe'+str(exe),
                '/Fo'+str(build / 'check.obj')], check=True, cwd=build)
subprocess.run([str(exe)], check=True)
