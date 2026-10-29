/**
 * DOAU1 - Recompiled code chunk 77
 * Functions: 250 (0x001FC2A6 - 0x00201692)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001FC2A6
 * Original: 0x001FC2A6 - 0x001FC2AB (5 bytes, 3 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC2A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FC2A6: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001FC2AB
 * Original: 0x001FC2AB - 0x001FC9DE (1843 bytes, 585 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FC2AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC2AB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = ecx;
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ebx;
    if ((_fa == 0)) goto loc_001FC734; /* je: equal / zero */

loc_001FC2C8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001FC764; /* je: equal / zero */

loc_001FC2CF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001FC435; /* je: equal / zero */

loc_001FC2D7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001FC48C; /* je: equal / zero */

loc_001FC2DE: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001FC2F0; /* je: equal / zero */

loc_001FC2E3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001FC482; /* je: equal / zero */

loc_001FC2EB: ;
    goto loc_001FC9DA;

loc_001FC2F0: ;
    PUSH32(esp, MEM32(ebx + 0x14D8));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC2FDu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FC2FD: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FC9D6; /* jne: not equal / not zero */

loc_001FC30B: ;
    PUSH32(esp, MEM32(ebx + 0x14E0));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC318u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FC318: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FC9D6; /* jne: not equal / not zero */

loc_001FC326: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FC339; /* je: equal / zero */

loc_001FC32D: ;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC335u); RECOMP_ABI_CALL(0x0020C3FFu, sub_0020C3FF); /* call 0x0020C3FF */

loc_001FC335: ;
    MEM32(esi + 0x30) = MEM32(esi + 0x30) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001FC339: ;
    eax = ebx + 0x13D8;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 8) = eax;

loc_001FC344: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FC377; /* je: equal / zero */

loc_001FC34D: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC355u); RECOMP_ABI_CALL(0x001F9E3Cu, sub_001F9E3C); /* call 0x001F9E3C */

loc_001FC355: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FC377; /* jne: not equal / not zero */

loc_001FC359: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + -4);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FC3A0; /* jne: not equal / not zero */

loc_001FC365: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC370u); RECOMP_ABI_CALL(0x0020C3FFu, sub_0020C3FF); /* call 0x0020C3FF */

loc_001FC370: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + -4) = MEM32(eax + -4) & 0;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001FC377: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FC394; /* je: equal / zero */

loc_001FC380: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FC3C7; /* jne: not equal / not zero */

loc_001FC386: ;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC38Eu); RECOMP_ABI_CALL(0x0020C3FFu, sub_0020C3FF); /* call 0x0020C3FF */

loc_001FC38E: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001FC394: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x48;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FC344; /* jb: below (unsigned <) */

loc_001FC39E: ;
    goto loc_001FC3FD;

loc_001FC3A0: ;
    eax = edi + edi * 8;
    eax = ebx + eax * 8 + 0x13D4;
    ecx = MEM32(eax);
    MEM32(esi + 0x30) = ecx;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0x30);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x14D8));
    PUSH32(esp, MEM32(ebx + 0x14D4));
    goto loc_001FC3EC;

loc_001FC3C7: ;
    eax = edi + edi * 8;
    eax = ebx + eax * 8 + 0x13D8;
    ecx = MEM32(eax);
    MEM32(esi + 0x30) = ecx;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0x30);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x14E0));
    PUSH32(esp, MEM32(ebx + 0x14DC));

loc_001FC3EC: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC3F3u); RECOMP_ABI_CALL(0x0020B316u, sub_0020B316); /* call 0x0020B316 */

loc_001FC3F3: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FC966; /* jl: less (signed <) */

loc_001FC3FD: ;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FC9DA; /* jne: not equal / not zero */

loc_001FC407: ;
    ebx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC412u); RECOMP_ABI_CALL(0x001F9A72u, sub_001F9A72); /* call 0x001F9A72 */

loc_001FC412: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FC966; /* jl: less (signed <) */

loc_001FC41C: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC424u); RECOMP_ABI_CALL(0x001F9B6Eu, sub_001F9B6E); /* call 0x001F9B6E */

loc_001FC424: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FC966; /* jl: less (signed <) */

loc_001FC42E: ;
    MEM32(esi + 0x10) = 3;

loc_001FC435: ;
    PUSH32(esp, MEM32(ebx + 0x14D8));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC442u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FC442: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FC9D6; /* jne: not equal / not zero */

loc_001FC450: ;
    PUSH32(esp, MEM32(ebx + 0x14E0));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC45Du); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FC45D: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FC9D6; /* jne: not equal / not zero */

loc_001FC46B: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC473u); RECOMP_ABI_CALL(0x001F9A98u, sub_001F9A98); /* call 0x001F9A98 */

loc_001FC473: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC47Bu); RECOMP_ABI_CALL(0x001F9B94u, sub_001F9B94); /* call 0x001F9B94 */

loc_001FC47B: ;
    MEM32(esi + 0x10) = 0xC;

loc_001FC482: ;
    edi = 0x1500F0;
    goto loc_001FC966;

loc_001FC48C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -40) = eax;
    MEM32(ebp + -20) = eax;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, MEM32(eax));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC4A3u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FC4A3: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FC9DA; /* je: equal / zero */

loc_001FC4AD: ;
    if (CMP_L(_fas, _fbs)) goto loc_001FC963; /* jl: less (signed <) */

loc_001FC4B3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FC9D6; /* jne: not equal / not zero */

loc_001FC4BF: ;
    ebx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -56;
    PUSH32(esp, eax);
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x18);
    PUSH32(esp, MEM32(eax));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC4E2u); RECOMP_ABI_CALL(0x001FF5DAu, sub_001FF5DA); /* call 0x001FF5DA */

loc_001FC4E2: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FC966; /* jl: less (signed <) */

loc_001FC4EC: ;
    edi = MEM32(ebp + -36);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FC72A; /* je: equal / zero */

loc_001FC4F7: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0xC8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FC72A; /* jne: not equal / not zero */

loc_001FC504: ;
    PUSH32(esp, 4);
    eax = ebx + 0x13B4;
    POP32(esp, ecx);

loc_001FC50D: ;
    edx = MEM32(eax + -12);
    edx = edx | MEM32(eax + -8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_001FC51D; /* je: equal / zero */

loc_001FC515: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001FC51D; /* jne: not equal / not zero */

loc_001FC51A: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) + 1;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001FC51D: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001FC50D; /* jne: not equal / not zero */

loc_001FC523: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), eax (32-bit) */
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + 8) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_001FC6E7; /* jbe: below or equal (unsigned <=) */

loc_001FC537: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x20;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -44) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001FC720; /* ja: above (unsigned >) */

loc_001FC546: ;
    ecx = MEM32(ebp + -48);
    if (CMP_B(_fa, _fb)) goto loc_001FC554; /* jb: below (unsigned <) */

loc_001FC54B: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001FC720; /* ja: above (unsigned >) */

loc_001FC554: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FC720; /* jb: below (unsigned <) */

loc_001FC560: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -44) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001FC720; /* ja: above (unsigned >) */

loc_001FC56E: ;
    if (CMP_B(_fa, _fb)) goto loc_001FC579; /* jb: below (unsigned <) */

loc_001FC570: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001FC720; /* ja: above (unsigned >) */

loc_001FC579: ;
    PUSH32(esp, MEM32(edi + 8));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC583u); RECOMP_ABI_CALL(0x001F9EAAu, sub_001F9EAA); /* call 0x001F9EAA */

loc_001FC583: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001FC720; /* je: equal / zero */

loc_001FC58E: ;
    ecx = MEM32(edi + 4);
    eax = edi + 0x30;
    MEM32(ebp + -28) = eax;
    eax = ecx + eax + -16;
    MEM32(ebp + -24) = eax;
    eax = MEM32(edi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FC5B7; /* jl: less (signed <) */

loc_001FC5A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1512F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1512F0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FC5B7; /* je: equal / zero */

loc_001FC5AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1512F1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1512F1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FC641; /* jne: not equal / not zero */

loc_001FC5B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80151200u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80151200u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FC5D4; /* je: equal / zero */

loc_001FC5BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1512EF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1512EF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001FC715; /* jle: less or equal (signed <=) */

loc_001FC5C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1512F1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1512F1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001FC715; /* jg: greater (signed >) */

loc_001FC5D4: ;
    eax = MEM32(esi + 0x3C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -12) = eax;

loc_001FC5DC: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax);
    edx = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FC5FC; /* jne: not equal / not zero */

loc_001FC5E8: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FC5FC; /* jne: not equal / not zero */

loc_001FC5F3: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001FC606; /* je: equal / zero */

loc_001FC5FC: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 0x70;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FC5DC; /* jb: below (unsigned <) */

loc_001FC606: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001FC641; /* jae: above or equal (unsigned >=) */

loc_001FC60B: ;
    eax = ecx + ecx * 8;
    eax = ebx + eax * 8 + 0x13B4;
    MEM32(eax) = MEM32(eax) | 0x40;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1512F1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x20), 0x1512F1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FC641; /* je: equal / zero */

loc_001FC621: ;
    edx = MEM32(esi + 0x3C);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = eax + edx + 0x6C;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FC637; /* jl: less (signed <) */

loc_001FC632: ;
    edx = MEM32(edi + 0x20);
    MEM32(eax) = edx;

loc_001FC637: ;
    ecx = ecx + ebx + 0x6B8;
    MEM8(ecx) = MEM8(ecx) | 1;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_001FC641: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0x2C);
    edx = MEM32(eax + 8);
    ecx = MEM32(edi + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FC678; /* je: equal / zero */

loc_001FC651: ;
    PUSH32(esp, MEM32(ebp + -24));
    edx = ebp + -28;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -8);
    ecx = ZX16(MEM16(ecx + 0x28));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC669u); RECOMP_ABI_CALL(0x001FB324u, sub_001FB324); /* call 0x001FB324 */

loc_001FC669: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FC966; /* jl: less (signed <) */

loc_001FC673: ;
    edi = MEM32(ebp + -8);
    goto loc_001FC680;

loc_001FC678: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FC680; /* je: equal / zero */

loc_001FC67C: ;
    MEM32(eax + 8) = MEM32(eax + 8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001FC680: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0x30);
    edx = MEM32(eax + 8);
    ecx = MEM32(edi + 0x2A);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FC6BF; /* je: equal / zero */

loc_001FC690: ;
    PUSH32(esp, MEM32(ebp + -24));
    edx = ebp + -28;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -8);
    ecx = ZX16(MEM16(ecx + 0x2E));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC6A8u); RECOMP_ABI_CALL(0x001F9F9Fu, sub_001F9F9F); /* call 0x001F9F9F */

loc_001FC6A8: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FC966; /* jl: less (signed <) */

loc_001FC6B2: ;
    eax = MEM32(ebp + -24);
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FC720; /* jne: not equal / not zero */

loc_001FC6BA: ;
    edi = MEM32(ebp + -8);
    goto loc_001FC6C7;

loc_001FC6BF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FC6C7; /* je: equal / zero */

loc_001FC6C3: ;
    MEM32(eax + 8) = MEM32(eax + 8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001FC6C7: ;
    eax = MEM32(ebp + -16);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) | 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(edi + 4);
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + eax + 0x20;
    eax = MEM32(ebp + -32);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    MEM32(ebp + -8) = edi;
    if (CMP_B(_fa, _fb)) goto loc_001FC537; /* jb: below (unsigned <) */

loc_001FC6E7: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, MEM32(eax));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC6F3u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001FC6F3: ;
    PUSH32(esp, MEM32(esi + 0x18));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC6FDu); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001FC6FD: ;
    PUSH32(esp, MEM32(esi + 8));
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC709u); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001FC709: ;
    MEM32(esi + 0x10) = 0xA;
    goto loc_001FC9DA;

loc_001FC715: ;
    eax = MEM32(ebp + -8);
    edi = MEM32(eax + 0x20);
    goto loc_001FC9D6;

loc_001FC720: ;
    edi = 0x80150001u;
    goto loc_001FC966;

loc_001FC72A: ;
    edi = 0x80004005u;
    goto loc_001FC966;

loc_001FC734: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC73Cu); RECOMP_ABI_CALL(0x001F9A30u, sub_001F9A30); /* call 0x001F9A30 */

loc_001FC73C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FC74F; /* je: equal / zero */

loc_001FC742: ;
    PUSH32(esp, MEM32(esi + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC74Au); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001FC74A: ;
    goto loc_001FC9D6;

loc_001FC74F: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC757u); RECOMP_ABI_CALL(0x001F9B2Cu, sub_001F9B2C); /* call 0x001F9B2C */

loc_001FC757: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FC742; /* jne: not equal / not zero */

loc_001FC75D: ;
    MEM32(esi + 0x10) = 1;

loc_001FC764: ;
    PUSH32(esp, MEM32(ebx + 0x14D8));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC771u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FC771: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FC9D6; /* jne: not equal / not zero */

loc_001FC77F: ;
    PUSH32(esp, MEM32(ebx + 0x14E0));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC78Cu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FC78C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FC9D6; /* jne: not equal / not zero */

loc_001FC79A: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) & 0;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebx + 0x13B4;
    MEM32(ebp + -20) = eax;

loc_001FC7A7: ;
    ecx = MEM32(eax + -12);
    ecx = ecx | MEM32(eax + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_001FC811; /* je: equal / zero */

loc_001FC7AF: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001FC811; /* jne: not equal / not zero */

loc_001FC7B4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x1C;
    edi = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x20);
    PUSH32(esp, ecx);
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, MEM32(ebx + 0x14D4));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC7D7u); RECOMP_ABI_CALL(0x0020A673u, sub_0020A673); /* call 0x0020A673 */

loc_001FC7D7: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FC966; /* jl: less (signed <) */

loc_001FC7E1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x1C;
    edi = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x24);
    PUSH32(esp, ecx);
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, MEM32(ebx + 0x14DC));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC804u); RECOMP_ABI_CALL(0x0020A673u, sub_0020A673); /* call 0x0020A673 */

loc_001FC804: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FC966; /* jl: less (signed <) */

loc_001FC80E: ;
    eax = MEM32(ebp + -20);

loc_001FC811: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 4 (32-bit) */
    MEM32(ebp + -20) = eax;
    if (CMP_B(_fa, _fb)) goto loc_001FC7A7; /* jb: below (unsigned <) */

loc_001FC820: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(esi + 0x40);
    _fb = (uint32_t)(0x13A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x13A8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -20) = eax;

loc_001FC832: ;
    ecx = MEM32(eax);
    ecx = ecx | MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_001FC932; /* je: equal / zero */

loc_001FC83D: ;
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xC), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001FC932; /* jne: not equal / not zero */

loc_001FC847: ;
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(ebp + -16);
    eax = ecx + eax + 0xC;
    esi = eax + 1;

loc_001FC854: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FC854; /* jne: not equal / not zero */

loc_001FC85B: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax + 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x98;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    edi = MEM32(ebp + -4);
    eax = esi + 0x78;
    MEM32(ebx + 4) = eax;
    eax = edi + 0x14C8;
    MEM32(ebx) = 0x401;
    ecx = MEM32(eax);
    MEM32(ebx + 8) = ecx;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    eax = ebx + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(ebp + -40) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC8A4u); RECOMP_ABI_CALL(0x001E00BCu, sub_001E00BC); /* call 0x001E00BC */

loc_001FC8A4: ;
    ecx = MEM32(ebx + 8);
    eax = MEM32(ebp + -20);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(eax);
    MEM32(ebx + 0x20) = ecx;
    eax = MEM32(eax + 4);
    MEM32(ebx + 0x24) = eax;
    eax = MEM32(edi + 4);
    MEM32(ebx + 0x76) = eax;
    eax = ebx + 0x2A;
    PUSH32(esp, eax);
    MEM16(ebx + 0x28) = LO16(esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC8CBu); RECOMP_ABI_CALL(0x001CEF8Bu, sub_001CEF8B); /* call 0x001CEF8B */

loc_001FC8CB: ;
    eax = MEM32(edi + 0x14E4);
    MEM32(ebx + 0x4E) = eax;
    eax = MEM32(edi + 0x14E8);
    MEM32(ebx + 0x52) = eax;
    eax = MEM32(ebp + -20);
    esi = edi + 0x14EC;
    edx = MEM32(ebp + 8);
    edi = ebx + 0x56;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    ecx = MEM32(eax + 0x2C);
    ecx = MEM32(ecx + 8);
    esi = MEM32(ebp + -16);
    MEM32(ebx + 0x66) = ecx;
    eax = MEM32(eax + 0x30);
    eax = MEM32(eax + 8);
    MEM32(ebx + 0x6A) = eax;
    eax = MEM32(ebp + -40);
    edx = MEM32(edx + 0x3C);
    esi = esi + edx + 0xC;
    ecx = eax;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ebx + 0x98;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    esi = MEM32(ebp + 8);
    ebx = ebx + eax + 0x98;
    eax = MEM32(ebp + -20);

loc_001FC932: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -16) = MEM32(ebp + -16) + 0x70;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0x1C0 (32-bit) */
    MEM32(ebp + -20) = eax;
    if (CMP_B(_fa, _fb)) goto loc_001FC832; /* jb: below (unsigned <) */

loc_001FC949: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x8021);
    PUSH32(esp, 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC958u); RECOMP_ABI_CALL(0x0020C40Du, sub_0020C40D); /* call 0x0020C40D */

loc_001FC958: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FC977; /* jne: not equal / not zero */

loc_001FC95E: ;
    edi = 0x8007000Eu;

loc_001FC963: ;
    ebx = MEM32(ebp + -4);

loc_001FC966: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC96Eu); RECOMP_ABI_CALL(0x001F9D0Fu, sub_001F9D0F); /* call 0x001F9D0F */

loc_001FC96E: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

loc_001FC977: ;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 8) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    MEM32(ebx + 0xC) = ecx;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x7530);
    PUSH32(esp, MEM32(esi + 0x44));
    PUSH32(esp, MEM32(esi + 0x40));
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = esi + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x48));
    PUSH32(esp, MEM32(0x2F7B2C));
    PUSH32(esp, 0x401);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC9ABu); RECOMP_ABI_CALL(0x001F8F54u, sub_001F8F54); /* call 0x001F8F54 */

loc_001FC9AB: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC9B5u); RECOMP_ABI_CALL(0x001FFDC1u, sub_001FFDC1); /* call 0x001FFDC1 */

loc_001FC9B5: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FC9CD; /* jl: less (signed <) */

loc_001FC9BB: ;
    eax = MEM32(esi + 0x18);
    MEM32(ebx + 4) = eax;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x10) = 4;
    goto loc_001FC9DA;

loc_001FC9CD: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FC9D6u); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001FC9D6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FC963; /* jl: less (signed <) */

loc_001FC9DA: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001FC96E;

}

/**
 * sub_001FC9DE
 * Original: 0x001FC9DE - 0x001FCA2C (78 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FC9DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC9DE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    MEM32(ebp + -4) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ecx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_001FC9FB; /* ja: above (unsigned >) */

loc_001FC9F1: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x3E (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001FCCCA(); return; } /* jb: below (unsigned <) */

loc_001FC9FB: ;
    edi = MEM32(ebp + 8);
    ebx = MEM32(edi + 4);
    eax = ebx + 0x20;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FCCCA(); return; } /* jne: not equal / not zero */

loc_001FCA0D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FCCCA(); return; } /* jne: not equal / not zero */

loc_001FCA16: ;
    eax = MEM32(edi + 0x2A);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FCA2C(); return; } /* jge: greater or equal (signed >=) */

loc_001FCA20: ;
    MEM32(ebp + 8) = 0x80150007u;
    g_seh_ebp = ebp; sub_001FCCD1(); return; /* tail jmp 0x001FCCD1 */

}

/**
 * sub_001FCA2C
 * Original: 0x001FCA2C - 0x001FCA7F (83 bytes, 27 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FCA2C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FCA2C: ;
    PUSH32(esp, MEM32(edi + 0x24));
    esi = MEM32(edi + 0x20);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FCA3Bu); RECOMP_ABI_CALL(0x001F9E54u, sub_001F9E54); /* call 0x001F9E54 */

loc_001FCA3B: ;
    MEM32(ebp + 0x10) = eax;
    eax = MEM32(edi + 0x3A);
    ecx = ebx + edi + 0x20;
    ebx = edi + eax * 4 + 0x3E;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    MEM32(ebp + -8) = ecx;
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001FCCCA(); return; } /* ja: above (unsigned >) */

loc_001FCA54: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    eax = edi + 0x3E;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 0x24));
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FCA65u); RECOMP_ABI_CALL(0x001F9E85u, sub_001F9E85); /* call 0x001F9E85 */

loc_001FCA65: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001FCA6Eu); RECOMP_ABI_CALL(0x001DFC69u, sub_001DFC69); /* call 0x001DFC69 */

loc_001FCA6E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 0x34)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x34), LO16(esi) (16-bit) */
    MEM32(ebp + -16) = esi;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FCCC5(); return; } /* jbe: below or equal (unsigned <=) */

loc_001FCA7D: ;
    g_seh_ebp = ebp; sub_001FCA81(); return; /* tail jmp 0x001FCA81 */

}

/**
 * sub_001FCA7F
 * Original: 0x001FCA7F - 0x001FCA81 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FCA7F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FCA7F: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001FCA81(); return; /* fallthrough 0x001FCA81 */

}

/**
 * sub_001FCA81
 * Original: 0x001FCA81 - 0x001FCAEB (106 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FCA81(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FCA81: ;
    edx = MEM32(ebp + -8);
    eax = ebx;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001FCCCA(); return; } /* ja: above (unsigned >) */

loc_001FCA91: ;
    ecx = ZX16(MEM16(eax + 4));
    eax = ZX16(MEM16(edi + 0x28));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(ebp + -12) = ecx;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FCCAF(); return; } /* jl: less (signed <) */

loc_001FCAA6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FCBC2(); return; } /* jle: less or equal (signed <=) */

loc_001FCAAF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FCB42(); return; } /* je: equal / zero */

loc_001FCAB8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FCB06(); return; } /* je: equal / zero */

loc_001FCABD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FCCAF(); return; } /* jne: not equal / not zero */

loc_001FCAC6: ;
    eax = ebx;
    _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1A;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001FCCCA(); return; } /* ja: above (unsigned >) */

loc_001FCAD3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001FCCCA(); return; } /* ja: above (unsigned >) */

loc_001FCADB: ;
    _fa = (uint32_t)(MEM16(eax + 0x18)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x18), LO16(esi) (16-bit) */
    ecx = MEM32(ebp + -4);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FCAEB(); return; } /* jne: not equal / not zero */

loc_001FCAE4: ;
    PUSH32(esp, 0x20000000);
    g_seh_ebp = ebp; sub_001FCAF0(); return; /* tail jmp 0x001FCAF0 */

}

/**
 * sub_001FCAEB
 * Original: 0x001FCAEB - 0x001FCAF0 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FCAEB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FCAEB: ;
    PUSH32(esp, 0x10000000);

    g_seh_ebp = ebp; sub_001FCAF0(); return; /* fallthrough 0x001FCAF0 */

}

/**
 * sub_001FCAF0
 * Original: 0x001FCAF0 - 0x001FCB06 (22 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FCAF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FCAF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, MEM32(eax));
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, MEM32(eax + 0x2C));
    PUSH32(esp, 0x001FCB01u); RECOMP_ABI_CALL(0x001FB80Fu, sub_001FB80F); /* call 0x001FB80F */

loc_001FCB01: ;
    g_seh_ebp = ebp; sub_001FCCAF(); return; /* tail jmp 0x001FCCAF */

}

/**
 * sub_001FCB06
 * Original: 0x001FCB06 - 0x001FCB42 (60 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FCB06(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FCB06: ;
    eax = ebx;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001FCCCA(); return; } /* ja: above (unsigned >) */

loc_001FCB13: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001FCCCA(); return; } /* ja: above (unsigned >) */

loc_001FCB1B: ;
    PUSH32(esp, MEM32(eax + 0x18));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, MEM32(eax + 0xC));
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, MEM32(eax + 0x10));
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, MEM32(eax));
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, MEM32(eax + 0x2C));
    PUSH32(esp, 0x001FCB3Du); RECOMP_ABI_CALL(0x001FB861u, sub_001FB861); /* call 0x001FB861 */

loc_001FCB3D: ;
    g_seh_ebp = ebp; sub_001FCCAF(); return; /* tail jmp 0x001FCCAF */

}

/**
 * sub_001FCB42
 * Original: 0x001FCB42 - 0x001FCBC2 (128 bytes, 38 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FCB42(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FCB42: ;
    esi = ebx + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    eax = ebx;
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001FCCCA(); return; } /* ja: above (unsigned >) */

loc_001FCB4F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001FCCCA(); return; } /* ja: above (unsigned >) */

loc_001FCB57: ;
    SET_LO16(edx, MEM16(eax + 0x1A));
    ecx = ZX16(MEM16(eax + 0x18));
    ebx = ZX16(LO16(edx));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -8) (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001FCCCA(); return; } /* ja: above (unsigned >) */

loc_001FCB6F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -12) (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001FCCCA(); return; } /* ja: above (unsigned >) */

loc_001FCB78: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(8) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 8 (16-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001FCCAF(); return; } /* ja: above (unsigned >) */

loc_001FCB82: ;
    _fa = (uint32_t)(MEM16(eax + 0x18)) & 0xFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x18), 0x18 (16-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001FCCAF(); return; } /* ja: above (unsigned >) */

loc_001FCB8D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0x18));
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = ZX16(LO16(ecx));
    ecx = ecx + eax + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, MEM32(eax + 0x10));
    PUSH32(esp, MEM32(eax + 0xC));
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, MEM32(eax));
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, MEM32(eax + 0x2C));
    PUSH32(esp, 0x001FCBBDu); RECOMP_ABI_CALL(0x001FB431u, sub_001FB431); /* call 0x001FB431 */

loc_001FCBBD: ;
    g_seh_ebp = ebp; sub_001FCCAF(); return; /* tail jmp 0x001FCCAF */

}

/**
 * sub_001FCBC2
 * Original: 0x001FCBC2 - 0x001FCC39 (119 bytes, 36 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FCBC2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FCBC2: ;
    edx = ebx + 0x14;
    esi = ebx;
    ebx = edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -8) (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001FCCCA(); return; } /* ja: above (unsigned >) */

loc_001FCBD2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001FCCCA(); return; } /* ja: above (unsigned >) */

loc_001FCBDA: ;
    ecx = ZX16(MEM16(esi + 0x12));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -8) (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001FCCCA(); return; } /* ja: above (unsigned >) */

loc_001FCBE9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -12) (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001FCCCA(); return; } /* ja: above (unsigned >) */

loc_001FCBF2: ;
    eax = ZX16(MEM16(esi + 0xC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FCCAF(); return; } /* je: equal / zero */

loc_001FCBFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FCC73(); return; } /* je: equal / zero */

loc_001FCC03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FCC4E(); return; } /* je: equal / zero */

loc_001FCC08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FCC42(); return; } /* je: equal / zero */

loc_001FCC0D: ;
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FCC39(); return; } /* jle: less or equal (signed <=) */

loc_001FCC0F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FCC39(); return; } /* jg: greater (signed >) */

loc_001FCC14: ;
    _fa = (uint32_t)(MEM32(esi + 0xE)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xE), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FCCAF(); return; } /* jl: less (signed <) */

loc_001FCC1E: ;
    PUSH32(esp, MEM32(esi));
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, MEM32(esi + 8));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, MEM32(eax + 0x2C));
    PUSH32(esp, 0x001FCC34u); RECOMP_ABI_CALL(0x001FB741u, sub_001FB741); /* call 0x001FB741 */

loc_001FCC34: ;
    MEM32(ebp + 8) = eax;
    g_seh_ebp = ebp; sub_001FCCAF(); return; /* tail jmp 0x001FCCAF */

}

/**
 * sub_001FCC34
 * Original: 0x001FCC34 - 0x001FCC39 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FCC34(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FCC34: ;
    MEM32(ebp + 8) = eax;
    g_seh_ebp = ebp; sub_001FCCAF(); return; /* tail jmp 0x001FCCAF */

}

/**
 * sub_001FCC39
 * Original: 0x001FCC39 - 0x001FCC42 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FCC39(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FCC39: ;
    MEM32(ebp + 8) = 0x80070057u;
    g_seh_ebp = ebp; sub_001FCCAF(); return; /* tail jmp 0x001FCCAF */

}

/**
 * sub_001FCC42
 * Original: 0x001FCC42 - 0x001FCC4E (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FCC42(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FCC42: ;
    _fa = (uint32_t)(MEM32(esi + 0xE)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xE), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FCCAF(); return; } /* jl: less (signed <) */

loc_001FCC48: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0);
    g_seh_ebp = ebp; sub_001FCC5B(); return; /* tail jmp 0x001FCC5B */

}

/**
 * sub_001FCC4E
 * Original: 0x001FCC4E - 0x001FCC73 (37 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FCC4E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FCC4E: ;
    _fa = (uint32_t)(MEM32(esi + 0xE)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xE), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FCCAF(); return; } /* jl: less (signed <) */

loc_001FCC54: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x80000000u);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, MEM32(eax + 0x2C));
    PUSH32(esp, 0x001FCC71u); RECOMP_ABI_CALL(0x001FB60Cu, sub_001FB60C); /* call 0x001FB60C */

loc_001FCC71: ;
    g_seh_ebp = ebp; sub_001FCC34(); return; /* tail jmp 0x001FCC34 */

}

/**
 * sub_001FCC5B
 * Original: 0x001FCC5B - 0x001FCC73 (24 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FCC5B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FCC5B: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, MEM32(eax + 0x2C));
    PUSH32(esp, 0x001FCC71u); RECOMP_ABI_CALL(0x001FB60Cu, sub_001FB60C); /* call 0x001FB60C */

loc_001FCC71: ;
    g_seh_ebp = ebp; sub_001FCC34(); return; /* tail jmp 0x001FCC34 */

}

/**
 * sub_001FCC73
 * Original: 0x001FCC73 - 0x001FCCAF (60 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FCC73(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FCC73: ;
    _fa = (uint32_t)(MEM32(esi + 0xE)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xE), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FCC99; /* jl: less (signed <) */

loc_001FCC79: ;
    PUSH32(esp, MEM32(esi));
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, MEM32(eax + 0x2C));
    PUSH32(esp, 0x001FCC96u); RECOMP_ABI_CALL(0x001FB60Cu, sub_001FB60C); /* call 0x001FB60C */

loc_001FCC96: ;
    MEM32(ebp + 8) = eax;

loc_001FCC99: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FCCAF(); return; } /* je: equal / zero */

loc_001FCCA3: ;
    PUSH32(esp, MEM32(esi + 0xE));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001FCCAFu); RECOMP_ABI_CALL(0x001EA857u, sub_001EA857); /* call 0x001EA857 */

    g_seh_ebp = ebp; sub_001FCCAF(); return; /* fallthrough 0x001FCCAF */

}

/**
 * sub_001FCCAF
 * Original: 0x001FCCAF - 0x001FCCC5 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FCCAF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FCCAF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -12) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FCCCA(); return; } /* jne: not equal / not zero */

loc_001FCCB4: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(eax, MEM16(ebp + -16));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edi + 0x34)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(edi + 0x34) (16-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001FCA7F(); return; } /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_001FCCC5(); return; /* fallthrough 0x001FCCC5 */

}

/**
 * sub_001FCCC5
 * Original: 0x001FCCC5 - 0x001FCCCA (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FCCC5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FCCC5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FCCD1(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_001FCCCA(); return; /* fallthrough 0x001FCCCA */

}

/**
 * sub_001FCCCA
 * Original: 0x001FCCCA - 0x001FCCD1 (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FCCCA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FCCCA: ;
    MEM32(ebp + 8) = 0x80150001u;

    g_seh_ebp = ebp; sub_001FCCD1(); return; /* fallthrough 0x001FCCD1 */

}

/**
 * sub_001FCCD1
 * Original: 0x001FCCD1 - 0x001FCCDB (10 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FCCD1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FCCD1: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001FCCDB
 * Original: 0x001FCCDB - 0x001FD115 (1082 bytes, 326 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FCCDB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FCCDB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, esi);
    esi = ecx;
    eax = eax + eax * 8;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + eax * 8 + 0x13B4;
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -12) = edi;
    MEM32(eax) = MEM32(eax) | 0x10;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebx + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001FCD28; /* je: equal / zero */

loc_001FCD0B: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FCD11u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FCD11: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FCD28; /* jne: not equal / not zero */

loc_001FCD18: ;
    eax = MEM32(ebx + 0x14);
    eax = eax + eax * 8;
    eax = esi + eax * 8 + 0x13B4;
    MEM32(eax) = MEM32(eax) | 8;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001FCD28: ;
    eax = MEM32(ebx + 0x10);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001FCE8F; /* je: equal / zero */

loc_001FCD34: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001FCE76; /* je: equal / zero */

loc_001FCD3B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001FCD5C; /* je: equal / zero */

loc_001FCD3F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001FCD7E; /* je: equal / zero */

loc_001FCD42: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001FCDFB; /* je: equal / zero */

loc_001FCD49: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001FCE42; /* je: equal / zero */

