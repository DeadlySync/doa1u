/* Original 570D9 CMP / 570E0 JNE straddles a generated function split.
 * The stock 570E0 starts with a fresh zero _flags and always swaps tables.
 * Recover precisely that predicate from the untouched config byte. EAX is
 * the config offset and ECX the player on entry, as in the original XBE.
 */
#include "recomp/gen/recomp_types.h"

void sub_000570E0(void)
{
    if (MEM8(g_eax + 0x30D9CB) == 1)
        g_ecx ^= 1;
    if (g_ecx == 0) {
        g_eax = MEM8(g_eax + 0x30D9CA);
        g_ecx = MEM32(0x301E34);
        SET_LO8(g_eax, MEM8(g_ecx + g_eax * 8 + 4));
    } else {
        g_edx = MEM8(g_eax + 0x30D9CA);
        g_ecx = MEM32(0x3020C0);
        SET_LO8(g_eax, MEM8(g_ecx + g_edx * 8 + 4));
    }
    g_esp += 4;
}
