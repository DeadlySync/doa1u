/* Native offline test of the production pushbuffer decoder; no game/GPU. */
#include <assert.h>
#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static uint32_t ram[16384], methods[32], values[32], channels[32], count;
static volatile uint32_t get_reg;
ptrdiff_t xbox_GetMemoryOffset(void) { return (ptrdiff_t)ram - (ptrdiff_t)0x80000000u; }
volatile uint32_t *xbox_Nv2aRegPtr(uint32_t offset) { (void)offset; return &get_reg; }
void xbox_Nv2aAckBusyBits(void) {}
void nv2a_pb_exec_walk_begin(void) {}
void nv2a_pb_exec_report(void) {}
void nv2a_pb_exec_method(uint32_t subch, uint32_t method, uint32_t param)
{
    assert(count < 32);
    channels[count] = subch; methods[count] = method; values[count++] = param;
}
#include "../src/xboxrecomp/src/kernel/nv2a_pb_scan.c"

static uint32_t header(uint32_t method, uint32_t n) { return (n << 18) | method; }
static void reset(uint32_t start)
{
    memset(ram, 0, sizeof ram); count = 0; get_reg = 0x12345678;
    nv2a_pb_resync(start);
}
int main(void)
{
    _putenv_s("RECOMP_PB_EXEC", "1");
    /* Restore FIXED in an unread tail beyond every previously observed PUT;
     * JUMP to a nonzero ring base, then draw. No guessed extrema can recover it. */
    reset(0x1000);
    ram[0x1000/4] = header(0x1E94, 1); ram[0x1004/4] = 4;
    ram[0x1008/4] = 0x0801;
    ram[0x0800/4] = header(0x1810, 1); ram[0x0804/4] = 7;
    nv2a_pb_scan_segment(0x80001000, 0x80000808);
    assert(count == 2 && methods[0] == 0x1E94 && values[0] == 4);
    assert(methods[1] == 0x1810 && values[1] == 7);
    assert(get_reg == 0x12345678); /* default timing must not publish mid-walk */

    /* Increasing packet split at PUT, followed by a fresh header. */
    reset(0x2000);
    ram[0x2000/4] = header(0x1E94, 2);
    ram[0x2004/4] = 6; ram[0x2008/4] = 0;
    ram[0x200C/4] = header(0x1EA0, 1); ram[0x2010/4] = 9;
    nv2a_pb_scan_segment(0x80002000, 0x80002008);
    assert(count == 1);
    nv2a_pb_scan_segment(0x80002008, 0x80002014);
    assert(count == 3 && methods[1] == 0x1E98 && values[1] == 0);
    assert(methods[2] == 0x1EA0 && values[2] == 9);

    /* Non-increasing packet split immediately after header. */
    reset(0x3000);
    ram[0x3000/4] = 0x40000000 | header(0x1800, 2);
    ram[0x3004/4] = 11; ram[0x3008/4] = 12;
    nv2a_pb_scan_segment(0x80003000, 0x80003004);
    nv2a_pb_scan_segment(0x80003004, 0x8000300C);
    assert(count == 2 && methods[0] == 0x1800 && methods[1] == 0x1800);
    assert(values[0] == 11 && values[1] == 12);

    /* CALL/RETURN around a state restore, followed by old-style ring JUMP. */
    reset(0x4000);
    ram[0x4000/4] = 0x5002;
    ram[0x5000/4] = header(0x1E94, 1); ram[0x5004/4] = 4;
    ram[0x5008/4] = 0x00020000;
    ram[0x4004/4] = 0x20003800;
    ram[0x3800/4] = header(0x1810, 1); ram[0x3804/4] = 19;
    nv2a_pb_scan_segment(0x80004000, 0x80003808);
    assert(count == 2 && values[0] == 4 && values[1] == 19);
    assert(!nv2a_pb_scan_in_call());
    puts("PASS: unread wrap tail, increasing/non-increasing split packets, CALL/RETURN, both JUMP encodings, unchanged GET timing");
    return 0;
}