loc_001FCD50: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001FCE6C; /* je: equal / zero */

loc_001FCD57: ;
    goto loc_001FD0D6;

loc_001FCD5C: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FCD64u); RECOMP_ABI_CALL(0x001F9A30u, sub_001F9A30); /* call 0x001F9A30 */

loc_001FCD64: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FCD77; /* je: equal / zero */

loc_001FCD6A: ;
    PUSH32(esp, MEM32(ebx + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FCD72u); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001FCD72: ;
    goto loc_001FCF72;

loc_001FCD77: ;
    MEM32(ebx + 0x10) = 9;

loc_001FCD7E: ;
    PUSH32(esp, MEM32(esi + 0x14D8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FCD8Bu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FCD8B: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FCF72; /* jne: not equal / not zero */

loc_001FCD99: ;
    eax = MEM32(ebx + 0x14);
    eax = eax + eax * 8;
    edi = MEM32(esi + eax * 8 + 0x13D4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FCDF4; /* je: equal / zero */

loc_001FCDAA: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FCDB4u); RECOMP_ABI_CALL(0x001FA128u, sub_001FA128); /* call 0x001FA128 */

loc_001FCDB4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FCDBB; /* jne: not equal / not zero */

loc_001FCDB8: ;
    MEM32(edi + 8) = MEM32(edi + 8) & eax;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001FCDBB: ;
    eax = MEM32(ebx + 0x14);
    eax = eax + eax * 8;
    eax = esi + eax * 8 + 0x13D4;
    ecx = MEM32(eax);
    MEM32(ebx + 0x30) = ecx;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebx + 0x30);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x14D8));
    ecx = esi;
    PUSH32(esp, MEM32(esi + 0x14D4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FCDEAu); RECOMP_ABI_CALL(0x0020B316u, sub_0020B316); /* call 0x0020B316 */

loc_001FCDEA: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FD104; /* jl: less (signed <) */

loc_001FCDF4: ;
    MEM32(ebx + 0x10) = 0xA;

loc_001FCDFB: ;
    PUSH32(esp, MEM32(esi + 0x14D8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FCE08u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FCE08: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FCF72; /* jne: not equal / not zero */

loc_001FCE16: ;
    eax = MEM32(ebx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FCE29; /* je: equal / zero */

loc_001FCE1D: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FCE25u); RECOMP_ABI_CALL(0x0020C3FFu, sub_0020C3FF); /* call 0x0020C3FF */

loc_001FCE25: ;
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001FCE29: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FCE31u); RECOMP_ABI_CALL(0x001F9A72u, sub_001F9A72); /* call 0x001F9A72 */

loc_001FCE31: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FD104; /* jl: less (signed <) */

loc_001FCE3B: ;
    MEM32(ebx + 0x10) = 0xB;

loc_001FCE42: ;
    PUSH32(esp, MEM32(esi + 0x14D8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FCE4Fu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FCE4F: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FCF72; /* jne: not equal / not zero */

loc_001FCE5D: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FCE65u); RECOMP_ABI_CALL(0x001F9A98u, sub_001F9A98); /* call 0x001F9A98 */

loc_001FCE65: ;
    MEM32(ebx + 0x10) = 0xC;

loc_001FCE6C: ;
    edi = 0x1500F0;
    goto loc_001FD104;

loc_001FCE76: ;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FCE8F; /* jne: not equal / not zero */

loc_001FCE7B: ;
    PUSH32(esp, MEM32(ebx + 8));
    MEM32(ebx + 0x10) = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FCE8Au); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001FCE8A: ;
    goto loc_001FCF7A;

loc_001FCE8F: ;
    eax = MEM32(ebx + 0x14);
    eax = eax + eax * 8;
    eax = esi + eax * 8;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edi = eax + 0x13BC;
    esi = eax + 0x13C4;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    esi = MEM32(ebp + -4);
    if ((_flags != 0)) goto loc_001FCEEE; /* je: equal / zero */

loc_001FCEB0: ;
    PUSH32(esp, MEM32(eax + 0x13D4));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FCEBDu); RECOMP_ABI_CALL(0x001FB951u, sub_001FB951); /* call 0x001FB951 */

loc_001FCEBD: ;
    eax = MEM32(ebx + 0x14);
    eax = eax + eax * 8;
    eax = esi + eax * 8;
    ecx = MEM32(eax + 0x13BC);
    MEM32(eax + 0x13C4) = ecx;
    ecx = MEM32(eax + 0x13C0);
    MEM32(eax + 0x13C8) = ecx;
    eax = MEM32(ebx + 0x14);
    eax = eax + eax * 8;
    eax = esi + eax * 8 + 0x13B4;
    MEM32(eax) = MEM32(eax) | 8;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001FCEEE: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FCFC0; /* jne: not equal / not zero */

loc_001FCEF9: ;
    eax = MEM32(ebx + 0x14);
    ecx = eax + eax * 8;
    _fa = (uint32_t)(MEM8(esi + ecx * 8 + 0x13B4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + ecx * 8 + 0x13B4), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001FCF42; /* jne: not equal / not zero */

loc_001FCF09: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FCF11u); RECOMP_ABI_CALL(0x001DFC48u, sub_001DFC48); /* call 0x001DFC48 */

loc_001FCF11: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001FCF42; /* jne: not equal / not zero */

loc_001FCF15: ;
    eax = MEM32(ebx + 0x14);
    eax = eax + eax * 8;
    eax = esi + eax * 8 + 0x13B4;
    MEM32(eax) = MEM32(eax) | 0x20;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebx + 0x14);
    eax = eax + eax * 8;
    esi = esi + eax * 8 + 0x13B4;
    MEM32(esi) = MEM32(esi) | 8;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, MEM32(ebx + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FCF3Du); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001FCF3D: ;
    esi = MEM32(ebp + -4);
    goto loc_001FCF7A;

loc_001FCF42: ;
    _fa = (uint32_t)(MEM32(ebx + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x34), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FCF56; /* je: equal / zero */

loc_001FCF47: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FCF4Cu); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_001FCF4C: ;
    _fb = (uint32_t)(MEM32(ebx + 0x34)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7530) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7530 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FCFC0; /* jb: below (unsigned <) */

loc_001FCF56: ;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(ebx + 0x34) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FCF61u); RECOMP_ABI_CALL(0x001F9F51u, sub_001F9F51); /* call 0x001F9F51 */

loc_001FCF61: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001FCFB2; /* jge: greater or equal (signed >=) */

loc_001FCF67: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FCF6Cu); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_001FCF6C: ;
    MEM32(ebx + 0x34) = eax;

loc_001FCF6F: ;
    esi = MEM32(ebp + -4);

loc_001FCF72: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FD104; /* jl: less (signed <) */

loc_001FCF7A: ;
    eax = MEM32(ebx + 0x14);
    eax = eax + eax * 8;
    eax = esi + eax * 8 + 0x13B4;
    ecx = MEM32(eax);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001FD0DD; /* je: equal / zero */

loc_001FCF92: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001FD0DD; /* je: equal / zero */

loc_001FCF9B: ;
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x10), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FD0DD; /* jne: not equal / not zero */

loc_001FCFA5: ;
    MEM32(eax) = MEM32(eax) & 0xFFFFFFF7u;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = 0x1500F1;
    goto loc_001FD0DF;

loc_001FCFB2: ;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FCFC0; /* je: equal / zero */

loc_001FCFB8: ;
    PUSH32(esp, MEM32(ebx + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FCFC0u); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001FCFC0: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FD083; /* je: equal / zero */

loc_001FCFCB: ;
    PUSH32(esp, MEM32(eax));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FCFD4u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FCFD4: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FCF6F; /* je: equal / zero */

loc_001FCFDA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FD01F; /* jne: not equal / not zero */

loc_001FCFE2: ;
    ecx = MEM32(ebp + -4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x18);
    PUSH32(esp, MEM32(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD003u); RECOMP_ABI_CALL(0x001FF5DAu, sub_001FF5DA); /* call 0x001FF5DA */

loc_001FD003: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), esi (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001FD013; /* je: equal / zero */

loc_001FD00A: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0xC8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FD02B; /* je: equal / zero */

loc_001FD013: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD018u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_001FD018: ;
    edi = 0x80150007u;
    goto loc_001FD028;

loc_001FD01F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001FD02F; /* jge: greater or equal (signed >=) */

loc_001FD023: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD028u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_001FD028: ;
    MEM32(ebx + 0x34) = eax;

loc_001FD02B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FD060; /* jl: less (signed <) */

loc_001FD02F: ;
    PUSH32(esp, MEM32(ebp + -16));
    esi = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebp + -20));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD042u); RECOMP_ABI_CALL(0x001FC9DEu, sub_001FC9DE); /* call 0x001FC9DE */

loc_001FD042: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FD058; /* jl: less (signed <) */

loc_001FD046: ;
    eax = MEM32(ebx + 0x14);
    eax = eax + eax * 8;
    eax = esi + eax * 8 + 0x13B4;
    MEM32(eax) = MEM32(eax) | 8;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001FD060;

loc_001FD058: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD05Du); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_001FD05D: ;
    MEM32(ebx + 0x34) = eax;

loc_001FD060: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FD080; /* je: equal / zero */

loc_001FD067: ;
    PUSH32(esp, MEM32(eax));
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD071u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001FD071: ;
    PUSH32(esp, MEM32(ebx + 0x18));
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD07Cu); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001FD07C: ;
    MEM32(ebx + 0x18) = MEM32(ebx + 0x18) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001FD080: ;
    esi = MEM32(ebp + -4);

loc_001FD083: ;
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x10), 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FD0AD; /* jne: not equal / not zero */

loc_001FD089: ;
    PUSH32(esp, MEM32(ebx + 8));
    MEM32(ebx + 0x10) = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD098u); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001FD098: ;
    eax = MEM32(ebx + 0x14);
    eax = eax + eax * 8;
    esi = esi + eax * 8 + 0x13B4;
    MEM32(esi) = MEM32(esi) & 0xFFFFFFF7u;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_001FCF3D;

loc_001FD0AD: ;
    _fa = (uint32_t)(MEM32(ebx + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x34), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FD0C5; /* je: equal / zero */

loc_001FD0B3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD0B8u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_001FD0B8: ;
    _fb = (uint32_t)(MEM32(ebx + 0x34)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7530) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7530 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FD0D3; /* jb: below (unsigned <) */

loc_001FD0C2: ;
    esi = MEM32(ebp + -4);

loc_001FD0C5: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD0CDu); RECOMP_ABI_CALL(0x001F9F51u, sub_001F9F51); /* call 0x001F9F51 */

loc_001FD0CD: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FD101; /* jl: less (signed <) */

loc_001FD0D3: ;
    esi = MEM32(ebp + -4);

loc_001FD0D6: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001FCF72;

loc_001FD0DD: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001FD0DF: ;
    eax = MEM32(ebx + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x10), 5 (32-bit) */
    eax = eax + eax * 8;
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = esi + eax * 8 + 0x13B4;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = MEM32(eax) ^ ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001FD10C;

loc_001FD101: ;
    esi = MEM32(ebp + -4);

loc_001FD104: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD10Cu); RECOMP_ABI_CALL(0x001F9D0Fu, sub_001F9D0F); /* call 0x001F9D0F */

loc_001FD10C: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FD115
 * Original: 0x001FD115 - 0x001FD139 (36 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FD115(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FD115: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x64);
    edi = ecx;
    PUSH32(esp, 0x001FD123u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001FD123: ;
    esi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FD139(); return; } /* jne: not equal / not zero */

loc_001FD12F: ;
    eax = 0x8007000Eu;
    g_seh_ebp = ebp; sub_001FD1DD(); return; /* tail jmp 0x001FD1DD */

}

/**
 * sub_001FD139
 * Original: 0x001FD139 - 0x001FD16D (52 bytes, 23 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FD139(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FD139: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001FD141u); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_001FD141: ;
    eax = MEM32(esi);
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x18);
    eax = ecx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001FD19E(); return; } /* je: equal / zero */

loc_001FD154: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001FD194(); return; } /* je: equal / zero */

loc_001FD157: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001FD18A(); return; } /* je: equal / zero */

loc_001FD15A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001FD177(); return; } /* je: equal / zero */

loc_001FD15D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001FD16D(); return; } /* je: equal / zero */

loc_001FD160: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001FD1AF(); return; } /* jne: not equal / not zero */

loc_001FD163: ;
    eax = MEM32(esi);
    MEM32(eax) = 0x1FAA95;
    g_seh_ebp = ebp; sub_001FD1A6(); return; /* tail jmp 0x001FD1A6 */

}

/**
 * sub_001FD16D
 * Original: 0x001FD16D - 0x001FD177 (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FD16D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FD16D: ;
    eax = MEM32(esi);
    MEM32(eax) = 0x1FAC39;
    g_seh_ebp = ebp; sub_001FD1A6(); return; /* tail jmp 0x001FD1A6 */

}

/**
 * sub_001FD177
 * Original: 0x001FD177 - 0x001FD18A (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FD177(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FD177: ;
    eax = MEM32(esi);
    MEM32(eax) = 0x1FCCDB;
    eax = MEM32(esi);
    MEM32(eax + 4) = 0x1FB289;
    g_seh_ebp = ebp; sub_001FD1AF(); return; /* tail jmp 0x001FD1AF */

}

/**
 * sub_001FD18A
 * Original: 0x001FD18A - 0x001FD194 (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FD18A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FD18A: ;
    eax = MEM32(esi);
    MEM32(eax) = 0x1FAA71;
    g_seh_ebp = ebp; sub_001FD1A6(); return; /* tail jmp 0x001FD1A6 */

}

/**
 * sub_001FD194
 * Original: 0x001FD194 - 0x001FD19E (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FD194(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FD194: ;
    eax = MEM32(esi);
    MEM32(eax) = 0x1FC2AB;
    g_seh_ebp = ebp; sub_001FD1A6(); return; /* tail jmp 0x001FD1A6 */

}

/**
 * sub_001FD19E
 * Original: 0x001FD19E - 0x001FD1A6 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FD19E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FD19E: ;
    eax = MEM32(esi);
    MEM32(eax) = 0x1F91A7;

    g_seh_ebp = ebp; sub_001FD1A6(); return; /* fallthrough 0x001FD1A6 */

}

/**
 * sub_001FD1A6
 * Original: 0x001FD1A6 - 0x001FD1AF (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FD1A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FD1A6: ;
    eax = MEM32(esi);
    MEM32(eax + 4) = 0x1F9E06;

    g_seh_ebp = ebp; sub_001FD1AF(); return; /* fallthrough 0x001FD1AF */

}

/**
 * sub_001FD1AF
 * Original: 0x001FD1AF - 0x001FD1DD (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001FD1AF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FD1AF: ;
    eax = MEM32(esi);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(esi);
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(esi);
    MEM32(eax + 0x18) = ebx;
    eax = MEM32(esi);
    MEM32(eax + 0x58) = ebx;
    eax = MEM32(esi);
    MEM32(eax + 0x5C) = ebx;
    eax = MEM32(esi);
    MEM32(eax + 0x60) = ebx;
    eax = MEM32(esi);
    MEM32(eax + 0x34) = ebx;
    eax = MEM32(esi);
    MEM32(eax + 0x38) = ebx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001FD1DD(); return; /* fallthrough 0x001FD1DD */

}

/**
 * sub_001FD1DD
 * Original: 0x001FD1DD - 0x001FD1E3 (6 bytes, 4 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FD1DD(void)
{

loc_001FD1DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001FD1E3
 * Original: 0x001FD1E3 - 0x001FD3A6 (451 bytes, 141 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FD1E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FD1E3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -20;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -20) = ebx;
    MEM32(ebp + -12) = edi;
    MEM32(ebx) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD20Bu); RECOMP_ABI_CALL(0x001FD115u, sub_001FD115); /* call 0x001FD115 */

loc_001FD20B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = MEM32(ebp + -20);
    MEM32(ebp + -8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001FD393; /* jl: less (signed <) */

loc_001FD219: ;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & edi;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(ebp + -4);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & edi;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x3C) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -20) = eax;
    eax = edx + 0x1584;
    _fb = (uint32_t)(0x13B4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x13B4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = eax;
    MEM32(ebp + 8) = edx;

loc_001FD240: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(esi + 0x3C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    ecx = ecx | MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_001FD331; /* je: equal / zero */

loc_001FD253: ;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001FD331; /* jne: not equal / not zero */

loc_001FD25D: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001FD331; /* jne: not equal / not zero */

loc_001FD266: ;
    ebx = edx + -12;
    PUSH32(esp, 0x12);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ebp + 0xC);
    edi = MEM32(eax + ecx);
    MEM32(ebx) = edi;
    eax = MEM32(eax + ecx + 4);
    MEM32(edx) = MEM32(edx) | 2;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(ebp + -4);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x2033);
    PUSH32(esp, 0x2D80);
    MEM32(ebx + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD29Cu); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001FD29C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0x2C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001FD38C; /* je: equal / zero */

loc_001FD2A7: ;
    ecx = MEM32(esi + 0x3C);
    edi = MEM32(ebp + 0xC);
    edx = MEM32(edi + ecx);
    MEM32(eax) = edx;
    ecx = MEM32(edi + ecx + 4);
    PUSH32(esp, 0x2034);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0xFD0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD2CBu); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001FD2CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0x30) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001FD38C; /* je: equal / zero */

loc_001FD2D6: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(edi + ecx);
    MEM32(eax) = edx;
    ecx = MEM32(edi + ecx + 4);
    PUSH32(esp, 0x8092);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x1988);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD2F7u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001FD2F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0x38) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001FD38C; /* je: equal / zero */

loc_001FD302: ;
    eax = MEM32(ebp + 8);
    MEM8(eax) = MEM8(eax) | 0x80;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = MEM32(ebp + -16);
    MEM32(eax) = 1;
    eax = MEM32(ebp + -20);
    ecx = eax + 1;

loc_001FD317: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FD317; /* jne: not equal / not zero */

loc_001FD31E: ;
    ebx = MEM32(ebp + 0x10);
    edi = MEM32(ebp + -12);
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x99) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x99;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x44) = MEM32(esi + 0x44) + eax;
    _fa = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001FD331: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 0x70;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -16) = MEM32(ebp + -16) + 0xB0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -20) = MEM32(ebp + -20) + 0x70;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x48;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x1C0 (32-bit) */
    MEM32(ebp + 8) = edx;
    if (CMP_B(_fa, _fb)) goto loc_001FD240; /* jb: below (unsigned <) */

loc_001FD353: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FD3A6(); return; } /* jbe: below or equal (unsigned <=) */

loc_001FD357: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x20);
    PUSH32(esp, MEM32(esi + 0x44));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD364u); RECOMP_ABI_CALL(0x0020C3C3u, sub_0020C3C3); /* call 0x0020C3C3 */

loc_001FD364: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x40) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001FD38C; /* je: equal / zero */

loc_001FD36B: ;
    ecx = MEM32(ebp + -4);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x128C);
    eax = edi + 0x100;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    MEM32(esi + 0x4C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD385u); RECOMP_ABI_CALL(0x0020C3C3u, sub_0020C3C3); /* call 0x0020C3C3 */

loc_001FD385: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x48) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FD3AD(); return; } /* jne: not equal / not zero */

loc_001FD38C: ;
    MEM32(ebp + -8) = 0x8007000Eu;

loc_001FD393: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD39Cu); RECOMP_ABI_CALL(0x001F9D0Fu, sub_001F9D0F); /* call 0x001F9D0F */

loc_001FD39C: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001FD39C
 * Original: 0x001FD39C - 0x001FD3A6 (10 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FD39C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FD39C: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001FD3A6
 * Original: 0x001FD3A6 - 0x001FD3AD (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FD3A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FD3A6: ;
    MEM32(esi + 0x10) = 0xC;

    g_seh_ebp = ebp; sub_001FD3AD(); return; /* fallthrough 0x001FD3AD */

}

/**
 * sub_001FD3AD
 * Original: 0x001FD3AD - 0x001FD3B1 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FD3AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FD3AD: ;
    MEM32(ebx) = esi;
    g_seh_ebp = ebp; sub_001FD39C(); return; /* tail jmp 0x001FD39C */

}

/**
 * sub_001FD3B1
 * Original: 0x001FD3B1 - 0x001FD607 (598 bytes, 208 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FD3B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FD3B1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x138) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x138;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1F);
    esi = ecx;
    PUSH32(esp, 0x1C);
    MEM32(ebp + -4) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD3D0u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001FD3D0: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FD3E0; /* jne: not equal / not zero */

loc_001FD3D6: ;
    esi = 0x8007000Eu;
    goto loc_001FD5FF;

loc_001FD3E0: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD3E8u); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_001FD3E8: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0xA0);
    ecx = esi;
    MEM32(ebx) = 0x1F98C2;
    MEM32(ebx + 4) = 0x1F99E0;
    MEM32(ebx + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD409u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001FD409: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001FD41A; /* jne: not equal / not zero */

loc_001FD410: ;
    esi = 0x8007000Eu;
    goto loc_001FD5F2;

loc_001FD41A: ;
    MEM32(ebx + 0x18) = MEM32(ebx + 0x18) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x48);
    POP32(esp, ecx);
    _fb = (uint32_t)(0x13A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x13A8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebp + -312;
    PUSH32(esp, 4);
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    _fb = (uint32_t)(0x13B4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x13B4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_001FD43C: ;
    PUSH32(esp, 0x12);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + -12;
    POP32(esp, ecx);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx) = MEM32(edx) | 2;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x48;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001FD43C; /* jne: not equal / not zero */

loc_001FD44F: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = ebp + -256;
    MEM32(ebp + -12) = edi;

loc_001FD45B: ;
    edx = edi + -56;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    MEM32(ebp + -24) = eax;
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -16) = edx;
    MEM32(ebp + -20) = ecx;
    if ((_fa == 0)) goto loc_001FD5B7; /* je: equal / zero */

loc_001FD474: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FD494; /* je: equal / zero */

loc_001FD47A: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FD494; /* je: equal / zero */

loc_001FD481: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD48Du); RECOMP_ABI_CALL(0x001DFC7Fu, sub_001DFC7F); /* call 0x001DFC7F */

loc_001FD48D: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(ebp + -16);

loc_001FD494: ;
    ecx = MEM32(ebp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -16) = eax;

loc_001FD49C: ;
    esi = MEM32(ebp + -24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FD4B5; /* jne: not equal / not zero */

loc_001FD4A3: ;
    esi = MEM32(ebp + -20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FD4B5; /* jne: not equal / not zero */

loc_001FD4AB: ;
    _fa = (uint32_t)(MEM8(ecx + 8)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 8), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001FD56C; /* je: equal / zero */

loc_001FD4B5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_B(_fa, _fb)) goto loc_001FD49C; /* jb: below (unsigned <) */

loc_001FD4C1: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FD4D6; /* je: equal / zero */

loc_001FD4C7: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD4D3u); RECOMP_ABI_CALL(0x001E7939u, sub_001E7939); /* call 0x001E7939 */

loc_001FD4D3: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001FD4D6: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FD4EF; /* je: equal / zero */

loc_001FD4DD: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x80A6);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD4EBu); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001FD4EB: ;
    MEM32(edi + 4) = MEM32(edi + 4) & 0;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001FD4EF: ;
    eax = MEM32(edi + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FD4FF; /* je: equal / zero */

loc_001FD4F6: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD4FFu); RECOMP_ABI_CALL(0x001F9D0Fu, sub_001F9D0F); /* call 0x001F9D0F */

loc_001FD4FF: ;
    eax = MEM32(edi + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FD513; /* je: equal / zero */

loc_001FD506: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD50Fu); RECOMP_ABI_CALL(0x0020C3FFu, sub_0020C3FF); /* call 0x0020C3FF */

loc_001FD50F: ;
    MEM32(edi + -12) = MEM32(edi + -12) & 0;
    _fa = (uint32_t)(MEM32(edi + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001FD513: ;
    eax = MEM32(edi + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FD527; /* je: equal / zero */

loc_001FD51A: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD523u); RECOMP_ABI_CALL(0x0020C3FFu, sub_0020C3FF); /* call 0x0020C3FF */

loc_001FD523: ;
    MEM32(edi + -8) = MEM32(edi + -8) & 0;
    _fa = (uint32_t)(MEM32(edi + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001FD527: ;
    eax = MEM32(ebx + 0x18);
    ecx = MEM32(ebx + 0x14);
    eax = eax + eax * 4;
    esi = ecx + eax * 8;
    ecx = MEM32(ebp + -4);
    eax = ecx + 0x14C8;
    MEM32(esi) = 0x400;
    MEM32(esi + 4) = 8;
    edx = MEM32(eax);
    MEM32(esi + 8) = edx;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD55Bu); RECOMP_ABI_CALL(0x001E00BCu, sub_001E00BC); /* call 0x001E00BC */

loc_001FD55B: ;
    eax = MEM32(ebp + -24);
    MEM32(esi + 0x20) = eax;
    eax = MEM32(ebp + -20);
    MEM32(esi + 0x24) = eax;
    MEM32(ebx + 0x18) = MEM32(ebx + 0x18) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001FD5B7;

loc_001FD56C: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    esi = MEM32(ebp + -4);
    ecx = eax + eax * 8;
    edi = esi + ecx * 8 + 0x13A8;
    PUSH32(esp, 0x12);
    POP32(esp, ecx);
    esi = edx;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    if (CMP_EQ(_fa, _fb)) goto loc_001FD5B4; /* je: equal / zero */

loc_001FD585: ;
    esi = MEM32(ebp + -12);
    ecx = MEM32(esi + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FD59B; /* je: equal / zero */

loc_001FD58F: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD598u); RECOMP_ABI_CALL(0x001F9D0Fu, sub_001F9D0F); /* call 0x001F9D0F */

loc_001FD598: ;
    eax = MEM32(ebp + -16);

loc_001FD59B: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FD5B4; /* je: equal / zero */

loc_001FD5A1: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FD5B4; /* je: equal / zero */

loc_001FD5A7: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD5B4u); RECOMP_ABI_CALL(0x001E76C4u, sub_001E76C4); /* call 0x001E76C4 */

loc_001FD5B4: ;
    edi = MEM32(ebp + -12);

loc_001FD5B7: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x48;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 4 (32-bit) */
    MEM32(ebp + -12) = edi;
    if (CMP_B(_fa, _fb)) goto loc_001FD45B; /* jb: below (unsigned <) */

loc_001FD5CA: ;
    ecx = MEM32(ebp + -4);
    eax = ebx + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD5DCu); RECOMP_ABI_CALL(0x001FD1E3u, sub_001FD1E3); /* call 0x001FD1E3 */

loc_001FD5DC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_001FD5F2; /* jl: less (signed <) */

loc_001FD5E3: ;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = ebx;
    PUSH32(esp, MEM32(ebx + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD5F0u); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001FD5F0: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001FD5F2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FD5FF; /* je: equal / zero */

loc_001FD5F6: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD5FFu); RECOMP_ABI_CALL(0x001F99E0u, sub_001F99E0); /* call 0x001F99E0 */

loc_001FD5FF: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001FD607
 * Original: 0x001FD607 - 0x001FD6BA (179 bytes, 72 insns)
 * Category: game_network
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FD607(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FD607: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FD61D; /* jne: not equal / not zero */

loc_001FD613: ;
    eax = 0x80150005u;
    goto loc_001FD6B5;

loc_001FD61D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x20);
    edx = MEM32(ebp + 0x1C);
    PUSH32(esp, 0x15);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(ebp + 0x20);
    esi = ebp + 0xC;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    esi = MEM32(ebp + 8);
    MEM32(edx) = MEM32(edx) & eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(ebp + -8) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD651u); RECOMP_ABI_CALL(0x001FD115u, sub_001FD115); /* call 0x001FD115 */

loc_001FD651: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FD6B3; /* jl: less (signed <) */

loc_001FD655: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x407);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD667u); RECOMP_ABI_CALL(0x001F9634u, sub_001F9634); /* call 0x001F9634 */

loc_001FD667: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FD6B3; /* jl: less (signed <) */

loc_001FD66B: ;
    eax = MEM32(ebp + -4);
    ecx = esi + esi * 8;
    edx = MEM32(ebx + ecx * 8 + 0x13A8);
    esi = MEM32(ebp + -8);
    PUSH32(esp, 0);
    MEM32(eax + 0x20) = edx;
    ecx = MEM32(ebx + ecx * 8 + 0x13AC);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x30);
    MEM32(eax + 0x2C) = ecx;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FD6A8u); RECOMP_ABI_CALL(0x001F9686u, sub_001F9686); /* call 0x001F9686 */

loc_001FD6A8: ;
    ecx = MEM32(ebp + 0x20);
    MEM32(esi + 0x38) = ecx;
    ecx = MEM32(ebp + 0x1C);
    MEM32(ecx) = esi;

loc_001FD6B3: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001FD6B5: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001FD6BA
 * Original: 0x001FD6BA - 0x001FD6C5 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FD6BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FD6BA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FD6C5(); return; } /* jne: not equal / not zero */

loc_001FD6BE: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001FD6EC(); return; /* tail jmp 0x001FD6EC */

}

/**
 * sub_001FD6C5
 * Original: 0x001FD6C5 - 0x001FD6EC (39 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FD6C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FD6C5: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(esp + 0x14));
    esi = ecx + 0x14D0;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FD6E2u); RECOMP_ABI_CALL(0x001FD115u, sub_001FD115); /* call 0x001FD115 */

loc_001FD6E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FD6EA; /* jl: less (signed <) */

loc_001FD6E6: ;
    ecx = MEM32(esi);
    MEM32(edi) = ecx;

loc_001FD6EA: ;
    POP32(esp, edi);
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001FD6EC(); return; /* fallthrough 0x001FD6EC */

}

/**
 * sub_001FD6EC
 * Original: 0x001FD6EC - 0x001FD6EF (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FD6EC(void)
{

loc_001FD6EC: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001FD6EF
 * Original: 0x001FD6EF - 0x001FD70C (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FD6EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FD6EF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    MEM32(ebp + -4) = ebx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FD70C(); return; } /* jne: not equal / not zero */

loc_001FD702: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001FDA45(); return; /* tail jmp 0x001FDA45 */

}

/**
 * sub_001FD70C
 * Original: 0x001FD70C - 0x001FD727 (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FD70C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FD70C: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = esi;
    _fa = (uint32_t)(MEM32(ebx + 0x14D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x14D0), esi (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FD727(); return; } /* jne: not equal / not zero */

loc_001FD71D: ;
    edi = 0x8015200Cu;
    g_seh_ebp = ebp; sub_001FDA42(); return; /* tail jmp 0x001FDA42 */

}

/**
 * sub_001FD727
 * Original: 0x001FD727 - 0x001FD749 (34 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FD727(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FD727: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -16;
    PUSH32(esp, 3);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001FD73Au); RECOMP_ABI_CALL(0x001FD115u, sub_001FD115); /* call 0x001FD115 */

loc_001FD73A: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    esi = MEM32(ebp + -16);
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FDA2F(); return; } /* jl: less (signed <) */

loc_001FD747: ;
    g_seh_ebp = ebp; sub_001FD7A9(); return; /* tail jmp 0x001FD7A9 */

}

/**
 * sub_001FD749
 * Original: 0x001FD749 - 0x001FD7A9 (96 bytes, 30 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FD749(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FD749: ;
    eax = MEM32(ebx + 0x14D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FD765; /* je: equal / zero */

loc_001FD753: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001FD75Bu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FD75B: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FDA2F(); return; } /* jl: less (signed <) */

loc_001FD765: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebx + 0x13B4;
    MEM32(ebp + -12) = eax;

loc_001FD772: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FD79C; /* je: equal / zero */

loc_001FD77C: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001FD784u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FD784: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FDA2F(); return; } /* jl: less (signed <) */

loc_001FD78E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1500F1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FD79C; /* jne: not equal / not zero */

loc_001FD796: ;
    eax = MEM32(ebp + -12);
    MEM32(eax) = MEM32(eax) | 8;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001FD79C: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 0x48;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FD772; /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_001FD7A9(); return; /* fallthrough 0x001FD7A9 */

}

/**
 * sub_001FD7A9
 * Original: 0x001FD7A9 - 0x001FD8FE (341 bytes, 105 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FD7A9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FD7A9: ;
    ecx = ebx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FD7B1u); RECOMP_ABI_CALL(0x001F9A30u, sub_001F9A30); /* call 0x001F9A30 */

loc_001FD7B1: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FD749(); return; } /* je: equal / zero */

loc_001FD7B8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FDA2F(); return; } /* jl: less (signed <) */

loc_001FD7C0: ;
    PUSH32(esp, MEM32(ebx + 0x14D8));
    ecx = ebx;
    PUSH32(esp, 0x001FD7CDu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FD7CD: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FD7C0; /* je: equal / zero */

loc_001FD7D3: ;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FDA2F(); return; } /* jl: less (signed <) */

loc_001FD7D9: ;
    PUSH32(esp, 0x2033);
    PUSH32(esp, 0x2D80);
    ecx = ebx;
    PUSH32(esp, 0x001FD7EAu); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001FD7EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(ebp + 8);
    ecx = ecx + ecx * 8;
    ebx = ebx + ecx * 8;
    MEM32(ebx + 0x13D4) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FD9D5(); return; } /* je: equal / zero */

loc_001FD801: ;
    ecx = MEM32(ebx + 0x13A8);
    MEM32(eax) = ecx;
    ecx = MEM32(ebx + 0x13AC);
    MEM32(eax + 4) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x1C;
    edi = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(ebx + 0x13D4);
    MEM32(esi + 0x24) = eax;
    eax = MEM32(ebx + 0x13D4);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x28) = 0x2D80;
    PUSH32(esp, MEM32(ecx + 0x14D4));
    PUSH32(esp, 0x001FD846u); RECOMP_ABI_CALL(0x0020A673u, sub_0020A673); /* call 0x0020A673 */

loc_001FD846: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FDA2C(); return; } /* jl: less (signed <) */

loc_001FD850: ;
    eax = esi + 0x1C;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FDA27(); return; } /* je: equal / zero */

loc_001FD85C: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FD881; /* je: equal / zero */

loc_001FD862: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ecx + 0x14D8));
    PUSH32(esp, MEM32(ecx + 0x14D4));
    PUSH32(esp, 0x001FD877u); RECOMP_ABI_CALL(0x0020AB1Eu, sub_0020AB1E); /* call 0x0020AB1E */

loc_001FD877: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FDA2C(); return; } /* jl: less (signed <) */

loc_001FD881: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ecx + 0x14D8));
    PUSH32(esp, 0x001FD88Fu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FD88F: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FD881; /* je: equal / zero */

loc_001FD895: ;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FDA2C(); return; } /* jl: less (signed <) */

loc_001FD89B: ;
    eax = MEM32(ebx + 0x13B4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    edi = MEM32(ebx + 0x13D4);
    MEM32(ebp + -12) = edi;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001FD8FE(); return; } /* je: equal / zero */

loc_001FD8AE: ;
    eax = eax & 0xFFFFFFF9u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x13B4) = eax;
    _fa = (uint32_t)(MEM16(edi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0xC), LO16(edx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001FD8F3; /* jbe: below or equal (unsigned <=) */

loc_001FD8BF: ;
    ecx = edi + 0x4C;

loc_001FD8C2: ;
    MEM32(ecx) = MEM32(ecx) & 0xC0000000u;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx + 0xC;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx + 4;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx + 0x4C;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(ebp + -12);
    eax = ZX16(MEM16(eax + 0xC));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x74;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FD8C2; /* jb: below (unsigned <) */

loc_001FD8F0: ;
    edi = MEM32(ebp + -12);

loc_001FD8F3: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001FD8FCu); RECOMP_ABI_CALL(0x001FAFC7u, sub_001FAFC7); /* call 0x001FAFC7 */

loc_001FD8FC: ;
    g_seh_ebp = ebp; sub_001FD914(); return; /* tail jmp 0x001FD914 */

}

/**
 * sub_001FD8FE
 * Original: 0x001FD8FE - 0x001FD914 (22 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FD8FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FD8FE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001FD914(); return; } /* je: equal / zero */

loc_001FD902: ;
    ecx = MEM32(ebp + -4);
    eax = eax & 0xFFFFFFFBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    MEM32(ebx + 0x13B4) = eax;
    PUSH32(esp, 0x001FD914u); RECOMP_ABI_CALL(0x001FB951u, sub_001FB951); /* call 0x001FB951 */

    g_seh_ebp = ebp; sub_001FD914(); return; /* fallthrough 0x001FD914 */

}

/**
 * sub_001FD914
 * Original: 0x001FD914 - 0x001FD9D5 (193 bytes, 63 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FD914(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FD914: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM16(edi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0xC), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001FD961; /* jbe: below or equal (unsigned <=) */

loc_001FD91F: ;
    eax = edi + 0x4C;

loc_001FD922: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edi = 0x970234;
    esi = ebx + 0x13BC;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) goto loc_001FD94C; /* je: equal / zero */

loc_001FD936: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edi = ebx + 0x13BC;
    esi = eax + 0xC;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) goto loc_001FD94C; /* jne: not equal / not zero */

loc_001FD948: ;
    MEM8(eax + 3) = MEM8(eax + 3) & 0xC3;
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_001FD94C: ;
    ecx = MEM32(ebp + -12);
    ecx = ZX16(MEM16(ecx + 0xC));
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x74;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FD922; /* jb: below (unsigned <) */

loc_001FD95E: ;
    esi = MEM32(ebp + -16);

loc_001FD961: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FD96Au); RECOMP_ABI_CALL(0x001F9A72u, sub_001F9A72); /* call 0x001F9A72 */

loc_001FD96A: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ecx + 0x14D8));
    PUSH32(esp, 0x001FD978u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FD978: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FD96A; /* je: equal / zero */

loc_001FD97E: ;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FDA2C(); return; } /* jl: less (signed <) */

loc_001FD984: ;
    edi = MEM32(ebp + -4);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001FD98Fu); RECOMP_ABI_CALL(0x001F9A98u, sub_001F9A98); /* call 0x001F9A98 */

loc_001FD98F: ;
    MEM32(ebx + 0x13B4) = MEM32(ebx + 0x13B4) & 0xFFFFFFD7u;
    _fa = (uint32_t)(MEM32(ebx + 0x13B4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(esi + 0x10) = 5;
    PUSH32(esp, 0x001FD9A5u); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001FD9A5: ;
    PUSH32(esp, 0x34);
    POP32(esp, eax);
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esi + 0x44) = eax;
    PUSH32(esp, 0x001FD9B5u); RECOMP_ABI_CALL(0x0020C3C3u, sub_0020C3C3); /* call 0x0020C3C3 */

loc_001FD9B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x40) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FD9D5(); return; } /* je: equal / zero */

loc_001FD9BC: ;
    eax = 0x800;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esi + 0x4C) = eax;
    PUSH32(esp, 0x001FD9CEu); RECOMP_ABI_CALL(0x0020C3C3u, sub_0020C3C3); /* call 0x0020C3C3 */

loc_001FD9CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x48) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FD9DC(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001FD9D5(); return; /* fallthrough 0x001FD9D5 */

}

/**
 * sub_001FD9D5
 * Original: 0x001FD9D5 - 0x001FD9DC (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FD9D5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FD9D5: ;
    edi = 0x8007000Eu;
    g_seh_ebp = ebp; sub_001FDA2C(); return; /* tail jmp 0x001FDA2C */

}

/**
 * sub_001FD9DC
 * Original: 0x001FD9DC - 0x001FDA27 (75 bytes, 25 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FD9DC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FD9DC: ;
    eax = esi + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    PUSH32(esp, 0x001FD9EAu); RECOMP_ABI_CALL(0x001F8E93u, sub_001F8E93); /* call 0x001F8E93 */

loc_001FD9EA: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FDA2C(); return; } /* jl: less (signed <) */

loc_001FD9F0: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0);
    PUSH32(esp, 0x1FB1B9);
    PUSH32(esp, 0x001FDA03u); RECOMP_ABI_CALL(0x001E66E6u, sub_001E66E6); /* call 0x001E66E6 */

loc_001FDA03: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FDA1A; /* je: equal / zero */

loc_001FDA09: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001FDA17u); RECOMP_ABI_CALL(0x001DFC74u, sub_001DFC74); /* call 0x001DFC74 */

loc_001FDA17: ;
    MEM32(esi + 0x54) = eax;

loc_001FDA1A: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = esi;
    MEM32(ebx + 0x13DC) = esi;
    g_seh_ebp = ebp; sub_001FDA42(); return; /* tail jmp 0x001FDA42 */

}

/**
 * sub_001FDA27
 * Original: 0x001FDA27 - 0x001FDA2C (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FDA27(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FDA27: ;
    edi = 0x80004005u;

    g_seh_ebp = ebp; sub_001FDA2C(); return; /* fallthrough 0x001FDA2C */

}

/**
 * sub_001FDA2C
 * Original: 0x001FDA2C - 0x001FDA2F (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FDA2C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FDA2C: ;
    ebx = MEM32(ebp + -4);

    g_seh_ebp = ebp; sub_001FDA2F(); return; /* fallthrough 0x001FDA2F */

}

/**
 * sub_001FDA2F
 * Original: 0x001FDA2F - 0x001FDA42 (19 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FDA2F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FDA2F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FDA42(); return; } /* je: equal / zero */

loc_001FDA33: ;
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi + 0x10) = 0xC;
    PUSH32(esp, 0x001FDA42u); RECOMP_ABI_CALL(0x001FB289u, sub_001FB289); /* call 0x001FB289 */

    g_seh_ebp = ebp; sub_001FDA42(); return; /* fallthrough 0x001FDA42 */

}

/**
 * sub_001FDA42
 * Original: 0x001FDA42 - 0x001FDA45 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FDA42(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FDA42: ;
    eax = edi;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001FDA45(); return; /* fallthrough 0x001FDA45 */

}

/**
 * sub_001FDA45
 * Original: 0x001FDA45 - 0x001FDA4B (6 bytes, 4 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FDA45(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FDA45: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001FDA4B
 * Original: 0x001FDA4B - 0x001FDA63 (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FDA4B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FDA4B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FDA63(); return; } /* jne: not equal / not zero */

loc_001FDA59: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001FDB01(); return; /* tail jmp 0x001FDB01 */

}

/**
 * sub_001FDA63
 * Original: 0x001FDA63 - 0x001FDACC (105 bytes, 36 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FDA63(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FDA63: ;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = esi;
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x18);
    MEM32(eax) = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3E8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 5);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(ebp + -4) = esi;
    PUSH32(esp, 0x001FDA91u); RECOMP_ABI_CALL(0x001FD115u, sub_001FD115); /* call 0x001FD115 */

loc_001FDA91: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    esi = MEM32(ebp + -4);
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FDAF1(); return; } /* jl: less (signed <) */

loc_001FDA9B: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 0x18);
    MEM32(esi + 0x50) = eax;
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, 0x2034);
    PUSH32(esp, 0xFD0);
    ecx = ebx;
    MEM32(esi + 0x54) = eax;
    PUSH32(esp, 0x001FDABCu); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001FDABC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x30) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FDACC(); return; } /* jne: not equal / not zero */

loc_001FDAC3: ;
    MEM32(ebp + 8) = 0x8007000Eu;
    g_seh_ebp = ebp; sub_001FDAF1(); return; /* tail jmp 0x001FDAF1 */

}

/**
 * sub_001FDACC
 * Original: 0x001FDACC - 0x001FDAF1 (37 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FDACC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FDACC: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = edi + edi * 8;
    edx = MEM32(ebx + ecx * 8 + 0x13A8);
    MEM32(eax) = edx;
    ecx = MEM32(ebx + ecx * 8 + 0x13AC);
    MEM32(eax + 4) = ecx;
    PUSH32(esp, 0x001FDAEAu); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001FDAEA: ;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = esi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001FDAF1(); return; /* fallthrough 0x001FDAF1 */

}

/**
 * sub_001FDAF1
 * Original: 0x001FDAF1 - 0x001FDB01 (16 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FDAF1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FDAF1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001FDAFE; /* je: equal / zero */

loc_001FDAF6: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001FDAFEu); RECOMP_ABI_CALL(0x001F9E06u, sub_001F9E06); /* call 0x001F9E06 */

loc_001FDAFE: ;
    eax = MEM32(ebp + 8);

    g_seh_ebp = ebp; sub_001FDB01(); return; /* fallthrough 0x001FDB01 */

}

/**
 * sub_001FDB01
 * Original: 0x001FDB01 - 0x001FDB07 (6 bytes, 4 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FDB01(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FDB01: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001FDB07
 * Original: 0x001FDB07 - 0x001FDB1C (21 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FDB07(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FDB07: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FDB1C(); return; } /* jne: not equal / not zero */

loc_001FDB15: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001FDB82(); return; /* tail jmp 0x001FDB82 */

}

/**
 * sub_001FDB1C
 * Original: 0x001FDB1C - 0x001FDB68 (76 bytes, 25 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FDB1C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FDB1C: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(ebp + -4) = esi;
    MEM32(ebx) = esi;
    PUSH32(esp, 0x001FDB36u); RECOMP_ABI_CALL(0x001FD115u, sub_001FD115); /* call 0x001FD115 */

loc_001FDB36: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    esi = MEM32(ebp + -4);
    MEM32(ebp + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FDB72(); return; } /* jl: less (signed <) */

loc_001FDB40: ;
    PUSH32(esp, 0x2034);
    PUSH32(esp, 0xFD0);
    ecx = edi;
    MEM32(esi + 0x10) = 7;
    PUSH32(esp, 0x001FDB58u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001FDB58: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x30) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FDB68(); return; } /* jne: not equal / not zero */

loc_001FDB5F: ;
    MEM32(ebp + 0xC) = 0x8007000Eu;
    g_seh_ebp = ebp; sub_001FDB72(); return; /* tail jmp 0x001FDB72 */

}

/**
 * sub_001FDB68
 * Original: 0x001FDB68 - 0x001FDB72 (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FDB68(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FDB68: ;
    MEM32(ebx) = esi;
    MEM32(edi + 0x14CC) = esi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001FDB72(); return; /* fallthrough 0x001FDB72 */

}

/**
 * sub_001FDB72
 * Original: 0x001FDB72 - 0x001FDB82 (16 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FDB72(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FDB72: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001FDB7F; /* je: equal / zero */

loc_001FDB77: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001FDB7Fu); RECOMP_ABI_CALL(0x001F9E06u, sub_001F9E06); /* call 0x001F9E06 */

loc_001FDB7F: ;
    eax = MEM32(ebp + 0xC);

    g_seh_ebp = ebp; sub_001FDB82(); return; /* fallthrough 0x001FDB82 */

}

/**
 * sub_001FDB82
 * Original: 0x001FDB82 - 0x001FDB88 (6 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FDB82(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FDB82: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001FDB88
 * Original: 0x001FDB88 - 0x001FDBB7 (47 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001FDB88(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FDB88: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB5);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x14);
    MEM8(eax + 0x18A8) = LO8(edx);
    _fb = (uint32_t)(0x18B1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18B1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);

loc_001FDBA4: ;
    MEM32(eax + -8) = edx;
    MEM32(eax + -4) = edx;
    MEM8(eax) = LO8(edx);
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001FDBA4; /* jne: not equal / not zero */

loc_001FDBB2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FDBB7
 * Original: 0x001FDBB7 - 0x001FDC5D (166 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FDBB7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FDBB7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = (uint32_t)((int32_t)edi * (int32_t)0xB5);
    eax = ecx;
    ecx = edi + eax;
    edx = ecx + 0x18A9;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + 8) = edx;

loc_001FDBDA: ;
    edx = MEM32(ebp + 8);
    edx = MEM32(edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FDBEF; /* jne: not equal / not zero */

loc_001FDBE4: ;
    edx = MEM32(ebp + 8);
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FDBF9; /* je: equal / zero */

loc_001FDBEF: ;
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 9;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FDBDA; /* jb: below (unsigned <) */

loc_001FDBF9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FDC41; /* jne: not equal / not zero */

loc_001FDBFE: ;
    esi = ZX8(MEM8(ecx + 0x18A8));
    edx = edi + esi * 8;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebp + 0xC);
    MEM32(eax + 0x18A9) = edx;
    edx = MEM32(ebp + 0x10);
    MEM32(eax + 0x18AD) = edx;
    MEM8(eax + 0x18B1) = 0;
    SET_LO8(eax, MEM8(ecx + 0x18A8));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(LO8(eax));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0x14);
    POP32(esp, ebx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM8(ecx + 0x18A8) = LO8(edx);

loc_001FDC41: ;
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FDC5D(); return; } /* jae: above or equal (unsigned >=) */

loc_001FDC43: ;
    ecx = MEM32(ebp + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edi + esi * 8;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(edx + eax + 0x18B1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + eax + 0x18B1), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001FDC5D(); return; } /* je: equal / zero */

loc_001FDC59: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001FDC75(); return; /* tail jmp 0x001FDC75 */

}

/**
 * sub_001FDC5D
 * Original: 0x001FDC5D - 0x001FDC75 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FDC5D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FDC5D: ;
    ecx = edi + esi * 8;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx + eax + 0x18B1;
    ecx = MEM32(ebp + 0x18);
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MEM8(eax) = MEM8(eax) | LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_001FDC75(); return; /* fallthrough 0x001FDC75 */

}

/**
 * sub_001FDC75
 * Original: 0x001FDC75 - 0x001FDC7C (7 bytes, 5 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FDC75(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FDC75: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001FDC7C
 * Original: 0x001FDC7C - 0x001FDD15 (153 bytes, 63 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FDC7C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FDC7C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -8) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001FDC9B; /* jne: not equal / not zero */

loc_001FDC94: ;
    ebx = 0x1500F0;
    goto loc_001FDD0C;

loc_001FDC9B: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FDCA1u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FDCA1: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FDD02; /* je: equal / zero */

loc_001FDCA7: ;
    if (CMP_L(_fas, _fbs)) goto loc_001FDCEB; /* jl: less (signed <) */

loc_001FDCA9: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, edi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xC));
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + 8) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FDCD2u); RECOMP_ABI_CALL(0x001FF5DAu, sub_001FF5DA); /* call 0x001FF5DA */

loc_001FDCD2: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    ebx = eax;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001FDCE6; /* je: equal / zero */

loc_001FDCDF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FDCEB; /* je: equal / zero */

loc_001FDCE6: ;
    ebx = 0x80004005u;

loc_001FDCEB: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FDCFE; /* je: equal / zero */

loc_001FDCF2: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FDCFBu); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001FDCFB: ;
    MEM32(esi + 0xC) = edi;

loc_001FDCFE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FDD0C; /* jl: less (signed <) */

loc_001FDD02: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x1500F0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FDD0C; /* je: equal / zero */

loc_001FDD0A: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001FDD0C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FDD15
 * Original: 0x001FDD15 - 0x001FDD51 (60 bytes, 24 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FDD15(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FDD15: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001FDD2E; /* je: equal / zero */

loc_001FDD24: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001FDD2Au); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001FDD2A: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001FDD2E: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FDD3F; /* je: equal / zero */

loc_001FDD35: ;
    PUSH32(esp, 0x37);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001FDD3Fu); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001FDD3F: ;
    PUSH32(esp, 0x8036);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001FDD4Cu); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001FDD4C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FDD51
 * Original: 0x001FDD51 - 0x001FDDE4 (147 bytes, 55 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FDD51(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FDD51: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0x8036;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x18);
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FDD6Bu); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001FDD6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(ebp + 8);
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001FDDBA; /* je: equal / zero */

loc_001FDD74: ;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FDD7Cu); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_001FDD7C: ;
    eax = MEM32(esi);
    ecx = MEM32(ebp + 0x10);
    MEM32(eax) = 0x1FDC7C;
    eax = MEM32(esi);
    MEM32(eax + 4) = 0x1FDD15;
    eax = MEM32(esi);
    MEM32(eax + 8) = ecx;
    eax = MEM32(esi);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FDDE4(); return; } /* jbe: below or equal (unsigned <=) */

loc_001FDDA1: ;
    PUSH32(esp, 0x37);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FDDADu); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001FDDAD: ;
    ecx = MEM32(esi);
    MEM32(ecx + 0x14) = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FDDE4(); return; } /* jne: not equal / not zero */

loc_001FDDBA: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = 0x8007000Eu;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FDDF0(); return; } /* je: equal / zero */

loc_001FDDC7: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FDDD8; /* je: equal / zero */

loc_001FDDCE: ;
    PUSH32(esp, 0x37);
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FDDD8u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001FDDD8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FDDE2u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001FDDE2: ;
    g_seh_ebp = ebp; sub_001FDDF0(); return; /* tail jmp 0x001FDDF0 */

}

/**
 * sub_001FDDE4
 * Original: 0x001FDDE4 - 0x001FDDF0 (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FDDE4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FDDE4: ;
    eax = MEM32(esi);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001FDDF0(); return; /* fallthrough 0x001FDDF0 */

}

/**
 * sub_001FDDF0
 * Original: 0x001FDDF0 - 0x001FDDFA (10 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FDDF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FDDF0: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001FDDFA
 * Original: 0x001FDDFA - 0x001FDE16 (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FDDFA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FDDFA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = ecx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FDE16(); return; } /* jne: not equal / not zero */

loc_001FDE0C: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001FDF6B(); return; /* tail jmp 0x001FDF6B */

}

/**
 * sub_001FDE16
 * Original: 0x001FDE16 - 0x001FDEB0 (154 bytes, 56 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FDE16(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FDE16: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = MEM32(ebp + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    esi = ebp + 0xC;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    MEM32(ebp + -12) = ebx;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = ebx;
    MEM32(eax) = ebx;
    PUSH32(esp, 0x001FDE3Bu); RECOMP_ABI_CALL(0x001FDBB7u, sub_001FDBB7); /* call 0x001FDBB7 */

loc_001FDE3B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FDE82; /* jne: not equal / not zero */

loc_001FDE40: ;
    esi = MEM32(ebp + 0x1C);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -12) = 0x16;
    if (CMP_EQ(_fa, _fb)) goto loc_001FDE82; /* je: equal / zero */

loc_001FDE50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001FDE5Au); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_001FDE5A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFDE9);
    PUSH32(esp, 0x001FDE69u); RECOMP_ABI_CALL(0x000AE9B9u, sub_000AE9B9); /* call 0x000AE9B9 */

loc_001FDE69: ;
    MEM32(ebp + -8) = eax;
    eax = 0xFF;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001FDE79; /* jbe: below or equal (unsigned <=) */

loc_001FDE76: ;
    MEM32(ebp + -8) = eax;

loc_001FDE79: ;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(0x16) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x16;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = eax;

loc_001FDE82: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    ecx = MEM32(ebp + -16);
    PUSH32(esp, MEM32(ebp + -12));
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001FDE94u); RECOMP_ABI_CALL(0x001FDD51u, sub_001FDD51); /* call 0x001FDD51 */

loc_001FDE94: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FDF59(); return; } /* jl: less (signed <) */

loc_001FDE9E: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FDEB0(); return; } /* jne: not equal / not zero */

loc_001FDEA3: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, 0x001FDEABu); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001FDEAB: ;
    g_seh_ebp = ebp; sub_001FDF4B(); return; /* tail jmp 0x001FDF4B */

}

/**
 * sub_001FDEB0
 * Original: 0x001FDEB0 - 0x001FDF4B (155 bytes, 58 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FDEB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FDEB0: ;
    ecx = MEM32(ebp + -16);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x70);
    edx = MEM32(ecx + 4);
    eax = MEM32(ebp + -4);
    esi = MEM32(eax + 0x14);
    MEM32(esi + 0x10) = edx;
    ecx = MEM32(ecx + 0xD0);
    edx = MEM32(edi + ecx);
    MEM32(esi) = edx;
    ecx = MEM32(edi + ecx + 4);
    edi = MEM32(ebp + 0x1C);
    MEM32(esi + 4) = ecx;
    ecx = MEM32(ebp + 0xC);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEM32(esi + 0xC) = ecx;
    SET_LO8(ecx, MEM8(ebp + 0x18));
    MEM8(esi + 0x14) = LO8(ecx);
    MEM8(esi + 0x15) = LO8(ebx);
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FDF18; /* je: equal / zero */

loc_001FDEF2: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001FDEF8u); RECOMP_ABI_CALL(0x001526F5u, sub_001526F5); /* call 0x001526F5 */

loc_001FDEF8: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + -8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEM8(esi + 0x15) = LO8(ecx);
    _fb = (uint32_t)(0x16) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x16;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFDE9);
    PUSH32(esp, 0x001FDF15u); RECOMP_ABI_CALL(0x000AE9B9u, sub_000AE9B9); /* call 0x000AE9B9 */

loc_001FDF15: ;
    eax = MEM32(ebp + -4);

loc_001FDF18: ;
    ecx = eax + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x20));
    ecx = MEM32(ebp + -16);
    PUSH32(esp, 0x7530);
    PUSH32(esp, MEM32(ebp + -12));
    MEM32(ebp + 8) = 0x9C;
    PUSH32(esp, MEM32(eax + 0x14));
    eax = ebp + 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xAA6E18);
    PUSH32(esp, ebx);
    PUSH32(esp, 8);
    PUSH32(esp, 0x001FDF49u); RECOMP_ABI_CALL(0x001FFDC1u, sub_001FFDC1); /* call 0x001FFDC1 */

loc_001FDF49: ;
    esi = eax;

    g_seh_ebp = ebp; sub_001FDF4B(); return; /* fallthrough 0x001FDF4B */

}

/**
 * sub_001FDF4B
 * Original: 0x001FDF4B - 0x001FDF59 (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FDF4B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FDF4B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FDF59(); return; } /* jl: less (signed <) */

loc_001FDF4F: ;
    eax = MEM32(ebp + 0x24);
    ecx = MEM32(ebp + -4);
    MEM32(eax) = ecx;
    g_seh_ebp = ebp; sub_001FDF69(); return; /* tail jmp 0x001FDF69 */

}

/**
 * sub_001FDF59
 * Original: 0x001FDF59 - 0x001FDF6B (18 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FDF59(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FDF59: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FDF69; /* je: equal / zero */

loc_001FDF5E: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(ebp + -16);
    PUSH32(esp, 0x001FDF69u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001FDF69: ;
    eax = esi;

    g_seh_ebp = ebp; sub_001FDF6B(); return; /* fallthrough 0x001FDF6B */

}

/**
 * sub_001FDF69
 * Original: 0x001FDF69 - 0x001FDF6B (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FDF69(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FDF69: ;
    eax = esi;

    g_seh_ebp = ebp; sub_001FDF6B(); return; /* fallthrough 0x001FDF6B */

}

/**
 * sub_001FDF6B
 * Original: 0x001FDF6B - 0x001FDF72 (7 bytes, 5 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FDF6B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FDF6B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001FDF72
 * Original: 0x001FDF72 - 0x001FE001 (143 bytes, 49 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FDF72(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FDF72: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x11C));
    edi = ecx;
    PUSH32(esp, 0x001FDF85u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FDF85: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FDFFA; /* je: equal / zero */

loc_001FDF89: ;
    if (CMP_L(_fas, _fbs)) goto loc_001FDFE7; /* jl: less (signed <) */

loc_001FDF8B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15FFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FDFBB; /* jne: not equal / not zero */

loc_001FDF92: ;
    ecx = MEM32(esi + 0x124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FDFEA; /* je: equal / zero */

loc_001FDF9C: ;
    eax = MEM32(esi + 0x114);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FDFB2; /* je: equal / zero */

loc_001FDFA6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    ecx = edi;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001FDFAEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FDFACu); } /* indirect call */
    }

loc_001FDFAE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FDFE7; /* jl: less (signed <) */

loc_001FDFB2: ;
    MEM32(esi + 0x14) = 6;
    goto loc_001FDFFA;

loc_001FDFBB: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001FDFDD; /* je: equal / zero */

loc_001FDFC4: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 8));
    eax = esi + 0x12C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001FDFD4u); RECOMP_ABI_CALL(0x001DFCBAu, sub_001DFCBA); /* call 0x001DFCBA */

loc_001FDFD4: ;
    MEM32(esi + 0x14) = 1;
    goto loc_001FDFFA;

loc_001FDFDD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FDFE3u); RECOMP_ABI_CALL(0x0020C21Bu, sub_0020C21B); /* call 0x0020C21B */

loc_001FDFE3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001FDFF3; /* jge: greater or equal (signed >=) */

loc_001FDFE7: ;
    MEM32(esi + 0xC) = eax;

loc_001FDFEA: ;
    MEM32(esi + 0x14) = 7;
    goto loc_001FDFFA;

loc_001FDFF3: ;
    MEM32(esi + 0x14) = 2;

loc_001FDFFA: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FE001
 * Original: 0x001FE001 - 0x001FE032 (49 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE001(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FE001: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x001FE00Eu); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_001FE00E: ;
    _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x28) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FE02B; /* jb: below (unsigned <) */

loc_001FE016: ;
    MEM32(esi + 0x28) = MEM32(esi + 0x28) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001FE022u); RECOMP_ABI_CALL(0x0020C21Bu, sub_0020C21B); /* call 0x0020C21B */

loc_001FE022: ;
    MEM32(esi + 0x14) = 2;
    goto loc_001FE02D;

loc_001FE02B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001FE02D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FE032
 * Original: 0x001FE032 - 0x001FE058 (38 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE032(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FE032: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, MEM32(esi + 0x124));
    PUSH32(esp, 0x001FE042u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FE042: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FE052; /* je: equal / zero */

loc_001FE046: ;
    MEM32(esi + 0x14) = 7;
    if (CMP_GE(_fas, _fbs)) goto loc_001FE052; /* jge: greater or equal (signed >=) */

loc_001FE04F: ;
    MEM32(esi + 0xC) = eax;

loc_001FE052: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FE058
 * Original: 0x001FE058 - 0x001FE070 (24 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE058(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FE058: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FE063u); RECOMP_ABI_CALL(0x0020C2ABu, sub_0020C2AB); /* call 0x0020C2AB */

loc_001FE063: ;
    MEM32(esi + 0x14) = 8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FE070
 * Original: 0x001FE070 - 0x001FE083 (19 bytes, 5 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE070(void)
{

loc_001FE070: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0xAA6E30);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x001FE080u); RECOMP_ABI_CALL(0x0020C0EDu, sub_0020C0ED); /* call 0x0020C0ED */

loc_001FE080: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FE083
 * Original: 0x001FE083 - 0x001FE0A4 (33 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE083(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001FE083: ;
    eax = MEM32(esp + 4);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x14) (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(eax + 0x2C));
    PUSH32(esp, MEM32(eax + 0x24));
    PUSH32(esp, MEM32(eax + 0x30));
    PUSH32(esp, 0x001FE0A1u); RECOMP_ABI_CALL(0x0020B987u, sub_0020B987); /* call 0x0020B987 */

loc_001FE0A1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FE0A4
 * Original: 0x001FE0A4 - 0x001FE119 (117 bytes, 44 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FE0A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FE0A4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x28);
    PUSH32(esp, edi);
    MEM32(esi) = 0x1FE070;
    MEM32(esi + 4) = 0x20C35A;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = esi + 0x12C;
    edi = ebx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(ebp + -4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FE0D6u); RECOMP_ABI_CALL(0x0020BFB0u, sub_0020BFB0); /* call 0x0020BFB0 */

loc_001FE0D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + 0x28) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FE1F2(); return; } /* jl: less (signed <) */

loc_001FE0E1: ;
    PUSH32(esp, MEM32(esi + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FE0E9u); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001FE0E9: ;
    MEM8(esi + 0x1B) = MEM8(esi + 0x1B) | 0x80;
    _fa = (uint32_t)(MEM8(esi + 0x1B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = MEM32(esi + 0x11C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FE119(); return; } /* je: equal / zero */

loc_001FE0F7: ;
    eax = MEM32(esi + 0x114);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FE114; /* je: equal / zero */

loc_001FE101: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001FE109u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FE107u); } /* indirect call */
    }

loc_001FE109: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + 0x28) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FE1F2(); return; } /* jl: less (signed <) */

loc_001FE114: ;
    MEM32(esi + 0x14) = edi;
    g_seh_ebp = ebp; sub_001FE14E(); return; /* tail jmp 0x001FE14E */

}

/**
 * sub_001FE119
 * Original: 0x001FE119 - 0x001FE136 (29 bytes, 10 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE119(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FE119: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    ecx = MEM32(ebp + -4);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FE136(); return; } /* je: equal / zero */

loc_001FE123: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001FE12Du); RECOMP_ABI_CALL(0x001DFCBAu, sub_001DFCBA); /* call 0x001DFCBA */

loc_001FE12D: ;
    MEM32(esi + 0x14) = 1;
    g_seh_ebp = ebp; sub_001FE14E(); return; /* tail jmp 0x001FE14E */

}

/**
 * sub_001FE136
 * Original: 0x001FE136 - 0x001FE14E (24 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE136(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FE136: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FE13Cu); RECOMP_ABI_CALL(0x0020C21Bu, sub_0020C21B); /* call 0x0020C21B */

loc_001FE13C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + 0x28) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FE1F2(); return; } /* jl: less (signed <) */

loc_001FE147: ;
    MEM32(esi + 0x14) = 2;

    g_seh_ebp = ebp; sub_001FE14E(); return; /* fallthrough 0x001FE14E */

}

/**
 * sub_001FE14E
 * Original: 0x001FE14E - 0x001FE19A (76 bytes, 26 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE14E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FE14E: ;
    eax = MEM32(esi + 0xB4);
    ecx = MEM32(esi + 0x30);
    ebx = MEM32(ebp + 0x18);
    edi = esi + 0xA8;
    MEM32(edi) = eax;
    eax = MEM32(esi + 0xB0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0xAC) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FE1BC(); return; } /* je: equal / zero */

loc_001FE174: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), edx (32-bit) */
    PUSH32(esp, MEM32(esi + 0x18));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FE19A(); return; } /* je: equal / zero */

loc_001FE17C: ;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x34));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x001FE195u); RECOMP_ABI_CALL(0x0020B746u, sub_0020B746); /* call 0x0020B746 */

loc_001FE195: ;
    MEM32(ebp + 0x28) = eax;
    g_seh_ebp = ebp; sub_001FE1CC(); return; /* tail jmp 0x001FE1CC */

}

/**
 * sub_001FE195
 * Original: 0x001FE195 - 0x001FE19A (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE195(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FE195: ;
    MEM32(ebp + 0x28) = eax;
    g_seh_ebp = ebp; sub_001FE1CC(); return; /* tail jmp 0x001FE1CC */

}

/**
 * sub_001FE19A
 * Original: 0x001FE19A - 0x001FE1BC (34 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE19A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FE19A: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x34));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x001FE1BAu); RECOMP_ABI_CALL(0x0020B56Du, sub_0020B56D); /* call 0x0020B56D */

loc_001FE1BA: ;
    g_seh_ebp = ebp; sub_001FE195(); return; /* tail jmp 0x001FE195 */

}

/**
 * sub_001FE1BC
 * Original: 0x001FE1BC - 0x001FE1CC (16 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE1BC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FE1BC: ;
    _fa = (uint32_t)(MEM32(esi + 0x11C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x11C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FE1CC(); return; } /* jne: not equal / not zero */

loc_001FE1C5: ;
    MEM32(ebp + 0x28) = 0x80070057u;

    g_seh_ebp = ebp; sub_001FE1CC(); return; /* fallthrough 0x001FE1CC */

}

/**
 * sub_001FE1CC
 * Original: 0x001FE1CC - 0x001FE1F2 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE1CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FE1CC: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FE1F2(); return; } /* jl: less (signed <) */

loc_001FE1D2: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FE212(); return; } /* je: equal / zero */

loc_001FE1D8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FE212(); return; } /* je: equal / zero */

loc_001FE1DC: ;
    ecx = MEM32(edi);
    eax = ecx + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xB4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xB4) (32-bit) */
    MEM32(edi) = eax;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FE1FD(); return; } /* jbe: below or equal (unsigned <=) */

loc_001FE1EB: ;
    MEM32(ebp + 0x28) = 0x8007007Au;

    g_seh_ebp = ebp; sub_001FE1F2(); return; /* fallthrough 0x001FE1F2 */

}

/**
 * sub_001FE1F2
 * Original: 0x001FE1F2 - 0x001FE1FD (11 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE1F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FE1F2: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FE1FBu); RECOMP_ABI_CALL(0x0020C2ABu, sub_0020C2AB); /* call 0x0020C2AB */

loc_001FE1FB: ;
    g_seh_ebp = ebp; sub_001FE21A(); return; /* tail jmp 0x001FE21A */

}

/**
 * sub_001FE1FD
 * Original: 0x001FE1FD - 0x001FE212 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE1FD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FE1FD: ;
    eax = MEM32(esi + 0xB0);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001FE20Fu); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_001FE20F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001FE212(); return; /* fallthrough 0x001FE212 */

}

/**
 * sub_001FE212
 * Original: 0x001FE212 - 0x001FE21A (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE212(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FE212: ;
    PUSH32(esp, 0x001FE217u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_001FE217: ;
    MEM32(esi + 0x20) = eax;

    g_seh_ebp = ebp; sub_001FE21A(); return; /* fallthrough 0x001FE21A */

}

/**
 * sub_001FE21A
 * Original: 0x001FE21A - 0x001FE224 (10 bytes, 6 insns)
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE21A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FE21A: ;
    eax = MEM32(ebp + 0x28);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 40; return; /* ret 36 */

}

/**
 * sub_001FE224
 * Original: 0x001FE224 - 0x001FE273 (79 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001FE224(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FE224: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax + 0xB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x190) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xB8), 0x190 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FE23B; /* jb: below (unsigned <) */

loc_001FE234: ;
    eax = 0x8007003Au;
    goto loc_001FE270;

loc_001FE23B: ;
    ecx = MEM32(eax + 0xB4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xD4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    POP32(esp, esi);
    if (CMP_B(_fa, _fb)) goto loc_001FE26E; /* jb: below (unsigned <) */

loc_001FE24F: ;
    if (CMP_A(_fa, _fb)) goto loc_001FE25B; /* ja: above (unsigned >) */

loc_001FE251: ;
    edx = MEM32(eax + 0xD0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001FE26E; /* jbe: below or equal (unsigned <=) */

loc_001FE25B: ;
    ecx = MEM32(eax + 0xD0);
    MEM32(eax + 0xB4) = ecx;
    eax = 0x8007007Au;
    goto loc_001FE270;

loc_001FE26E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001FE270: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FE273
 * Original: 0x001FE273 - 0x001FE278 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001FE273(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FE273: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FE278
 * Original: 0x001FE278 - 0x001FE2A4 (44 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE278(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FE278: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xDC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xD4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xD4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FE29E; /* jb: below (unsigned <) */

loc_001FE28A: ;
    if (CMP_A(_fa, _fb)) goto loc_001FE29A; /* ja: above (unsigned >) */

loc_001FE28C: ;
    ecx = MEM32(eax + 0xD8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xD0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xD0) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FE29E; /* jb: below (unsigned <) */

loc_001FE29A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001FE2A1;

loc_001FE29E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001FE2A1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FE2A4
 * Original: 0x001FE2A4 - 0x001FE389 (229 bytes, 68 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FE2A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001FE2A4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0xB8);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0xC8));
    eax = eax - 0xC8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001FE319; /* je: equal / zero */

loc_001FE2BD: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(6));
    eax = eax - 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001FE300; /* je: equal / zero */

loc_001FE2C2: ;
    _fb = (uint32_t)(0xD2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0xD2));
    eax = eax - 0xD2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001FE2D3; /* je: equal / zero */

loc_001FE2C9: ;
    edi = 0x8007003Au;
    goto loc_001FE381;

loc_001FE2D3: ;
    ecx = MEM32(esi + 0xE8);
    eax = esi + 0xD0;
    MEM32(eax) = ecx;
    ecx = MEM32(esi + 0xEC);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(esi + 0xE0) = ecx;
    MEM32(esi + 0xE4) = eax;
    goto loc_001FE381;

loc_001FE300: ;
    ecx = MEM32(esi + 0xE0);
    eax = esi + 0xD0;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0xE4);
    { uint64_t _t = (uint64_t)(MEM32(eax + 4)) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax + 4) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    goto loc_001FE381;

loc_001FE319: ;
    _fa = (uint32_t)(MEM32(esi + 0xEC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xEC), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001FE329; /* ja: above (unsigned >) */

loc_001FE321: ;
    _fa = (uint32_t)(MEM32(esi + 0xE8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xE8), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001FE369; /* jbe: below or equal (unsigned <=) */

loc_001FE329: ;
    PUSH32(esp, edi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x58));
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FE33Eu); RECOMP_ABI_CALL(0x000AAAC9u, sub_000AAAC9); /* call 0x000AAAC9 */

loc_001FE33E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001FE369; /* jne: not equal / not zero */

loc_001FE342: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FE347u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001FE347: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_001FE354; /* jg: greater (signed >) */

loc_001FE34B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FE350u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001FE350: ;
    edi = eax;
    goto loc_001FE381;

loc_001FE354: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FE359u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001FE359: ;
    edi = eax;
    _cf = 0; /* logical op clears CF */
    edi = edi & 0xFFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edi = edi | 0x80070000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001FE381;

loc_001FE369: ;
    MEM32(esi + 0xE0) = edi;
    MEM32(esi + 0xE4) = edi;
    MEM32(esi + 0xD8) = edi;
    MEM32(esi + 0xDC) = edi;

loc_001FE381: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FE389
 * Original: 0x001FE389 - 0x001FE3CA (65 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001FE389(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FE389: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(eax + 0xF4)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xF4), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001FE3C5; /* jne: not equal / not zero */

loc_001FE396: ;
    _fa = (uint32_t)(MEM32(eax + 0xF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xF0), 0x200 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001FE3C0; /* jae: above or equal (unsigned >=) */

loc_001FE3A2: ;
    ecx = MEM32(eax + 0xDC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xD4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xD4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FE3C5; /* jb: below (unsigned <) */

loc_001FE3B0: ;
    if (CMP_A(_fa, _fb)) goto loc_001FE3C0; /* ja: above (unsigned >) */

loc_001FE3B2: ;
    ecx = MEM32(eax + 0xD8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xD0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xD0) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FE3C5; /* jb: below (unsigned <) */

loc_001FE3C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001FE3C7;

loc_001FE3C5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001FE3C7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FE3CA
 * Original: 0x001FE3CA - 0x001FE3F6 (44 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE3CA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FE3CA: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xE4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xD4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xD4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FE3F0; /* jb: below (unsigned <) */

loc_001FE3DC: ;
    if (CMP_A(_fa, _fb)) goto loc_001FE3EC; /* ja: above (unsigned >) */

loc_001FE3DE: ;
    ecx = MEM32(eax + 0xE0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xD0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xD0) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FE3F0; /* jb: below (unsigned <) */

loc_001FE3EC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001FE3F3;

loc_001FE3F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001FE3F3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FE3F6
 * Original: 0x001FE3F6 - 0x001FE455 (95 bytes, 31 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FE3F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001FE3F6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = esi + 0x3C;
    PUSH32(esp, edi);
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FE40Du); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FE40D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FE517(); return; } /* je: equal / zero */

loc_001FE415: ;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FE4EA(); return; } /* jl: less (signed <) */

loc_001FE41B: ;
    PUSH32(esp, 0);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FE429u); RECOMP_ABI_CALL(0x0021176Fu, sub_0021176F); /* call 0x0021176F */

loc_001FE429: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FE4EA(); return; } /* jl: less (signed <) */

loc_001FE431: ;
    edi = MEM32(ebp + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi + 0xE0)) + (uint64_t)(edi)) >> 32) & 1);
    MEM32(esi + 0xE0) = MEM32(esi + 0xE0) + edi;
    _fa = (uint32_t)(MEM32(esi + 0xE0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xF0);
    { uint64_t _t = (uint64_t)(MEM32(esi + 0xE4)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(esi + 0xE4) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(esi + 0xE4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FE455(); return; } /* jbe: below or equal (unsigned <=) */

loc_001FE44B: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0xF0) = eax;
    g_seh_ebp = ebp; sub_001FE45C(); return; /* tail jmp 0x001FE45C */

}

/**
 * sub_001FE455
 * Original: 0x001FE455 - 0x001FE45C (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE455(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FE455: ;
    MEM32(esi + 0xF0) = MEM32(esi + 0xF0) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xF0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001FE45C(); return; /* fallthrough 0x001FE45C */

}

/**
 * sub_001FE45C
 * Original: 0x001FE45C - 0x001FE4BB (95 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE45C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FE45C: ;
    edx = MEM32(esi + 0xE4);
    eax = MEM32(esi + 0xD4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    ebx = MEM32(esi + 0xE0);
    ecx = MEM32(esi + 0xD0);
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001FE4EF(); return; } /* jb: below (unsigned <) */

loc_001FE478: ;
    if (CMP_A(_fa, _fb)) goto loc_001FE47E; /* ja: above (unsigned >) */

loc_001FE47A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001FE4EF(); return; } /* jb: below (unsigned <) */

loc_001FE47E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001FE4C9(); return; } /* jb: below (unsigned <) */

loc_001FE482: ;
    if (CMP_A(_fa, _fb)) goto loc_001FE488; /* ja: above (unsigned >) */

loc_001FE484: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FE4C9(); return; } /* jbe: below or equal (unsigned <=) */

loc_001FE488: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x14);
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x58));
    MEM32(ebp + -8) = ecx;
    { uint32_t _icall_target = MEM32(0x22BB4C); PUSH32(esp, 0x001FE4A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FE49Du); } /* indirect call */
    }

loc_001FE4A3: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FE4C9(); return; } /* jge: greater or equal (signed >=) */

loc_001FE4A9: ;
    edi = MEM32(0x22BB2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x001FE4B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FE4B0u); } /* indirect call */
    }

loc_001FE4B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FE4BB(); return; } /* jg: greater (signed >) */

loc_001FE4B7: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = edi; PUSH32(esp, 0x001FE4B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FE4B7u); } /* indirect call */
    }

loc_001FE4B9: ;
    g_seh_ebp = ebp; sub_001FE4EA(); return; /* tail jmp 0x001FE4EA */

}

/**
 * sub_001FE4BB
 * Original: 0x001FE4BB - 0x001FE4C9 (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE4BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FE4BB: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = edi; PUSH32(esp, 0x001FE4BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FE4BBu); } /* indirect call */
    }

loc_001FE4BD: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001FE4EA(); return; /* tail jmp 0x001FE4EA */

}

/**
 * sub_001FE4C9
 * Original: 0x001FE4C9 - 0x001FE4EA (33 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE4C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FE4C9: ;
    eax = MEM32(esi + 0xD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xD0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xD0) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FE4E5; /* jne: not equal / not zero */

loc_001FE4D7: ;
    eax = MEM32(esi + 0xDC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xD4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xD4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FE50D(); return; } /* je: equal / zero */

loc_001FE4E5: ;
    eax = 0x80070018u;

    g_seh_ebp = ebp; sub_001FE4EA(); return; /* fallthrough 0x001FE4EA */

}

/**
 * sub_001FE4EA
 * Original: 0x001FE4EA - 0x001FE4EF (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE4EA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FE4EA: ;
    MEM32(esi + 0xC) = eax;
    g_seh_ebp = ebp; sub_001FE50D(); return; /* tail jmp 0x001FE50D */

}

/**
 * sub_001FE4EF
 * Original: 0x001FE4EF - 0x001FE50D (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE4EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FE4EF: ;
    ecx = MEM32(esi + 0xF0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FE50D(); return; } /* je: equal / zero */

loc_001FE4F9: ;
    eax = MEM32(esi + 0xB0);
    PUSH32(esp, ecx);
    ecx = eax + edi;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001FE50Au); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_001FE50A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001FE50D(); return; /* fallthrough 0x001FE50D */

}

/**
 * sub_001FE50D
 * Original: 0x001FE50D - 0x001FE517 (10 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE50D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FE50D: ;
    MEM32(esi + 0x14C) = 2;

    g_seh_ebp = ebp; sub_001FE517(); return; /* fallthrough 0x001FE517 */

}

/**
 * sub_001FE517
 * Original: 0x001FE517 - 0x001FE520 (9 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE517(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FE517: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FE520
 * Original: 0x001FE520 - 0x001FE533 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FE520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FE520: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FE533(); return; } /* jne: not equal / not zero */

loc_001FE529: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001FE5BA(); return; /* tail jmp 0x001FE5BA */

}

/**
 * sub_001FE533
 * Original: 0x001FE533 - 0x001FE5B3 (128 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE533(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FE533: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_001FE54E; /* je: equal / zero */

loc_001FE53D: ;
    edx = MEM32(eax + 0xD8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0xDC);
    MEM32(ecx + 4) = edx;

loc_001FE54E: ;
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FE566; /* je: equal / zero */

loc_001FE555: ;
    edx = MEM32(eax + 0xD0);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0xD4);
    MEM32(ecx + 4) = edx;

loc_001FE566: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FE5B7(); return; } /* je: equal / zero */

loc_001FE56E: ;
    ecx = MEM32(eax + 0xD4);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0xD0);
    edx = ebx;
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -4) = ecx;
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001FE5B3(); return; } /* je: equal / zero */

loc_001FE584: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x64);
    PUSH32(esp, MEM32(eax + 0xDC));
    PUSH32(esp, MEM32(eax + 0xD8));
    PUSH32(esp, 0x001FE599u); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_001FE599: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001FE5A4u); RECOMP_ABI_CALL(0x00152B30u, sub_00152B30); /* call 0x00152B30 */

loc_001FE5A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FE5B6(); return; } /* jbe: below or equal (unsigned <=) */

loc_001FE5AB: ;
    MEM32(esi) = 0x64;
    g_seh_ebp = ebp; sub_001FE5B6(); return; /* tail jmp 0x001FE5B6 */

}

/**
 * sub_001FE5B3
 * Original: 0x001FE5B3 - 0x001FE5B6 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE5B3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FE5B3: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001FE5B6(); return; /* fallthrough 0x001FE5B6 */

}

/**
 * sub_001FE5B6
 * Original: 0x001FE5B6 - 0x001FE5B7 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE5B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FE5B6: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001FE5B7(); return; /* fallthrough 0x001FE5B7 */

}

/**
 * sub_001FE5B7
 * Original: 0x001FE5B7 - 0x001FE5BA (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE5B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FE5B7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001FE5BA(); return; /* fallthrough 0x001FE5BA */

}

/**
 * sub_001FE5BA
 * Original: 0x001FE5BA - 0x001FE5BE (4 bytes, 2 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE5BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FE5BA: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001FE5BE
 * Original: 0x001FE5BE - 0x001FE66E (176 bytes, 57 insns)
 * Category: game_network
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FE5BE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FE5BE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FE5CF; /* jne: not equal / not zero */

loc_001FE5C5: ;
    eax = 0x80150005u;
    goto loc_001FE66A;

loc_001FE5CF: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FE5D9u); RECOMP_ABI_CALL(0x001F1E38u, sub_001F1E38); /* call 0x001F1E38 */

loc_001FE5D9: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FE5E8; /* je: equal / zero */

loc_001FE5E0: ;
    ecx = MEM32(esi + 0xB0);
    MEM32(eax) = ecx;

loc_001FE5E8: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FE5F7; /* je: equal / zero */

loc_001FE5EF: ;
    ecx = MEM32(esi + 0xF0);
    MEM32(eax) = ecx;

loc_001FE5F7: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FE60F; /* je: equal / zero */

loc_001FE5FE: ;
    ecx = MEM32(esi + 0xD8);
    MEM32(eax) = ecx;
    ecx = MEM32(esi + 0xDC);
    MEM32(eax + 4) = ecx;

loc_001FE60F: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FE627; /* je: equal / zero */

loc_001FE616: ;
    ecx = MEM32(esi + 0xD0);
    MEM32(eax) = ecx;
    ecx = MEM32(esi + 0xD4);
    MEM32(eax + 4) = ecx;

loc_001FE627: ;
    eax = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FE636; /* je: equal / zero */

loc_001FE62E: ;
    ecx = MEM32(esi + 0xB8);
    MEM32(eax) = ecx;

loc_001FE636: ;
    eax = MEM32(ebp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FE64E; /* je: equal / zero */

loc_001FE63D: ;
    ecx = MEM32(esi + 0xC4);
    MEM32(eax) = ecx;
    ecx = MEM32(esi + 0xC8);
    MEM32(eax + 4) = ecx;

loc_001FE64E: ;
    eax = MEM32(ebp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FE666; /* je: equal / zero */

loc_001FE655: ;
    ecx = MEM32(esi + 0xBC);
    MEM32(eax) = ecx;
    ecx = MEM32(esi + 0xC0);
    MEM32(eax + 4) = ecx;

loc_001FE666: ;
    eax = MEM32(esi + 0xC);
    POP32(esp, esi);

loc_001FE66A: ;
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001FE681
 * Original: 0x001FE681 - 0x001FE71E (157 bytes, 59 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE681(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FE681: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    ebp = esi + 0x70;
    PUSH32(esp, ebp);
    ebx = ecx;
    PUSH32(esp, 0x001FE694u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FE694: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FE715; /* je: equal / zero */

loc_001FE69A: ;
    if (CMP_GE(_fas, _fbs)) goto loc_001FE6D2; /* jge: greater or equal (signed >=) */

loc_001FE69C: ;
    eax = MEM32(esi + 0x104);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FE6FE; /* je: equal / zero */

loc_001FE6A6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001FE6ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FE6AAu); } /* indirect call */
    }

loc_001FE6AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15FFFE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15FFFE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FE6FE; /* jne: not equal / not zero */

loc_001FE6B3: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001FE6BBu); RECOMP_ABI_CALL(0x0020C21Bu, sub_0020C21B); /* call 0x0020C21B */

loc_001FE6BB: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FE6FE; /* jl: less (signed <) */

loc_001FE6C1: ;
    MEM32(esi + 0x14) = 2;
    PUSH32(esp, 0x001FE6CDu); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_001FE6CD: ;
    MEM32(esi + 0x20) = eax;
    goto loc_001FE715;

loc_001FE6D2: ;
    PUSH32(esp, ebp);
    PUSH32(esp, MEM32(esi + 8));
    eax = esi + 0xA8;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x80));
    ecx = ebx;
    PUSH32(esp, 0x001FE6EEu); RECOMP_ABI_CALL(0x00211AC9u, sub_00211AC9); /* call 0x00211AC9 */

loc_001FE6EE: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x001FE6F8u); RECOMP_ABI_CALL(0x00211A4Cu, sub_00211A4C); /* call 0x00211A4C */

loc_001FE6F8: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001FE70A; /* jge: greater or equal (signed >=) */

loc_001FE6FE: ;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x14) = 7;
    goto loc_001FE715;

loc_001FE70A: ;
    MEM8(esi + 0x1B) = MEM8(esi + 0x1B) | 0x20;
    _fa = (uint32_t)(MEM8(esi + 0x1B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(esi + 0x14) = 3;

loc_001FE715: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FE71E
 * Original: 0x001FE71E - 0x001FE7CE (176 bytes, 52 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE71E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FE71E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = esi + 0x70;
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x001FE730u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FE730: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FE7C6; /* je: equal / zero */

loc_001FE738: ;
    if (CMP_L(_fas, _fbs)) goto loc_001FE785; /* jl: less (signed <) */

loc_001FE73A: ;
    _fa = (uint32_t)(MEM8(esi + 0x1A)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1A), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001FE746; /* jne: not equal / not zero */

loc_001FE740: ;
    _fa = (uint32_t)(MEM8(esi + 0x34)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x34), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FE753; /* jne: not equal / not zero */

loc_001FE746: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esi + 0x80));
    PUSH32(esp, 0x001FE753u); RECOMP_ABI_CALL(0x001CEFE4u, sub_001CEFE4); /* call 0x001CEFE4 */

loc_001FE753: ;
    ecx = MEM32(esi + 0xB4);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 8));
    eax = esi + 0xA8;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x80));
    MEM32(eax) = ecx;
    ecx = ebx;
    PUSH32(esp, 0x001FE777u); RECOMP_ABI_CALL(0x00211AC9u, sub_00211AC9); /* call 0x00211AC9 */

loc_001FE777: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001FE781u); RECOMP_ABI_CALL(0x00211A4Cu, sub_00211A4C); /* call 0x00211A4C */

loc_001FE781: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001FE791; /* jge: greater or equal (signed >=) */

loc_001FE785: ;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x14) = 7;
    goto loc_001FE7C6;

loc_001FE791: ;
    MEM8(esi + 0x1B) = MEM8(esi + 0x1B) | 0x20;
    _fa = (uint32_t)(MEM8(esi + 0x1B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(esi + 0x1A)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1A), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001FE7AE; /* je: equal / zero */

loc_001FE79B: ;
    eax = MEM32(esi + 0xB4);
    MEM32(esi + 0xD4) = MEM32(esi + 0xD4) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xD4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xD0) = eax;

loc_001FE7AE: ;
    MEM32(esi + 0xF0) = MEM32(esi + 0xF0) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xF0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x14) = 4;
    MEM32(esi + 0xF4) = 1;

loc_001FE7C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FE7CE
 * Original: 0x001FE7CE - 0x001FE9C1 (499 bytes, 154 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FE7CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001FE7CE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FE7E3u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FE7E3: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001FE9B8; /* je: equal / zero */

loc_001FE7ED: ;
    if (CMP_L(_fas, _fbs)) goto loc_001FE9A8; /* jl: less (signed <) */

loc_001FE7F3: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FE804u); RECOMP_ABI_CALL(0x002117BFu, sub_002117BF); /* call 0x002117BF */

loc_001FE804: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001FE9A8; /* jl: less (signed <) */

loc_001FE80C: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001FE8AF; /* je: equal / zero */

loc_001FE815: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FE824u); RECOMP_ABI_CALL(0x0020BD99u, sub_0020BD99); /* call 0x0020BD99 */

loc_001FE824: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001FE9A8; /* jl: less (signed <) */

loc_001FE82C: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001FE890; /* je: equal / zero */

loc_001FE831: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(esi + 0x108); PUSH32(esp, 0x001FE83Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FE834u); } /* indirect call */
    }

loc_001FE83A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001FE9A8; /* jl: less (signed <) */

loc_001FE842: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15FFFE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15FFFE (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001FE87D; /* jne: not equal / not zero */

loc_001FE849: ;
    edi = esi + 0x80;
    PUSH32(esp, MEM32(edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FE856u); RECOMP_ABI_CALL(0x001CEFD9u, sub_001CEFD9); /* call 0x001CEFD9 */

loc_001FE856: ;
    _cf = 0; /* logical op clears CF */
    MEM32(edi) = MEM32(edi) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FE861u); RECOMP_ABI_CALL(0x0020C21Bu, sub_0020C21B); /* call 0x0020C21B */

loc_001FE861: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001FE9A8; /* jl: less (signed <) */

loc_001FE869: ;
    MEM32(esi + 0x14) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FE875u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_001FE875: ;
    MEM32(esi + 0x20) = eax;
    goto loc_001FE9B8;

loc_001FE87D: ;
    edx = MEM32(esi + 0xF0);
    ecx = esi + 0xD8;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(edx)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + edx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(ecx + 4)) + (uint64_t)(edi) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ecx + 4) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    goto loc_001FE8D4;

loc_001FE890: ;
    _fa = (uint32_t)(MEM8(esi + 0xF4)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xF4), 3 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001FE8D4; /* jne: not equal / not zero */

loc_001FE899: ;
    edx = MEM32(ebp + 8);
    ecx = esi + 0xD8;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(edx)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + edx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(ecx + 4)) + (uint64_t)(edi) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ecx + 4) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi + 0xF0)) + (uint64_t)(edx)) >> 32) & 1);
    MEM32(esi + 0xF0) = MEM32(esi + 0xF0) + edx;
    _fa = (uint32_t)(MEM32(esi + 0xF0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001FE8D4;

loc_001FE8AF: ;
    _fa = (uint32_t)(MEM8(esi + 0x1A)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1A), 0x80 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001FE8CF; /* je: equal / zero */

loc_001FE8B5: ;
    ecx = MEM32(esi + 0xD8);
    MEM32(esi + 0xD0) = ecx;
    ecx = MEM32(esi + 0xDC);
    MEM32(esi + 0xD4) = ecx;
    goto loc_001FE8D4;

loc_001FE8CF: ;
    eax = 0x80072746u;

loc_001FE8D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001FE9A8; /* jl: less (signed <) */

loc_001FE8DC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(esi + 0x110); PUSH32(esp, 0x001FE8E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FE8DFu); } /* indirect call */
    }

loc_001FE8E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001FE9A8; /* jl: less (signed <) */

loc_001FE8ED: ;
    if (CMP_NE(_fa, _fb)) goto loc_001FE92B; /* jne: not equal / not zero */

loc_001FE8EF: ;
    ecx = MEM32(esi + 0x124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001FE91F; /* je: equal / zero */

loc_001FE8F9: ;
    eax = MEM32(esi + 0x114);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001FE913; /* je: equal / zero */

loc_001FE903: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    ecx = ebx;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001FE90Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FE909u); } /* indirect call */
    }

loc_001FE90B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001FE9A8; /* jl: less (signed <) */

loc_001FE913: ;
    MEM32(esi + 0x14) = 6;
    goto loc_001FE9B8;

loc_001FE91F: ;
    MEM32(esi + 0x14) = 7;
    goto loc_001FE9B8;

loc_001FE92B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(esi + 0x10C); PUSH32(esp, 0x001FE934u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FE92Eu); } /* indirect call */
    }

loc_001FE934: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001FE95C; /* je: equal / zero */

loc_001FE938: ;
    eax = MEM32(esi + 0x114);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001FE953; /* je: equal / zero */

loc_001FE942: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x120));
    ecx = ebx;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001FE94Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FE94Du); } /* indirect call */
    }

loc_001FE94F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001FE9A8; /* jl: less (signed <) */

loc_001FE953: ;
    MEM32(esi + 0x14) = 5;
    goto loc_001FE9B8;

loc_001FE95C: ;
    ecx = MEM32(esi + 0xF0);
    eax = MEM32(esi + 0xB0);
    edx = MEM32(esi + 0xB4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi + 0x70;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 8));
    MEM32(esi + 0xAC) = eax;
    PUSH32(esp, edi);
    eax = esi + 0xA8;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x80));
    ecx = ebx;
    MEM32(eax) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FE998u); RECOMP_ABI_CALL(0x00211AC9u, sub_00211AC9); /* call 0x00211AC9 */

loc_001FE998: ;
    PUSH32(esp, edi);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FE9A4u); RECOMP_ABI_CALL(0x00211A4Cu, sub_00211A4C); /* call 0x00211A4C */

loc_001FE9A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001FE9B4; /* jge: greater or equal (signed >=) */

loc_001FE9A8: ;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x14) = 8;
    goto loc_001FE9B8;

loc_001FE9B4: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x1B) = MEM8(esi + 0x1B) | 0x20;
    _fa = (uint32_t)(MEM8(esi + 0x1B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_001FE9B8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FE9C1
 * Original: 0x001FE9C1 - 0x001FEA96 (213 bytes, 67 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE9C1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FE9C1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, MEM32(esi + 0x120));
    ebx = ecx;
    PUSH32(esp, 0x001FE9D4u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FE9D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FEA8F; /* je: equal / zero */

loc_001FE9DC: ;
    if (CMP_L(_fas, _fbs)) goto loc_001FEA78; /* jl: less (signed <) */

loc_001FE9E2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(esi + 0x110); PUSH32(esp, 0x001FE9EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FE9E5u); } /* indirect call */
    }

loc_001FE9EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FEA78; /* jl: less (signed <) */

loc_001FE9F3: ;
    if (CMP_NE(_fa, _fb)) goto loc_001FEA2B; /* jne: not equal / not zero */

loc_001FE9F5: ;
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(esi + 0x80));
    PUSH32(esp, 0x001FEA02u); RECOMP_ABI_CALL(0x001CEFE4u, sub_001CEFE4); /* call 0x001CEFE4 */

loc_001FEA02: ;
    eax = MEM32(esi + 0x124);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FEA7B; /* je: equal / zero */

loc_001FEA0C: ;
    edx = MEM32(esi + 0x114);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FEA22; /* je: equal / zero */

loc_001FEA16: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    ecx = ebx;
    { uint32_t _icall_target = edx; PUSH32(esp, 0x001FEA1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FEA1Cu); } /* indirect call */
    }

loc_001FEA1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FEA78; /* jl: less (signed <) */

loc_001FEA22: ;
    MEM32(esi + 0x14) = 6;
    goto loc_001FEA8F;

loc_001FEA2B: ;
    ecx = MEM32(esi + 0xF0);
    eax = MEM32(esi + 0xB0);
    edx = MEM32(esi + 0xB4);
    PUSH32(esp, edi);
    edi = esi + 0x70;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 8));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    MEM32(esi + 0xAC) = eax;
    eax = esi + 0xA8;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x80));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebx;
    MEM32(eax) = edx;
    PUSH32(esp, 0x001FEA69u); RECOMP_ABI_CALL(0x00211AC9u, sub_00211AC9); /* call 0x00211AC9 */

loc_001FEA69: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001FEA73u); RECOMP_ABI_CALL(0x00211A4Cu, sub_00211A4C); /* call 0x00211A4C */

loc_001FEA73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_001FEA84; /* jge: greater or equal (signed >=) */

loc_001FEA78: ;
    MEM32(esi + 0xC) = eax;

loc_001FEA7B: ;
    MEM32(esi + 0x14) = 7;
    goto loc_001FEA8F;

loc_001FEA84: ;
    MEM8(esi + 0x1B) = MEM8(esi + 0x1B) | 0x20;
    _fa = (uint32_t)(MEM8(esi + 0x1B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(esi + 0x14) = 4;

loc_001FEA8F: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FEA96
 * Original: 0x001FEA96 - 0x001FEABB (37 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FEA96(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001FEA96: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FEAB7u); RECOMP_ABI_CALL(0x001FE0A4u, sub_001FE0A4); /* call 0x001FE0A4 */

loc_001FEAB7: ;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001FEABB
 * Original: 0x001FEABB - 0x001FEBEB (304 bytes, 109 insns)
 * Category: game_network
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FEABB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001FEABB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001FEAD3; /* jne: not equal / not zero */

loc_001FEAC9: ;
    eax = 0x80150005u;
    goto loc_001FEBE6;

loc_001FEAD3: ;
    eax = MEM32(ebp + 0x10);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax = ~eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x200E);
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x150)) >> 32) & 1);
    eax = eax + 0x150;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FEAF0u); RECOMP_ABI_CALL(0x0020C3C3u, sub_0020C3C3); /* call 0x0020C3C3 */

loc_001FEAF0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001FEB02; /* jne: not equal / not zero */

loc_001FEAF6: ;
    MEM32(ebp + 0x10) = 0x8007000Eu;
    goto loc_001FEBE2;

loc_001FEB02: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x54);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001FEB19; /* jne: not equal / not zero */

loc_001FEB13: ;
    eax = esi + 0x150;

loc_001FEB19: ;
    ecx = MEM32(ebp + -4);
    MEM32(esi + 0xB0) = eax;
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    MEM32(esi + 0xB4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FEB31u); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_001FEB31: ;
    eax = MEM32(ebp + 0x24);
    ecx = MEM32(ebp + -4);
    MEM32(esi + 8) = eax;
    eax = esi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FEB4Cu); RECOMP_ABI_CALL(0x001EF6A1u, sub_001EF6A1); /* call 0x001EF6A1 */

loc_001FEB4C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001FEBD1; /* jl: less (signed <) */

loc_001FEB53: ;
    eax = MEM32(ebp + 0x20);
    ecx = MEM32(ebp + -4);
    MEM32(esi + 0x1C) = eax;
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    edi = esi + 0x28;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x1C));
    MEM32(esi + 0x24) = ebx;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FEB75u); RECOMP_ABI_CALL(0x0020B87Cu, sub_0020B87C); /* call 0x0020B87C */

loc_001FEB75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001FEBD1; /* jl: less (signed <) */

loc_001FEB7C: ;
    eax = MEM32(ebp + 0x20);
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x1A) = MEM8(esi + 0x1A) | 1;
    _fa = (uint32_t)(MEM8(esi + 0x1A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001FEB89; /* jbe: below or equal (unsigned <=) */

loc_001FEB87: ;
    MEM32(edi) = eax;

loc_001FEB89: ;
    ecx = MEM32(ebp + -4);
    eax = esi + 0x104;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    MEM32(eax + 4) = 0x1FE224;
    MEM32(eax + 8) = 0x1FE273;
    MEM32(eax + 0xC) = 0x1FE278;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x1C) = ebx;
    MEM32(eax + 0x20) = ebx;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FEBCAu); RECOMP_ABI_CALL(0x001FEA96u, sub_001FEA96); /* call 0x001FEA96 */

loc_001FEBCA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0x10) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001FEBDC; /* jge: greater or equal (signed >=) */

loc_001FEBD1: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FEBDAu); RECOMP_ABI_CALL(0x0020C3FFu, sub_0020C3FF); /* call 0x0020C3FF */

loc_001FEBDA: ;
    goto loc_001FEBE1;

loc_001FEBDC: ;
    eax = MEM32(ebp + 0x28);
    MEM32(eax) = esi;

loc_001FEBE1: ;
    POP32(esp, edi);

loc_001FEBE2: ;
    eax = MEM32(ebp + 0x10);
    POP32(esp, esi);

loc_001FEBE6: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 40; return; /* ret 36 */

}

/**
 * sub_001FEBEB
 * Original: 0x001FEBEB - 0x001FEC8B (160 bytes, 46 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FEBEB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FEBEB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 1 (32-bit) */
    PUSH32(esp, ebx);
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001FEC87; /* jne: not equal / not zero */

loc_001FEBFB: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0xDC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xEC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0xEC) (32-bit) */
    edx = MEM32(esi + 0xD8);
    if (CMP_B(_fa, _fb)) goto loc_001FEC26; /* jb: below (unsigned <) */

loc_001FEC14: ;
    if (CMP_A(_fa, _fb)) goto loc_001FEC1E; /* ja: above (unsigned >) */

loc_001FEC16: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xE8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0xE8) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001FEC26; /* jbe: below or equal (unsigned <=) */

loc_001FEC1E: ;
    MEM32(esi + 0x14C) = eax;
    goto loc_001FEC86;

loc_001FEC26: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xD4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0xD4) (32-bit) */
    eax = MEM32(esi + 0xF0);
    if (CMP_B(_fa, _fb)) goto loc_001FEC43; /* jb: below (unsigned <) */

loc_001FEC34: ;
    if (CMP_A(_fa, _fb)) goto loc_001FEC3E; /* ja: above (unsigned >) */

loc_001FEC36: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xD0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0xD0) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FEC43; /* jb: below (unsigned <) */

loc_001FEC3E: ;
    _fb = (uint32_t)(0x1FF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001FEC43: ;
    PUSH32(esp, edi);
    edi = esi + 0x3C;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 8));
    eax = eax & 0xFFFFFE00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(esi + 0xE4));
    ecx = ebx;
    PUSH32(esp, MEM32(esi + 0xE0));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xB0));
    PUSH32(esp, MEM32(esi + 0x58));
    PUSH32(esp, 0x001FEC6Du); RECOMP_ABI_CALL(0x002116AFu, sub_002116AF); /* call 0x002116AF */

loc_001FEC6D: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001FEC77u); RECOMP_ABI_CALL(0x0021164Fu, sub_0021164F); /* call 0x0021164F */

loc_001FEC77: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_001FEC86; /* jl: less (signed <) */

loc_001FEC7C: ;
    MEM32(esi + 0x14C) = 1;

loc_001FEC86: ;
    POP32(esp, esi);

loc_001FEC87: ;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001FEC8B
 * Original: 0x001FEC8B - 0x001FED12 (135 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FEC8B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001FEC8B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0xD0);
    _fb = (uint32_t)(MEM32(esi + 0xE8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esi + 0xE8)));
    eax = eax - MEM32(esi + 0xE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(esi + 0xD4);
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(MEM32(esi + 0xEC)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ebx = 0x1FF;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    edi = 0xFFFFFE00u;
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -12) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001FECE2; /* jl: less (signed <) */

loc_001FECCD: ;
    edx = 0x200000;
    if (CMP_G(_fas, _fbs)) goto loc_001FECD8; /* jg: greater (signed >) */

loc_001FECD4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001FECE2; /* jbe: below or equal (unsigned <=) */

loc_001FECD8: ;
    eax = edx;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -8) = ecx;

loc_001FECE2: ;
    PUSH32(esp, 1);
    edx = ebp + -12;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x58));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FECF2u); RECOMP_ABI_CALL(0x000AAAC9u, sub_000AAAC9); /* call 0x000AAAC9 */

loc_001FECF2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001FED02; /* je: equal / zero */

loc_001FECF6: ;
    PUSH32(esp, MEM32(esi + 0x58));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FECFEu); RECOMP_ABI_CALL(0x000AA94Bu, sub_000AA94B); /* call 0x000AA94B */

loc_001FECFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FED23(); return; } /* jne: not equal / not zero */

loc_001FED02: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FED07u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001FED07: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FED12(); return; } /* jg: greater (signed >) */

loc_001FED0B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FED10u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001FED10: ;
    g_seh_ebp = ebp; sub_001FED91(); return; /* tail jmp 0x001FED91 */

}

/**
 * sub_001FED12
 * Original: 0x001FED12 - 0x001FED23 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FED12(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FED12: ;
    PUSH32(esp, 0x001FED17u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001FED17: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001FED91(); return; /* tail jmp 0x001FED91 */

}

/**
 * sub_001FED23
 * Original: 0x001FED23 - 0x001FED91 (110 bytes, 30 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FED23(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FED23: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(esi + 0xDC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xD4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0xD4) (32-bit) */
    MEM32(esi + 0xE8) = eax;
    eax = MEM32(ebp + -8);
    MEM32(esi + 0xEC) = eax;
    eax = MEM32(esi + 0xF0);
    if (CMP_B(_fa, _fb)) goto loc_001FED5B; /* jb: below (unsigned <) */

loc_001FED49: ;
    if (CMP_A(_fa, _fb)) goto loc_001FED59; /* ja: above (unsigned >) */

loc_001FED4B: ;
    ecx = MEM32(esi + 0xD8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xD0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0xD0) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FED5B; /* jb: below (unsigned <) */

loc_001FED59: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001FED5B: ;
    ecx = MEM32(ebp + -4);
    ebx = esi + 0x3C;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 8));
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(esi + 0xE4));
    PUSH32(esp, MEM32(esi + 0xE0));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xB0));
    PUSH32(esp, MEM32(esi + 0x58));
    PUSH32(esp, 0x001FED82u); RECOMP_ABI_CALL(0x002116AFu, sub_002116AF); /* call 0x002116AF */

loc_001FED82: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001FED8Du); RECOMP_ABI_CALL(0x0021164Fu, sub_0021164F); /* call 0x0021164F */

loc_001FED8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FEDA0(); return; } /* jge: greater or equal (signed >=) */

    g_seh_ebp = ebp; sub_001FED91(); return; /* fallthrough 0x001FED91 */

}

/**
 * sub_001FED91
 * Original: 0x001FED91 - 0x001FEDA0 (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FED91(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FED91: ;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x14C) = 2;
    g_seh_ebp = ebp; sub_001FEDAA(); return; /* tail jmp 0x001FEDAA */

}

/**
 * sub_001FEDA0
 * Original: 0x001FEDA0 - 0x001FEDAA (10 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FEDA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FEDA0: ;
    MEM32(esi + 0x14C) = 1;

    g_seh_ebp = ebp; sub_001FEDAA(); return; /* fallthrough 0x001FEDAA */

}

/**
 * sub_001FEDAA
 * Original: 0x001FEDAA - 0x001FEDB3 (9 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FEDAA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FEDAA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FEDB3
 * Original: 0x001FEDB3 - 0x001FEE04 (81 bytes, 25 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FEDB3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FEDB3: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xFFFFFEC0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFEC0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001FEDE5; /* je: equal / zero */

loc_001FEDC6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001FEDDD; /* je: equal / zero */

loc_001FEDC9: ;
    eax = 0x80004005u;
    MEM32(esi + 0x14C) = 2;
    MEM32(esi + 0xC) = eax;
    goto loc_001FEDEB;

loc_001FEDDD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FEDE3u); RECOMP_ABI_CALL(0x001FE3F6u, sub_001FE3F6); /* call 0x001FE3F6 */

loc_001FEDE3: ;
    goto loc_001FEDEB;

loc_001FEDE5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FEDEBu); RECOMP_ABI_CALL(0x001FEC8Bu, sub_001FEC8B); /* call 0x001FEC8B */

loc_001FEDEB: ;
    _fa = (uint32_t)(MEM32(esi + 0x14C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14C), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FEE00; /* jne: not equal / not zero */

loc_001FEDF4: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FEE00; /* jl: less (signed <) */

loc_001FEDFB: ;
    eax = 0x1500F0;

loc_001FEE00: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FEE04
 * Original: 0x001FEE04 - 0x001FF0A0 (668 bytes, 210 insns)
 * Category: game_network
 * CC: cdecl, 11 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FEE04(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001FEE04: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1C));
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001FEE1E; /* jne: not equal / not zero */

loc_001FEE14: ;
    eax = 0x80150005u;
    goto loc_001FF09B;

loc_001FEE1E: ;
    eax = MEM32(ebp + 0x20);
    _cf = 0; /* logical op clears CF */
    MEM16(ebp + 0x14) = MEM16(ebp + 0x14) & 0xFE00;
    _fa = (uint32_t)(MEM16(ebp + 0x14)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x20) = eax;
    eax = MEM32(ebp + 0x10);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, esi);
    eax = ~eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x200F);
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x150)) >> 32) & 1);
    eax = eax + 0x150;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -12) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FEE51u); RECOMP_ABI_CALL(0x0020C3C3u, sub_0020C3C3); /* call 0x0020C3C3 */

loc_001FEE51: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001FEE61; /* jne: not equal / not zero */

loc_001FEE57: ;
    edi = 0x8007000Eu;
    goto loc_001FF06E;

loc_001FEE61: ;
    PUSH32(esp, 0x54);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001FEE77; /* jne: not equal / not zero */

loc_001FEE71: ;
    eax = esi + 0x150;

loc_001FEE77: ;
    ecx = MEM32(ebp + -4);
    MEM32(esi + 0xB0) = eax;
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    MEM32(esi + 0xB4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FEE8Fu); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_001FEE8F: ;
    eax = MEM32(ebp + 0x2C);
    ecx = MEM32(ebp + -4);
    MEM32(esi + 8) = eax;
    eax = esi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FEEAAu); RECOMP_ABI_CALL(0x001EF6A1u, sub_001EF6A1); /* call 0x001EF6A1 */

loc_001FEEAA: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001FF06E; /* jl: less (signed <) */

loc_001FEEB4: ;
    eax = MEM32(ebp + 0x28);
    ecx = esi + 0x2C;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    MEM32(esi + 0x1C) = eax;
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x1C));
    MEM32(esi + 0xE0) = ebx;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(esi + 0xE4) = ebx;
    MEM32(esi + 0x24) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FEEE2u); RECOMP_ABI_CALL(0x0020B87Cu, sub_0020B87C); /* call 0x0020B87C */

loc_001FEEE2: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001FF06E; /* jl: less (signed <) */

loc_001FEEEC: ;
    eax = MEM32(ebp + 0x28);
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x1A) = MEM8(esi + 0x1A) | 1;
    _fa = (uint32_t)(MEM8(esi + 0x1A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001FEEFB; /* jbe: below or equal (unsigned <=) */

loc_001FEEF8: ;
    MEM32(esi + 0x28) = eax;

loc_001FEEFB: ;
    ecx = MEM32(ebp + -4);
    eax = esi + 0x3C;
    edi = esi + 0x140;
    PUSH32(esp, edi);
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FEF10u); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_001FEF10: ;
    eax = MEM32(ebp + 0x2C);
    MEM32(esi + 0x148) = eax;
    eax = esi + 0x104;
    MEM32(edi) = 0x1FEDB3;
    MEM32(esi + 0x14C) = 2;
    MEM32(eax + 4) = 0x1FE2A4;
    MEM32(eax + 8) = 0x1FE389;
    MEM32(eax + 0xC) = 0x1FE3CA;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x10) = 0x1FEBEB;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 0x20) = ebx;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ebx);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 0x68000080);
    eax = eax + eax + 2;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0xC0000000u);
    PUSH32(esp, MEM32(ebp + 0x24));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FEF7Au); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_001FEF7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    edi = MEM32(ebp + -8);
    MEM32(edi + 0x1C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001FEFD5; /* je: equal / zero */

loc_001FEF85: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -20) = ebx;
    MEM32(ebp + -16) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_001FF04D; /* jne: not equal / not zero */

loc_001FEF94: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FEFA0u); RECOMP_ABI_CALL(0x000AAD69u, sub_000AAD69); /* call 0x000AAD69 */

loc_001FEFA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001FEFD5; /* je: equal / zero */

loc_001FEFA4: ;
    eax = MEM32(ebp + -20);
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_001FF04D; /* je: equal / zero */

loc_001FEFB0: ;
    _fa = (uint32_t)(MEM16(ebp + -20)) & 0xFFFFu; _fb = (uint32_t)(0x1FF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp + -20), 0x1FF (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001FEFBE; /* je: equal / zero */

loc_001FEFB8: ;
    _cf = 0; /* logical op clears CF */
    MEM16(ebp + -20) = MEM16(ebp + -20) & 0xFE00;
    _fa = (uint32_t)(MEM16(ebp + -20)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */

loc_001FEFBE: ;
    PUSH32(esp, ebx);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(edi + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FEFD1u); RECOMP_ABI_CALL(0x000AAAC9u, sub_000AAAC9); /* call 0x000AAAC9 */

loc_001FEFD1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001FEFFF; /* jne: not equal / not zero */

loc_001FEFD5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FEFDAu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001FEFDA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_001FEFEA; /* jg: greater (signed >) */

loc_001FEFDE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FEFE3u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001FEFE3: ;
    edi = eax;
    goto loc_001FF06E;

loc_001FEFEA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FEFEFu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001FEFEF: ;
    edi = eax;
    _cf = 0; /* logical op clears CF */
    edi = edi & 0xFFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edi = edi | 0x80070000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001FF06E;

loc_001FEFFF: ;
    eax = MEM32(ebp + -20);
    MEM32(esi + 0xD8) = eax;
    eax = MEM32(ebp + -16);
    MEM32(esi + 0xDC) = eax;
    eax = MEM32(ebp + -20);
    MEM32(esi + 0xE0) = eax;
    eax = MEM32(ebp + -16);
    MEM32(esi + 0xE4) = eax;
    eax = MEM32(ebp + -20);
    MEM32(esi + 0xE8) = eax;
    eax = MEM32(ebp + -16);
    MEM32(esi + 0xEC) = eax;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(edi + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FF043u); RECOMP_ABI_CALL(0x000AAC6Au, sub_000AAC6A); /* call 0x000AAC6A */

loc_001FF043: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001FF04D; /* je: equal / zero */

loc_001FF047: ;
    eax = ebp + -28;
    MEM32(ebp + -12) = eax;

loc_001FF04D: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FF068u); RECOMP_ABI_CALL(0x001FEA96u, sub_001FEA96); /* call 0x001FEA96 */

loc_001FF068: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001FF092; /* jge: greater or equal (signed >=) */

loc_001FF06E: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001FF083; /* je: equal / zero */

loc_001FF078: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001FF083; /* je: equal / zero */

loc_001FF07D: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FF083u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_001FF083: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001FF097; /* je: equal / zero */

loc_001FF087: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FF090u); RECOMP_ABI_CALL(0x0020C3FFu, sub_0020C3FF); /* call 0x0020C3FF */

loc_001FF090: ;
    goto loc_001FF097;

loc_001FF092: ;
    eax = MEM32(ebp + 0x30);
    MEM32(eax) = esi;

loc_001FF097: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001FF09B: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 48; return; /* ret 44 */

}

/**
 * sub_001FF0A0
 * Original: 0x001FF0A0 - 0x001FF133 (147 bytes, 51 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF0A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FF0A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x114));
    edi = ecx;
    PUSH32(esp, 0x001FF0B3u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FF0B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FF12C; /* je: equal / zero */

loc_001FF0B7: ;
    if (CMP_L(_fas, _fbs)) goto loc_001FF119; /* jl: less (signed <) */

loc_001FF0B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15FFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FF0ED; /* jne: not equal / not zero */

loc_001FF0C0: ;
    ecx = MEM32(esi + 0x11C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FF11C; /* je: equal / zero */

loc_001FF0CC: ;
    edx = MEM32(esi + 0x10C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FF0E4; /* je: equal / zero */

loc_001FF0D6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    ecx = edi;
    { uint32_t _icall_target = edx; PUSH32(esp, 0x001FF0DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FF0DCu); } /* indirect call */
    }

loc_001FF0DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FF119; /* jl: less (signed <) */

loc_001FF0E2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001FF0E4: ;
    MEM32(esi + 0x14) = 8;
    goto loc_001FF12E;

loc_001FF0ED: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001FF10F; /* je: equal / zero */

loc_001FF0F6: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 8));
    eax = esi + 0x12C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001FF106u); RECOMP_ABI_CALL(0x001DFCBAu, sub_001DFCBA); /* call 0x001DFCBA */

loc_001FF106: ;
    MEM32(esi + 0x14) = 1;
    goto loc_001FF12C;

loc_001FF10F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FF115u); RECOMP_ABI_CALL(0x0020C21Bu, sub_0020C21B); /* call 0x0020C21B */

loc_001FF115: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001FF125; /* jge: greater or equal (signed >=) */

loc_001FF119: ;
    MEM32(esi + 0xC) = eax;

loc_001FF11C: ;
    MEM32(esi + 0x14) = 9;
    goto loc_001FF12E;

loc_001FF125: ;
    MEM32(esi + 0x14) = 2;

loc_001FF12C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001FF12E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FF133
 * Original: 0x001FF133 - 0x001FF164 (49 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF133(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FF133: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x001FF140u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_001FF140: ;
    _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x28) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FF15D; /* jb: below (unsigned <) */

loc_001FF148: ;
    MEM32(esi + 0x28) = MEM32(esi + 0x28) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001FF154u); RECOMP_ABI_CALL(0x0020C21Bu, sub_0020C21B); /* call 0x0020C21B */

loc_001FF154: ;
    MEM32(esi + 0x14) = 2;
    goto loc_001FF15F;

loc_001FF15D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001FF15F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FF164
 * Original: 0x001FF164 - 0x001FF1E2 (126 bytes, 39 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF164(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FF164: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    edi = ecx;
    PUSH32(esp, 0x001FF176u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FF176: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FF1DA; /* je: equal / zero */

loc_001FF17C: ;
    if (CMP_L(_fas, _fbs)) goto loc_001FF1C7; /* jl: less (signed <) */

loc_001FF17E: ;
    eax = MEM32(esi + 0xA8);
    MEM32(esi + 0x18) = MEM32(esi + 0x18) | 2;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xD8) = ebx;
    MEM32(esi + 0xDC) = ebx;
    MEM32(esi + 0xE0) = ebx;
    MEM32(esi + 0xE4) = ebx;
    MEM32(esi + 0xF0) = ebx;
    MEM32(esi + 0xF4) = eax;
    eax = MEM32(esi + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FF1D3; /* je: equal / zero */

loc_001FF1B6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x118));
    ecx = edi;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001FF1C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FF1C1u); } /* indirect call */
    }

loc_001FF1C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001FF1D3; /* jge: greater or equal (signed >=) */

loc_001FF1C7: ;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x14) = 9;
    goto loc_001FF1DC;

loc_001FF1D3: ;
    MEM32(esi + 0x14) = 3;

loc_001FF1DA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001FF1DC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FF1E2
 * Original: 0x001FF1E2 - 0x001FF20A (40 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF1E2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FF1E2: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, MEM32(esi + 0x11C));
    PUSH32(esp, 0x001FF1F2u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FF1F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FF204; /* je: equal / zero */

loc_001FF1F6: ;
    MEM32(esi + 0x14) = 9;
    if (CMP_GE(_fas, _fbs)) goto loc_001FF204; /* jge: greater or equal (signed >=) */

loc_001FF1FF: ;
    MEM32(esi + 0xC) = eax;
    goto loc_001FF206;

loc_001FF204: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001FF206: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FF20A
 * Original: 0x001FF20A - 0x001FF223 (25 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF20A(void)
{

loc_001FF20A: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FF215u); RECOMP_ABI_CALL(0x0020C2ABu, sub_0020C2AB); /* call 0x0020C2AB */

loc_001FF215: ;
    eax = MEM32(esi + 0xC);
    MEM32(esi + 0x14) = 0xA;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FF223
 * Original: 0x001FF223 - 0x001FF236 (19 bytes, 5 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF223(void)
{

loc_001FF223: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0xAA6E50);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x001FF233u); RECOMP_ABI_CALL(0x0020C0EDu, sub_0020C0ED); /* call 0x0020C0ED */

loc_001FF233: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FF236
 * Original: 0x001FF236 - 0x001FF257 (33 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF236(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001FF236: ;
    eax = MEM32(esp + 4);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x14) (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(eax + 0x2C));
    PUSH32(esp, MEM32(eax + 0x24));
    PUSH32(esp, MEM32(eax + 0x30));
    PUSH32(esp, 0x001FF254u); RECOMP_ABI_CALL(0x0020B987u, sub_0020B987); /* call 0x0020B987 */

loc_001FF254: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FF257
 * Original: 0x001FF257 - 0x001FF2CC (117 bytes, 44 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FF257(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FF257: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x1C);
    PUSH32(esp, edi);
    MEM32(esi) = 0x1FF223;
    MEM32(esi + 4) = 0x20C35A;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = esi + 0x12C;
    edi = ebx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(ebp + -4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FF289u); RECOMP_ABI_CALL(0x0020BFB0u, sub_0020BFB0); /* call 0x0020BFB0 */

loc_001FF289: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FF394(); return; } /* jl: less (signed <) */

loc_001FF294: ;
    PUSH32(esp, MEM32(esi + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FF29Cu); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001FF29C: ;
    MEM8(esi + 0x1B) = MEM8(esi + 0x1B) & 0x7F;
    _fa = (uint32_t)(MEM8(esi + 0x1B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = MEM32(esi + 0x114);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FF2CC(); return; } /* je: equal / zero */

loc_001FF2AA: ;
    eax = MEM32(esi + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FF2C7; /* je: equal / zero */

loc_001FF2B4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001FF2BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FF2BAu); } /* indirect call */
    }

loc_001FF2BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FF394(); return; } /* jl: less (signed <) */

loc_001FF2C7: ;
    MEM32(esi + 0x14) = edi;
    g_seh_ebp = ebp; sub_001FF301(); return; /* tail jmp 0x001FF301 */

}

/**
 * sub_001FF2CC
 * Original: 0x001FF2CC - 0x001FF2E9 (29 bytes, 10 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF2CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FF2CC: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    ecx = MEM32(ebp + -4);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FF2E9(); return; } /* je: equal / zero */

loc_001FF2D6: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001FF2E0u); RECOMP_ABI_CALL(0x001DFCBAu, sub_001DFCBA); /* call 0x001DFCBA */

loc_001FF2E0: ;
    MEM32(esi + 0x14) = 1;
    g_seh_ebp = ebp; sub_001FF301(); return; /* tail jmp 0x001FF301 */

}

/**
 * sub_001FF2E9
 * Original: 0x001FF2E9 - 0x001FF301 (24 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF2E9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FF2E9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FF2EFu); RECOMP_ABI_CALL(0x0020C21Bu, sub_0020C21B); /* call 0x0020C21B */

loc_001FF2EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FF394(); return; } /* jl: less (signed <) */

loc_001FF2FA: ;
    MEM32(esi + 0x14) = 2;

    g_seh_ebp = ebp; sub_001FF301(); return; /* fallthrough 0x001FF301 */

}

/**
 * sub_001FF301
 * Original: 0x001FF301 - 0x001FF35B (90 bytes, 28 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF301(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FF301: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(esi + 0xB4);
    ecx = MEM32(esi + 0xE8);
    edx = MEM32(esi + 0xEC);
    edi = esi + 0xA8;
    MEM32(edi) = eax;
    eax = MEM32(esi + 0xB0);
    MEM32(esi + 0xAC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001FF333; /* je: equal / zero */

loc_001FF32D: ;
    _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(ebp + 0x18))) >> 32) & 1);
    ecx = ecx + MEM32(ebp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */

loc_001FF333: ;
    ebx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FF35B(); return; } /* je: equal / zero */

loc_001FF33A: ;
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x34));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001FF356u); RECOMP_ABI_CALL(0x0020B746u, sub_0020B746); /* call 0x0020B746 */

loc_001FF356: ;
    MEM32(ebp + 0x1C) = eax;
    g_seh_ebp = ebp; sub_001FF36B(); return; /* tail jmp 0x001FF36B */

}

/**
 * sub_001FF35B
 * Original: 0x001FF35B - 0x001FF36B (16 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF35B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FF35B: ;
    _fa = (uint32_t)(MEM32(esi + 0x114)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x114), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FF36B(); return; } /* jne: not equal / not zero */

loc_001FF364: ;
    MEM32(ebp + 0x1C) = 0x80070057u;

    g_seh_ebp = ebp; sub_001FF36B(); return; /* fallthrough 0x001FF36B */

}

/**
 * sub_001FF36B
 * Original: 0x001FF36B - 0x001FF394 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF36B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FF36B: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FF394(); return; } /* jl: less (signed <) */

loc_001FF371: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FF3B4(); return; } /* je: equal / zero */

loc_001FF377: ;
    edx = MEM32(ebp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FF3B4(); return; } /* je: equal / zero */

loc_001FF37E: ;
    ecx = MEM32(edi);
    eax = ecx + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xB4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xB4) (32-bit) */
    MEM32(edi) = eax;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FF39F(); return; } /* jbe: below or equal (unsigned <=) */

loc_001FF38D: ;
    MEM32(ebp + 0x1C) = 0x8007007Au;

    g_seh_ebp = ebp; sub_001FF394(); return; /* fallthrough 0x001FF394 */

}

/**
 * sub_001FF394
 * Original: 0x001FF394 - 0x001FF39F (11 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF394(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FF394: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FF39Du); RECOMP_ABI_CALL(0x0020C2ABu, sub_0020C2AB); /* call 0x0020C2AB */

loc_001FF39D: ;
    g_seh_ebp = ebp; sub_001FF3BC(); return; /* tail jmp 0x001FF3BC */

}

/**
 * sub_001FF39F
 * Original: 0x001FF39F - 0x001FF3B4 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF39F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FF39F: ;
    eax = MEM32(esi + 0xB0);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + 0x14));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001FF3B1u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_001FF3B1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001FF3B4(); return; /* fallthrough 0x001FF3B4 */

}

/**
 * sub_001FF3B4
 * Original: 0x001FF3B4 - 0x001FF3BC (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF3B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FF3B4: ;
    PUSH32(esp, 0x001FF3B9u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_001FF3B9: ;
    MEM32(esi + 0x20) = eax;

    g_seh_ebp = ebp; sub_001FF3BC(); return; /* fallthrough 0x001FF3BC */

}

/**
 * sub_001FF3BC
 * Original: 0x001FF3BC - 0x001FF3C6 (10 bytes, 6 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF3BC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FF3BC: ;
    eax = MEM32(ebp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001FF3C6
 * Original: 0x001FF3C6 - 0x001FF3F2 (44 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF3C6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FF3C6: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xE4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xEC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xEC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FF3EC; /* jb: below (unsigned <) */

loc_001FF3D8: ;
    if (CMP_A(_fa, _fb)) goto loc_001FF3E8; /* ja: above (unsigned >) */

loc_001FF3DA: ;
    ecx = MEM32(eax + 0xE0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xE8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xE8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FF3EC; /* jb: below (unsigned <) */

loc_001FF3E8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001FF3EF;

loc_001FF3EC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001FF3EF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FF3F2
 * Original: 0x001FF3F2 - 0x001FF3F7 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001FF3F2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FF3F2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FF3F7
 * Original: 0x001FF3F7 - 0x001FF45C (101 bytes, 34 insns)
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001FF3F7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FF3F7: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FF457; /* jne: not equal / not zero */

loc_001FF3FE: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xA8);
    edx = MEM32(eax + 0xB4);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0xF0);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x4C);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xAC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax + 0x50);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001FF431; /* jae: above or equal (unsigned >=) */

loc_001FF42F: ;
    edx = ecx;

loc_001FF431: ;
    ecx = edx;
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = ebx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0xF0) = MEM32(eax + 0xF0) + edx;
    _fa = (uint32_t)(MEM32(eax + 0xF0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0xA8) = MEM32(eax + 0xA8) + edx;
    _fa = (uint32_t)(MEM32(eax + 0xA8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x14C) = MEM32(eax + 0x14C) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x14C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001FF457: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001FF45C
 * Original: 0x001FF45C - 0x001FF464 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF45C(void)
{

loc_001FF45C: ;
    eax = 0x1500F0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FF464
 * Original: 0x001FF464 - 0x001FF495 (49 bytes, 23 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FF464(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FF464: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = esi + 0x3C;
    PUSH32(esp, edi);
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FF478u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FF478: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FF4EC(); return; } /* je: equal / zero */

loc_001FF47C: ;
    if (CMP_L(_fas, _fbs)) goto loc_001FF490; /* jl: less (signed <) */

loc_001FF47E: ;
    PUSH32(esp, 0);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FF48Cu); RECOMP_ABI_CALL(0x0021176Fu, sub_0021176F); /* call 0x0021176F */

loc_001FF48C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FF495(); return; } /* jge: greater or equal (signed >=) */

loc_001FF490: ;
    MEM32(esi + 0xC) = eax;
    g_seh_ebp = ebp; sub_001FF4E2(); return; /* tail jmp 0x001FF4E2 */

}

/**
 * sub_001FF495
 * Original: 0x001FF495 - 0x001FF4E2 (77 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF495(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FF495: ;
    edi = MEM32(ebp + 8);
    edx = MEM32(esi + 0xA8);
    eax = esi + 0xD8;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(edi)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + edi;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(eax + 4)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax + 4) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    eax = edx + 3;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001FF4D0; /* je: equal / zero */

loc_001FF4B4: ;
    ecx = MEM32(esi + 0xAC);
    PUSH32(esp, edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ecx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(edx));
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(eax)) >> 32) & 1);
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001FF4CAu); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_001FF4CA: ;
    edi = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001FF4D0: ;
    eax = MEM32(esi + 0xB0);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi + 0xA8)) + (uint64_t)(edi)) >> 32) & 1);
    MEM32(esi + 0xA8) = MEM32(esi + 0xA8) + edi;
    _fa = (uint32_t)(MEM32(esi + 0xA8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xAC) = eax;

    g_seh_ebp = ebp; sub_001FF4E2(); return; /* fallthrough 0x001FF4E2 */

}

/**
 * sub_001FF4E2
 * Original: 0x001FF4E2 - 0x001FF4EC (10 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF4E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FF4E2: ;
    MEM32(esi + 0x14C) = 1;

    g_seh_ebp = ebp; sub_001FF4EC(); return; /* fallthrough 0x001FF4EC */

}

/**
 * sub_001FF4EC
 * Original: 0x001FF4EC - 0x001FF4F5 (9 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF4EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FF4EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FF4F5
 * Original: 0x001FF4F5 - 0x001FF53C (71 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF4F5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FF4F5: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xFFFFFEC0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFEC0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esi + 0x14C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14C), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FF512; /* jne: not equal / not zero */

loc_001FF50A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FF510u); RECOMP_ABI_CALL(0x001FF464u, sub_001FF464); /* call 0x001FF464 */

loc_001FF510: ;
    goto loc_001FF523;

loc_001FF512: ;
    MEM32(esi + 0x14C) = 1;
    MEM32(esi + 0xC) = 0x80004005u;

loc_001FF523: ;
    _fa = (uint32_t)(MEM32(esi + 0x14C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FF538; /* jne: not equal / not zero */

loc_001FF52C: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FF538; /* jl: less (signed <) */

loc_001FF533: ;
    eax = 0x1500F0;

loc_001FF538: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FF53C
 * Original: 0x001FF53C - 0x001FF54F (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FF53C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FF53C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FF54F(); return; } /* jne: not equal / not zero */

loc_001FF545: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001FF5D6(); return; /* tail jmp 0x001FF5D6 */

}

/**
 * sub_001FF54F
 * Original: 0x001FF54F - 0x001FF5CF (128 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF54F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FF54F: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_001FF56A; /* je: equal / zero */

loc_001FF559: ;
    edx = MEM32(eax + 0xE0);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0xE4);
    MEM32(ecx + 4) = edx;

loc_001FF56A: ;
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FF582; /* je: equal / zero */

loc_001FF571: ;
    edx = MEM32(eax + 0xE8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0xEC);
    MEM32(ecx + 4) = edx;

loc_001FF582: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FF5D3(); return; } /* je: equal / zero */

loc_001FF58A: ;
    ecx = MEM32(eax + 0xEC);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0xE8);
    edx = ebx;
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -4) = ecx;
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001FF5CF(); return; } /* je: equal / zero */

loc_001FF5A0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x64);
    PUSH32(esp, MEM32(eax + 0xE4));
    PUSH32(esp, MEM32(eax + 0xE0));
    PUSH32(esp, 0x001FF5B5u); RECOMP_ABI_CALL(0x00151AC0u, sub_00151AC0); /* call 0x00151AC0 */

loc_001FF5B5: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001FF5C0u); RECOMP_ABI_CALL(0x00152B30u, sub_00152B30); /* call 0x00152B30 */

loc_001FF5C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FF5D2(); return; } /* jbe: below or equal (unsigned <=) */

loc_001FF5C7: ;
    MEM32(esi) = 0x64;
    g_seh_ebp = ebp; sub_001FF5D2(); return; /* tail jmp 0x001FF5D2 */

}

/**
 * sub_001FF5CF
 * Original: 0x001FF5CF - 0x001FF5D2 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF5CF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FF5CF: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001FF5D2(); return; /* fallthrough 0x001FF5D2 */

}

/**
 * sub_001FF5D2
 * Original: 0x001FF5D2 - 0x001FF5D3 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF5D2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FF5D2: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001FF5D3(); return; /* fallthrough 0x001FF5D3 */

}

/**
 * sub_001FF5D3
 * Original: 0x001FF5D3 - 0x001FF5D6 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF5D3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FF5D3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001FF5D6(); return; /* fallthrough 0x001FF5D6 */

}

/**
 * sub_001FF5D6
 * Original: 0x001FF5D6 - 0x001FF5DA (4 bytes, 2 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF5D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FF5D6: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001FF5DA
 * Original: 0x001FF5DA - 0x001FF5EB (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FF5DA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FF5DA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FF5EB(); return; } /* jne: not equal / not zero */

loc_001FF5E1: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001FF672(); return; /* tail jmp 0x001FF672 */

}

/**
 * sub_001FF5EB
 * Original: 0x001FF5EB - 0x001FF672 (135 bytes, 43 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF5EB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FF5EB: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FF5F5u); RECOMP_ABI_CALL(0x001F1E38u, sub_001F1E38); /* call 0x001F1E38 */

loc_001FF5F5: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FF604; /* je: equal / zero */

loc_001FF5FC: ;
    ecx = MEM32(esi + 0xB0);
    MEM32(eax) = ecx;

loc_001FF604: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FF613; /* je: equal / zero */

loc_001FF60B: ;
    ecx = MEM32(esi + 0xF0);
    MEM32(eax) = ecx;

loc_001FF613: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FF62B; /* je: equal / zero */

loc_001FF61A: ;
    ecx = MEM32(esi + 0xD8);
    MEM32(eax) = ecx;
    ecx = MEM32(esi + 0xDC);
    MEM32(eax + 4) = ecx;

loc_001FF62B: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FF643; /* je: equal / zero */

loc_001FF632: ;
    ecx = MEM32(esi + 0xD0);
    MEM32(eax) = ecx;
    ecx = MEM32(esi + 0xD4);
    MEM32(eax + 4) = ecx;

loc_001FF643: ;
    eax = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FF652; /* je: equal / zero */

loc_001FF64A: ;
    ecx = MEM32(esi + 0xB8);
    MEM32(eax) = ecx;

loc_001FF652: ;
    eax = MEM32(ebp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FF66A; /* je: equal / zero */

loc_001FF659: ;
    ecx = MEM32(esi + 0xC4);
    MEM32(eax) = ecx;
    ecx = MEM32(esi + 0xC8);
    MEM32(eax + 4) = ecx;

loc_001FF66A: ;
    MEM8(esi + 0x1A) = MEM8(esi + 0x1A) & 0xDF;
    _fa = (uint32_t)(MEM8(esi + 0x1A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = MEM32(esi + 0xC);
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001FF672(); return; /* fallthrough 0x001FF672 */

}

/**
 * sub_001FF672
 * Original: 0x001FF672 - 0x001FF676 (4 bytes, 2 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF672(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FF672: ;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001FF676
 * Original: 0x001FF676 - 0x001FF6DC (102 bytes, 36 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF676(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FF676: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, MEM32(esi + 0x118));
    ebx = ecx;
    PUSH32(esp, 0x001FF689u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FF689: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FF6D5; /* je: equal / zero */

loc_001FF68D: ;
    if (CMP_L(_fas, _fbs)) goto loc_001FF6BE; /* jl: less (signed <) */

loc_001FF68F: ;
    PUSH32(esp, edi);
    edi = esi + 0x70;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 8));
    eax = esi + 0xA8;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x80));
    ecx = ebx;
    PUSH32(esp, 0x001FF6AFu); RECOMP_ABI_CALL(0x00211AC9u, sub_00211AC9); /* call 0x00211AC9 */

loc_001FF6AF: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001FF6B9u); RECOMP_ABI_CALL(0x00211A4Cu, sub_00211A4C); /* call 0x00211A4C */

loc_001FF6B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_001FF6CA; /* jge: greater or equal (signed >=) */

loc_001FF6BE: ;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x14) = 9;
    goto loc_001FF6D7;

loc_001FF6CA: ;
    MEM8(esi + 0x1B) = MEM8(esi + 0x1B) | 0x20;
    _fa = (uint32_t)(MEM8(esi + 0x1B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(esi + 0x14) = 4;

loc_001FF6D5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001FF6D7: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FF6DC
 * Original: 0x001FF6DC - 0x001FF89B (447 bytes, 142 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FF6DC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001FF6DC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = esi + 0x70;
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FF6F2u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FF6F2: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001FF892; /* je: equal / zero */

loc_001FF6FC: ;
    if (CMP_L(_fas, _fbs)) goto loc_001FF87F; /* jl: less (signed <) */

loc_001FF702: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FF711u); RECOMP_ABI_CALL(0x002117BFu, sub_002117BF); /* call 0x002117BF */

loc_001FF711: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001FF87F; /* jl: less (signed <) */

loc_001FF719: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    edx = MEM32(ebp + 8);
    if (TEST_Z(_fa, _fb)) goto loc_001FF733; /* je: equal / zero */

loc_001FF723: ;
    ecx = esi + 0xF4;
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(MEM32(ecx)));
    edx = edx - MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = ebx;
    MEM32(esi + 0x18) = eax;

loc_001FF733: ;
    ecx = MEM32(ebp + -4);
    eax = esi + 0xE0;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(edx)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + edx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint64_t _t = (uint64_t)(MEM32(eax + 4)) + (uint64_t)(ebx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax + 4) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    { uint32_t _icall_target = MEM32(esi + 0x104); PUSH32(esp, 0x001FF748u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FF742u); } /* indirect call */
    }

loc_001FF748: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001FF87F; /* jl: less (signed <) */

loc_001FF750: ;
    if (CMP_NE(_fa, _fb)) goto loc_001FF80D; /* jne: not equal / not zero */

loc_001FF756: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + 0x1A)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1A), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001FF764; /* jne: not equal / not zero */

loc_001FF75F: ;
    _fa = (uint32_t)(MEM8(esi + 0x34)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x34), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001FF770; /* jne: not equal / not zero */

loc_001FF764: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x80));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FF770u); RECOMP_ABI_CALL(0x001CEFE4u, sub_001CEFE4); /* call 0x001CEFE4 */

loc_001FF770: ;
    eax = MEM32(esi + 0xB0);
    ecx = MEM32(esi + 0xB4);
    MEM32(esi + 0xAC) = eax;
    eax = esi + 0xA8;
    MEM32(eax) = ecx;
    ecx = esi + 0x70;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 8));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x80));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FF7A2u); RECOMP_ABI_CALL(0x00211AC9u, sub_00211AC9); /* call 0x00211AC9 */

loc_001FF7A2: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FF7AFu); RECOMP_ABI_CALL(0x00211A4Cu, sub_00211A4C); /* call 0x00211A4C */

loc_001FF7AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001FF87F; /* jl: less (signed <) */

loc_001FF7B7: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x1B) = MEM8(esi + 0x1B) | 0x20;
    _fa = (uint32_t)(MEM8(esi + 0x1B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x800000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0xD8) = ebx;
    MEM32(esi + 0xDC) = ebx;
    MEM32(esi + 0xD4) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_001FF7E5; /* je: equal / zero */

loc_001FF7D7: ;
    ecx = MEM32(esi + 0xB4);
    MEM32(esi + 0xD0) = ecx;
    goto loc_001FF7EB;

loc_001FF7E5: ;
    MEM32(esi + 0xD0) = ebx;

loc_001FF7EB: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x400000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(5)) >> 32) & 1);
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xF0) = ebx;
    MEM32(esi + 0xF4) = edi;
    MEM32(esi + 0x14) = eax;
    goto loc_001FF892;

loc_001FF80D: ;
    edx = MEM32(ebp + 8);
    ecx = esi + 0xA8;
    eax = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001FF855; /* jae: above or equal (unsigned >=) */

loc_001FF81C: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi + 0xAC)) + (uint64_t)(edx)) >> 32) & 1);
    MEM32(esi + 0xAC) = MEM32(esi + 0xAC) + edx;
    _fa = (uint32_t)(MEM32(esi + 0xAC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 8));
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 0x80));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx) = eax;
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FF83Eu); RECOMP_ABI_CALL(0x00211AC9u, sub_00211AC9); /* call 0x00211AC9 */

loc_001FF83E: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FF84Bu); RECOMP_ABI_CALL(0x00211A4Cu, sub_00211A4C); /* call 0x00211A4C */

loc_001FF84B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001FF87F; /* jl: less (signed <) */

loc_001FF84F: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x1B) = MEM8(esi + 0x1B) | 0x20;
    _fa = (uint32_t)(MEM8(esi + 0x1B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_001FF892;

loc_001FF855: ;
    eax = MEM32(esi + 0xB0);
    MEM32(esi + 0xAC) = eax;
    MEM32(ecx) = ebx;
    eax = MEM32(esi + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001FF88B; /* je: equal / zero */

loc_001FF86D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x118));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001FF87Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FF879u); } /* indirect call */
    }

loc_001FF87B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001FF88B; /* jge: greater or equal (signed >=) */

loc_001FF87F: ;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x14) = 9;
    goto loc_001FF894;

loc_001FF88B: ;
    MEM32(esi + 0x14) = 3;

loc_001FF892: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001FF894: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FF89B
 * Original: 0x001FF89B - 0x001FFA3E (419 bytes, 132 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FF89B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001FF89B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FF8B0u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FF8B0: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001FFA35; /* je: equal / zero */

loc_001FF8BA: ;
    if (CMP_L(_fas, _fbs)) goto loc_001FFA25; /* jl: less (signed <) */

loc_001FF8C0: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FF8D1u); RECOMP_ABI_CALL(0x002117BFu, sub_002117BF); /* call 0x002117BF */

loc_001FF8D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001FFA25; /* jl: less (signed <) */

loc_001FF8D9: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001FF93D; /* je: equal / zero */

loc_001FF8DE: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FF8EDu); RECOMP_ABI_CALL(0x0020BD99u, sub_0020BD99); /* call 0x0020BD99 */

loc_001FF8ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001FFA25; /* jl: less (signed <) */

loc_001FF8F5: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001FF91E; /* je: equal / zero */

loc_001FF8FA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(esi + 0x108); PUSH32(esp, 0x001FF903u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FF8FDu); } /* indirect call */
    }

loc_001FF903: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001FFA25; /* jl: less (signed <) */

loc_001FF90B: ;
    edx = MEM32(esi + 0xF0);
    ecx = esi + 0xD8;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(edx)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + edx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(ecx + 4)) + (uint64_t)(edi) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ecx + 4) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    goto loc_001FF962;

loc_001FF91E: ;
    _fa = (uint32_t)(MEM8(esi + 0xF4)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xF4), 3 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001FF962; /* jne: not equal / not zero */

loc_001FF927: ;
    edx = MEM32(ebp + 8);
    ecx = esi + 0xD8;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(edx)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + edx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(ecx + 4)) + (uint64_t)(edi) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ecx + 4) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi + 0xF0)) + (uint64_t)(edx)) >> 32) & 1);
    MEM32(esi + 0xF0) = MEM32(esi + 0xF0) + edx;
    _fa = (uint32_t)(MEM32(esi + 0xF0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001FF962;

loc_001FF93D: ;
    _fa = (uint32_t)(MEM8(esi + 0x1A)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1A), 0x80 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001FF95D; /* je: equal / zero */

loc_001FF943: ;
    ecx = MEM32(esi + 0xD8);
    MEM32(esi + 0xD0) = ecx;
    ecx = MEM32(esi + 0xDC);
    MEM32(esi + 0xD4) = ecx;
    goto loc_001FF962;

loc_001FF95D: ;
    eax = 0x80072746u;

loc_001FF962: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001FFA25; /* jl: less (signed <) */

loc_001FF96A: ;
    _fa = (uint32_t)(MEM8(esi + 0xF4)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xF4), 3 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001FF9D9; /* jne: not equal / not zero */

loc_001FF973: ;
    eax = esi + 0xD8;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xD4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0xD4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001FF99A; /* ja: above (unsigned >) */

loc_001FF984: ;
    if (CMP_B(_fa, _fb)) goto loc_001FF990; /* jb: below (unsigned <) */

loc_001FF986: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xD0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0xD0) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001FF99A; /* jae: above or equal (unsigned >=) */

loc_001FF990: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xB4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xB4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001FF9D9; /* jb: below (unsigned <) */

loc_001FF99A: ;
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(esi + 0x80));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FF9A7u); RECOMP_ABI_CALL(0x001CEFE4u, sub_001CEFE4); /* call 0x001CEFE4 */

loc_001FF9A7: ;
    eax = MEM32(esi + 0x11C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001FF9D0; /* je: equal / zero */

loc_001FF9B1: ;
    edx = MEM32(esi + 0x10C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001FF9C7; /* je: equal / zero */

loc_001FF9BB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    ecx = ebx;
    { uint32_t _icall_target = edx; PUSH32(esp, 0x001FF9C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FF9C1u); } /* indirect call */
    }

loc_001FF9C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001FFA25; /* jl: less (signed <) */

loc_001FF9C7: ;
    MEM32(esi + 0x14) = 8;
    goto loc_001FFA35;

loc_001FF9D0: ;
    MEM32(esi + 0x14) = 9;
    goto loc_001FFA35;

loc_001FF9D9: ;
    ecx = MEM32(esi + 0xF0);
    eax = MEM32(esi + 0xB0);
    edx = MEM32(esi + 0xB4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi + 0x70;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 8));
    MEM32(esi + 0xAC) = eax;
    PUSH32(esp, edi);
    eax = esi + 0xA8;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x80));
    ecx = ebx;
    MEM32(eax) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FFA15u); RECOMP_ABI_CALL(0x00211AC9u, sub_00211AC9); /* call 0x00211AC9 */

loc_001FFA15: ;
    PUSH32(esp, edi);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FFA21u); RECOMP_ABI_CALL(0x00211A4Cu, sub_00211A4C); /* call 0x00211A4C */

loc_001FFA21: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001FFA31; /* jge: greater or equal (signed >=) */

loc_001FFA25: ;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x14) = 9;
    goto loc_001FFA37;

loc_001FFA31: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x1B) = MEM8(esi + 0x1B) | 0x20;
    _fa = (uint32_t)(MEM8(esi + 0x1B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_001FFA35: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001FFA37: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FFA3E
 * Original: 0x001FFA3E - 0x001FFBD7 (409 bytes, 125 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FFA3E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001FFA3E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = esi + 0x70;
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FFA55u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FFA55: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001FFBCE; /* je: equal / zero */

loc_001FFA5F: ;
    if (CMP_L(_fas, _fbs)) goto loc_001FFBBE; /* jl: less (signed <) */

loc_001FFA65: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FFA74u); RECOMP_ABI_CALL(0x002117BFu, sub_002117BF); /* call 0x002117BF */

loc_001FFA74: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001FFBBE; /* jl: less (signed <) */

loc_001FFA7C: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001FFAE2; /* je: equal / zero */

loc_001FFA81: ;
    ecx = MEM32(ebp + -4);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FFA91u); RECOMP_ABI_CALL(0x0020BD99u, sub_0020BD99); /* call 0x0020BD99 */

loc_001FFA91: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001FFBBE; /* jl: less (signed <) */

loc_001FFA99: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001FFAC3; /* je: equal / zero */

loc_001FFA9E: ;
    ecx = MEM32(ebp + -4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x108); PUSH32(esp, 0x001FFAA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FFAA2u); } /* indirect call */
    }

loc_001FFAA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001FFBBE; /* jl: less (signed <) */

loc_001FFAB0: ;
    edx = MEM32(esi + 0xF0);
    ecx = esi + 0xD8;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(edx)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + edx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(ecx + 4)) + (uint64_t)(ebx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ecx + 4) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    goto loc_001FFB07;

loc_001FFAC3: ;
    _fa = (uint32_t)(MEM8(esi + 0xF4)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xF4), 3 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001FFB07; /* jne: not equal / not zero */

loc_001FFACC: ;
    edx = MEM32(ebp + 8);
    ecx = esi + 0xD8;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(edx)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + edx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(ecx + 4)) + (uint64_t)(ebx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ecx + 4) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi + 0xF0)) + (uint64_t)(edx)) >> 32) & 1);
    MEM32(esi + 0xF0) = MEM32(esi + 0xF0) + edx;
    _fa = (uint32_t)(MEM32(esi + 0xF0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001FFB07;

loc_001FFAE2: ;
    _fa = (uint32_t)(MEM8(esi + 0x1A)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1A), 0x80 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001FFB02; /* je: equal / zero */

loc_001FFAE8: ;
    ecx = MEM32(esi + 0xD8);
    MEM32(esi + 0xD0) = ecx;
    ecx = MEM32(esi + 0xDC);
    MEM32(esi + 0xD4) = ecx;
    goto loc_001FFB07;

loc_001FFB02: ;
    eax = 0x80072746u;

loc_001FFB07: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001FFBBE; /* jl: less (signed <) */

loc_001FFB0F: ;
    _fa = (uint32_t)(MEM8(esi + 0xF4)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xF4), 3 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001FFB73; /* jne: not equal / not zero */

loc_001FFB18: ;
    eax = MEM32(esi + 0xDC);
    ecx = MEM32(esi + 0xD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = MEM32(esi + 0xD8);
    edi = MEM32(esi + 0xD0);
    if (CMP_A(_fa, _fb)) goto loc_001FFB52; /* ja: above (unsigned >) */

loc_001FFB34: ;
    if (CMP_B(_fa, _fb)) goto loc_001FFB3A; /* jb: below (unsigned <) */

loc_001FFB36: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001FFB48; /* jae: above or equal (unsigned >=) */

loc_001FFB3A: ;
    ebx = MEM32(esi + 0xD8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xB4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0xB4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001FFB71; /* jb: below (unsigned <) */

loc_001FFB48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001FFB5F; /* jb: below (unsigned <) */

loc_001FFB4C: ;
    if (CMP_A(_fa, _fb)) goto loc_001FFB52; /* ja: above (unsigned >) */

loc_001FFB4E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001FFB5F; /* jb: below (unsigned <) */

loc_001FFB52: ;
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(esi + 0x80));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FFB5Fu); RECOMP_ABI_CALL(0x001CEFE4u, sub_001CEFE4); /* call 0x001CEFE4 */

loc_001FFB5F: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x1A) = MEM8(esi + 0x1A) | 0x20;
    _fa = (uint32_t)(MEM8(esi + 0x1A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(esi + 0x14) = 7;
    eax = 0x15FFFD;
    goto loc_001FFBD0;

loc_001FFB71: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001FFB73: ;
    ecx = MEM32(esi + 0xF0);
    eax = MEM32(esi + 0xB0);
    edx = MEM32(esi + 0xB4);
    edi = esi + 0x70;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 8));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    MEM32(esi + 0xAC) = eax;
    eax = esi + 0xA8;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x80));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + -4);
    MEM32(eax) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FFBB0u); RECOMP_ABI_CALL(0x00211AC9u, sub_00211AC9); /* call 0x00211AC9 */

loc_001FFBB0: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FFBBAu); RECOMP_ABI_CALL(0x00211A4Cu, sub_00211A4C); /* call 0x00211A4C */

loc_001FFBBA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001FFBCA; /* jge: greater or equal (signed >=) */

loc_001FFBBE: ;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x14) = 9;
    goto loc_001FFBD0;

loc_001FFBCA: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x1B) = MEM8(esi + 0x1B) | 0x20;
    _fa = (uint32_t)(MEM8(esi + 0x1B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_001FFBCE: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001FFBD0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FFBD7
 * Original: 0x001FFBD7 - 0x001FFC6A (147 bytes, 45 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FFBD7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FFBD7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0x1A)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1A), 0x20 (8-bit) */
    ebx = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001FFC58; /* jne: not equal / not zero */

loc_001FFBE7: ;
    ecx = MEM32(esi + 0xDC);
    MEM32(esi + 0xF0) = MEM32(esi + 0xF0) & eax;
    _fa = (uint32_t)(MEM32(esi + 0xF0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xD4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0xD4) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001FFC51; /* ja: above (unsigned >) */

loc_001FFBFB: ;
    if (CMP_B(_fa, _fb)) goto loc_001FFC0B; /* jb: below (unsigned <) */

loc_001FFBFD: ;
    ecx = MEM32(esi + 0xD8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xD0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0xD0) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001FFC51; /* jae: above or equal (unsigned >=) */

loc_001FFC0B: ;
    eax = MEM32(esi + 0xB0);
    ecx = MEM32(esi + 0xB4);
    PUSH32(esp, edi);
    edi = esi + 0x70;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 8));
    MEM32(esi + 0xAC) = eax;
    PUSH32(esp, 0);
    eax = esi + 0xA8;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x80));
    MEM32(eax) = ecx;
    ecx = ebx;
    PUSH32(esp, 0x001FFC3Fu); RECOMP_ABI_CALL(0x00211AC9u, sub_00211AC9); /* call 0x00211AC9 */

loc_001FFC3F: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001FFC49u); RECOMP_ABI_CALL(0x00211A4Cu, sub_00211A4C); /* call 0x00211A4C */

loc_001FFC49: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_001FFC5D; /* jge: greater or equal (signed >=) */

loc_001FFC4E: ;
    MEM32(esi + 0xC) = eax;

loc_001FFC51: ;
    MEM32(esi + 0x14) = 9;

loc_001FFC58: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001FFC5D: ;
    MEM8(esi + 0x1B) = MEM8(esi + 0x1B) | 0x20;
    _fa = (uint32_t)(MEM8(esi + 0x1B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(esi + 0x14) = 6;
    goto loc_001FFC58;

}

/**
 * sub_001FFC6A
 * Original: 0x001FFC6A - 0x001FFC86 (28 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FFC6A(void)
{

loc_001FFC6A: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x001FFC83u); RECOMP_ABI_CALL(0x001FF257u, sub_001FF257); /* call 0x001FF257 */

loc_001FFC83: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001FFC86
 * Original: 0x001FFC86 - 0x001FFD11 (139 bytes, 46 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FFC86(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FFC86: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebx + 0x140;
    PUSH32(esp, esi);
    MEM32(ebp + -4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FFC9Fu); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_001FFC9F: ;
    eax = MEM32(ebp + 0x30);
    ecx = MEM32(ebp + 0x3C);
    MEM32(ebx + 0x148) = eax;
    eax = ebx + 0x104;
    MEM32(esi) = 0x1FF45C;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x14C) = edi;
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    MEM32(eax) = 0x1FF3C6;
    MEM32(eax + 4) = 0x1FF3F2;
    MEM32(eax + 8) = 0x1FF3F7;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FFCE8u); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_001FFCE8: ;
    esi = MEM32(ebp + 0x38);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    eax = MEM32(ebp + 0x30);
    MEM32(ebx + 8) = eax;
    MEM32(ebx + 0xC) = edi;
    MEM32(ebx + 0x10) = edi;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FFD11(); return; } /* je: equal / zero */

loc_001FFCFB: ;
    eax = esi + 4;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FFD11(); return; } /* je: equal / zero */

loc_001FFD02: ;
    edi = ebx + 0x30;
    esi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    esi = MEM32(ebp + 0x38);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001FFD28(); return; /* tail jmp 0x001FFD28 */

}

/**
 * sub_001FFD11
 * Original: 0x001FFD11 - 0x001FFD28 (23 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FFD11(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FFD11: ;
    ecx = MEM32(ebp + -4);
    eax = ebx + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001FFD20u); RECOMP_ABI_CALL(0x001EF6A1u, sub_001EF6A1); /* call 0x001EF6A1 */

loc_001FFD20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FFDBA(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_001FFD28(); return; /* fallthrough 0x001FFD28 */

}

/**
 * sub_001FFD28
 * Original: 0x001FFD28 - 0x001FFDBA (146 bytes, 47 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FFD28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FFD28: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FFD31; /* je: equal / zero */

loc_001FFD2C: ;
    eax = MEM32(esi);
    MEM32(ebx + 0x18) = eax;

loc_001FFD31: ;
    eax = MEM32(ebp + 0x14);
    esi = MEM32(ebp + 0x28);
    edx = ebx + 0x2C;
    PUSH32(esp, edx);
    MEM32(ebx + 0xB0) = eax;
    eax = MEM32(ebp + 0x18);
    ecx = ebx + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, edi);
    MEM32(ebx + 0xB4) = eax;
    eax = MEM32(ebp + 0x2C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    MEM32(ebx + 0x1C) = eax;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebx + 0xE0) = edi;
    MEM32(ebx + 0xE4) = edi;
    MEM32(ebx + 0xF0) = edi;
    MEM32(ebx + 0x24) = eax;
    PUSH32(esp, 0x001FFD80u); RECOMP_ABI_CALL(0x0020B87Cu, sub_0020B87C); /* call 0x0020B87C */

loc_001FFD80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FFDBA(); return; } /* jl: less (signed <) */

loc_001FFD84: ;
    eax = MEM32(ebp + 0x2C);
    MEM8(ebx + 0x1A) = MEM8(ebx + 0x1A) | 1;
    _fa = (uint32_t)(MEM8(ebx + 0x1A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM32(ebx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x28), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001FFD93; /* jbe: below or equal (unsigned <=) */

loc_001FFD90: ;
    MEM32(ebx + 0x28) = eax;

loc_001FFD93: ;
    eax = MEM32(ebp + 0x24);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x20));
    MEM32(ebx + 0x4C) = eax;
    PUSH32(esp, MEM32(ebp + 0x1C));
    MEM32(ebx + 0x50) = esi;
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(ebx + 0xE8) = esi;
    MEM32(ebx + 0xEC) = edi;
    PUSH32(esp, 0x001FFDBAu); RECOMP_ABI_CALL(0x001FFC6Au, sub_001FFC6A); /* call 0x001FFC6A */

    g_seh_ebp = ebp; sub_001FFDBA(); return; /* fallthrough 0x001FFDBA */

}

/**
 * sub_001FFDBA
 * Original: 0x001FFDBA - 0x001FFDC1 (7 bytes, 5 insns)
 * CC: cdecl, 14 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FFDBA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FFDBA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 60; return; /* ret 56 */

}

/**
 * sub_001FFDC1
 * Original: 0x001FFDC1 - 0x001FFDD6 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FFDC1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FFDC1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FFDD6(); return; } /* jne: not equal / not zero */

loc_001FFDCC: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001FFEA8(); return; /* tail jmp 0x001FFEA8 */

}

/**
 * sub_001FFDD6
 * Original: 0x001FFDD6 - 0x001FFE00 (42 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FFDD6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FFDD6: ;
    _fa = (uint32_t)(MEM32(ebp + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x34), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x2022);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FFE00(); return; } /* je: equal / zero */

loc_001FFDEB: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax = ~eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x150)) >> 32) & 1);
    eax = eax + 0x150;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001FFDFEu); RECOMP_ABI_CALL(0x0020C40Du, sub_0020C40D); /* call 0x0020C40D */

loc_001FFDFE: ;
    g_seh_ebp = ebp; sub_001FFE13(); return; /* tail jmp 0x001FFE13 */

}

/**
 * sub_001FFE00
 * Original: 0x001FFE00 - 0x001FFE13 (19 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FFE00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FFE00: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax = ~eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x150)) >> 32) & 1);
    eax = eax + 0x150;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001FFE13u); RECOMP_ABI_CALL(0x0020C3C3u, sub_0020C3C3); /* call 0x0020C3C3 */

    g_seh_ebp = ebp; sub_001FFE13(); return; /* fallthrough 0x001FFE13 */

}

/**
 * sub_001FFE13
 * Original: 0x001FFE13 - 0x001FFE23 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FFE13(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FFE13: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FFE23(); return; } /* jne: not equal / not zero */

loc_001FFE19: ;
    ebx = 0x8007000Eu;
    g_seh_ebp = ebp; sub_001FFEA4(); return; /* tail jmp 0x001FFEA4 */

}

/**
 * sub_001FFE23
 * Original: 0x001FFE23 - 0x001FFE96 (115 bytes, 43 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FFE23(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FFE23: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x54);
    POP32(esp, ecx);
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 0x34);
    MEM32(esi + 0x128) = eax;
    eax = MEM32(ebp + 0x14);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FFE45; /* jne: not equal / not zero */

loc_001FFE3F: ;
    eax = esi + 0x150;

loc_001FFE45: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x30));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebp + 0x2C));
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001FFE6Du); RECOMP_ABI_CALL(0x001FFC86u, sub_001FFC86); /* call 0x001FFC86 */

loc_001FFE6D: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FFE9E(); return; } /* jge: greater or equal (signed >=) */

loc_001FFE73: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8007007Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x8007007Au (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FFE86; /* jne: not equal / not zero */

loc_001FFE7B: ;
    eax = MEM32(esi + 0xA8);
    ecx = MEM32(ebp + 0x18);
    MEM32(ecx) = eax;

loc_001FFE86: ;
    _fa = (uint32_t)(MEM32(ebp + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x34), edi (32-bit) */
    ecx = MEM32(ebp + -4);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FFE96(); return; } /* je: equal / zero */

loc_001FFE8E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001FFE94u); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001FFE94: ;
    g_seh_ebp = ebp; sub_001FFEA3(); return; /* tail jmp 0x001FFEA3 */

}

/**
 * sub_001FFE96
 * Original: 0x001FFE96 - 0x001FFE9E (8 bytes, 3 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FFE96(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FFE96: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FFE9Cu); RECOMP_ABI_CALL(0x0020C3FFu, sub_0020C3FF); /* call 0x0020C3FF */

loc_001FFE9C: ;
    g_seh_ebp = ebp; sub_001FFEA3(); return; /* tail jmp 0x001FFEA3 */

}

/**
 * sub_001FFE9E
 * Original: 0x001FFE9E - 0x001FFEA3 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FFE9E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FFE9E: ;
    eax = MEM32(ebp + 0x38);
    MEM32(eax) = esi;

    g_seh_ebp = ebp; sub_001FFEA3(); return; /* fallthrough 0x001FFEA3 */

}

/**
 * sub_001FFEA3
 * Original: 0x001FFEA3 - 0x001FFEA4 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FFEA3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FFEA3: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001FFEA4(); return; /* fallthrough 0x001FFEA4 */

}

/**
 * sub_001FFEA4
 * Original: 0x001FFEA4 - 0x001FFEA8 (4 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FFEA4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FFEA4: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001FFEA8(); return; /* fallthrough 0x001FFEA8 */

}

/**
 * sub_001FFEA8
 * Original: 0x001FFEA8 - 0x001FFEAC (4 bytes, 2 insns)
 * CC: cdecl, 13 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FFEA8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FFEA8: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 56; return; /* ret 52 */

}

/**
 * sub_001FFEAC
 * Original: 0x001FFEAC - 0x001FFF1A (110 bytes, 37 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FFEAC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FFEAC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 1 (32-bit) */
    PUSH32(esp, ebx);
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001FFF16; /* jne: not equal / not zero */

loc_001FFEB8: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0xA8);
    ecx = MEM32(esi + 0xB4);
    PUSH32(esp, edi);
    edi = esi + 0x3C;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 8));
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(esi + 0xDC));
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(esi + 0xD8));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx & 0xFFFFFE00u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xB0);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 0x58));
    ecx = ebx;
    PUSH32(esp, 0x001FFEFFu); RECOMP_ABI_CALL(0x002116AFu, sub_002116AF); /* call 0x002116AF */

loc_001FFEFF: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001FFF09u); RECOMP_ABI_CALL(0x0021164Fu, sub_0021164F); /* call 0x0021164F */

loc_001FFF09: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FFF14; /* jl: less (signed <) */

loc_001FFF0D: ;
    MEM32(esi + 0x14C) = MEM32(esi + 0x14C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x14C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001FFF14: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001FFF16: ;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001FFF1A
 * Original: 0x001FFF1A - 0x001FFF30 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FFF1A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FFF1A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FFF30(); return; } /* jne: not equal / not zero */

loc_001FFF26: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_002000DB(); return; /* tail jmp 0x002000DB */

}

/**
 * sub_001FFF30
 * Original: 0x001FFF30 - 0x001FFF6D (61 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FFF30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FFF30: ;
    eax = MEM32(ebp + 0x14);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    eax = MEM32(ebp + 0x10);
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 0xFFFFFE00u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, esi);
    eax = ~eax;
    PUSH32(esp, edi);
    _cf = 0; /* logical op clears CF */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x2023);
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x150)) >> 32) & 1);
    eax = eax + 0x150;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001FFF5Du); RECOMP_ABI_CALL(0x0020C3C3u, sub_0020C3C3); /* call 0x0020C3C3 */

loc_001FFF5D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FFF6D(); return; } /* jne: not equal / not zero */

loc_001FFF63: ;
    edi = 0x8007000Eu;
    g_seh_ebp = ebp; sub_002000D6(); return; /* tail jmp 0x002000D6 */

}

/**
 * sub_001FFF6D
 * Original: 0x001FFF6D - 0x00200000 (147 bytes, 50 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FFF6D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FFF6D: ;
    PUSH32(esp, 0x54);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001FFF83; /* jne: not equal / not zero */

loc_001FFF7D: ;
    eax = esi + 0x150;

loc_001FFF83: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    MEM32(esi + 0xB0) = eax;
    MEM32(esi + 0xB4) = ebx;
    PUSH32(esp, 0x001FFF98u); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_001FFF98: ;
    eax = MEM32(ebp + 0x34);
    ecx = MEM32(ebp + -4);
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 8) = eax;
    eax = MEM32(ebp + 0x2C);
    MEM32(esi + 0x18) = eax;
    eax = esi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001FFFBBu); RECOMP_ABI_CALL(0x001EF6A1u, sub_001EF6A1); /* call 0x001EF6A1 */

loc_001FFFBB: ;
    edi = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_002000AD(); return; } /* jl: less (signed <) */

loc_001FFFC7: ;
    ecx = MEM32(ebp + 0x30);
    MEM32(esi + 0x1C) = ecx;
    ecx = esi + 0x2C;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x1C);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(ebp + 0x24))) >> 32) & 1);
    ecx = ecx + MEM32(ebp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = esi + 0x28;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(MEM32(ebp + 0x28)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(esi + 0xE0) = eax;
    MEM32(esi + 0xE4) = eax;
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, 0x001FFFFEu); RECOMP_ABI_CALL(0x0020B87Cu, sub_0020B87C); /* call 0x0020B87C */

loc_001FFFFE: ;
    edi = eax;

    g_seh_ebp = ebp; sub_00200000(); return; /* fallthrough 0x00200000 */

}

/**
 * sub_00200000
 * Original: 0x00200000 - 0x0020001E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00200000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00200000: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_002000AD(); return; } /* jl: less (signed <) */

loc_00200008: ;
    eax = MEM32(ebp + 0x30);
    MEM8(esi + 0x1A) = MEM8(esi + 0x1A) | 1;
    _fa = (uint32_t)(MEM8(esi + 0x1A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00200015; /* jbe: below or equal (unsigned <=) */

loc_00200013: ;
    MEM32(ebx) = eax;

loc_00200015: ;
    ecx = MEM32(ebp + -4);
    edi = esi + 0x140;

    g_seh_ebp = ebp; sub_0020001E(); return; /* fallthrough 0x0020001E */

}

/**
 * sub_0020001E
 * Original: 0x0020001E - 0x0020001F (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020001E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020001E: ;
    PUSH32(esp, edi);

    g_seh_ebp = ebp; sub_0020001F(); return; /* fallthrough 0x0020001F */

}

/**
 * sub_0020001F
 * Original: 0x0020001F - 0x00200065 (70 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020001F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020001F: ;
    ebx = esi + 0x3C;
    PUSH32(esp, 0x00200027u); RECOMP_ABI_CALL(0x001F1E2Au, sub_001F1E2A); /* call 0x001F1E2A */

loc_00200027: ;
    eax = MEM32(ebp + 0x34);
    MEM32(esi + 0x148) = eax;
    MEM32(edi) = 0x1FF4F5;
    MEM32(esi + 0x14C) = 1;
    eax = esi + 0x104;
    MEM32(eax) = 0x1FF3C6;
    MEM32(eax + 4) = 0x1FF3F2;
    MEM32(eax + 8) = 0x1FFEAC;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x18) = ecx;

    g_seh_ebp = ebp; sub_00200065(); return; /* fallthrough 0x00200065 */

}

/**
 * sub_00200065
 * Original: 0x00200065 - 0x0020006F (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00200065(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00200065: ;
    ecx = MEM32(ebp + -4);
    MEM32(eax + 0x14) = edi;
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, esi);

    g_seh_ebp = ebp; sub_0020006F(); return; /* fallthrough 0x0020006F */

}

/**
 * sub_0020006F
 * Original: 0x0020006F - 0x00200072 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020006F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020006F: ;
    PUSH32(esp, MEM32(ebp + 0x1C));

    g_seh_ebp = ebp; sub_00200072(); return; /* fallthrough 0x00200072 */

}

/**
 * sub_00200072
 * Original: 0x00200072 - 0x002000AD (59 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00200072(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00200072: ;
    MEM32(ebx + 0x1C) = eax;
    eax = MEM32(ebp + 0x24);
    PUSH32(esp, MEM32(ebp + 0x18));
    MEM32(esi + 0xE8) = eax;
    eax = MEM32(ebp + 0x28);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(esi + 0xEC) = eax;
    PUSH32(esp, 0x00200092u); RECOMP_ABI_CALL(0x001FFC6Au, sub_001FFC6A); /* call 0x001FFC6A */

loc_00200092: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_002000D1(); return; } /* jge: greater or equal (signed >=) */

loc_00200098: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8007007Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x8007007Au (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002000B0(); return; } /* jne: not equal / not zero */

loc_002000A0: ;
    eax = MEM32(esi + 0xA8);
    ecx = MEM32(ebp + 0x14);
    MEM32(ecx) = eax;
    g_seh_ebp = ebp; sub_002000B0(); return; /* tail jmp 0x002000B0 */

}

/**
 * sub_002000A0
 * Original: 0x002000A0 - 0x002000AD (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002000A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002000A0: ;
    eax = MEM32(esi + 0xA8);
    ecx = MEM32(ebp + 0x14);
    MEM32(ecx) = eax;
    g_seh_ebp = ebp; sub_002000B0(); return; /* tail jmp 0x002000B0 */

}

/**
 * sub_002000AD
 * Original: 0x002000AD - 0x002000B0 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002000AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002000AD: ;
    ebx = MEM32(ebp + -8);

    g_seh_ebp = ebp; sub_002000B0(); return; /* fallthrough 0x002000B0 */

}

/**
 * sub_002000B0
 * Original: 0x002000B0 - 0x002000D1 (33 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002000B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002000B0: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002000B9u); RECOMP_ABI_CALL(0x0020C3FFu, sub_0020C3FF); /* call 0x0020C3FF */

loc_002000B9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002000D6(); return; } /* je: equal / zero */

loc_002000BD: ;
    ebx = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002000D6(); return; } /* je: equal / zero */

loc_002000C4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002000D6(); return; } /* je: equal / zero */

loc_002000C9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002000CFu); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_002000CF: ;
    g_seh_ebp = ebp; sub_002000D6(); return; /* tail jmp 0x002000D6 */

}

/**
 * sub_002000D1
 * Original: 0x002000D1 - 0x002000D6 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002000D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002000D1: ;
    eax = MEM32(ebp + 0x38);
    MEM32(eax) = esi;

    g_seh_ebp = ebp; sub_002000D6(); return; /* fallthrough 0x002000D6 */

}

/**
 * sub_002000D6
 * Original: 0x002000D6 - 0x002000DB (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002000D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002000D6: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_002000DB(); return; /* fallthrough 0x002000DB */

}

/**
 * sub_002000DB
 * Original: 0x002000DB - 0x002000DF (4 bytes, 2 insns)
 * CC: cdecl, 13 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002000DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002000DB: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 56; return; /* ret 52 */

}

/**
 * sub_002000DF
 * Original: 0x002000DF - 0x002000E0 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002000DF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */

loc_002000DF: ;
    PUSH32(esp, ebp);

    g_seh_ebp = ebp; sub_002000E0(); return; /* fallthrough 0x002000E0 */

}

/**
 * sub_002000E0
 * Original: 0x002000E0 - 0x002000F8 (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002000E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002000E0: ;
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002000F8(); return; } /* jne: not equal / not zero */

loc_002000EE: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_002001A7(); return; /* tail jmp 0x002001A7 */

}

/**
 * sub_002000E8
 * Original: 0x002000E8 - 0x002000F8 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002000E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002000E8: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002000F8(); return; } /* jne: not equal / not zero */

loc_002000EE: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_002001A7(); return; /* tail jmp 0x002001A7 */

}

/**
 * sub_002000F3
 * Original: 0x002000F3 - 0x002000F8 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002000F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002000F3: ;
    g_seh_ebp = ebp; sub_002001A7(); return; /* tail jmp 0x002001A7 */

}

/**
 * sub_002000F8
 * Original: 0x002000F8 - 0x0020012A (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002000F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002000F8: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x68000080);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, 0x00200111u); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_00200111: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020013F(); return; } /* jne: not equal / not zero */

loc_00200118: ;
    PUSH32(esp, 0x0020011Du); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020011D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020012A(); return; } /* jg: greater (signed >) */

loc_00200121: ;
    PUSH32(esp, 0x00200126u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_00200126: ;
    esi = eax;
    g_seh_ebp = ebp; sub_00200178(); return; /* tail jmp 0x00200178 */

}

/**
 * sub_0020012A
 * Original: 0x0020012A - 0x0020013F (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020012A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020012A: ;
    PUSH32(esp, 0x0020012Fu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020012F: ;
    esi = eax;
    esi = esi & 0xFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | 0x80070000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_00200178(); return; /* tail jmp 0x00200178 */

}

/**
 * sub_0020013F
 * Original: 0x0020013F - 0x0020015F (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020013F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020013F: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00200149u); RECOMP_ABI_CALL(0x000AAD69u, sub_000AAD69); /* call 0x000AAD69 */

loc_00200149: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0020017C(); return; } /* jne: not equal / not zero */

loc_0020014D: ;
    PUSH32(esp, 0x00200152u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_00200152: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_0020015F(); return; } /* jg: greater (signed >) */

loc_00200156: ;
    PUSH32(esp, 0x0020015Bu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020015B: ;
    esi = eax;
    g_seh_ebp = ebp; sub_00200172(); return; /* tail jmp 0x00200172 */

}

/**
 * sub_0020015F
 * Original: 0x0020015F - 0x00200172 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020015F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020015F: ;
    PUSH32(esp, 0x00200164u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_00200164: ;
    esi = eax;
    esi = esi & 0xFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | 0x80070000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_00200172(); return; /* fallthrough 0x00200172 */

}

/**
 * sub_00200172
 * Original: 0x00200172 - 0x00200178 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00200172(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00200172: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00200178u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

    g_seh_ebp = ebp; sub_00200178(); return; /* fallthrough 0x00200178 */

}

/**
 * sub_00200178
 * Original: 0x00200178 - 0x0020017C (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00200178(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00200178: ;
    eax = esi;
    g_seh_ebp = ebp; sub_002001A6(); return; /* tail jmp 0x002001A6 */

}

/**
 * sub_0020017C
 * Original: 0x0020017C - 0x002001A6 (42 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020017C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020017C: ;
    PUSH32(esp, MEM32(ebp + 0x2C));
    ecx = ebx;
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x002001A6u); RECOMP_ABI_CALL(0x001FFF1Au, sub_001FFF1A); /* call 0x001FFF1A */

    g_seh_ebp = ebp; sub_002001A6(); return; /* fallthrough 0x002001A6 */

}

/**
 * sub_002001A6
 * Original: 0x002001A6 - 0x002001A7 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002001A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002001A6: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_002001A7(); return; /* fallthrough 0x002001A7 */

}

/**
 * sub_002001A7
 * Original: 0x002001A7 - 0x002001AD (6 bytes, 4 insns)
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002001A7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002001A7: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 44; return; /* ret 40 */

}

/**
 * sub_002001AD
 * Original: 0x002001AD - 0x002001C2 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002001AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002001AD: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002001B8u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_002001B8: ;
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002001C2(); return; } /* jne: not equal / not zero */

loc_002001BE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_002001F3(); return; /* tail jmp 0x002001F3 */

}

/**
 * sub_002001C2
 * Original: 0x002001C2 - 0x002001F3 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002001C2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002001C2: ;
    PUSH32(esp, esi);
    ecx = eax + eax * 2;
    esi = 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002001D1; /* jg: greater (signed >) */

loc_002001CF: ;
    ecx = esi;

loc_002001D1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFDE9);
    PUSH32(esp, 0x002001E8u); RECOMP_ABI_CALL(0x000AE9B9u, sub_000AE9B9); /* call 0x000AE9B9 */

loc_002001E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002001F0; /* je: equal / zero */

loc_002001EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002001F2; /* jle: less or equal (signed <=) */

loc_002001F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002001F2: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_002001F3(); return; /* fallthrough 0x002001F3 */

}

/**
 * sub_002001F3
 * Original: 0x002001F3 - 0x00200209 (22 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002001F3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002001F3: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_002001FF; /* je: equal / zero */

loc_002001FC: ;
    MEM16(ecx) = LO16(eax);

loc_002001FF: ;
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00200209
 * Original: 0x00200209 - 0x00200246 (61 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00200209(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00200209: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi + 0x160);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00200225; /* je: equal / zero */

loc_0020021A: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00200242; /* jne: not equal / not zero */

loc_0020021D: ;
    eax = MEM32(esi + 0x164);
    goto loc_00200242;

loc_00200225: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020022Eu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_0020022E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00200242; /* je: equal / zero */

loc_00200232: ;
    MEM32(esi + 0x164) = eax;
    MEM32(esi + 0x160) = 1;

loc_00200242: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00200246
 * Original: 0x00200246 - 0x00200281 (59 bytes, 23 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00200246(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00200246: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0020027C; /* je: equal / zero */

loc_00200252: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020025Bu); RECOMP_ABI_CALL(0x0020C2ABu, sub_0020C2AB); /* call 0x0020C2AB */

loc_0020025B: ;
    eax = MEM32(esi + 0x368);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020026F; /* je: equal / zero */

loc_00200265: ;
    PUSH32(esp, 0x3B);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0020026Fu); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_0020026F: ;
    PUSH32(esp, 0x803A);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0020027Cu); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_0020027C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00200281
 * Original: 0x00200281 - 0x002002B7 (54 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00200281(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00200281: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x160)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x160), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002002AD; /* jne: not equal / not zero */

loc_00200290: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00200299u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_00200299: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002002AD; /* je: equal / zero */

loc_0020029D: ;
    MEM32(esi + 0x164) = eax;
    MEM32(esi + 0x160) = 1;

loc_002002AD: ;
    MEM32(esi + 0x164) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002002B7
 * Original: 0x002002B7 - 0x002003FC (325 bytes, 108 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002002B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002002B7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -8) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002002CD; /* jne: not equal / not zero */

loc_002002C3: ;
    eax = 0x80150005u;
    goto loc_00200376;

loc_002002CD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x174);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(esi + 0x164)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x164), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    ebx = eax + 2;
    if (CMP_NE(_fa, _fb)) goto loc_002002F5; /* jne: not equal / not zero */

loc_002002EC: ;
    MEM32(ebp + 8) = 0x80150009u;
    goto loc_00200358;

loc_002002F5: ;
    eax = ZX16(MEM16(eax));
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;
    eax = MEM32(esi + 0x178);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0020033C; /* jne: not equal / not zero */

loc_00200309: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0020033C; /* jbe: below or equal (unsigned <=) */

loc_0020030F: ;
    ecx = MEM32(ebp + -8);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x2A);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020031Du); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_0020031D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0020032C; /* jne: not equal / not zero */

loc_00200323: ;
    MEM32(ebp + 8) = 0x8007000Eu;
    goto loc_00200358;

loc_0020032C: ;
    eax = MEM32(esi + 0x174);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0020037D; /* ja: above (unsigned >) */

loc_0020033C: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    eax = MEM32(esi + 0x174);
    eax = ZX16(MEM16(eax));
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;
    eax = MEM32(edi);
    MEM32(esi + 0x178) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00200370; /* jge: greater or equal (signed >=) */

loc_00200358: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00200367; /* je: equal / zero */

loc_0020035E: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200367u); RECOMP_ABI_CALL(0x0020C3FFu, sub_0020C3FF); /* call 0x0020C3FF */

loc_00200367: ;
    eax = MEM32(ebp + 0x10);
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00200370: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00200376: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_0020037A: ;
    ebx = MEM32(ebp + 0xC);

loc_0020037D: ;
    SET_LO16(eax, ZX8(MEM8(ebx)));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002003F0; /* je: equal / zero */

loc_00200386: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x10 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002003F0; /* ja: above (unsigned >) */

loc_0020038C: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = ebx;
    ebx = ZX16(LO16(eax));
    eax = ZX16(MEM16(ebp + -4));
    PUSH32(esp, 0x10);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0);
    PUSH32(esp, 0xFDE9);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002003B0u); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_002003B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002003D6; /* jne: not equal / not zero */

loc_002003B4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002003B9u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_002003B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002003C4; /* jg: greater (signed >) */

loc_002003BD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002003C2u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_002003C2: ;
    goto loc_002003D3;

loc_002003C4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002003C9u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_002003C9: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002003D3: ;
    MEM32(ebp + 8) = eax;

loc_002003D6: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + ebx;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x174);
    SET_LO16(ecx, MEM16(ebp + -4));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(eax) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0020037A; /* jb: below (unsigned <) */

loc_002003EB: ;
    goto loc_0020033C;

loc_002003F0: ;
    MEM32(ebp + 8) = 0x80150007u;
    goto loc_00200358;

}

/**
 * sub_002003FC
 * Original: 0x002003FC - 0x00200462 (102 bytes, 37 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002003FC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002003FC: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0020045D; /* je: equal / zero */

loc_00200408: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00200411u); RECOMP_ABI_CALL(0x0020C2ABu, sub_0020C2AB); /* call 0x0020C2AB */

loc_00200411: ;
    eax = MEM32(esi + 0x16C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00200428; /* je: equal / zero */

loc_0020041B: ;
    PUSH32(esp, 0x8028);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00200428u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_00200428: ;
    eax = MEM32(esi + 0x174);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020043C; /* je: equal / zero */

loc_00200432: ;
    PUSH32(esp, 0x29);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0020043Cu); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_0020043C: ;
    eax = MEM32(esi + 0x178);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00200450; /* je: equal / zero */

loc_00200446: ;
    PUSH32(esp, 0x2A);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00200450u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_00200450: ;
    PUSH32(esp, 0x8027);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0020045Du); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_0020045D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020040C
 * Original: 0x0020040C - 0x002004A3 (151 bytes, 54 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020040C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020040C: ;
    PUSH32(esp, 0x00200411u); RECOMP_ABI_CALL(0x0020C2ABu, sub_0020C2AB); /* call 0x0020C2AB */

loc_00200411: ;
    eax = MEM32(esi + 0x16C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00200428; /* je: equal / zero */

loc_0020041B: ;
    PUSH32(esp, 0x8028);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00200428u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_00200428: ;
    eax = MEM32(esi + 0x174);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020043C; /* je: equal / zero */

loc_00200432: ;
    PUSH32(esp, 0x29);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0020043Cu); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_0020043C: ;
    eax = MEM32(esi + 0x178);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00200450; /* je: equal / zero */

loc_00200446: ;
    PUSH32(esp, 0x2A);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00200450u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_00200450: ;
    PUSH32(esp, 0x8027);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0020045Du); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_0020045D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    eax = 0x80150005u;
    goto loc_002004A0;

loc_0020046D: ;
    edx = MEM32(esp + 4);
    ecx = edx + 0x168;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200484; /* jne: not equal / not zero */

loc_0020047D: ;
    eax = 0x80150009u;
    goto loc_002004A0;

loc_00200484: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002004A0; /* jl: less (signed <) */

loc_00200489: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020049F; /* je: equal / zero */

loc_00200492: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1C);
    POP32(esp, ecx);
    esi = edx + 0x1618;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    POP32(esp, esi);

loc_0020049F: ;
    POP32(esp, edi);

loc_002004A0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00200462
 * Original: 0x00200462 - 0x002004A3 (65 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00200462(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00200462: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020046D; /* jne: not equal / not zero */

loc_00200466: ;
    eax = 0x80150005u;
    goto loc_002004A0;

loc_0020046D: ;
    edx = MEM32(esp + 4);
    ecx = edx + 0x168;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200484; /* jne: not equal / not zero */

loc_0020047D: ;
    eax = 0x80150009u;
    goto loc_002004A0;

loc_00200484: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002004A0; /* jl: less (signed <) */

loc_00200489: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020049F; /* je: equal / zero */

loc_00200492: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1C);
    POP32(esp, ecx);
    esi = edx + 0x1618;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    POP32(esp, esi);

loc_0020049F: ;
    POP32(esp, edi);

loc_002004A0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002004A3
 * Original: 0x002004A3 - 0x00200579 (214 bytes, 67 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002004A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002004A3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002004B5; /* jne: not equal / not zero */

loc_002004AE: ;
    eax = 0x80150005u;
    goto loc_00200500;

loc_002004B5: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x203C);
    PUSH32(esp, 0x2728);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002004CBu); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_002004CB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002004DA; /* jne: not equal / not zero */

loc_002004D1: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    goto loc_002004FC;

loc_002004DA: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002004E2u); RECOMP_ABI_CALL(0x001EC982u, sub_001EC982); /* call 0x001EC982 */

loc_002004E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200505; /* jne: not equal / not zero */

loc_002004E6: ;
    MEM32(ebp + -4) = 0x80150002u;

loc_002004ED: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002004F5u); RECOMP_ABI_CALL(0x002110A8u, sub_002110A8); /* call 0x002110A8 */

loc_002004F5: ;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002004FB: ;
    POP32(esp, edi);

loc_002004FC: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);

loc_00200500: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

loc_00200505: ;
    ecx = MEM32(ebp + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    edx = MEM32(ecx + eax);
    edi = esi + 0x1A0;
    MEM32(edi) = edx;
    eax = MEM32(ecx + eax + 4);
    MEM32(edi + 4) = eax;
    eax = edx;
    eax = eax | MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_0020052D; /* jne: not equal / not zero */

loc_00200524: ;
    MEM32(ebp + -4) = 0x80150003u;
    goto loc_002004ED;

loc_0020052D: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020053C; /* je: equal / zero */

loc_00200534: ;
    eax = MEM32(eax);
    MEM32(esi + 0x1A8) = eax;

loc_0020053C: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = ebx;
    PUSH32(esp, 0xAA6EDC);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020054Cu); RECOMP_ABI_CALL(0x0021111Du, sub_0021111D); /* call 0x0021111D */

loc_0020054C: ;
    eax = esi + 0x1AC;
    MEM32(esi + 0x174) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(esi + 0x16C) = edi;
    MEM32(esi + 0x170) = 0xC;
    MEM32(esi + 0x178) = 0x1CA0;
    MEM32(eax) = esi;
    goto loc_002004FB;

}

/**
 * sub_00200579
 * Original: 0x00200579 - 0x0020097D (1028 bytes, 351 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00200579(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00200579: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020058B; /* jne: not equal / not zero */

loc_00200581: ;
    eax = 0x80150005u;
    goto loc_00200979;

loc_0020058B: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x168);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002005A5; /* jge: greater or equal (signed >=) */

loc_0020059D: ;
    MEM32(ebp + -4) = eax;
    goto loc_00200975;

loc_002005A5: ;
    if (CMP_NE(_fa, _fb)) goto loc_002005B3; /* jne: not equal / not zero */

loc_002005A7: ;
    MEM32(ebp + -4) = 0x80150009u;
    goto loc_00200975;

loc_002005B3: ;
    SET_LO8(eax, MEM8(ebx + 0x1AC));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    MEM8(edi + 0x500) = LO8(eax);
    SET_LO8(eax, MEM8(ebx + 0x1AD));
    MEM8(edi + 0x5EA) = LO8(eax);
    eax = MEM32(ebx + 0x1AE);
    MEM32(edi + 0x61C) = eax;
    eax = MEM32(ebx + 0x1B2);
    MEM32(edi + 0x620) = eax;
    SET_LO8(eax, MEM8(ebx + 0x1B6));
    MEM8(edi + 0x8DA) = LO8(eax);
    SET_LO8(eax, MEM8(ebx + 0x1B7));
    PUSH32(esp, 0x3F);
    MEM8(edi + 0x8DB) = LO8(eax);
    eax = ZX16(MEM16(ebx + 0x1B8));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = ebx + 0x1BA;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    esi = 0xFDE9;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020061Fu); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_0020061F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200630; /* jne: not equal / not zero */

loc_00200623: ;
    _fa = (uint32_t)(MEM16(ebx + 0x1B8)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0x1B8), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200951; /* jne: not equal / not zero */

loc_00200630: ;
    eax = ZX16(MEM16(ebx + 0x1B8));
    ebx = ebx + eax + 0x1BA;
    PUSH32(esp, 0x3F);
    eax = edi + 0x80;
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebx));
    PUSH32(esp, eax);
    MEM32(ebp + 8) = ebx;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020065Au); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_0020065A: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_0020066C; /* jne: not equal / not zero */

loc_00200663: ;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200951; /* jne: not equal / not zero */

loc_0020066C: ;
    ecx = ZX16(MEM16(eax));
    eax = eax + ecx + 2;
    PUSH32(esp, 0x7F);
    ecx = edi + 0x100;
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(eax));
    PUSH32(esp, ecx);
    MEM32(ebp + 8) = eax;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020068Eu); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_0020068E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_0020069E; /* jne: not equal / not zero */

loc_00200695: ;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200951; /* jne: not equal / not zero */

loc_0020069E: ;
    ecx = ZX16(MEM16(eax));
    eax = eax + ecx + 2;
    PUSH32(esp, 0x7F);
    ecx = edi + 0x200;
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(eax));
    PUSH32(esp, ecx);
    MEM32(ebp + 8) = eax;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002006C0u); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_002006C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_002006D0; /* jne: not equal / not zero */

loc_002006C7: ;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200951; /* jne: not equal / not zero */

loc_002006D0: ;
    ecx = ZX16(MEM16(eax));
    eax = eax + ecx + 2;
    PUSH32(esp, 0x7F);
    ecx = edi + 0x300;
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(eax));
    PUSH32(esp, ecx);
    MEM32(ebp + 8) = eax;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002006F2u); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_002006F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00200702; /* jne: not equal / not zero */

loc_002006F9: ;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200951; /* jne: not equal / not zero */

loc_00200702: ;
    ecx = ZX16(MEM16(eax));
    eax = eax + ecx + 2;
    PUSH32(esp, 0x3F);
    ecx = edi + 0x400;
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(eax));
    PUSH32(esp, ecx);
    MEM32(ebp + 8) = eax;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200724u); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_00200724: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00200734; /* jne: not equal / not zero */

loc_0020072B: ;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200951; /* jne: not equal / not zero */

loc_00200734: ;
    ecx = ZX16(MEM16(eax));
    eax = eax + ecx + 2;
    PUSH32(esp, 0x3F);
    ecx = edi + 0x480;
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(eax));
    PUSH32(esp, ecx);
    MEM32(ebp + 8) = eax;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200756u); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_00200756: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00200766; /* jne: not equal / not zero */

loc_0020075D: ;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200951; /* jne: not equal / not zero */

loc_00200766: ;
    ecx = ZX16(MEM16(eax));
    eax = eax + ecx + 2;
    PUSH32(esp, 0xF);
    ecx = edi + 0x502;
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(eax));
    PUSH32(esp, ecx);
    MEM32(ebp + 8) = eax;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200788u); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_00200788: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00200798; /* jne: not equal / not zero */

loc_0020078F: ;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200951; /* jne: not equal / not zero */

loc_00200798: ;
    ecx = ZX16(MEM16(eax));
    eax = eax + ecx + 2;
    PUSH32(esp, 0xB);
    ecx = edi + 0x522;
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(eax));
    PUSH32(esp, ecx);
    MEM32(ebp + 8) = eax;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002007BAu); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_002007BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_002007CA; /* jne: not equal / not zero */

loc_002007C1: ;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200951; /* jne: not equal / not zero */

loc_002007CA: ;
    ecx = ZX16(MEM16(eax));
    eax = eax + ecx + 2;
    PUSH32(esp, 0xB);
    ecx = edi + 0x53A;
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(eax));
    PUSH32(esp, ecx);
    MEM32(ebp + 8) = eax;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002007ECu); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_002007EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_002007FC; /* jne: not equal / not zero */

loc_002007F3: ;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200951; /* jne: not equal / not zero */

loc_002007FC: ;
    ecx = ZX16(MEM16(eax));
    eax = eax + ecx + 2;
    PUSH32(esp, 0xB);
    ecx = edi + 0x552;
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(eax));
    PUSH32(esp, ecx);
    MEM32(ebp + 8) = eax;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020081Eu); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_0020081E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_0020082E; /* jne: not equal / not zero */

loc_00200825: ;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200951; /* jne: not equal / not zero */

loc_0020082E: ;
    ecx = ZX16(MEM16(eax));
    eax = eax + ecx + 2;
    PUSH32(esp, 0x3F);
    ecx = edi + 0x56A;
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(eax));
    PUSH32(esp, ecx);
    MEM32(ebp + 8) = eax;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200850u); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_00200850: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00200860; /* jne: not equal / not zero */

loc_00200857: ;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200951; /* jne: not equal / not zero */

loc_00200860: ;
    ecx = ZX16(MEM16(eax));
    eax = eax + ecx + 2;
    PUSH32(esp, 0x17);
    ecx = edi + 0x5EC;
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(eax));
    PUSH32(esp, ecx);
    MEM32(ebp + 8) = eax;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200882u); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_00200882: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00200892; /* jne: not equal / not zero */

loc_00200889: ;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200951; /* jne: not equal / not zero */

loc_00200892: ;
    ecx = ZX16(MEM16(eax));
    eax = eax + ecx + 2;
    PUSH32(esp, 0x80);
    ecx = edi + 0x624;
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(eax));
    PUSH32(esp, ecx);
    MEM32(ebp + 8) = eax;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002008B7u); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_002008B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_002008C7; /* jne: not equal / not zero */

loc_002008BE: ;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200951; /* jne: not equal / not zero */

loc_002008C7: ;
    ecx = ZX16(MEM16(eax));
    eax = eax + ecx + 2;
    PUSH32(esp, 0x3F);
    ecx = edi + 0x726;
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(eax));
    PUSH32(esp, ecx);
    MEM32(ebp + 8) = eax;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002008E9u); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_002008E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_002008F5; /* jne: not equal / not zero */

loc_002008F0: ;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200951; /* jne: not equal / not zero */

loc_002008F5: ;
    ecx = ZX16(MEM16(eax));
    eax = eax + ecx + 2;
    PUSH32(esp, 0x3F);
    ecx = edi + 0x7A6;
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(eax));
    PUSH32(esp, ecx);
    MEM32(ebp + 8) = eax;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200917u); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_00200917: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00200923; /* jne: not equal / not zero */

loc_0020091E: ;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200951; /* jne: not equal / not zero */

loc_00200923: ;
    ecx = ZX16(MEM16(eax));
    eax = eax + ecx + 2;
    ecx = ZX16(MEM16(eax));
    PUSH32(esp, 0x3F);
    _fb = (uint32_t)(0x826) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x826;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEM32(ebp + 8) = eax;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200945u); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_00200945: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200973; /* jne: not equal / not zero */

loc_00200949: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00200973; /* je: equal / zero */

loc_00200951: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200956u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_00200956: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00200961; /* jg: greater (signed >) */

loc_0020095A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020095Fu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_0020095F: ;
    goto loc_00200970;

loc_00200961: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200966u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_00200966: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00200970: ;
    MEM32(ebp + -4) = eax;

loc_00200973: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00200975: ;
    eax = MEM32(ebp + -4);
    POP32(esp, ebx);

loc_00200979: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020097D
 * Original: 0x0020097D - 0x00200BF1 (628 bytes, 204 insns)
 * Category: game_network
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020097D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020097D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020098F; /* jne: not equal / not zero */

loc_00200988: ;
    eax = 0x80150005u;
    goto loc_002009DA;

loc_0020098F: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x203C);
    PUSH32(esp, 0x1570);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002009A5u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_002009A5: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002009B4; /* jne: not equal / not zero */

loc_002009AB: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    goto loc_002009D6;

loc_002009B4: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002009BCu); RECOMP_ABI_CALL(0x001EC982u, sub_001EC982); /* call 0x001EC982 */

loc_002009BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002009DF; /* jne: not equal / not zero */

loc_002009C0: ;
    MEM32(ebp + -4) = 0x80150002u;

loc_002009C7: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002009CFu); RECOMP_ABI_CALL(0x002110A8u, sub_002110A8); /* call 0x002110A8 */

loc_002009CF: ;
    eax = MEM32(ebp + 0x18);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002009D5: ;
    POP32(esp, esi);

loc_002009D6: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);

loc_002009DA: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

loc_002009DF: ;
    edx = MEM32(ebp + 8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x70);
    esi = MEM32(edx + eax);
    ecx = edi + 0x1A0;
    MEM32(ecx) = esi;
    eax = MEM32(edx + eax + 4);
    MEM32(ecx + 4) = eax;
    eax = esi;
    eax = eax | MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_00200A07; /* jne: not equal / not zero */

loc_002009FE: ;
    MEM32(ebp + -4) = 0x80150003u;
    goto loc_002009C7;

loc_00200A07: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00200A16; /* je: equal / zero */

loc_00200A0E: ;
    eax = MEM32(eax);
    MEM32(edi + 0x1A8) = eax;

loc_00200A16: ;
    esi = MEM32(ebp + 0x10);
    SET_LO8(eax, MEM8(esi + 0x500));
    MEM8(edi + 0x1AC) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 0x5EA));
    MEM8(edi + 0x1AD) = LO8(eax);
    eax = MEM32(esi + 0x61C);
    MEM32(edi + 0x1AE) = eax;
    eax = MEM32(esi + 0x620);
    MEM32(edi + 0x1B2) = eax;
    SET_LO8(eax, MEM8(esi + 0x8DA));
    MEM8(edi + 0x1B6) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 0x8DB));
    MEM8(edi + 0x1B7) = LO8(eax);
    eax = edi + 0x1B8;
    PUSH32(esp, esi);
    ecx = eax + 2;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200A74u); RECOMP_ABI_CALL(0x002001ADu, sub_002001AD); /* call 0x002001AD */

loc_00200A74: ;
    ecx = esi + 0x80;
    PUSH32(esp, ecx);
    ecx = eax + 2;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200A87u); RECOMP_ABI_CALL(0x002001ADu, sub_002001AD); /* call 0x002001AD */

loc_00200A87: ;
    ecx = esi + 0x100;
    PUSH32(esp, ecx);
    ecx = eax + 2;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200A9Au); RECOMP_ABI_CALL(0x002001ADu, sub_002001AD); /* call 0x002001AD */

loc_00200A9A: ;
    ecx = esi + 0x200;
    PUSH32(esp, ecx);
    ecx = eax + 2;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200AADu); RECOMP_ABI_CALL(0x002001ADu, sub_002001AD); /* call 0x002001AD */

loc_00200AAD: ;
    ecx = esi + 0x300;
    PUSH32(esp, ecx);
    ecx = eax + 2;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200AC0u); RECOMP_ABI_CALL(0x002001ADu, sub_002001AD); /* call 0x002001AD */

loc_00200AC0: ;
    ecx = esi + 0x400;
    PUSH32(esp, ecx);
    ecx = eax + 2;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200AD3u); RECOMP_ABI_CALL(0x002001ADu, sub_002001AD); /* call 0x002001AD */

loc_00200AD3: ;
    ecx = esi + 0x480;
    PUSH32(esp, ecx);
    ecx = eax + 2;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200AE6u); RECOMP_ABI_CALL(0x002001ADu, sub_002001AD); /* call 0x002001AD */

loc_00200AE6: ;
    ecx = esi + 0x502;
    PUSH32(esp, ecx);
    ecx = eax + 2;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200AF9u); RECOMP_ABI_CALL(0x002001ADu, sub_002001AD); /* call 0x002001AD */

loc_00200AF9: ;
    ecx = esi + 0x522;
    PUSH32(esp, ecx);
    ecx = eax + 2;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200B0Cu); RECOMP_ABI_CALL(0x002001ADu, sub_002001AD); /* call 0x002001AD */

loc_00200B0C: ;
    ecx = esi + 0x53A;
    PUSH32(esp, ecx);
    ecx = eax + 2;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200B1Fu); RECOMP_ABI_CALL(0x002001ADu, sub_002001AD); /* call 0x002001AD */

loc_00200B1F: ;
    ecx = esi + 0x552;
    PUSH32(esp, ecx);
    ecx = eax + 2;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200B32u); RECOMP_ABI_CALL(0x002001ADu, sub_002001AD); /* call 0x002001AD */

loc_00200B32: ;
    ecx = esi + 0x56A;
    PUSH32(esp, ecx);
    ecx = eax + 2;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200B45u); RECOMP_ABI_CALL(0x002001ADu, sub_002001AD); /* call 0x002001AD */

loc_00200B45: ;
    ecx = esi + 0x5EC;
    PUSH32(esp, ecx);
    ecx = eax + 2;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200B58u); RECOMP_ABI_CALL(0x002001ADu, sub_002001AD); /* call 0x002001AD */

loc_00200B58: ;
    ecx = esi + 0x624;
    PUSH32(esp, ecx);
    ecx = eax + 2;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200B6Bu); RECOMP_ABI_CALL(0x002001ADu, sub_002001AD); /* call 0x002001AD */

loc_00200B6B: ;
    ecx = esi + 0x726;
    PUSH32(esp, ecx);
    ecx = eax + 2;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200B7Eu); RECOMP_ABI_CALL(0x002001ADu, sub_002001AD); /* call 0x002001AD */

loc_00200B7E: ;
    ecx = esi + 0x7A6;
    PUSH32(esp, ecx);
    ecx = eax + 2;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200B91u); RECOMP_ABI_CALL(0x002001ADu, sub_002001AD); /* call 0x002001AD */

loc_00200B91: ;
    _fb = (uint32_t)(0x826) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x826;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = eax + 2;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200BA4u); RECOMP_ABI_CALL(0x002001ADu, sub_002001AD); /* call 0x002001AD */

loc_00200BA4: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    esi = eax;
    eax = 0xFFFFFE60u;
    PUSH32(esp, 0xAA6EF0);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    ecx = ebx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200BBFu); RECOMP_ABI_CALL(0x0021111Du, sub_0021111D); /* call 0x0021111D */

loc_00200BBF: ;
    eax = edi + 0x1A0;
    MEM32(edi + 0x16C) = eax;
    eax = edi + 0x1370;
    MEM32(edi + 0x174) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(edi + 0x170) = esi;
    MEM32(edi + 0x178) = 0x200;
    MEM32(eax) = edi;
    goto loc_002009D5;

}

/**
 * sub_00200BF1
 * Original: 0x00200BF1 - 0x00200CFE (269 bytes, 82 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00200BF1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00200BF1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -8) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00200C07; /* jne: not equal / not zero */

loc_00200C00: ;
    eax = 0x80150005u;
    goto loc_00200C53;

loc_00200C07: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x203D);
    PUSH32(esp, 0x3B0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200C1Du); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_00200C1D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200C2C; /* jne: not equal / not zero */

loc_00200C23: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    goto loc_00200C4F;

loc_00200C2C: ;
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200C34u); RECOMP_ABI_CALL(0x001EC982u, sub_001EC982); /* call 0x001EC982 */

loc_00200C34: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200C58; /* jne: not equal / not zero */

loc_00200C38: ;
    MEM32(ebp + -4) = 0x80150002u;

loc_00200C3F: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200C48u); RECOMP_ABI_CALL(0x002110A8u, sub_002110A8); /* call 0x002110A8 */

loc_00200C48: ;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00200C4E: ;
    POP32(esp, ebx);

loc_00200C4F: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);

loc_00200C53: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

loc_00200C58: ;
    ecx = MEM32(ebp + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    ebx = ecx + eax;
    eax = MEM32(ebx);
    edi = esi + 0x1A0;
    MEM32(edi) = eax;
    eax = MEM32(ebx + 4);
    MEM32(edi + 4) = eax;
    eax = MEM32(edi);
    eax = eax | MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_00200C81; /* jne: not equal / not zero */

loc_00200C78: ;
    MEM32(ebp + -4) = 0x80150003u;
    goto loc_00200C3F;

loc_00200C81: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200C8Au); RECOMP_ABI_CALL(0x001F268Cu, sub_001F268C); /* call 0x001F268C */

loc_00200C8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200C97; /* jne: not equal / not zero */

loc_00200C8E: ;
    MEM32(ebp + -4) = 0x8015000Du;
    goto loc_00200C3F;

loc_00200C97: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -8);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(esi + 0x1A8) = LO16(eax);
    eax = MEM32(ebx + 8);
    eax = eax ^ MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200CBDu); RECOMP_ABI_CALL(0x001EF4C7u, sub_001EF4C7); /* call 0x001EF4C7 */

loc_00200CBD: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0xAA6F04);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200CCEu); RECOMP_ABI_CALL(0x0021111Du, sub_0021111D); /* call 0x0021111D */

loc_00200CCE: ;
    eax = esi + 0x1AA;
    MEM32(esi + 0x174) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(esi + 0x16C) = edi;
    MEM32(esi + 0x170) = 0xA;
    MEM32(esi + 0x178) = 0x200;
    MEM32(eax) = esi;
    goto loc_00200C4E;

}

/**
 * sub_00200CFE
 * Original: 0x00200CFE - 0x00200D3E (64 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00200CFE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00200CFE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200D09; /* jne: not equal / not zero */

loc_00200D02: ;
    eax = 0x80150005u;
    goto loc_00200D3B;

loc_00200D09: ;
    edx = MEM32(esp + 4);
    ecx = edx + 0x168;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00200D3B; /* jl: less (signed <) */

loc_00200D19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200D24; /* jne: not equal / not zero */

loc_00200D1D: ;
    eax = 0x80150009u;
    goto loc_00200D3B;

loc_00200D24: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00200D3A; /* je: equal / zero */

loc_00200D2D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1C);
    POP32(esp, ecx);
    esi = edx + 0x3B8;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    POP32(esp, esi);

loc_00200D3A: ;
    POP32(esp, edi);

loc_00200D3B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00200D3E
 * Original: 0x00200D3E - 0x00200E31 (243 bytes, 83 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00200D3E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00200D3E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + -4) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00200D54; /* jne: not equal / not zero */

loc_00200D4D: ;
    eax = 0x80150005u;
    goto loc_00200D9A;

loc_00200D54: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x203F);
    PUSH32(esp, 0x3B0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200D6Bu); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_00200D6B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200D78; /* jne: not equal / not zero */

loc_00200D71: ;
    edi = 0x8007000Eu;
    goto loc_00200D96;

loc_00200D78: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200D7Fu); RECOMP_ABI_CALL(0x001EC982u, sub_001EC982); /* call 0x001EC982 */

loc_00200D7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200D9F; /* jne: not equal / not zero */

loc_00200D83: ;
    edi = 0x80150002u;

loc_00200D88: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200D90u); RECOMP_ABI_CALL(0x002110A8u, sub_002110A8); /* call 0x002110A8 */

loc_00200D90: ;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00200D96: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00200D9A: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

loc_00200D9F: ;
    ecx = MEM32(ebp + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edi = esi + 0x1A0;
    MEM32(edi) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edi + 4) = ecx;
    ecx = MEM32(edi);
    ecx = ecx | MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_00200DC5; /* jne: not equal / not zero */

loc_00200DBE: ;
    edi = 0x80150003u;
    goto loc_00200D88;

loc_00200DC5: ;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200DCDu); RECOMP_ABI_CALL(0x001F268Cu, sub_001F268C); /* call 0x001F268C */

loc_00200DCD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200DD8; /* jne: not equal / not zero */

loc_00200DD1: ;
    edi = 0x8015000Du;
    goto loc_00200D88;

loc_00200DD8: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 4);
    ecx = esi + 0x1A8;
    POP32(esp, edx);

loc_00200DE4: ;
    SET_LO8(ebx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx) = LO8(ebx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00200DE4; /* jne: not equal / not zero */

loc_00200DED: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0xAA6F2C);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200DFEu); RECOMP_ABI_CALL(0x0021111Du, sub_0021111D); /* call 0x0021111D */

loc_00200DFE: ;
    eax = esi + 0x1AC;
    MEM32(esi + 0x174) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(esi + 0x16C) = edi;
    edi = MEM32(ebp + -8);
    MEM32(esi + 0x170) = 0xC;
    MEM32(esi + 0x178) = 0x200;
    MEM32(eax) = esi;
    goto loc_00200D96;

}

/**
 * sub_00200E31
 * Original: 0x00200E31 - 0x00200ED4 (163 bytes, 49 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00200E31(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00200E31: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200E46; /* jne: not equal / not zero */

loc_00200E3C: ;
    eax = 0x80150005u;
    goto loc_00200ECF;

loc_00200E46: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x202E);
    PUSH32(esp, 0x3F0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200E5Cu); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_00200E5C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200E6B; /* jne: not equal / not zero */

loc_00200E62: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    goto loc_00200ECB;

loc_00200E6B: ;
    SET_LO8(eax, MEM8(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    edi = esi + 0x1A0;
    MEM8(edi) = LO8(eax);
    eax = esi + 0x1A3;
    PUSH32(esp, eax);
    eax = esi + 0x1A1;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200E8Fu); RECOMP_ABI_CALL(0x002001ADu, sub_002001AD); /* call 0x002001AD */

loc_00200E8F: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = ebx;
    PUSH32(esp, 0xAA6F40);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200E9Fu); RECOMP_ABI_CALL(0x0021111Du, sub_0021111D); /* call 0x0021111D */

loc_00200E9F: ;
    eax = esi + 0x1EE;
    MEM32(esi + 0x174) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(esi + 0x16C) = edi;
    MEM32(esi + 0x170) = 0x4E;
    MEM32(esi + 0x178) = 0x200;
    MEM32(eax) = esi;
    POP32(esp, edi);

loc_00200ECB: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);

loc_00200ECF: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00200ED4
 * Original: 0x00200ED4 - 0x00200F14 (64 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00200ED4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00200ED4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200EDF; /* jne: not equal / not zero */

loc_00200ED8: ;
    eax = 0x80150005u;
    goto loc_00200F11;

loc_00200EDF: ;
    edx = MEM32(esp + 4);
    ecx = edx + 0x168;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00200F11; /* jl: less (signed <) */

loc_00200EEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200EFA; /* jne: not equal / not zero */

loc_00200EF3: ;
    eax = 0x80150009u;
    goto loc_00200F11;

loc_00200EFA: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00200F10; /* je: equal / zero */

loc_00200F03: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1C);
    POP32(esp, ecx);
    esi = edx + 0x65C;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    POP32(esp, esi);

loc_00200F10: ;
    POP32(esp, edi);

loc_00200F11: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00200F14
 * Original: 0x00200F14 - 0x00200F54 (64 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00200F14(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00200F14: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200F1F; /* jne: not equal / not zero */

loc_00200F18: ;
    eax = 0x80150005u;
    goto loc_00200F51;

loc_00200F1F: ;
    edx = MEM32(esp + 4);
    ecx = edx + 0x168;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00200F51; /* jl: less (signed <) */

loc_00200F2F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200F3A; /* jne: not equal / not zero */

loc_00200F33: ;
    eax = 0x80150009u;
    goto loc_00200F51;

loc_00200F3A: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00200F50; /* je: equal / zero */

loc_00200F43: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1C);
    POP32(esp, ecx);
    esi = edx + 0x3D4;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    POP32(esp, esi);

loc_00200F50: ;
    POP32(esp, edi);

loc_00200F51: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00200F54
 * Original: 0x00200F54 - 0x00201046 (242 bytes, 75 insns)
 * Category: game_network
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00200F54(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00200F54: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -8) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00200F6A; /* jne: not equal / not zero */

loc_00200F63: ;
    eax = 0x80150005u;
    goto loc_00200FB5;

loc_00200F6A: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2025);
    PUSH32(esp, 0x3D0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200F80u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_00200F80: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200F8F; /* jne: not equal / not zero */

loc_00200F86: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    goto loc_00200FB1;

loc_00200F8F: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200F97u); RECOMP_ABI_CALL(0x001EC982u, sub_001EC982); /* call 0x001EC982 */

loc_00200F97: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200FBA; /* jne: not equal / not zero */

loc_00200F9B: ;
    MEM32(ebp + -4) = 0x80150002u;

loc_00200FA2: ;
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200FAAu); RECOMP_ABI_CALL(0x002110A8u, sub_002110A8); /* call 0x002110A8 */

loc_00200FAA: ;
    eax = MEM32(ebp + 0x18);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00200FB0: ;
    POP32(esp, esi);

loc_00200FB1: ;
    eax = MEM32(ebp + -4);
    POP32(esp, ebx);

loc_00200FB5: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

loc_00200FBA: ;
    ecx = MEM32(ebp + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    esi = ecx + eax;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00200FCBu); RECOMP_ABI_CALL(0x001F268Cu, sub_001F268C); /* call 0x001F268C */

loc_00200FCB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00200FD8; /* jne: not equal / not zero */

loc_00200FCF: ;
    MEM32(ebp + -4) = 0x8015000Du;
    goto loc_00200FA2;

loc_00200FD8: ;
    ecx = MEM32(esi);
    eax = ebx + 0x1A0;
    MEM32(eax) = ecx;
    ecx = MEM32(esi + 4);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, 8);
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + 0x10);
    POP32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x14));
    edi = ebx + 0x1A8;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0xAA6F7C);
    PUSH32(esp, ebx);
    MEM32(ebx + 0x1C8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00201010u); RECOMP_ABI_CALL(0x0021111Du, sub_0021111D); /* call 0x0021111D */

loc_00201010: ;
    eax = ebx + 0x1A0;
    MEM32(ebx + 0x16C) = eax;
    eax = ebx + 0x1CC;
    MEM32(ebx + 0x174) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(ebx + 0x170) = 0x2C;
    MEM32(ebx + 0x178) = 0x200;
    MEM32(eax) = ebx;
    goto loc_00200FB0;

}

/**
 * sub_00201046
 * Original: 0x00201046 - 0x002010E4 (158 bytes, 48 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00201046(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00201046: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020105D; /* jne: not equal / not zero */

loc_00201053: ;
    eax = 0x80150005u;
    goto loc_002010DF;

loc_0020105D: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x2045);
    PUSH32(esp, 0x3A8);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00201073u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_00201073: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00201082; /* jne: not equal / not zero */

loc_00201079: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    goto loc_002010DB;

loc_00201082: ;
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020108Eu); RECOMP_ABI_CALL(0x001E52C5u, sub_001E52C5); /* call 0x001E52C5 */

loc_0020108E: ;
    eax = MEM32(ebp + -12);
    PUSH32(esp, MEM32(ebp + 8));
    edi = esi + 0x1A0;
    MEM32(edi) = eax;
    eax = MEM32(ebp + -8);
    PUSH32(esp, 0xAA6FB8);
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(edi + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002010AFu); RECOMP_ABI_CALL(0x0021111Du, sub_0021111D); /* call 0x0021111D */

loc_002010AF: ;
    eax = esi + 0x1A8;
    MEM32(esi + 0x174) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x16C) = edi;
    MEM32(esi + 0x170) = 8;
    MEM32(esi + 0x178) = 0x200;
    MEM32(eax) = esi;
    POP32(esp, edi);

loc_002010DB: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);

loc_002010DF: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002010E4
 * Original: 0x002010E4 - 0x002011C3 (223 bytes, 72 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002010E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002010E4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -4) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_002010F9; /* jne: not equal / not zero */

loc_002010F2: ;
    eax = 0x80150005u;
    goto loc_0020113C;

loc_002010F9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x2041);
    PUSH32(esp, 0x3B0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020110Cu); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_0020110C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00201119; /* jne: not equal / not zero */

loc_00201112: ;
    ebx = 0x8007000Eu;
    goto loc_00201138;

loc_00201119: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00201120u); RECOMP_ABI_CALL(0x001EC982u, sub_001EC982); /* call 0x001EC982 */

loc_00201120: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00201141; /* jne: not equal / not zero */

loc_00201124: ;
    ebx = 0x80150002u;

loc_00201129: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00201132u); RECOMP_ABI_CALL(0x002110A8u, sub_002110A8); /* call 0x002110A8 */

loc_00201132: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00201138: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);

loc_0020113C: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_00201141: ;
    ecx = MEM32(ebp + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    ebx = ecx + eax;
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00201152u); RECOMP_ABI_CALL(0x001F268Cu, sub_001F268C); /* call 0x001F268C */

loc_00201152: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020115D; /* jne: not equal / not zero */

loc_00201156: ;
    ebx = 0x8015000Du;
    goto loc_00201129;

loc_0020115D: ;
    eax = MEM32(ebx);
    ecx = MEM32(ebp + -4);
    edi = esi + 0x1A0;
    MEM32(edi) = eax;
    eax = MEM32(ebx + 4);
    MEM32(edi + 4) = eax;
    eax = esi + 0x1A8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020117Cu); RECOMP_ABI_CALL(0x001E52C5u, sub_001E52C5); /* call 0x001E52C5 */

loc_0020117C: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00201129; /* jl: less (signed <) */

loc_00201182: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0xAA6F90);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00201193u); RECOMP_ABI_CALL(0x0021111Du, sub_0021111D); /* call 0x0021111D */

loc_00201193: ;
    eax = esi + 0x1B0;
    MEM32(esi + 0x174) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(esi + 0x16C) = edi;
    MEM32(esi + 0x170) = 0x10;
    MEM32(esi + 0x178) = 0x200;
    MEM32(eax) = esi;
    goto loc_00201138;

}

/**
 * sub_002011C3
 * Original: 0x002011C3 - 0x002012B2 (239 bytes, 75 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002011C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002011C3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002011D4; /* jne: not equal / not zero */

loc_002011CD: ;
    eax = 0x80150005u;
    goto loc_0020121B;

loc_002011D4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2042);
    PUSH32(esp, 0x3D0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002011E6u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_002011E6: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002011F5; /* jne: not equal / not zero */

loc_002011EC: ;
    MEM32(ebp + 8) = 0x8007000Eu;
    goto loc_00201217;

loc_002011F5: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002011FDu); RECOMP_ABI_CALL(0x001EC982u, sub_001EC982); /* call 0x001EC982 */

loc_002011FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00201220; /* jne: not equal / not zero */

loc_00201201: ;
    MEM32(ebp + 8) = 0x80150002u;

loc_00201208: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00201210u); RECOMP_ABI_CALL(0x002110A8u, sub_002110A8); /* call 0x002110A8 */

loc_00201210: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00201216: ;
    POP32(esp, edi);

loc_00201217: ;
    eax = MEM32(ebp + 8);
    POP32(esp, esi);

loc_0020121B: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_00201220: ;
    ecx = MEM32(ebp + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edi = esi + 0x1A0;
    MEM32(edi) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edi + 4) = ecx;
    ecx = MEM32(edi);
    ecx = ecx | MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_00201248; /* jne: not equal / not zero */

loc_0020123F: ;
    MEM32(ebp + 8) = 0x80150003u;
    goto loc_00201208;

loc_00201248: ;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00201250u); RECOMP_ABI_CALL(0x001F268Cu, sub_001F268C); /* call 0x001F268C */

loc_00201250: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020125D; /* jne: not equal / not zero */

loc_00201254: ;
    MEM32(ebp + 8) = 0x8015000Du;
    goto loc_00201208;

loc_0020125D: ;
    eax = esi + 0x1A8;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020126Bu); RECOMP_ABI_CALL(0x001E52C5u, sub_001E52C5); /* call 0x001E52C5 */

loc_0020126B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00201208; /* jl: less (signed <) */

loc_00201272: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebx;
    PUSH32(esp, 0xAA6FA4);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00201282u); RECOMP_ABI_CALL(0x0021111Du, sub_0021111D); /* call 0x0021111D */

loc_00201282: ;
    eax = esi + 0x1B0;
    MEM32(esi + 0x174) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(esi + 0x16C) = edi;
    MEM32(esi + 0x170) = 0x10;
    MEM32(esi + 0x178) = 0x220;
    MEM32(eax) = esi;
    goto loc_00201216;

}

/**
 * sub_002012B2
 * Original: 0x002012B2 - 0x002012EA (56 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002012B2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002012B2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002012BD; /* jne: not equal / not zero */

loc_002012B6: ;
    eax = 0x80150005u;
    goto loc_002012E7;

loc_002012BD: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax + 0x168)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x168), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002012E1; /* jl: less (signed <) */

loc_002012CA: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002012E0; /* je: equal / zero */

loc_002012D3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    POP32(esp, ecx);
    esi = eax + 0x1B0;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    POP32(esp, esi);

loc_002012E0: ;
    POP32(esp, edi);

loc_002012E1: ;
    eax = MEM32(eax + 0x168);

loc_002012E7: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002012EA
 * Original: 0x002012EA - 0x00201372 (136 bytes, 43 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002012EA(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002012EA: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    ecx = MEM32(esp + 8);
    MEM32(ecx + 4) = edx;
    edx = ZX8(MEM8(eax + 4));
    MEM32(ecx + 8) = edx;
    SET_LO8(edx, MEM8(eax + 5));
    MEM8(ecx + 0x1C) = LO8(edx);
    SET_LO16(edx, (uint32_t)(int32_t)SMEM8(eax + 6));
    MEM16(ecx + 0xC) = LO16(edx);
    SET_LO16(edx, (uint32_t)(int32_t)SMEM8(eax + 7));
    MEM16(ecx + 0xE) = LO16(edx);
    SET_LO16(edx, (uint32_t)(int32_t)SMEM8(eax + 8));
    MEM16(ecx + 0x10) = LO16(edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(eax + 0xB));
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x18) = edx;
    edx = MEM32(eax + 9);
    edx = ~edx;
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 9);
    edx = edx >> 0x13;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(eax + 9);
    edx = edx >> 0xD;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 9);
    edx = edx >> 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x28) = edx;
    edx = MEM32(eax + 9);
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x2C) = edx;
    eax = MEM32(eax + 9);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x24) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00201372
 * Original: 0x00201372 - 0x002013CD (91 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00201372(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00201372: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 0x168)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x168), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002013B9; /* jl: less (signed <) */

loc_00201380: ;
    eax = esi + 0x400;
    PUSH32(esp, eax);
    eax = esi + 0x1E3;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00201393u); RECOMP_ABI_CALL(0x002012EAu, sub_002012EA); /* call 0x002012EA */

loc_00201393: ;
    _fa = (uint32_t)(MEM8(esi + 0x1DA)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1DA), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002013AF; /* jbe: below or equal (unsigned <=) */

loc_0020139C: ;
    eax = esi + 0x430;
    PUSH32(esp, eax);
    eax = esi + 0x1F0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002013AFu); RECOMP_ABI_CALL(0x002012EAu, sub_002012EA); /* call 0x002012EA */

loc_002013AF: ;
    MEM32(esi + 0x168) = 0x1500F0;

loc_002013B9: ;
    eax = MEM32(esi + 0x168);
    MEM32(esi + 0x164) = 3;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00201437
 * Original: 0x00201437 - 0x002014E1 (170 bytes, 51 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00201437(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00201437: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020144C; /* jne: not equal / not zero */

loc_00201442: ;
    eax = 0x80150005u;
    goto loc_002014DC;

loc_0020144C: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x8061;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F8);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00201464u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_00201464: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00201473; /* jne: not equal / not zero */

loc_0020146A: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    goto loc_002014D7;

loc_00201473: ;
    SET_LO8(eax, MEM8(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(esi + 0x180) = edi;
    edi = esi + 0x1A0;
    MEM8(edi) = LO8(eax);
    eax = esi + 0x1A3;
    PUSH32(esp, eax);
    eax = esi + 0x1A1;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020149Cu); RECOMP_ABI_CALL(0x002001ADu, sub_002001AD); /* call 0x002001AD */

loc_0020149C: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = ebx;
    PUSH32(esp, 0xAA6FE0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002014ACu); RECOMP_ABI_CALL(0x0021111Du, sub_0021111D); /* call 0x0021111D */

loc_002014AC: ;
    eax = esi + 0x1EE;
    MEM32(esi + 0x174) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(esi + 0x16C) = edi;
    MEM32(esi + 0x170) = 0x4E;
    MEM32(esi + 0x178) = 0x208;
    MEM32(eax) = esi;

loc_002014D7: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);

loc_002014DC: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00201547
 * Original: 0x00201547 - 0x00201614 (205 bytes, 63 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00201547(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00201547: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 0x168)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x168), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002015FF; /* jl: less (signed <) */

loc_0020155F: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x41C);
    SET_LO16(ecx, MEM16(ebx));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(edi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002015F4; /* jbe: below or equal (unsigned <=) */

loc_00201572: ;
    ecx = ZX16(LO16(ecx));
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x420);
    ecx = ecx + ecx * 2;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xC24) = esi;
    _fa = (uint32_t)(MEM16(ebx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx), LO16(edi) (16-bit) */
    edx = ebx + 0xC;
    MEM32(ebp + -8) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_002015E7; /* jbe: below or equal (unsigned <=) */

loc_00201597: ;
    _fb = (uint32_t)(0x424) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x424;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = eax;
    goto loc_002015A3;

loc_002015A1: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002015A3: ;
    SET_LO16(eax, MEM16(edx));
    ecx = MEM32(ebp + -4);
    MEM16(ebp + -12) = LO16(eax);
    eax = edx + 4;
    MEM32(ecx) = eax;
    _fa = (uint32_t)(MEM32(eax + 0x26)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x26), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002015BF; /* jbe: below or equal (unsigned <=) */

loc_002015B7: ;
    ecx = eax + 0x2E;
    MEM32(eax + 0x2A) = ecx;
    goto loc_002015C2;

loc_002015BF: ;
    MEM32(eax + 0x2A) = edi;

loc_002015C2: ;
    edi = ZX16(MEM16(ebp + -12));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002015CFu); RECOMP_ABI_CALL(0x002012EAu, sub_002012EA); /* call 0x002012EA */

loc_002015CF: ;
    eax = ZX16(MEM16(ebx));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    edx = edi + 0xD;
    if (CMP_B(_fa, _fb)) goto loc_002015A1; /* jb: below (unsigned <) */

loc_002015E4: ;
    eax = MEM32(ebp + 8);

loc_002015E7: ;
    MEM32(eax + 0x168) = 0x1500F1;
    POP32(esp, esi);
    goto loc_002015FE;

loc_002015F4: ;
    MEM32(eax + 0x168) = 0x1500F0;

loc_002015FE: ;
    POP32(esp, ebx);

loc_002015FF: ;
    MEM32(eax + 0x164) = 3;
    eax = MEM32(eax + 0x168);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00201614
 * Original: 0x00201614 - 0x00201692 (126 bytes, 43 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00201614(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00201614: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00201622; /* jne: not equal / not zero */

loc_0020161B: ;
    eax = 0x80150005u;
    goto loc_0020168E;

loc_00201622: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x168);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1500F0 (32-bit) */
    edx = MEM32(eax + 0x41C);
    if (CMP_EQ(_fa, _fb)) goto loc_00201641; /* je: equal / zero */

loc_00201639: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1500F1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00201688; /* jne: not equal / not zero */

loc_00201641: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0020165C; /* je: equal / zero */

loc_00201649: ;
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00201654; /* jne: not equal / not zero */

loc_0020164F: ;
    MEM32(ecx) = MEM32(ecx) & 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0020165C;

loc_00201654: ;
    esi = eax + 0x424;
    MEM32(ecx) = esi;

loc_0020165C: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020166B; /* je: equal / zero */

loc_00201663: ;
    esi = MEM32(eax + 0xC24);
    MEM32(ecx) = esi;

loc_0020166B: ;
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00201677; /* je: equal / zero */

loc_00201672: ;
    esi = ZX16(MEM16(edx));
    MEM32(ecx) = esi;

loc_00201677: ;
    ecx = MEM32(ebp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00201688; /* je: equal / zero */

loc_0020167F: ;
    edx = ZX8(MEM8(edx + 2));
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = edx;

loc_00201688: ;
    eax = MEM32(eax + 0x168);

loc_0020168E: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00201692
 * Original: 0x00201692 - 0x002016C9 (55 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00201692(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00201692: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002016A0u); RECOMP_ABI_CALL(0x000A9E16u, sub_000A9E16); /* call 0x000A9E16 */

loc_002016A0: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10495A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10495A0)) >> 32) & 1);
    eax = eax + 0x10495A0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x1312D00);
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0xFE40A38Du) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002016BFu); RECOMP_ABI_CALL(0x00152B30u, sub_00152B30); /* call 0x00152B30 */

loc_002016BF: ;
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 0x60) = eax;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}
