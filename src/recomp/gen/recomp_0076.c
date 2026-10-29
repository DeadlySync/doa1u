/**
 * DOAU1 - Recompiled code chunk 76
 * Functions: 250 (0x001F91A7 - 0x001FC2A1)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001F91A7
 * Original: 0x001F91A7 - 0x001F92AB (260 bytes, 97 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F91A7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F91A7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x18);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -12) = esi;
    MEM32(ebp + -16) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001F92A2; /* je: equal / zero */

loc_001F91CB: ;
    PUSH32(esp, MEM32(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F91D2u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F91D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001F92A2; /* je: equal / zero */

loc_001F91DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F9223; /* jne: not equal / not zero */

loc_001F91E4: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, esi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x18);
    PUSH32(esp, MEM32(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F9203u); RECOMP_ABI_CALL(0x001FF5DAu, sub_001FF5DA); /* call 0x001FF5DA */

loc_001F9203: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), esi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001F9214; /* je: equal / zero */

loc_001F920B: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0xC8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9223; /* je: equal / zero */

loc_001F9214: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F9219u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_001F9219: ;
    MEM32(ebx + 0x34) = eax;
    MEM32(ebp + -4) = 0x80150007u;

loc_001F9223: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F9269; /* jl: less (signed <) */

loc_001F9228: ;
    eax = MEM32(ebx + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edx = MEM32(ebp + -12);
    if (CMP_EQ(_fa, _fb)) goto loc_001F9269; /* je: equal / zero */

loc_001F9232: ;
    ecx = MEM32(edx + 0x28);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(edx + 0x2C);
    PUSH32(esp, edi);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(edx + 0x30);
    MEM32(eax + 0x14) = ecx;
    PUSH32(esp, 9);
    POP32(esp, ecx);
    esi = edx + 0x34;
    edi = eax + 0x18;
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
    ecx = MEM32(edx + 0x58);
    MEM32(eax + 0x3C) = ecx;
    ecx = MEM32(edx + 0x5C);
    MEM32(eax + 0x40) = ecx;
    esi = edx + 0x60;
    edi = eax + 0x44;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);

loc_001F9269: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F92A2; /* je: equal / zero */

loc_001F9270: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9282; /* je: equal / zero */

loc_001F9277: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F9282u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F9282: ;
    eax = MEM32(ebx + 0x18);
    PUSH32(esp, MEM32(eax));
    ecx = MEM32(ebp + -8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F928Fu); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F928F: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0x8021);
    PUSH32(esp, MEM32(ebx + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F929Fu); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F929F: ;
    MEM32(ebx + 0x18) = esi;

loc_001F92A2: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F92AB
 * Original: 0x001F92AB - 0x001F92B6 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F92AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F92AB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F92B6(); return; } /* jne: not equal / not zero */

loc_001F92AF: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001F92CB(); return; /* tail jmp 0x001F92CB */

}

/**
 * sub_001F92B6
 * Original: 0x001F92B6 - 0x001F92CB (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001F92B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F92B6: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(eax + 8));
    MEM32(eax + 0x10) = 6;
    PUSH32(esp, 0x001F92C9u); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001F92C9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001F92CB(); return; /* fallthrough 0x001F92CB */

}

/**
 * sub_001F92CB
 * Original: 0x001F92CB - 0x001F92CE (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F92CB(void)
{

loc_001F92CB: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F92CE
 * Original: 0x001F92CE - 0x001F92DA (12 bytes, 4 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F92CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F92CE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F92DA(); return; } /* jne: not equal / not zero */

loc_001F92D2: ;
    eax = 0x80150005u;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001F92DA
 * Original: 0x001F92DA - 0x001F92DF (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F92DA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F92DA: ;
    g_seh_ebp = ebp; sub_001F8E54(); return; /* tail jmp 0x001F8E54 */

}

/**
 * sub_001F92DF
 * Original: 0x001F92DF - 0x001F92F9 (26 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F92DF(void)
{

loc_001F92DF: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x001F92F6u); RECOMP_ABI_CALL(0x001EBDA2u, sub_001EBDA2); /* call 0x001EBDA2 */

loc_001F92F6: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001F92F9
 * Original: 0x001F92F9 - 0x001F9315 (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F92F9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F92F9: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    _fb = (uint32_t)(0x14C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(ebp + 0x68) = ecx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F9315(); return; } /* jne: not equal / not zero */

loc_001F930E: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001F9376(); return; /* tail jmp 0x001F9376 */

}

/**
 * sub_001F9315
 * Original: 0x001F9315 - 0x001F9341 (44 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9315(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9315: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x7C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x27);
    POP32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx;
    PUSH32(esp, esi);
    MEM32(ebp + 0x6C) = esi;
    MEM32(ebp + 0x70) = esi;
    MEM32(ebp + 0x64) = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x001F9335u); RECOMP_ABI_CALL(0x000AD49Bu, sub_000AD49B); /* call 0x000AD49B */

loc_001F9335: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(ebp + 0x7C) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F937E(); return; } /* jne: not equal / not zero */

loc_001F933C: ;
    esi = 0x80004005u;

    g_seh_ebp = ebp; sub_001F9341(); return; /* fallthrough 0x001F9341 */

}

/**
 * sub_001F9341
 * Original: 0x001F9341 - 0x001F9376 (53 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9341(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9341: ;
    edi = MEM32(ebp + 0x68);
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9354; /* je: equal / zero */

loc_001F934A: ;
    PUSH32(esp, MEM32(ebp + 0x70));
    ecx = edi;
    PUSH32(esp, 0x001F9354u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F9354: ;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x6C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9364; /* je: equal / zero */

loc_001F935A: ;
    PUSH32(esp, MEM32(ebp + 0x6C));
    ecx = edi;
    PUSH32(esp, 0x001F9364u); RECOMP_ABI_CALL(0x0020981Fu, sub_0020981F); /* call 0x0020981F */

loc_001F9364: ;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x7C), 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001F9374; /* je: equal / zero */

loc_001F936C: ;
    PUSH32(esp, MEM32(ebp + 0x7C));
    PUSH32(esp, 0x001F9374u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_001F9374: ;
    eax = esi;

    g_seh_ebp = ebp; sub_001F9376(); return; /* fallthrough 0x001F9376 */

}

/**
 * sub_001F9344
 * Original: 0x001F9344 - 0x001F9376 (50 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9344(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9344: ;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9354; /* je: equal / zero */

loc_001F934A: ;
    PUSH32(esp, MEM32(ebp + 0x70));
    ecx = edi;
    PUSH32(esp, 0x001F9354u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F9354: ;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x6C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9364; /* je: equal / zero */

loc_001F935A: ;
    PUSH32(esp, MEM32(ebp + 0x6C));
    ecx = edi;
    PUSH32(esp, 0x001F9364u); RECOMP_ABI_CALL(0x0020981Fu, sub_0020981F); /* call 0x0020981F */

loc_001F9364: ;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x7C), 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001F9374; /* je: equal / zero */

loc_001F936C: ;
    PUSH32(esp, MEM32(ebp + 0x7C));
    PUSH32(esp, 0x001F9374u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_001F9374: ;
    eax = esi;

    g_seh_ebp = ebp; sub_001F9376(); return; /* fallthrough 0x001F9376 */

}

/**
 * sub_001F9376
 * Original: 0x001F9376 - 0x001F937E (8 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9376(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9376: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x74;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F937E
 * Original: 0x001F937E - 0x001F94EE (368 bytes, 125 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F937E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F937E: ;
    ecx = ebp + 0x70;
    PUSH32(esp, ecx);
    ecx = ebp + 0x6C;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x68);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    PUSH32(esp, 0x001F9393u); RECOMP_ABI_CALL(0x0020B219u, sub_0020B219); /* call 0x0020B219 */

loc_001F9393: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F9341(); return; } /* jl: less (signed <) */

loc_001F9399: ;
    PUSH32(esp, MEM32(ebp + 0x70));
    ecx = MEM32(ebp + 0x68);
    PUSH32(esp, 0x001F93A4u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F93A4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9399; /* je: equal / zero */

loc_001F93AA: ;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F9341(); return; } /* jl: less (signed <) */

loc_001F93AC: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + 0x48;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    PUSH32(esp, 0x48);
    eax = ebp + -216;
    MEM32(ebp + 0x50) = eax;
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -216;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(ebp + 0x68);
    eax = MEM32(edi + 4);
    MEM32(ebp + -216) = eax;
    eax = ebp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x6C));
    ecx = edi;
    PUSH32(esp, 0x001F93E6u); RECOMP_ABI_CALL(0x0020A673u, sub_0020A673); /* call 0x0020A673 */

loc_001F93E6: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F9344(); return; } /* jl: less (signed <) */

loc_001F93F0: ;
    PUSH32(esp, MEM32(ebp + 0x70));
    ecx = edi;
    PUSH32(esp, 0x001F93FAu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F93FA: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001F93F0; /* je: equal / zero */

loc_001F9400: ;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F9344(); return; } /* jl: less (signed <) */

loc_001F9406: ;
    eax = MEM32(ebp + -152);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001F9498; /* jne: not equal / not zero */

loc_001F9415: ;
    eax = ebp + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F941Eu); RECOMP_ABI_CALL(0x000A9E16u, sub_000A9E16); /* call 0x000A9E16 */

loc_001F941E: ;
    _fa = (uint32_t)(MEM32(ebp + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x48), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9480; /* je: equal / zero */

loc_001F9424: ;
    ecx = MEM32(ebp + 0x5C);
    edx = MEM32(ebp + -112);
    eax = MEM32(ebp + 0x60);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(ebp + -108)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001F9480; /* ja: above (unsigned >) */

loc_001F9437: ;
    if (CMP_B(_fa, _fb)) goto loc_001F9441; /* jb: below (unsigned <) */

loc_001F9439: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18711A00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x18711A00 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001F9480; /* jae: above or equal (unsigned >=) */

loc_001F9441: ;
    eax = MEM32(ebp + -208);
    PUSH32(esp, 0x15);
    POP32(esp, ecx);
    esi = ebp + -200;
    edi = ebx;
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM32(ebx + 0x58) = eax;
    eax = MEM32(ebp + -204);
    PUSH32(esp, 0xC);
    MEM32(ebx + 0x5C) = eax;
    eax = MEM32(ebp + -108);
    edi = ebx + 0x6C;
    POP32(esp, ecx);
    esi = ebp + -104;
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
    edi = MEM32(ebp + 0x68);
    MEM32(ebx + 0x64) = edx;
    MEM32(ebx + 0x68) = eax;
    MEM32(ebp + 0x64) = 1;

loc_001F9480: ;
    eax = ebp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x6C));
    ecx = edi;
    PUSH32(esp, 0x001F948Eu); RECOMP_ABI_CALL(0x0020A728u, sub_0020A728); /* call 0x0020A728 */

loc_001F948E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F9344(); return; } /* jl: less (signed <) */

loc_001F9498: ;
    PUSH32(esp, MEM32(ebp + 0x70));
    ecx = edi;
    PUSH32(esp, 0x001F94A2u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F94A2: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9498; /* je: equal / zero */

loc_001F94A8: ;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F9344(); return; } /* jl: less (signed <) */

loc_001F94AE: ;
    PUSH32(esp, MEM32(ebp + 0x70));
    ecx = edi;
    PUSH32(esp, MEM32(ebp + 0x6C));
    PUSH32(esp, 0x001F94BBu); RECOMP_ABI_CALL(0x0020A77Eu, sub_0020A77E); /* call 0x0020A77E */

loc_001F94BB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F9344(); return; } /* jl: less (signed <) */

loc_001F94C5: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001F94C9: ;
    PUSH32(esp, MEM32(ebp + 0x70));
    ecx = edi;
    PUSH32(esp, 0x001F94D3u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F94D3: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001F94C9; /* je: equal / zero */

loc_001F94D9: ;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F9344(); return; } /* jl: less (signed <) */

loc_001F94DF: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x64), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esi = eax;
    g_seh_ebp = ebp; sub_001F9344(); return; /* tail jmp 0x001F9344 */

}

/**
 * sub_001F9634
 * Original: 0x001F9634 - 0x001F9652 (30 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9634(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9634: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    PUSH32(esp, ebx);
    edi = ecx;
    PUSH32(esp, 0x001F9645u); RECOMP_ABI_CALL(0x0020C3C3u, sub_0020C3C3); /* call 0x0020C3C3 */

loc_001F9645: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F9652(); return; } /* jne: not equal / not zero */

loc_001F964B: ;
    eax = 0x8007000Eu;
    g_seh_ebp = ebp; sub_001F9680(); return; /* tail jmp 0x001F9680 */

}

/**
 * sub_001F9652
 * Original: 0x001F9652 - 0x001F9680 (46 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001F9652(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9652: ;
    eax = MEM32(esp + 0x10);
    MEM32(esi) = eax;
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xFFFFFFE0u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi + 0x14C8;
    MEM32(esi + 4) = ebx;
    ecx = MEM32(eax);
    MEM32(esi + 8) = ecx;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001F9678u); RECOMP_ABI_CALL(0x001E00BCu, sub_001E00BC); /* call 0x001E00BC */

loc_001F9678: ;
    eax = MEM32(esp + 0x18);
    MEM32(eax) = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001F9680(); return; /* fallthrough 0x001F9680 */

}

/**
 * sub_001F9680
 * Original: 0x001F9680 - 0x001F9686 (6 bytes, 4 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9680(void)
{

loc_001F9680: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F9686
 * Original: 0x001F9686 - 0x001F96A1 (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F9686(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F9686: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F96A1(); return; } /* jne: not equal / not zero */

loc_001F9695: ;
    MEM32(ebp + 0x14) = 6;
    g_seh_ebp = ebp; sub_001F9762(); return; /* tail jmp 0x001F9762 */

}

/**
 * sub_001F96A1
 * Original: 0x001F96A1 - 0x001F96B6 (21 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F96A1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F96A1: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, 0x8021);
    PUSH32(esp, 0x10);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F96B6(); return; } /* je: equal / zero */

loc_001F96AF: ;
    PUSH32(esp, 0x001F96B4u); RECOMP_ABI_CALL(0x0020C40Du, sub_0020C40D); /* call 0x0020C40D */

loc_001F96B4: ;
    g_seh_ebp = ebp; sub_001F96BB(); return; /* tail jmp 0x001F96BB */

}

/**
 * sub_001F96B6
 * Original: 0x001F96B6 - 0x001F96BB (5 bytes, 1 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F96B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F96B6: ;
    PUSH32(esp, 0x001F96BBu); RECOMP_ABI_CALL(0x0020C3C3u, sub_0020C3C3); /* call 0x0020C3C3 */

    g_seh_ebp = ebp; sub_001F96BB(); return; /* fallthrough 0x001F96BB */

}

/**
 * sub_001F96BB
 * Original: 0x001F96BB - 0x001F96CD (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F96BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F96BB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F96CD(); return; } /* jne: not equal / not zero */

loc_001F96C1: ;
    MEM32(ebp + 0x14) = 0x8007000Eu;
    g_seh_ebp = ebp; sub_001F9761(); return; /* tail jmp 0x001F9761 */

}

/**
 * sub_001F96CD
 * Original: 0x001F96CD - 0x001F9720 (83 bytes, 33 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F96CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F96CD: ;
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 8) = edi;
    PUSH32(esp, MEM32(ebx + 8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x7530);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebp + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, MEM32(eax * 4 + 0x2F7B2C));
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F9703u); RECOMP_ABI_CALL(0x001F8F80u, sub_001F8F80); /* call 0x001F8F80 */

loc_001F9703: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001F970Eu); RECOMP_ABI_CALL(0x001FFDC1u, sub_001FFDC1); /* call 0x001FFDC1 */

loc_001F970E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F9720(); return; } /* jl: less (signed <) */

loc_001F9715: ;
    eax = MEM32(ebx + 0x18);
    MEM32(esi + 4) = eax;
    MEM32(ebx + 0x18) = esi;
    g_seh_ebp = ebp; sub_001F9760(); return; /* tail jmp 0x001F9760 */

}

/**
 * sub_001F9720
 * Original: 0x001F9720 - 0x001F973A (26 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9720: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    ecx = MEM32(ebp + -4);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F973A(); return; } /* je: equal / zero */

loc_001F9729: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F972Fu); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001F972F: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001F9738u); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001F9738: ;
    g_seh_ebp = ebp; sub_001F9750(); return; /* tail jmp 0x001F9750 */

}

/**
 * sub_001F973A
 * Original: 0x001F973A - 0x001F9750 (22 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F973A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F973A: ;
    PUSH32(esp, 0x8021);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F9745u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F9745: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001F9750u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

    g_seh_ebp = ebp; sub_001F9750(); return; /* fallthrough 0x001F9750 */

}

/**
 * sub_001F9750
 * Original: 0x001F9750 - 0x001F9760 (16 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9750: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80072747u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0x80072747u (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F9760(); return; } /* jne: not equal / not zero */

loc_001F9759: ;
    MEM32(ebp + 0x14) = 0x80152006u;

    g_seh_ebp = ebp; sub_001F9760(); return; /* fallthrough 0x001F9760 */

}

/**
 * sub_001F9760
 * Original: 0x001F9760 - 0x001F9761 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9760: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001F9761(); return; /* fallthrough 0x001F9761 */

}

/**
 * sub_001F9761
 * Original: 0x001F9761 - 0x001F9762 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9761(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9761: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001F9762(); return; /* fallthrough 0x001F9762 */

}

/**
 * sub_001F9762
 * Original: 0x001F9762 - 0x001F976A (8 bytes, 4 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9762(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9762: ;
    eax = MEM32(ebp + 0x14);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001F976A
 * Original: 0x001F976A - 0x001F980D (163 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F976A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F976A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x128) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x128;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    ebx = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x48);
    POP32(esp, ecx);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = ebp + -296;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esi + 0x30);
    MEM32(ebp + -296) = eax;
    eax = MEM32(ebp + 8);
    eax = eax + eax * 8;
    ecx = MEM32(ebx + eax * 8 + 0x13A8);
    eax = MEM32(ebx + eax * 8 + 0x13AC);
    MEM32(ebp + -288) = ecx;
    PUSH32(esp, 0x15);
    MEM32(ebp + -284) = eax;
    POP32(esp, ecx);
    edi = ebp + -280;
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
    eax = ebp + -192;
    PUSH32(esp, eax);
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F97D2u); RECOMP_ABI_CALL(0x000A9E16u, sub_000A9E16); /* call 0x000A9E16 */

loc_001F97D2: ;
    eax = MEM32(ebx + 0xD0);
    PUSH32(esp, 4);
    ecx = ebp + -184;
    POP32(esp, edx);

loc_001F97E1: ;
    esi = eax;
    edi = ecx;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    if ((_fa != 0)) goto loc_001F97E1; /* jne: not equal / not zero */

loc_001F97F1: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F97FCu); RECOMP_ABI_CALL(0x000AD49Bu, sub_000AD49B); /* call 0x000AD49B */

loc_001F97FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F980D(); return; } /* jne: not equal / not zero */

loc_001F9803: ;
    esi = 0x80004005u;
    g_seh_ebp = ebp; sub_001F988E(); return; /* tail jmp 0x001F988E */

}

/**
 * sub_001F980D
 * Original: 0x001F980D - 0x001F988E (129 bytes, 52 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F980D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F980D: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    ecx = ebx;
    PUSH32(esp, 0x001F9821u); RECOMP_ABI_CALL(0x0020B219u, sub_0020B219); /* call 0x0020B219 */

loc_001F9821: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F988E(); return; } /* jl: less (signed <) */

loc_001F9827: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = ebx;
    PUSH32(esp, 0x001F9831u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F9831: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9827; /* je: equal / zero */

loc_001F9837: ;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F988E(); return; } /* jl: less (signed <) */

loc_001F9839: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    eax = ebp + -296;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = ebx;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x001F9850u); RECOMP_ABI_CALL(0x0020B316u, sub_0020B316); /* call 0x0020B316 */

loc_001F9850: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F988E(); return; } /* jl: less (signed <) */

loc_001F9856: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = ebx;
    PUSH32(esp, 0x001F9860u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F9860: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9856; /* je: equal / zero */

loc_001F9866: ;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F988E(); return; } /* jl: less (signed <) */

loc_001F9868: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = ebx;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x001F9875u); RECOMP_ABI_CALL(0x0020A77Eu, sub_0020A77E); /* call 0x0020A77E */

loc_001F9875: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F988E(); return; } /* jl: less (signed <) */

loc_001F987B: ;
    MEM32(ebp + -8) = edi;

loc_001F987E: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = ebx;
    PUSH32(esp, 0x001F9888u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F9888: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F987E; /* je: equal / zero */

    g_seh_ebp = ebp; sub_001F988E(); return; /* fallthrough 0x001F988E */

}

/**
 * sub_001F988E
 * Original: 0x001F988E - 0x001F98C2 (52 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F988E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F988E: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F989D; /* je: equal / zero */

loc_001F9893: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = ebx;
    PUSH32(esp, 0x001F989Du); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F989D: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F98AC; /* je: equal / zero */

loc_001F98A2: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = ebx;
    PUSH32(esp, 0x001F98ACu); RECOMP_ABI_CALL(0x0020981Fu, sub_0020981F); /* call 0x0020981F */

loc_001F98AC: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F98B9; /* je: equal / zero */

loc_001F98B1: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x001F98B9u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_001F98B9: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F98C2
 * Original: 0x001F98C2 - 0x001F99E0 (286 bytes, 107 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F98C2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F98C2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = esi + 0x10;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -12) = ebx;
    MEM32(ebp + -16) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_001F9930; /* jne: not equal / not zero */

loc_001F98E3: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9930; /* je: equal / zero */

loc_001F98EA: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001F9930; /* jbe: below or equal (unsigned <=) */

loc_001F98F1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esi + 8));
    eax = eax + eax * 4;
    PUSH32(esp, 0x7530);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(0x2F7B2C));
    MEM32(ebp + -12) = 0x100;
    PUSH32(esp, 0x400);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F9922u); RECOMP_ABI_CALL(0x001F8F54u, sub_001F8F54); /* call 0x001F8F54 */

loc_001F9922: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F992Du); RECOMP_ABI_CALL(0x001FFDC1u, sub_001FFDC1); /* call 0x001FFDC1 */

loc_001F992D: ;
    MEM32(ebp + -4) = eax;

loc_001F9930: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9991; /* je: equal / zero */

loc_001F9936: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F993Fu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F993F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001F9991; /* jne: not equal / not zero */

loc_001F9949: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, ebx);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F995Cu); RECOMP_ABI_CALL(0x001FF5DAu, sub_001FF5DA); /* call 0x001FF5DA */

loc_001F995C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001F9975; /* jl: less (signed <) */

loc_001F9963: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0xC8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9975; /* je: equal / zero */

loc_001F996C: ;
    MEM32(ebp + -4) = 0x80004005u;
    goto loc_001F99D6;

loc_001F9975: ;
    PUSH32(esp, MEM32(edi));
    ecx = MEM32(ebp + -8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F997Fu); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F997F: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0x20);
    PUSH32(esp, MEM32(esi + 0x14));
    MEM32(edi) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F998Eu); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F998E: ;
    MEM32(esi + 0x14) = ebx;

loc_001F9991: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F99D6; /* jl: less (signed <) */

loc_001F9996: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F99BE; /* je: equal / zero */

loc_001F999D: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F99A6u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F99A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001F99BE; /* jne: not equal / not zero */

loc_001F99B0: ;
    PUSH32(esp, MEM32(esi + 0xC));
    ecx = MEM32(ebp + -8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F99BBu); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F99BB: ;
    MEM32(esi + 0xC) = ebx;

loc_001F99BE: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F99D6; /* jl: less (signed <) */

loc_001F99C3: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F99D3; /* jne: not equal / not zero */

loc_001F99C7: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), ebx (32-bit) */
    MEM32(ebp + -4) = 0x1500F0;
    if (CMP_EQ(_fa, _fb)) goto loc_001F99D6; /* je: equal / zero */

loc_001F99D3: ;
    MEM32(ebp + -4) = ebx;

loc_001F99D6: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F99E0
 * Original: 0x001F99E0 - 0x001F9A30 (80 bytes, 32 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F99E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F99E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001F99F9; /* je: equal / zero */

loc_001F99EF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F99F5u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F99F5: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001F99F9: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9A0E; /* je: equal / zero */

loc_001F9A00: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001F9A0Au); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F9A0A: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001F9A0E: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9A21; /* je: equal / zero */

loc_001F9A15: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001F9A1Du); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F9A1D: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001F9A21: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001F9A2Bu); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F9A2B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F9A30
 * Original: 0x001F9A30 - 0x001F9A6B (59 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9A30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F9A67; /* jne: not equal / not zero */

loc_001F9A3B: ;
    eax = ecx + 0x14D4;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F9A6B(); return; } /* jne: not equal / not zero */

loc_001F9A46: ;
    edx = ecx + 0x14D8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x001F9A5Cu); RECOMP_ABI_CALL(0x0020B219u, sub_0020B219); /* call 0x0020B219 */

loc_001F9A5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F9A6E(); return; } /* jl: less (signed <) */

loc_001F9A60: ;
    MEM32(esi + 0x58) = 1;

loc_001F9A67: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001F9A6E(); return; /* tail jmp 0x001F9A6E */

}

/**
 * sub_001F9A6B
 * Original: 0x001F9A6B - 0x001F9A6E (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9A6B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9A6B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_001F9A6E(); return; /* fallthrough 0x001F9A6E */

}

/**
 * sub_001F9A6E
 * Original: 0x001F9A6E - 0x001F9A72 (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9A6E(void)
{

loc_001F9A6E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F9A72
 * Original: 0x001F9A72 - 0x001F9A98 (38 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9A72(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F9A72: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edx + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x58), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9A95; /* je: equal / zero */

loc_001F9A7D: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ecx + 0x14D8));
    esi = ecx + 0x14D4;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x001F9A91u); RECOMP_ABI_CALL(0x0020A77Eu, sub_0020A77E); /* call 0x0020A77E */

loc_001F9A91: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);

loc_001F9A95: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F9A98
 * Original: 0x001F9A98 - 0x001F9B2C (148 bytes, 56 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9A98(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9A98: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x58), ebp (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001F9B26; /* je: equal / zero */

loc_001F9AAA: ;
    MEM32(eax + 0x58) = ebp;
    eax = MEM32(esi + 0x14D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9AE9; /* je: equal / zero */

loc_001F9AB7: ;
    ecx = MEM32(esi + 0x14D8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9AE9; /* je: equal / zero */

loc_001F9AC1: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001F9ACAu); RECOMP_ABI_CALL(0x0020A77Eu, sub_0020A77E); /* call 0x0020A77E */

loc_001F9ACA: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F9AE9; /* jl: less (signed <) */

loc_001F9AD0: ;
    MEM32(esi + 0x14D4) = ebp;

loc_001F9AD6: ;
    PUSH32(esp, MEM32(esi + 0x14D8));
    ecx = esi;
    PUSH32(esp, 0x001F9AE3u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F9AE3: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9AD6; /* je: equal / zero */

loc_001F9AE9: ;
    eax = MEM32(esi + 0x14D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9B01; /* je: equal / zero */

loc_001F9AF3: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001F9AFBu); RECOMP_ABI_CALL(0x0020981Fu, sub_0020981F); /* call 0x0020981F */

loc_001F9AFB: ;
    MEM32(esi + 0x14D4) = ebp;

loc_001F9B01: ;
    PUSH32(esp, edi);
    edi = esi + 0x14D8;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9B18; /* je: equal / zero */

loc_001F9B0E: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001F9B16u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F9B16: ;
    MEM32(edi) = ebp;

loc_001F9B18: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    POP32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_001F9B26; /* jge: greater or equal (signed >=) */

loc_001F9B1D: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x001F9B26u); RECOMP_ABI_CALL(0x00209778u, sub_00209778); /* call 0x00209778 */

loc_001F9B26: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F9B2C
 * Original: 0x001F9B2C - 0x001F9B67 (59 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9B2C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9B2C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F9B63; /* jne: not equal / not zero */

loc_001F9B37: ;
    eax = ecx + 0x14DC;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F9B67(); return; } /* jne: not equal / not zero */

loc_001F9B42: ;
    edx = ecx + 0x14E0;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x001F9B58u); RECOMP_ABI_CALL(0x0020B219u, sub_0020B219); /* call 0x0020B219 */

loc_001F9B58: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001F9B6A(); return; } /* jl: less (signed <) */

loc_001F9B5C: ;
    MEM32(esi + 0x5C) = 1;

loc_001F9B63: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001F9B6A(); return; /* tail jmp 0x001F9B6A */

}

/**
 * sub_001F9B67
 * Original: 0x001F9B67 - 0x001F9B6A (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9B67(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9B67: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_001F9B6A(); return; /* fallthrough 0x001F9B6A */

}

/**
 * sub_001F9B6A
 * Original: 0x001F9B6A - 0x001F9B6E (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9B6A(void)
{

loc_001F9B6A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F9B6E
 * Original: 0x001F9B6E - 0x001F9B94 (38 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9B6E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F9B6E: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edx + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x5C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9B91; /* je: equal / zero */

loc_001F9B79: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ecx + 0x14E0));
    esi = ecx + 0x14DC;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x001F9B8Du); RECOMP_ABI_CALL(0x0020A77Eu, sub_0020A77E); /* call 0x0020A77E */

loc_001F9B8D: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);

loc_001F9B91: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F9B94
 * Original: 0x001F9B94 - 0x001F9C28 (148 bytes, 56 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9B94(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9B94: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x5C), ebp (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001F9C22; /* je: equal / zero */

loc_001F9BA6: ;
    MEM32(eax + 0x5C) = ebp;
    eax = MEM32(esi + 0x14DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9BE5; /* je: equal / zero */

loc_001F9BB3: ;
    ecx = MEM32(esi + 0x14E0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9BE5; /* je: equal / zero */

loc_001F9BBD: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001F9BC6u); RECOMP_ABI_CALL(0x0020A77Eu, sub_0020A77E); /* call 0x0020A77E */

loc_001F9BC6: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F9BE5; /* jl: less (signed <) */

loc_001F9BCC: ;
    MEM32(esi + 0x14DC) = ebp;

loc_001F9BD2: ;
    PUSH32(esp, MEM32(esi + 0x14E0));
    ecx = esi;
    PUSH32(esp, 0x001F9BDFu); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F9BDF: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9BD2; /* je: equal / zero */

loc_001F9BE5: ;
    eax = MEM32(esi + 0x14DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9BFD; /* je: equal / zero */

loc_001F9BEF: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001F9BF7u); RECOMP_ABI_CALL(0x0020981Fu, sub_0020981F); /* call 0x0020981F */

loc_001F9BF7: ;
    MEM32(esi + 0x14DC) = ebp;

loc_001F9BFD: ;
    PUSH32(esp, edi);
    edi = esi + 0x14E0;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9C14; /* je: equal / zero */

loc_001F9C0A: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001F9C12u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F9C12: ;
    MEM32(edi) = ebp;

loc_001F9C14: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    POP32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_001F9C22; /* jge: greater or equal (signed >=) */

loc_001F9C19: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x001F9C22u); RECOMP_ABI_CALL(0x00209778u, sub_00209778); /* call 0x00209778 */

loc_001F9C22: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F9C28
 * Original: 0x001F9C28 - 0x001F9D0F (231 bytes, 86 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F9C28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F9C28: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -12) = ebx;
    MEM32(ebp + -16) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_001F9D06; /* je: equal / zero */

loc_001F9C4C: ;
    PUSH32(esp, edi);

loc_001F9C4D: ;
    PUSH32(esp, MEM32(esi));
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F9C57u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001F9C57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001F9C69; /* jne: not equal / not zero */

loc_001F9C5E: ;
    MEM32(ebp + -16) = esi;
    esi = MEM32(esi + 4);
    goto loc_001F9CFD;

loc_001F9C69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F9C9A; /* jne: not equal / not zero */

loc_001F9C70: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F9C83u); RECOMP_ABI_CALL(0x001FF5DAu, sub_001FF5DA); /* call 0x001FF5DA */

loc_001F9C83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001F9C9A; /* jl: less (signed <) */

loc_001F9C8A: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0xC8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9C9A; /* je: equal / zero */

loc_001F9C93: ;
    MEM32(ebp + -8) = 0x80004005u;

loc_001F9C9A: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edi = esi;
    esi = MEM32(esi + 4);
    if (CMP_NE(_fa, _fb)) goto loc_001F9CAE; /* jne: not equal / not zero */

loc_001F9CA6: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x18) = esi;
    goto loc_001F9CB1;

loc_001F9CAE: ;
    MEM32(eax + 4) = esi;

loc_001F9CB1: ;
    PUSH32(esp, MEM32(edi));
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F9CBBu); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F9CBB: ;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), ebx (32-bit) */
    eax = MEM32(edi + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_001F9CDB; /* je: equal / zero */

loc_001F9CC3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9CD0; /* je: equal / zero */

loc_001F9CC7: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F9CD0u); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001F9CD0: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F9CD9u); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001F9CD9: ;
    goto loc_001F9CF8;

loc_001F9CDB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9CEA; /* je: equal / zero */

loc_001F9CDF: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F9CEAu); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F9CEA: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x8021);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F9CF8u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F9CF8: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F9D05; /* jl: less (signed <) */

loc_001F9CFD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F9C4D; /* jne: not equal / not zero */

loc_001F9D05: ;
    POP32(esp, edi);

loc_001F9D06: ;
    eax = MEM32(ebp + -8);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F9D0F
 * Original: 0x001F9D0F - 0x001F9D28 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9D0F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9D0F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F9E00(); return; } /* je: equal / zero */

loc_001F9D22: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F9D7C(); return; } /* je: equal / zero */

loc_001F9D27: ;
    PUSH32(esp, edi);

    g_seh_ebp = ebp; sub_001F9D28(); return; /* fallthrough 0x001F9D28 */

}

/**
 * sub_001F9D28
 * Original: 0x001F9D28 - 0x001F9D5B (51 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9D28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9D28: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, MEM32(eax));
    ecx = ebx;
    PUSH32(esp, 0x001F9D34u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F9D34: ;
    edi = MEM32(esi + 0x18);
    eax = MEM32(edi + 4);
    MEM32(esi + 0x18) = eax;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), ebp (32-bit) */
    eax = MEM32(edi + 8);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F9D5B(); return; } /* je: equal / zero */

loc_001F9D45: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9D51; /* je: equal / zero */

loc_001F9D49: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001F9D51u); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001F9D51: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001F9D59u); RECOMP_ABI_CALL(0x0020C435u, sub_0020C435); /* call 0x0020C435 */

loc_001F9D59: ;
    g_seh_ebp = ebp; sub_001F9D76(); return; /* tail jmp 0x001F9D76 */

}

/**
 * sub_001F9D5B
 * Original: 0x001F9D5B - 0x001F9D76 (27 bytes, 10 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9D5B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9D5B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9D69; /* je: equal / zero */

loc_001F9D5F: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001F9D69u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F9D69: ;
    PUSH32(esp, 0x8021);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001F9D76u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

    g_seh_ebp = ebp; sub_001F9D76(); return; /* fallthrough 0x001F9D76 */

}

/**
 * sub_001F9D76
 * Original: 0x001F9D76 - 0x001F9D7C (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9D76(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9D76: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F9D28(); return; } /* jne: not equal / not zero */

loc_001F9D7B: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001F9D7C(); return; /* fallthrough 0x001F9D7C */

}

/**
 * sub_001F9D7C
 * Original: 0x001F9D7C - 0x001F9E00 (132 bytes, 49 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9D7C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9D7C: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001F9D84u); RECOMP_ABI_CALL(0x001F9A98u, sub_001F9A98); /* call 0x001F9A98 */

loc_001F9D84: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001F9D8Cu); RECOMP_ABI_CALL(0x001F9B94u, sub_001F9B94); /* call 0x001F9B94 */

loc_001F9D8C: ;
    eax = MEM32(esi + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9D9E; /* je: equal / zero */

loc_001F9D93: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001F9D9Bu); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001F9D9B: ;
    MEM32(esi + 0x60) = ebp;

loc_001F9D9E: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9DB0; /* je: equal / zero */

loc_001F9DA5: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001F9DADu); RECOMP_ABI_CALL(0x0020C3FFu, sub_0020C3FF); /* call 0x0020C3FF */

loc_001F9DAD: ;
    MEM32(esi + 0x30) = ebp;

loc_001F9DB0: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9DC7; /* je: equal / zero */

loc_001F9DB7: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001F9DC1u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F9DC1: ;
    MEM32(esi + 0x40) = ebp;
    MEM32(esi + 0x44) = ebp;

loc_001F9DC7: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9DDE; /* je: equal / zero */

loc_001F9DCE: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001F9DD8u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F9DD8: ;
    MEM32(esi + 0x48) = ebp;
    MEM32(esi + 0x4C) = ebp;

loc_001F9DDE: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F9DF9; /* jne: not equal / not zero */

loc_001F9DE4: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9DF9; /* je: equal / zero */

loc_001F9DEB: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x14));
    ecx = ebx;
    PUSH32(esp, 0x001F9DF6u); RECOMP_ABI_CALL(0x001DFC7Fu, sub_001DFC7F); /* call 0x001DFC7F */

loc_001F9DF6: ;
    MEM32(esi + 0x54) = ebp;

loc_001F9DF9: ;
    MEM32(esi + 0x10) = 0xC;

    g_seh_ebp = ebp; sub_001F9E00(); return; /* fallthrough 0x001F9E00 */

}

/**
 * sub_001F9E00
 * Original: 0x001F9E00 - 0x001F9E06 (6 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9E00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9E00: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F9E06
 * Original: 0x001F9E06 - 0x001F9E3C (54 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9E06(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F9E06: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = esi + 0x14CC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9E22; /* je: equal / zero */

loc_001F9E18: ;
    eax = esi + 0x14D0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F9E25; /* jne: not equal / not zero */

loc_001F9E22: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001F9E25: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001F9E2Du); RECOMP_ABI_CALL(0x001F9D0Fu, sub_001F9D0F); /* call 0x001F9D0F */

loc_001F9E2D: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001F9E37u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001F9E37: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F9E3C
 * Original: 0x001F9E3C - 0x001F9E54 (24 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9E3C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F9E3C: ;
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax + eax * 8;
    _fa = (uint32_t)(MEM32(ecx + eax * 8 + 0x13DC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 8 + 0x13DC), edx (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F9E54
 * Original: 0x001F9E54 - 0x001F9E85 (49 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9E54(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F9E54: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx + 0x13A8;
    PUSH32(esp, esi);

loc_001F9E5D: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F9E6E; /* jne: not equal / not zero */

loc_001F9E65: ;
    esi = MEM32(eax + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9E77; /* je: equal / zero */

loc_001F9E6E: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F9E5D; /* jb: below (unsigned <) */

loc_001F9E77: ;
    eax = edx + edx * 8;
    eax = ecx + eax * 8 + 0x13A8;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F9E85
 * Original: 0x001F9E85 - 0x001F9EAA (37 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9E85(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F9E85: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x13A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x13A8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F9E8D: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F9E9E; /* jne: not equal / not zero */

loc_001F9E95: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9EA7; /* je: equal / zero */

loc_001F9E9E: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F9E8D; /* jb: below (unsigned <) */

loc_001F9EA7: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F9EAA
 * Original: 0x001F9EAA - 0x001F9ECA (32 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9EAA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9EAA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 0x13B0;
    PUSH32(esp, esi);

loc_001F9EB3: ;
    esi = MEM32(edx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F9ECA(); return; } /* je: equal / zero */

loc_001F9EBB: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x48;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F9EB3; /* jb: below (unsigned <) */

loc_001F9EC4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F9EC6
 * Original: 0x001F9EC6 - 0x001F9ECA (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9EC6(void)
{

loc_001F9EC6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F9ECA
 * Original: 0x001F9ECA - 0x001F9ED6 (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9ECA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9ECA: ;
    eax = eax + eax * 8;
    eax = ecx + eax * 8 + 0x13A8;
    g_seh_ebp = ebp; sub_001F9EC6(); return; /* tail jmp 0x001F9EC6 */

}

/**
 * sub_001F9ED6
 * Original: 0x001F9ED6 - 0x001F9F09 (51 bytes, 22 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9ED6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9ED6: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(edx + 0xC));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_001F9F02; /* jbe: below or equal (unsigned <=) */

loc_001F9EE6: ;
    ecx = edx + 0x30;

loc_001F9EE9: ;
    edi = MEM32(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F9EFA; /* jne: not equal / not zero */

loc_001F9EF1: ;
    edi = MEM32(ecx + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F9F09(); return; } /* je: equal / zero */

loc_001F9EFA: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x74;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F9EE9; /* jb: below (unsigned <) */

loc_001F9F02: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F9F04
 * Original: 0x001F9F04 - 0x001F9F09 (5 bytes, 3 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9F04(void)
{

loc_001F9F04: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F9F09
 * Original: 0x001F9F09 - 0x001F9F12 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9F09(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9F09: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    eax = eax + edx + 0x30;
    g_seh_ebp = ebp; sub_001F9F04(); return; /* tail jmp 0x001F9F04 */

}

/**
 * sub_001F9F12
 * Original: 0x001F9F12 - 0x001F9F48 (54 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9F12(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9F12: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xC), LO16(edi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001F9F40; /* jbe: below or equal (unsigned <=) */

loc_001F9F21: ;
    ebx = esi + 0x3C;

loc_001F9F24: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001F9F2Eu); RECOMP_ABI_CALL(0x001516FBu, sub_001516FB); /* call 0x001516FB */

loc_001F9F2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001F9F48(); return; } /* je: equal / zero */

loc_001F9F34: ;
    eax = ZX16(MEM16(esi + 0xC));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x74;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F9F24; /* jb: below (unsigned <) */

loc_001F9F40: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F9F42
 * Original: 0x001F9F42 - 0x001F9F48 (6 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9F42(void)
{

loc_001F9F42: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F9F48
 * Original: 0x001F9F48 - 0x001F9F51 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9F48(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9F48: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x74);
    eax = edi + esi + 0x30;
    g_seh_ebp = ebp; sub_001F9F42(); return; /* tail jmp 0x001F9F42 */

}

/**
 * sub_001F9F51
 * Original: 0x001F9F51 - 0x001F9F74 (35 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9F51(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9F51: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x14));
    edi = ecx;
    PUSH32(esp, 0x001F9F61u); RECOMP_ABI_CALL(0x001DFC48u, sub_001DFC48); /* call 0x001DFC48 */

loc_001F9F61: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001F9F74(); return; } /* je: equal / zero */

loc_001F9F65: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x14));
    ecx = edi;
    PUSH32(esp, 0x001F9F72u); RECOMP_ABI_CALL(0x001F9088u, sub_001F9088); /* call 0x001F9088 */

loc_001F9F72: ;
    g_seh_ebp = ebp; sub_001F9F9A(); return; /* tail jmp 0x001F9F9A */

}

/**
 * sub_001F9F68
 * Original: 0x001F9F68 - 0x001F9F74 (12 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9F68(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9F68: ;
    PUSH32(esp, MEM32(esi + 0x14));
    ecx = edi;
    PUSH32(esp, 0x001F9F72u); RECOMP_ABI_CALL(0x001F9088u, sub_001F9088); /* call 0x001F9088 */

loc_001F9F72: ;
    g_seh_ebp = ebp; sub_001F9F9A(); return; /* tail jmp 0x001F9F9A */

}

/**
 * sub_001F9F74
 * Original: 0x001F9F74 - 0x001F9F7D (9 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9F74(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9F74: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001F9F7D(); return; } /* je: equal / zero */

loc_001F9F78: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    g_seh_ebp = ebp; sub_001F9F68(); return; /* tail jmp 0x001F9F68 */

}

/**
 * sub_001F9F7D
 * Original: 0x001F9F7D - 0x001F9F86 (9 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9F7D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9F7D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001F9F86(); return; } /* je: equal / zero */

loc_001F9F81: ;
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    g_seh_ebp = ebp; sub_001F9F68(); return; /* tail jmp 0x001F9F68 */

}

/**
 * sub_001F9F86
 * Original: 0x001F9F86 - 0x001F9F8F (9 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9F86(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9F86: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001F9F8F(); return; } /* je: equal / zero */

loc_001F9F8A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    g_seh_ebp = ebp; sub_001F9F68(); return; /* tail jmp 0x001F9F68 */

}

/**
 * sub_001F9F8F
 * Original: 0x001F9F8F - 0x001F9F98 (9 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9F8F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9F8F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001F9F98(); return; } /* je: equal / zero */

loc_001F9F93: ;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    g_seh_ebp = ebp; sub_001F9F68(); return; /* tail jmp 0x001F9F68 */

}

/**
 * sub_001F9F98
 * Original: 0x001F9F98 - 0x001F9F9A (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001F9F98(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9F98: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001F9F9A(); return; /* fallthrough 0x001F9F9A */

}

/**
 * sub_001F9F9A
 * Original: 0x001F9F9A - 0x001F9F9F (5 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9F9A(void)
{

loc_001F9F9A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F9F9F
 * Original: 0x001F9F9F - 0x001F9FB7 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F9F9F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F9F9F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    SET_LO16(eax, MEM16(ebp + 0xC));
    ecx = 0xFA;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001F9FB7(); return; } /* jbe: below or equal (unsigned <=) */

loc_001F9FB0: ;
    eax = 0x80150001u;
    g_seh_ebp = ebp; sub_001FA01D(); return; /* tail jmp 0x001FA01D */

}

/**
 * sub_001F9FB7
 * Original: 0x001F9FB7 - 0x001FA01D (102 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9FB7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9FB7: ;
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM16(esi + 0xC) = LO16(eax);
    eax = ZX16(LO16(eax));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = edx;
    MEM32(ebp + 0xC) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_001FA001; /* jbe: below or equal (unsigned <=) */

loc_001F9FD3: ;
    ebx = MEM32(ebp + 0x14);
    edx = esi + 0x30;

loc_001F9FD9: ;
    eax = MEM32(ebx);
    ecx = eax + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x18) (32-bit) */
    MEM32(ebx) = ecx;
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA021(); return; } /* ja: above (unsigned >) */

loc_001F9FE5: ;
    ecx = MEM32(eax);
    MEM32(edx) = ecx;
    eax = MEM32(eax + 4);
    MEM32(edx + 4) = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F9FD9; /* jb: below (unsigned <) */

loc_001F9FF8: ;
    ecx = 0xFA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001FA018; /* jae: above or equal (unsigned >=) */

loc_001FA001: ;
    eax = edi + 3;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001FA00B: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001FA00B; /* jne: not equal / not zero */

loc_001FA018: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001FA01D(); return; /* fallthrough 0x001FA01D */

}

/**
 * sub_001FA01A
 * Original: 0x001FA01A - 0x001FA01D (3 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA01A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA01A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001FA01D(); return; /* fallthrough 0x001FA01D */

}

/**
 * sub_001FA01D
 * Original: 0x001FA01D - 0x001FA021 (4 bytes, 2 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA01D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA01D: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001FA021
 * Original: 0x001FA021 - 0x001FA028 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA021(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA021: ;
    eax = 0x80150001u;
    g_seh_ebp = ebp; sub_001FA01A(); return; /* tail jmp 0x001FA01A */

}

/**
 * sub_001FA028
 * Original: 0x001FA028 - 0x001FA0B2 (138 bytes, 51 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA028(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA028: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0xC));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0xFA (16-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_B(_fa, _fb)) goto loc_001FA06A; /* jb: below (unsigned <) */

loc_001FA03C: ;
    _fb = (uint32_t)(0xFFFFFFE7u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE7u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    MEM16(eax + 0xC) = LO16(ecx);
    if (CMP_BE(_fa, _fb)) goto loc_001FA06A; /* jbe: below or equal (unsigned <=) */

loc_001FA04A: ;
    ecx = eax + 0x30;

loc_001FA04D: ;
    esi = MEM32(ecx + 0x190);
    MEM32(ecx) = esi;
    esi = MEM32(ecx + 0x194);
    MEM32(ecx + 4) = esi;
    esi = ZX16(MEM16(eax + 0xC));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FA04D; /* jb: below (unsigned <) */

loc_001FA06A: ;
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 0xC)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0xC), LO16(edx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001FA096; /* jbe: below or equal (unsigned <=) */

loc_001FA07A: ;
    ecx = eax + 0x30;

loc_001FA07D: ;
    ebx = MEM32(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA08A; /* jne: not equal / not zero */

loc_001FA083: ;
    ebx = MEM32(ecx + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FA0AA; /* je: equal / zero */

loc_001FA08A: ;
    ebx = ZX16(MEM16(eax + 0xC));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FA07D; /* jb: below (unsigned <) */

loc_001FA096: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx + eax) = edi;
    MEM32(edx + eax + 4) = esi;
    MEM16(eax + 0xC) = MEM16(eax + 0xC) + 1;
    _fa = (uint32_t)(MEM16(eax + 0xC)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 8) = MEM32(eax + 8) + 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001FA0AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001FA0B2
 * Original: 0x001FA0B2 - 0x001FA0E7 (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA0B2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA0B2: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(ecx + 0xC));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA0EC(); return; } /* jbe: below or equal (unsigned <=) */

loc_001FA0C4: ;
    eax = ecx + 0x30;
    PUSH32(esp, ebx);

loc_001FA0C8: ;
    ebx = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA0D9; /* jne: not equal / not zero */

loc_001FA0D0: ;
    ebx = MEM32(eax + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x18) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA0E7(); return; } /* je: equal / zero */

loc_001FA0D9: ;
    ebx = ZX16(MEM16(ecx + 0xC));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FA0C8; /* jb: below (unsigned <) */

loc_001FA0E5: ;
    g_seh_ebp = ebp; sub_001FA0EB(); return; /* tail jmp 0x001FA0EB */

}

/**
 * sub_001FA0E7
 * Original: 0x001FA0E7 - 0x001FA0EB (4 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA0E7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA0E7: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_001FA0EB(); return; /* fallthrough 0x001FA0EB */

}

/**
 * sub_001FA0EB
 * Original: 0x001FA0EB - 0x001FA0EC (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA0EB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA0EB: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001FA0EC(); return; /* fallthrough 0x001FA0EC */

}

/**
 * sub_001FA0EC
 * Original: 0x001FA0EC - 0x001FA11F (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA0EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA0EC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001FA10F; /* jae: above or equal (unsigned >=) */

loc_001FA0F0: ;
    eax = edx + 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001FA0F8: ;
    esi = MEM32(eax + 0x10);
    MEM32(eax) = esi;
    esi = MEM32(eax + 0x14);
    MEM32(eax + 4) = esi;
    esi = ZX16(MEM16(ecx + 0xC));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FA0F8; /* jb: below (unsigned <) */

loc_001FA10F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA11F(); return; } /* jne: not equal / not zero */

loc_001FA116: ;
    MEM16(ecx + 0xC) = MEM16(ecx + 0xC) - 1;
    _fa = (uint32_t)(MEM16(ecx + 0xC)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 8) = MEM32(ecx + 8) + 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001FA123(); return; /* tail jmp 0x001FA123 */

}

/**
 * sub_001FA11F
 * Original: 0x001FA11F - 0x001FA123 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA11F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA11F: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) & 0;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001FA123(); return; /* fallthrough 0x001FA123 */

}

/**
 * sub_001FA123
 * Original: 0x001FA123 - 0x001FA128 (5 bytes, 2 insns)
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001FA123(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA123: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001FA128
 * Original: 0x001FA128 - 0x001FA13E (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA128(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA128: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FA13A; /* je: equal / zero */

loc_001FA130: ;
    SET_LO16(eax, MEM16(ecx + 0xC));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x64 (16-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA13E(); return; } /* jbe: below or equal (unsigned <=) */

loc_001FA13A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001FA196(); return; /* tail jmp 0x001FA196 */

}

/**
 * sub_001FA13E
 * Original: 0x001FA13E - 0x001FA196 (88 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA13E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA13E: ;
    PUSH32(esp, esi);
    esi = ZX16(LO16(eax));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001FA191; /* jbe: below or equal (unsigned <=) */

loc_001FA149: ;
    eax = ecx + 0xA0;
    edx = 0xC0000000u;

loc_001FA154: ;
    ecx = MEM32(eax + -112);
    ecx = ecx | MEM32(eax + -108);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001FA199(); return; } /* je: equal / zero */

loc_001FA15C: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA16F; /* jne: not equal / not zero */

loc_001FA163: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA199(); return; } /* je: equal / zero */

loc_001FA16A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA199(); return; } /* je: equal / zero */

loc_001FA16F: ;
    _fa = (uint32_t)(MEM8(eax + -104)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + -104), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA199(); return; } /* jne: not equal / not zero */

loc_001FA175: ;
    _fa = (uint32_t)(MEM8(eax + -100)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + -100), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA180; /* jne: not equal / not zero */

loc_001FA17B: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA199(); return; } /* jne: not equal / not zero */

loc_001FA180: ;
    ecx = MEM32(eax + -84);
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA199(); return; } /* je: equal / zero */

loc_001FA189: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x74;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FA154; /* jb: below (unsigned <) */

loc_001FA191: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001FA196(); return; /* fallthrough 0x001FA196 */

}

/**
 * sub_001FA194
 * Original: 0x001FA194 - 0x001FA196 (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA194(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA194: ;
    POP32(esp, edi);
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001FA196(); return; /* fallthrough 0x001FA196 */

}

/**
 * sub_001FA196
 * Original: 0x001FA196 - 0x001FA199 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA196(void)
{

loc_001FA196: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001FA199
 * Original: 0x001FA199 - 0x001FA19D (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA199(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA199: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001FA194(); return; /* tail jmp 0x001FA194 */

}

/**
 * sub_001FA19D
 * Original: 0x001FA19D - 0x001FA1D8 (59 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA19D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA19D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA1D8(); return; } /* je: equal / zero */

loc_001FA1A6: ;
    SET_LO16(eax, MEM16(esi + 0xC));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFA (16-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA1D8(); return; } /* ja: above (unsigned >) */

loc_001FA1B0: ;
    ecx = ZX16(LO16(eax));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001FA1D1; /* jbe: below or equal (unsigned <=) */

loc_001FA1B9: ;
    eax = esi + 0x38;

loc_001FA1BC: ;
    esi = MEM32(eax + -8);
    esi = esi | MEM32(eax + -4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001FA1D8(); return; } /* je: equal / zero */

loc_001FA1C4: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA1D8(); return; } /* jne: not equal / not zero */

loc_001FA1C9: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FA1BC; /* jb: below (unsigned <) */

loc_001FA1D1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FA1D4
 * Original: 0x001FA1D4 - 0x001FA1D8 (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA1D4(void)
{

loc_001FA1D4: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FA1D8
 * Original: 0x001FA1D8 - 0x001FA1DC (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA1D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA1D8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001FA1D4(); return; /* tail jmp 0x001FA1D4 */

}

/**
 * sub_001FA1DC
 * Original: 0x001FA1DC - 0x001FA20A (46 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA1DC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA1DC: ;
    ecx = MEM32(ecx + 0xD0);
    PUSH32(esp, 4);
    POP32(esp, edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);

loc_001FA1E8: ;
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA200; /* jne: not equal / not zero */

loc_001FA1F0: ;
    esi = MEM32(ecx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA200; /* jne: not equal / not zero */

loc_001FA1F9: ;
    _fa = (uint32_t)(MEM8(ecx + 8)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 8), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001FA200; /* je: equal / zero */

loc_001FA1FF: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001FA200: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001FA1E8; /* jne: not equal / not zero */

loc_001FA206: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001FA21C
 * Original: 0x001FA21C - 0x001FA23C (32 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA21C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA21C: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x100;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FA23C
 * Original: 0x001FA23C - 0x001FA2B7 (123 bytes, 41 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA23C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA23C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    MEM32(esi + 0x14D0) = eax;
    MEM32(esi + 0x14CC) = eax;
    MEM32(esi + 0x14D4) = eax;
    MEM32(esi + 0x14D8) = eax;
    MEM32(esi + 0x14DC) = eax;
    MEM32(esi + 0x14E0) = eax;
    MEM32(esi + 0x14C8) = 1;
    edx = esi + 0x13B4;
    POP32(esp, ebx);

loc_001FA27A: ;
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
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001FA27A; /* jne: not equal / not zero */

loc_001FA28D: ;
    PUSH32(esp, 8);
    edi = esi + 0x14E4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001FA29Bu); RECOMP_ABI_CALL(0x001CEEC3u, sub_001CEEC3); /* call 0x001CEEC3 */

loc_001FA29B: ;
    PUSH32(esp, 0x10);
    _fb = (uint32_t)(0x14EC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14EC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FA2A9u); RECOMP_ABI_CALL(0x001CEEC3u, sub_001CEEC3); /* call 0x001CEEC3 */

loc_001FA2A9: ;
    SET_LO8(eax, MEM8(edi));
    SET_LO8(eax, LO8(eax) & 0xF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | 0x80);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(edi) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001FA2B7
 * Original: 0x001FA2B7 - 0x001FA3CE (279 bytes, 109 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA2B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA2B7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x14D0;
    eax = MEM32(edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FA2D3; /* je: equal / zero */

loc_001FA2CB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001FA2D1u); RECOMP_ABI_CALL(0x001F9D0Fu, sub_001F9D0F); /* call 0x001F9D0F */

loc_001FA2D1: ;
    MEM32(edi) = ebx;

loc_001FA2D3: ;
    edi = esi + 0x14CC;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FA2E9; /* je: equal / zero */

loc_001FA2DF: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001FA2E7u); RECOMP_ABI_CALL(0x001F9D0Fu, sub_001F9D0F); /* call 0x001F9D0F */

loc_001FA2E7: ;
    MEM32(edi) = ebx;

loc_001FA2E9: ;
    edi = esi + 0x14E0;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FA2FF; /* je: equal / zero */

loc_001FA2F5: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001FA2FDu); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001FA2FD: ;
    MEM32(edi) = ebx;

loc_001FA2FF: ;
    edi = esi + 0x14DC;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FA315; /* je: equal / zero */

loc_001FA30B: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001FA313u); RECOMP_ABI_CALL(0x0020981Fu, sub_0020981F); /* call 0x0020981F */

loc_001FA313: ;
    MEM32(edi) = ebx;

loc_001FA315: ;
    edi = esi + 0x14D8;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FA32B; /* je: equal / zero */

loc_001FA321: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001FA329u); RECOMP_ABI_CALL(0x001F1E50u, sub_001F1E50); /* call 0x001F1E50 */

loc_001FA329: ;
    MEM32(edi) = ebx;

loc_001FA32B: ;
    edi = esi + 0x14D4;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FA341; /* je: equal / zero */

loc_001FA337: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001FA33Fu); RECOMP_ABI_CALL(0x0020981Fu, sub_0020981F); /* call 0x0020981F */

loc_001FA33F: ;
    MEM32(edi) = ebx;

loc_001FA341: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x13D8;

loc_001FA349: ;
    eax = MEM32(edi + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FA35B; /* je: equal / zero */

loc_001FA350: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001FA358u); RECOMP_ABI_CALL(0x0020C3FFu, sub_0020C3FF); /* call 0x0020C3FF */

loc_001FA358: ;
    MEM32(edi + -4) = ebx;

loc_001FA35B: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FA36B; /* je: equal / zero */

loc_001FA361: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001FA369u); RECOMP_ABI_CALL(0x0020C3FFu, sub_0020C3FF); /* call 0x0020C3FF */

loc_001FA369: ;
    MEM32(edi) = ebx;

loc_001FA36B: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FA37D; /* je: equal / zero */

loc_001FA372: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001FA37Au); RECOMP_ABI_CALL(0x001F9D0Fu, sub_001F9D0F); /* call 0x001F9D0F */

loc_001FA37A: ;
    MEM32(edi + 4) = ebx;

loc_001FA37D: ;
    PUSH32(esp, ebp);
    ecx = esi + 0x1580;
    PUSH32(esp, 0x001FA389u); RECOMP_ABI_CALL(0x001FA21Cu, sub_001FA21C); /* call 0x001FA21C */

loc_001FA389: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FA39C; /* je: equal / zero */

loc_001FA390: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x001FA399u); RECOMP_ABI_CALL(0x001E7939u, sub_001E7939); /* call 0x001E7939 */

loc_001FA399: ;
    MEM32(edi + 8) = ebx;

loc_001FA39C: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FA3B3; /* je: equal / zero */

loc_001FA3A3: ;
    PUSH32(esp, 0x80A6);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001FA3B0u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001FA3B0: ;
    MEM32(edi + 0xC) = ebx;

loc_001FA3B3: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x48;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FA349; /* jb: below (unsigned <) */

loc_001FA3BC: ;
    PUSH32(esp, 0x48);
    POP32(esp, ecx);
    edi = esi + 0x13A8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001FA3CE
 * Original: 0x001FA3CE - 0x001FA3E6 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FA3CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA3CE: ;
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
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA3E6(); return; } /* jne: not equal / not zero */

loc_001FA3DC: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001FA484(); return; /* tail jmp 0x001FA484 */

}

/**
 * sub_001FA3E6
 * Original: 0x001FA3E6 - 0x001FA44C (102 bytes, 35 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA3E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA3E6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 1 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001FA3F6; /* jne: not equal / not zero */

loc_001FA3F3: ;
    esi = esi | 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001FA3F6: ;
    ebx = MEM32(ebp + 8);
    ecx = MEM32(edi + 0xD0);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    PUSH32(esp, MEM32(ecx + eax + 4));
    PUSH32(esp, MEM32(ecx + eax));
    ecx = edi;
    PUSH32(esp, 0x001FA412u); RECOMP_ABI_CALL(0x001FA1DCu, sub_001FA1DC); /* call 0x001FA1DC */

loc_001FA412: ;
    eax = ZX16(LO16(eax));
    ecx = ebx + ebx * 8;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & 0xFFFFFF9Fu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = edi + ecx * 8;
    ecx = MEM32(ebx + 0x13B8);
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    MEM32(ebp + 0xC) = eax;
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA44C(); return; } /* jne: not equal / not zero */

loc_001FA433: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edi = ebp + 0x10;
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
    edi = MEM32(ebp + -4);
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_001FA44C(); return; } /* jne: not equal / not zero */

loc_001FA448: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001FA44F(); return; /* tail jmp 0x001FA44F */

}

/**
 * sub_001FA44C
 * Original: 0x001FA44C - 0x001FA44F (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA44C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA44C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_001FA44F(); return; /* fallthrough 0x001FA44F */

}

/**
 * sub_001FA44F
 * Original: 0x001FA44F - 0x001FA484 (53 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA44F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA44F: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x1C));
    ecx = ebp + 0x10;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    PUSH32(esp, 0x001FA465u); RECOMP_ABI_CALL(0x001DFC8Au, sub_001DFC8A); /* call 0x001DFC8A */

loc_001FA465: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebx + 0x13B8) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(ebx + 0x13BC) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebx + 0x13C0) = eax;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001FA484(); return; /* fallthrough 0x001FA484 */

}

/**
 * sub_001FA484
 * Original: 0x001FA484 - 0x001FA489 (5 bytes, 3 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA484(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA484: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001FA489
 * Original: 0x001FA489 - 0x001FA4CB (66 bytes, 24 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA489(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA489: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA497; /* jne: not equal / not zero */

loc_001FA490: ;
    eax = 0x80150005u;
    goto loc_001FA4C7;

loc_001FA497: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x001FA4A1u); RECOMP_ABI_CALL(0x001CEF8Bu, sub_001CEF8B); /* call 0x001CEF8B */

loc_001FA4A1: ;
    ecx = MEM32(esi + 0x14E4);
    eax = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x14);
    MEM32(eax) = ecx;
    ecx = MEM32(esi + 0x14E8);
    _fb = (uint32_t)(0x14EC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14EC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = ecx;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);

loc_001FA4C7: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001FA4CB
 * Original: 0x001FA4CB - 0x001FA4E1 (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FA4CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA4CB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA4E1(); return; } /* jne: not equal / not zero */

loc_001FA4D7: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001FA650(); return; /* tail jmp 0x001FA650 */

}

/**
 * sub_001FA4E1
 * Original: 0x001FA4E1 - 0x001FA545 (100 bytes, 35 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA4E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA4E1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, esi);
    MEM32(ebp + -4) = edi;
    PUSH32(esp, 0x001FA4EFu); RECOMP_ABI_CALL(0x001F9E3Cu, sub_001F9E3C); /* call 0x001F9E3C */

loc_001FA4EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA635(); return; } /* je: equal / zero */

loc_001FA4F7: ;
    eax = esi + esi * 8;
    eax = ecx + eax * 8;
    _fa = (uint32_t)(MEM8(eax + 0x13B4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x13B4), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA635(); return; } /* jne: not equal / not zero */

loc_001FA50A: ;
    eax = MEM32(eax + 0x13D4);
    ebx = ZX16(MEM16(eax + 0xC));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001FA52E; /* jbe: below or equal (unsigned <=) */

loc_001FA518: ;
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x74);
    ecx = ecx + eax + 0x2C;

loc_001FA521: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA52E; /* jne: not equal / not zero */

loc_001FA526: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x74;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001FA521; /* ja: above (unsigned >) */

loc_001FA52E: ;
    esi = MEM32(ebp + 0x10);
    ecx = MEM32(esi);
    edx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA54C(); return; } /* jbe: below or equal (unsigned <=) */

loc_001FA53C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA545(); return; } /* jb: below (unsigned <) */

loc_001FA540: ;
    MEM32(ebp + 0xC) = edi;
    g_seh_ebp = ebp; sub_001FA54C(); return; /* tail jmp 0x001FA54C */

}

/**
 * sub_001FA545
 * Original: 0x001FA545 - 0x001FA54C (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA545(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA545: ;
    edx = ebx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0xC) = edx;

    g_seh_ebp = ebp; sub_001FA54C(); return; /* fallthrough 0x001FA54C */

}

/**
 * sub_001FA54C
 * Original: 0x001FA54C - 0x001FA56C (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA54C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA54C: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x14);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x74);
    edi = ebx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x74);
    ecx = ecx + eax + 0x30;
    eax = edi + eax + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(ebp + 8) = ecx;
    MEM32(ebp + -8) = eax;
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA5E3(); return; } /* jae: above or equal (unsigned >=) */

    g_seh_ebp = ebp; sub_001FA56C(); return; /* fallthrough 0x001FA56C */

}

/**
 * sub_001FA56C
 * Original: 0x001FA56C - 0x001FA599 (45 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA56C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA56C: ;
    eax = MEM32(esi);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA5E3(); return; } /* jae: above or equal (unsigned >=) */

loc_001FA578: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, 0x15);
    POP32(esp, ecx);
    edi = edx;
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    eax = MEM32(edx + 0x1C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA59F(); return; } /* je: equal / zero */

loc_001FA58B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x18000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA599(); return; } /* jne: not equal / not zero */

loc_001FA592: ;
    eax = eax & 0xFC000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001FA59C(); return; /* tail jmp 0x001FA59C */

}

/**
 * sub_001FA599
 * Original: 0x001FA599 - 0x001FA59C (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA599(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA599: ;
    eax = eax & 0xFFFFFFFBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001FA59C(); return; /* fallthrough 0x001FA59C */

}

/**
 * sub_001FA59C
 * Original: 0x001FA59C - 0x001FA59F (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA59C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA59C: ;
    MEM32(edx + 0x1C) = eax;

    g_seh_ebp = ebp; sub_001FA59F(); return; /* fallthrough 0x001FA59F */

}

/**
 * sub_001FA59F
 * Original: 0x001FA59F - 0x001FA5E3 (68 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA59F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA59F: ;
    eax = MEM32(edx + 0x1C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001FA5CE; /* jne: not equal / not zero */

loc_001FA5A6: ;
    eax = eax & 0xF4000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 0x1C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 0x20;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 0x28;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edx + 0x30) = MEM32(edx + 0x30) & 0;
    _fa = (uint32_t)(MEM32(edx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 8);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 0x35;
    MEM8(edx + 0x34) = 0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_001FA5CE: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x74;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = MEM32(ebp + 0x10);
    _fb = (uint32_t)(0x56) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x56;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA56C(); return; } /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_001FA5E3(); return; /* fallthrough 0x001FA5E3 */

}

/**
 * sub_001FA5E3
 * Original: 0x001FA5E3 - 0x001FA62D (74 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA5E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA5E3: ;
    ecx = MEM32(esi);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001FA609; /* jae: above or equal (unsigned >=) */

loc_001FA5F1: ;
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x56);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_001FA609: ;
    ecx = MEM32(ebp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(ebp + -4);
    edx = MEM32(ebp + 0xC);
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001FA61A; /* je: equal / zero */

loc_001FA618: ;
    MEM32(ecx) = edx;

loc_001FA61A: ;
    ecx = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA64C(); return; } /* je: equal / zero */

loc_001FA621: ;
    esi = eax + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA62D(); return; } /* ja: above (unsigned >) */

loc_001FA628: ;
    MEM32(ecx) = MEM32(ecx) & 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001FA64C(); return; /* tail jmp 0x001FA64C */

}

/**
 * sub_001FA62D
 * Original: 0x001FA62D - 0x001FA635 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA62D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA62D: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx) = ebx;
    g_seh_ebp = ebp; sub_001FA64C(); return; /* tail jmp 0x001FA64C */

}

/**
 * sub_001FA635
 * Original: 0x001FA635 - 0x001FA650 (27 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA635(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA635: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = edi;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FA643; /* je: equal / zero */

loc_001FA641: ;
    MEM32(eax) = edi;

loc_001FA643: ;
    eax = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FA64C; /* je: equal / zero */

loc_001FA64A: ;
    MEM32(eax) = edi;

loc_001FA64C: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001FA650(); return; /* fallthrough 0x001FA650 */

}

/**
 * sub_001FA64C
 * Original: 0x001FA64C - 0x001FA650 (4 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA64C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA64C: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001FA650(); return; /* fallthrough 0x001FA650 */

}

/**
 * sub_001FA650
 * Original: 0x001FA650 - 0x001FA655 (5 bytes, 3 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA650: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001FA655
 * Original: 0x001FA655 - 0x001FA6DC (135 bytes, 54 insns)
 * Category: game_network
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FA655(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA655: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA664; /* jne: not equal / not zero */

loc_001FA65D: ;
    eax = 0x80150005u;
    goto loc_001FA6D8;

loc_001FA664: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FA672u); RECOMP_ABI_CALL(0x001F9E3Cu, sub_001F9E3C); /* call 0x001F9E3C */

loc_001FA672: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FA6C2; /* je: equal / zero */

loc_001FA676: ;
    eax = edi + edi * 8;
    eax = ecx + eax * 8;
    _fa = (uint32_t)(MEM8(eax + 0x13B4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x13B4), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001FA6C2; /* jne: not equal / not zero */

loc_001FA685: ;
    eax = MEM32(eax + 0x13D4);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax + 0xC));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001FA6B2; /* jbe: below or equal (unsigned <=) */

loc_001FA696: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);

loc_001FA69A: ;
    ebx = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA6A9; /* jne: not equal / not zero */

loc_001FA6A1: ;
    ebx = MEM32(eax + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FA6B1; /* je: equal / zero */

loc_001FA6A9: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x74;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FA69A; /* jb: below (unsigned <) */

loc_001FA6B1: ;
    POP32(esp, ebx);

loc_001FA6B2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_001FA6C2; /* jae: above or equal (unsigned >=) */

loc_001FA6B7: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001FA6C2; /* ja: above (unsigned >) */

loc_001FA6BC: ;
    _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ebp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = edx;

loc_001FA6C2: ;
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FA6D7u); RECOMP_ABI_CALL(0x001FA4CBu, sub_001FA4CB); /* call 0x001FA4CB */

loc_001FA6D7: ;
    POP32(esp, edi);

loc_001FA6D8: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 40; return; /* ret 36 */

}

/**
 * sub_001FA6DC
 * Original: 0x001FA6DC - 0x001FA6F1 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FA6DC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA6DC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA6F1(); return; } /* jne: not equal / not zero */

loc_001FA6E7: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001FA7CC(); return; /* tail jmp 0x001FA7CC */

}

/**
 * sub_001FA6F1
 * Original: 0x001FA6F1 - 0x001FA708 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA6F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA6F1: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(esi + 0x14D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14D0), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA708(); return; } /* jne: not equal / not zero */

loc_001FA6FE: ;
    eax = 0x8015200Cu;
    g_seh_ebp = ebp; sub_001FA7CC(); return; /* tail jmp 0x001FA7CC */

}

/**
 * sub_001FA708
 * Original: 0x001FA708 - 0x001FA733 (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA708(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA708: ;
    ecx = MEM32(esi + 0xD0);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA733(); return; } /* jne: not equal / not zero */

loc_001FA720: ;
    edx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + ecx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA733(); return; } /* jne: not equal / not zero */

loc_001FA729: ;
    eax = 0x8015200Au;
    g_seh_ebp = ebp; sub_001FA7CA(); return; /* tail jmp 0x001FA7CA */

}

/**
 * sub_001FA733
 * Original: 0x001FA733 - 0x001FA757 (36 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA733(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA733: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001FA73Bu); RECOMP_ABI_CALL(0x001F9E3Cu, sub_001F9E3C); /* call 0x001F9E3C */

loc_001FA73B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA774(); return; } /* je: equal / zero */

loc_001FA73F: ;
    eax = edi + edi * 8;
    eax = MEM32(esi + eax * 8 + 0x13D4);
    _fa = (uint32_t)(MEM16(eax + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0xC), 0x64 (16-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA757(); return; } /* jb: below (unsigned <) */

loc_001FA750: ;
    eax = 0x80152002u;
    g_seh_ebp = ebp; sub_001FA7CA(); return; /* tail jmp 0x001FA7CA */

}

/**
 * sub_001FA757
 * Original: 0x001FA757 - 0x001FA774 (29 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA757(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA757: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = esi;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001FA763u); RECOMP_ABI_CALL(0x001F9ED6u, sub_001F9ED6); /* call 0x001F9ED6 */

loc_001FA763: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA774(); return; } /* je: equal / zero */

loc_001FA767: ;
    _fa = (uint32_t)(MEM32(eax + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x70), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA774(); return; } /* je: equal / zero */

loc_001FA76D: ;
    eax = 0x80152007u;
    g_seh_ebp = ebp; sub_001FA7CA(); return; /* tail jmp 0x001FA7CA */

}

/**
 * sub_001FA774
 * Original: 0x001FA774 - 0x001FA7CA (86 bytes, 27 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA774(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA774: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x3EC);
    ecx = esi;
    PUSH32(esp, 0x001FA786u); RECOMP_ABI_CALL(0x001F9634u, sub_001F9634); /* call 0x001F9634 */

loc_001FA786: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FA7CA(); return; } /* jl: less (signed <) */

loc_001FA78C: ;
    eax = MEM32(ebp + -4);
    edx = edi + edi * 8;
    edi = MEM32(esi + edx * 8 + 0x13A8);
    MEM32(eax + 0x20) = edi;
    edx = MEM32(esi + edx * 8 + 0x13AC);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(eax + 0x28) = ebx;
    MEM32(eax + 0x2C) = edx;
    MEM16(eax + 0x30) = LO16(ecx);
    PUSH32(esp, MEM32(esi + 0x14D0));
    ecx = esi;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x32);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001FA7CAu); RECOMP_ABI_CALL(0x001F9686u, sub_001F9686); /* call 0x001F9686 */

    g_seh_ebp = ebp; sub_001FA7CA(); return; /* fallthrough 0x001FA7CA */

}

/**
 * sub_001FA7CA
 * Original: 0x001FA7CA - 0x001FA7CC (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA7CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA7CA: ;
    POP32(esp, edi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001FA7CC(); return; /* fallthrough 0x001FA7CC */

}

/**
 * sub_001FA7CC
 * Original: 0x001FA7CC - 0x001FA7D1 (5 bytes, 3 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA7CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA7CC: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001FA7D1
 * Original: 0x001FA7D1 - 0x001FA7DC (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA7D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA7D1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA7DC(); return; } /* jne: not equal / not zero */

loc_001FA7D5: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001FA816(); return; /* tail jmp 0x001FA816 */

}

/**
 * sub_001FA7DC
 * Original: 0x001FA7DC - 0x001FA80A (46 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA7DC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA7DC: ;
    _fa = (uint32_t)(MEM32(ecx + 0x14D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14D0), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA811(); return; } /* je: equal / zero */

loc_001FA7E5: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x001FA7EEu); RECOMP_ABI_CALL(0x001F9E3Cu, sub_001F9E3C); /* call 0x001F9E3C */

loc_001FA7EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA811(); return; } /* je: equal / zero */

loc_001FA7F2: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 0x30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FA80A(); return; } /* je: equal / zero */

loc_001FA7FE: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x001FA808u); RECOMP_ABI_CALL(0x001F976Au, sub_001F976A); /* call 0x001F976A */

loc_001FA808: ;
    g_seh_ebp = ebp; sub_001FA816(); return; /* tail jmp 0x001FA816 */

}

/**
 * sub_001FA80A
 * Original: 0x001FA80A - 0x001FA811 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA80A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA80A: ;
    eax = 0x8015200Bu;
    g_seh_ebp = ebp; sub_001FA816(); return; /* tail jmp 0x001FA816 */

}

/**
 * sub_001FA811
 * Original: 0x001FA811 - 0x001FA816 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA811(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA811: ;
    eax = 0x8015200Cu;

    g_seh_ebp = ebp; sub_001FA816(); return; /* fallthrough 0x001FA816 */

}

/**
 * sub_001FA816
 * Original: 0x001FA816 - 0x001FA819 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA816(void)
{

loc_001FA816: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001FA819
 * Original: 0x001FA819 - 0x001FA935 (284 bytes, 91 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FA819(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA819: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA82E; /* jne: not equal / not zero */

loc_001FA824: ;
    eax = 0x80150005u;
    goto loc_001FA930;

loc_001FA82E: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(esi + 0x14CC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14CC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA845; /* jne: not equal / not zero */

loc_001FA83B: ;
    eax = 0x8015200Cu;
    goto loc_001FA930;

loc_001FA845: ;
    ecx = MEM32(esi + 0xD0);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA870; /* jne: not equal / not zero */

loc_001FA85D: ;
    edx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + ecx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA870; /* jne: not equal / not zero */

loc_001FA866: ;
    eax = 0x8015200Au;
    goto loc_001FA92E;

loc_001FA870: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x3F0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FA882u); RECOMP_ABI_CALL(0x001F9634u, sub_001F9634); /* call 0x001F9634 */

loc_001FA882: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FA92E; /* jl: less (signed <) */

loc_001FA88A: ;
    eax = edi + edi * 8;
    edi = MEM32(ebp + -4);
    eax = esi + eax * 8;
    ecx = MEM32(eax + 0x13A8);
    MEM32(edi + 0x20) = ecx;
    ecx = MEM32(eax + 0x13AC);
    MEM32(edi + 0x24) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEM32(edi + 0x28) = ebx;
    ebx = eax + 0x13D0;
    MEM32(edi + 0x2C) = ecx;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA8CC; /* jne: not equal / not zero */

loc_001FA8BA: ;
    PUSH32(esp, 0x8035);
    PUSH32(esp, 0x18);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FA8C8u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001FA8C8: ;
    MEM32(ebx) = eax;
    goto loc_001FA8EA;

loc_001FA8CC: ;
    ebx = eax;
    goto loc_001FA8D3;

loc_001FA8D0: ;
    ebx = MEM32(ebx + 0x10);

loc_001FA8D3: ;
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA8D0; /* jne: not equal / not zero */

loc_001FA8D9: ;
    PUSH32(esp, 0x8035);
    PUSH32(esp, 0x18);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FA8E7u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001FA8E7: ;
    MEM32(ebx + 0x10) = eax;

loc_001FA8EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA8F5; /* jne: not equal / not zero */

loc_001FA8EE: ;
    eax = 0x8007000Eu;
    goto loc_001FA92E;

loc_001FA8F5: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEM32(eax) = 1;
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(esi + 0x14CC);
    PUSH32(esp, MEM32(eax + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FA915u); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001FA915: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x14CC));
    ecx = esi;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x30);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FA92Eu); RECOMP_ABI_CALL(0x001F9686u, sub_001F9686); /* call 0x001F9686 */

loc_001FA92E: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001FA930: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001FA935
 * Original: 0x001FA935 - 0x001FAA4D (280 bytes, 92 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FA935(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA935: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA94A; /* jne: not equal / not zero */

loc_001FA940: ;
    eax = 0x80150005u;
    goto loc_001FAA48;

loc_001FA94A: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(esi + 0x14CC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14CC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA961; /* jne: not equal / not zero */

loc_001FA957: ;
    eax = 0x8015200Cu;
    goto loc_001FAA48;

loc_001FA961: ;
    ecx = MEM32(esi + 0xD0);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA98C; /* jne: not equal / not zero */

loc_001FA979: ;
    edx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + ecx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA98C; /* jne: not equal / not zero */

loc_001FA982: ;
    eax = 0x8015200Au;
    goto loc_001FAA46;

loc_001FA98C: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x3F1);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FA99Eu); RECOMP_ABI_CALL(0x001F9634u, sub_001F9634); /* call 0x001F9634 */

loc_001FA99E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FAA46; /* jl: less (signed <) */

loc_001FA9A6: ;
    eax = edi + edi * 8;
    edi = MEM32(ebp + -4);
    eax = esi + eax * 8;
    ecx = MEM32(eax + 0x13A8);
    MEM32(edi + 0x20) = ecx;
    ecx = MEM32(eax + 0x13AC);
    MEM32(edi + 0x24) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEM32(edi + 0x28) = ebx;
    ebx = eax + 0x13D0;
    MEM32(edi + 0x2C) = ecx;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA9E8; /* jne: not equal / not zero */

loc_001FA9D6: ;
    PUSH32(esp, 0x8035);
    PUSH32(esp, 0x18);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FA9E4u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001FA9E4: ;
    MEM32(ebx) = eax;
    goto loc_001FAA06;

loc_001FA9E8: ;
    ebx = eax;
    goto loc_001FA9EF;

loc_001FA9EC: ;
    ebx = MEM32(ebx + 0x10);

loc_001FA9EF: ;
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA9EC; /* jne: not equal / not zero */

loc_001FA9F5: ;
    PUSH32(esp, 0x8035);
    PUSH32(esp, 0x18);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FAA03u); RECOMP_ABI_CALL(0x0020C3C8u, sub_0020C3C8); /* call 0x0020C3C8 */

loc_001FAA03: ;
    MEM32(ebx + 0x10) = eax;

loc_001FAA06: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FAA11; /* jne: not equal / not zero */

loc_001FAA0A: ;
    eax = 0x8007000Eu;
    goto loc_001FAA46;

loc_001FAA11: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ebx;
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(esi + 0x14CC);
    PUSH32(esp, MEM32(eax + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FAA2Fu); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001FAA2F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x14CC));
    ecx = esi;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x30);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FAA46u); RECOMP_ABI_CALL(0x001F9686u, sub_001F9686); /* call 0x001F9686 */

loc_001FAA46: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001FAA48: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001FAA4D
 * Original: 0x001FAA4D - 0x001FAA71 (36 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAA4D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001FAA4D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FAA58u); RECOMP_ABI_CALL(0x001F9C28u, sub_001F9C28); /* call 0x001F9C28 */

loc_001FAA58: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001FAA6D; /* jl: less (signed <) */

loc_001FAA5C: ;
    eax = MEM32(esi + 0x18);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFEAFF10u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x1500F0)) >> 32) & 1);
    eax = eax + 0x1500F0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001FAA6D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FAA71
 * Original: 0x001FAA71 - 0x001FAA95 (36 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAA71(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001FAA71: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FAA7Cu); RECOMP_ABI_CALL(0x001F9C28u, sub_001F9C28); /* call 0x001F9C28 */

loc_001FAA7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001FAA91; /* jl: less (signed <) */

loc_001FAA80: ;
    eax = MEM32(esi + 0x18);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFEAFF0Eu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1500F2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x1500F2)) >> 32) & 1);
    eax = eax + 0x1500F2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001FAA91: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FAA95
 * Original: 0x001FAA95 - 0x001FAC39 (420 bytes, 134 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAA95(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FAA95: ;
    PUSH32(esp, ecx);
    MEM32(esp) = MEM32(esp) & 0;
    _fa = (uint32_t)(MEM32(esp)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = MEM32(ebx + 0x10);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    if ((_fa == 0)) goto loc_001FAACB; /* je: equal / zero */

loc_001FAAAC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001FAB1B; /* je: equal / zero */

loc_001FAAAF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001FAB9A; /* je: equal / zero */

loc_001FAAB6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001FABE5; /* je: equal / zero */

loc_001FAABD: ;
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001FAC0B; /* je: equal / zero */

loc_001FAAC6: ;
    goto loc_001FAC23;

loc_001FAACB: ;
    eax = MEM32(ebp + 0x14CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FAAF5; /* je: equal / zero */

loc_001FAAD5: ;
    _fa = (uint32_t)(MEM32(ebp + 0x13D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x13D0), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FAAF5; /* je: equal / zero */

loc_001FAADE: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x001FAAE6u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FAAE6: ;
    edi = eax;

loc_001FAAE8: ;
    PUSH32(esp, MEM32(ebx + 8));
    PUSH32(esp, 0x001FAAF0u); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001FAAF0: ;
    goto loc_001FAC18;

loc_001FAAF5: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x001FAAFDu); RECOMP_ABI_CALL(0x001F9B2Cu, sub_001F9B2C); /* call 0x001F9B2C */

loc_001FAAFD: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FAB14; /* je: equal / zero */

loc_001FAB03: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FAAE8; /* jne: not equal / not zero */

loc_001FAB08: ;
    eax = MEM32(ebp + 0x14CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FAAE8; /* je: equal / zero */

loc_001FAB12: ;
    goto loc_001FAADE;

loc_001FAB14: ;
    MEM32(ebx + 0x10) = 1;

loc_001FAB1B: ;
    PUSH32(esp, MEM32(ebp + 0x14E0));
    ecx = ebp;
    PUSH32(esp, 0x001FAB28u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FAB28: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FAC18; /* jne: not equal / not zero */

loc_001FAB36: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ebx + 0x1C;
    edi = esi;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(ebx + 0x30);
    PUSH32(esp, esi);
    MEM32(ebx + 0x24) = eax;
    MEM32(ebx + 0x2C) = eax;
    MEM32(ebx + 0x28) = 0xFD0;
    PUSH32(esp, MEM32(ebp + 0x14DC));
    ecx = ebp;
    PUSH32(esp, 0x001FAB60u); RECOMP_ABI_CALL(0x0020A673u, sub_0020A673); /* call 0x0020A673 */

loc_001FAB60: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FAC27; /* jl: less (signed <) */

loc_001FAB6A: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FAB93; /* je: equal / zero */

loc_001FAB6F: ;
    _fa = (uint32_t)(MEM32(ebx + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FAB93; /* je: equal / zero */

loc_001FAB75: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x14E0));
    ecx = ebp;
    PUSH32(esp, MEM32(ebp + 0x14DC));
    PUSH32(esp, 0x001FAB89u); RECOMP_ABI_CALL(0x0020AB1Eu, sub_0020AB1E); /* call 0x0020AB1E */

loc_001FAB89: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FAC27; /* jl: less (signed <) */

loc_001FAB93: ;
    MEM32(ebx + 0x10) = 2;

loc_001FAB9A: ;
    PUSH32(esp, MEM32(ebp + 0x14E0));
    ecx = ebp;
    PUSH32(esp, 0x001FABA7u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FABA7: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FAC18; /* jne: not equal / not zero */

loc_001FABB1: ;
    _fa = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x1C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FABD0; /* je: equal / zero */

loc_001FABB7: ;
    eax = MEM32(ebx + 0x30);
    edi = MEM32(ebx + 0x50);
    esi = eax + 0x30;
    ecx = 0x3E8;
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
    eax = ZX16(MEM16(eax + 0xC));
    ecx = MEM32(ebx + 0x54);
    MEM32(ecx) = eax;

loc_001FABD0: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x001FABD8u); RECOMP_ABI_CALL(0x001F9B6Eu, sub_001F9B6E); /* call 0x001F9B6E */

loc_001FABD8: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FAC27; /* jl: less (signed <) */

loc_001FABDE: ;
    MEM32(ebx + 0x10) = 3;

loc_001FABE5: ;
    PUSH32(esp, MEM32(ebp + 0x14E0));
    ecx = ebp;
    PUSH32(esp, 0x001FABF2u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FABF2: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FAC18; /* jne: not equal / not zero */

loc_001FABFC: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x001FAC04u); RECOMP_ABI_CALL(0x001F9B94u, sub_001F9B94); /* call 0x001F9B94 */

loc_001FAC04: ;
    MEM32(ebx + 0x10) = 0xC;

loc_001FAC0B: ;
    edi = 0x1500F0;
    MEM32(esp + 0x10) = 1;

loc_001FAC18: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FAC27; /* jl: less (signed <) */

loc_001FAC1C: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FAC27; /* jne: not equal / not zero */

loc_001FAC23: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001FAC2F;

loc_001FAC27: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x001FAC2Fu); RECOMP_ABI_CALL(0x001F9D0Fu, sub_001F9D0F); /* call 0x001F9D0F */

loc_001FAC2F: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FAC39
 * Original: 0x001FAC39 - 0x001FAEC7 (654 bytes, 199 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAC39(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FAC39: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, 0x001FAC49u); RECOMP_ABI_CALL(0x001F9C28u, sub_001F9C28); /* call 0x001F9C28 */

loc_001FAC49: ;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001FAD2D; /* je: equal / zero */

loc_001FAC55: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001FADFD; /* je: equal / zero */

loc_001FAC5C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001FAD4C; /* je: equal / zero */

loc_001FAC63: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = 0x1500F0;
    if ((_fa == 0)) goto loc_001FACC3; /* je: equal / zero */

loc_001FAC6B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001FAD05; /* je: equal / zero */

loc_001FAC74: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_001FAEA7; /* jne: not equal / not zero */

loc_001FAC7D: ;
    PUSH32(esp, MEM32(ebx + 0x14E0));
    ecx = ebx;
    PUSH32(esp, 0x001FAC8Au); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FAC8A: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FAEA9; /* jne: not equal / not zero */

loc_001FAC94: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebx + 0x13D0;

loc_001FAC9C: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FACEE; /* jne: not equal / not zero */

loc_001FACA1: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FAC9C; /* jb: below (unsigned <) */

loc_001FACAA: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001FACB2u); RECOMP_ABI_CALL(0x001F9B6Eu, sub_001F9B6E); /* call 0x001F9B6E */

loc_001FACB2: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FAE87; /* jl: less (signed <) */

loc_001FACBC: ;
    MEM32(esi + 0x10) = 3;

loc_001FACC3: ;
    PUSH32(esp, MEM32(ebx + 0x14E0));
    ecx = ebx;
    PUSH32(esp, 0x001FACD0u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FACD0: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FAEA9; /* jne: not equal / not zero */

loc_001FACDA: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001FACE2u); RECOMP_ABI_CALL(0x001F9B94u, sub_001F9B94); /* call 0x001F9B94 */

loc_001FACE2: ;
    MEM32(esi + 0x10) = 7;
    goto loc_001FAEA7;

loc_001FACEE: ;
    PUSH32(esp, MEM32(esi + 8));
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x10) = 1;
    PUSH32(esp, 0x001FAD00u); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001FAD00: ;
    goto loc_001FAEAD;

loc_001FAD05: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx + 0x13D0;

loc_001FAD0D: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FAD1D; /* jne: not equal / not zero */

loc_001FAD12: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FAD0D; /* jb: below (unsigned <) */

loc_001FAD1B: ;
    goto loc_001FAD24;

loc_001FAD1D: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x14) = eax;

loc_001FAD24: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001FAEA7; /* jae: above or equal (unsigned >=) */

loc_001FAD2D: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001FAD35u); RECOMP_ABI_CALL(0x001F9B2Cu, sub_001F9B2C); /* call 0x001F9B2C */

loc_001FAD35: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FADF6; /* je: equal / zero */

loc_001FAD3F: ;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x001FAD47u); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001FAD47: ;
    goto loc_001FAEA9;

loc_001FAD4C: ;
    PUSH32(esp, MEM32(ebx + 0x14E0));
    ecx = ebx;
    PUSH32(esp, 0x001FAD59u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FAD59: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FAEA9; /* jne: not equal / not zero */

loc_001FAD67: ;
    ebp = MEM32(esi + 0x30);
    goto loc_001FADA7;

loc_001FAD6C: ;
    eax = MEM32(esi + 0x14);
    eax = eax + eax * 8;
    eax = ebx + eax * 8 + 0x13D0;
    edi = MEM32(eax);
    ecx = MEM32(edi + 0x10);
    MEM32(eax) = ecx;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    PUSH32(esp, MEM32(edi + 0xC));
    ecx = ebx;
    PUSH32(esp, MEM32(edi + 8));
    PUSH32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_001FAD95; /* je: equal / zero */

loc_001FAD8E: ;
    PUSH32(esp, 0x001FAD93u); RECOMP_ABI_CALL(0x001FA028u, sub_001FA028); /* call 0x001FA028 */

loc_001FAD93: ;
    goto loc_001FAD9A;

loc_001FAD95: ;
    PUSH32(esp, 0x001FAD9Au); RECOMP_ABI_CALL(0x001FA0B2u, sub_001FA0B2); /* call 0x001FA0B2 */

loc_001FAD9A: ;
    PUSH32(esp, 0x8035);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001FADA7u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001FADA7: ;
    eax = MEM32(esi + 0x14);
    eax = eax + eax * 8;
    _fa = (uint32_t)(MEM32(ebx + eax * 8 + 0x13D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + eax * 8 + 0x13D0), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FAD6C; /* jne: not equal / not zero */

loc_001FADB7: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x001FADBFu); RECOMP_ABI_CALL(0x001FA19Du, sub_001FA19D); /* call 0x001FA19D */

loc_001FADBF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FADC6; /* jne: not equal / not zero */

loc_001FADC3: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001FADC6: ;
    eax = MEM32(esi + 0x30);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x14E0));
    ecx = ebx;
    PUSH32(esp, MEM32(ebx + 0x14DC));
    PUSH32(esp, 0x001FADE0u); RECOMP_ABI_CALL(0x0020B316u, sub_0020B316); /* call 0x0020B316 */

loc_001FADE0: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FAE87; /* jl: less (signed <) */

loc_001FADEA: ;
    MEM32(esi + 0x10) = 0xA;
    goto loc_001FAEA7;

loc_001FADF6: ;
    MEM32(esi + 0x10) = 1;

loc_001FADFD: ;
    PUSH32(esp, MEM32(ebx + 0x14E0));
    ecx = ebx;
    PUSH32(esp, 0x001FAE0Au); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FAE0A: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FAEA9; /* jne: not equal / not zero */

loc_001FAE18: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = esi + 0x1C;
    edi = ebp;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(esi + 0x30);
    ecx = MEM32(esi + 0x14);
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x28) = 0xFD0;
    ecx = ecx + ecx * 8;
    edx = MEM32(ebx + ecx * 8 + 0x13A8);
    MEM32(eax) = edx;
    ecx = MEM32(ebx + ecx * 8 + 0x13AC);
    MEM32(eax + 4) = ecx;
    PUSH32(esp, ebp);
    PUSH32(esp, MEM32(ebx + 0x14DC));
    ecx = ebx;
    PUSH32(esp, 0x001FAE5Bu); RECOMP_ABI_CALL(0x0020A673u, sub_0020A673); /* call 0x0020A673 */

loc_001FAE5B: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FAE87; /* jl: less (signed <) */

loc_001FAE61: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FAE98; /* je: equal / zero */

loc_001FAE67: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FAE98; /* je: equal / zero */

loc_001FAE6D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, MEM32(ebx + 0x14E0));
    ecx = ebx;
    PUSH32(esp, MEM32(ebx + 0x14DC));
    PUSH32(esp, 0x001FAE81u); RECOMP_ABI_CALL(0x0020AB1Eu, sub_0020AB1E); /* call 0x0020AB1E */

loc_001FAE81: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001FAEA0; /* jge: greater or equal (signed >=) */

loc_001FAE87: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001FAE8Fu); RECOMP_ABI_CALL(0x001F9D0Fu, sub_001F9D0F); /* call 0x001F9D0F */

loc_001FAE8F: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001FAE98: ;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x001FAEA0u); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001FAEA0: ;
    MEM32(esi + 0x10) = 2;

loc_001FAEA7: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001FAEA9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FAE87; /* jl: less (signed <) */

loc_001FAEAD: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FAEBA; /* jne: not equal / not zero */

loc_001FAEB4: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FAEC0; /* je: equal / zero */

loc_001FAEBA: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0xC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FAE8F; /* jne: not equal / not zero */

loc_001FAEC0: ;
    edi = 0x1500F2;
    goto loc_001FAE8F;

}

/**
 * sub_001FAEC7
 * Original: 0x001FAEC7 - 0x001FAF3C (117 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FAEC7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FAEC7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ecx + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x70), 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebx + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x70), 0xFFFFFFFFu (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001FAFC2(); return; } /* jne: not equal / not zero */

loc_001FAEEF: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FAF73(); return; } /* je: equal / zero */

loc_001FAEFB: ;
    edx = 0x8000000;
    eax = esi;
    ebx = edi;
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx & edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001FAFC0(); return; } /* jne: not equal / not zero */

loc_001FAF10: ;
    edx = 0x10000000;
    eax = esi;
    ebx = edi;
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx & edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001FAFC0(); return; } /* jne: not equal / not zero */

loc_001FAF25: ;
    edx = 0x4000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, esi (32-bit) */
    ebx = 0x20000000;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001FAF3C(); return; } /* je: equal / zero */

loc_001FAF33: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FAF3C(); return; } /* jne: not equal / not zero */

loc_001FAF37: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001FAF3E(); return; /* tail jmp 0x001FAF3E */

}

/**
 * sub_001FAF3C
 * Original: 0x001FAF3C - 0x001FAF3E (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001FAF3C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FAF3C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001FAF3E(); return; /* fallthrough 0x001FAF3E */

}

/**
 * sub_001FAF3E
 * Original: 0x001FAF3E - 0x001FAF4B (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAF3E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FAF3E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001FAF4B(); return; } /* je: equal / zero */

loc_001FAF42: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FAF4B(); return; } /* jne: not equal / not zero */

loc_001FAF46: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001FAF4D(); return; /* tail jmp 0x001FAF4D */

}

/**
 * sub_001FAF4B
 * Original: 0x001FAF4B - 0x001FAF4D (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAF4B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FAF4B: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001FAF4D(); return; /* fallthrough 0x001FAF4D */

}

/**
 * sub_001FAF4D
 * Original: 0x001FAF4D - 0x001FAF73 (38 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAF4D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FAF4D: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001FAFC0(); return; } /* jne: not equal / not zero */

loc_001FAF51: ;
    eax = esi;
    ebx = edi;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0x40000000;
    ebx = ebx >> 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx & edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001FAFC0(); return; } /* jne: not equal / not zero */

loc_001FAF66: ;
    esi = esi & edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi & edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001FAFC0(); return; } /* jne: not equal / not zero */

loc_001FAF70: ;
    ebx = MEM32(ebp + 0xC);

    g_seh_ebp = ebp; sub_001FAF73(); return; /* fallthrough 0x001FAF73 */

}

/**
 * sub_001FAF73
 * Original: 0x001FAF73 - 0x001FAFB1 (62 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAF73(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FAF73: ;
    eax = MEM32(ecx + 0x1C);
    esi = eax;
    esi = esi & 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001FAF81; /* je: equal / zero */

loc_001FAF7F: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001FAF81: ;
    eax = MEM32(ebx + 0x1C);
    edx = eax;
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001FAF8F; /* je: equal / zero */

loc_001FAF8D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001FAF8F: ;
    eax = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001FAFC0(); return; } /* jne: not equal / not zero */

loc_001FAF95: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x30), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FAFA2; /* je: equal / zero */

loc_001FAFA0: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001FAFA2: ;
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x30), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FAFA9; /* je: equal / zero */

loc_001FAFA7: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001FAFA9: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001FAFB1(); return; } /* je: equal / zero */

loc_001FAFAD: ;
    eax = edx;
    g_seh_ebp = ebp; sub_001FAFC0(); return; /* tail jmp 0x001FAFC0 */

}

/**
 * sub_001FAFB1
 * Original: 0x001FAFB1 - 0x001FAFC0 (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAFB1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FAFB1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001FAFBEu); RECOMP_ABI_CALL(0x001516FBu, sub_001516FB); /* call 0x001516FB */

loc_001FAFBE: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

    g_seh_ebp = ebp; sub_001FAFC0(); return; /* fallthrough 0x001FAFC0 */

}

/**
 * sub_001FAFC0
 * Original: 0x001FAFC0 - 0x001FAFC2 (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAFC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FAFC0: ;
    POP32(esp, edi);
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001FAFC2(); return; /* fallthrough 0x001FAFC2 */

}

/**
 * sub_001FAFC2
 * Original: 0x001FAFC2 - 0x001FAFC7 (5 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAFC2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FAFC2: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001FAFC7
 * Original: 0x001FAFC7 - 0x001FB0E3 (284 bytes, 112 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FAFC7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FAFC7: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x70) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001FB0DA; /* je: equal / zero */

loc_001FAFE0: ;
    ecx = eax + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + 0x68) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001FB0DA; /* je: equal / zero */

loc_001FAFEE: ;
    SET_LO16(eax, MEM16(eax + 0xC));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001FB0DA; /* jbe: below or equal (unsigned <=) */

loc_001FAFFB: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x64 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001FB0DA; /* ja: above (unsigned >) */

loc_001FB005: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ZX16(LO16(eax));
    eax = edi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x64) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_001FB05A; /* jbe: below or equal (unsigned <=) */

loc_001FB015: ;
    ebx = eax;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x74);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x7C) = eax;

loc_001FB01F: ;
    ecx = MEM32(ebp + 0x70);
    PUSH32(esp, ebx);
    esi = ebx + -116;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FB02Cu); RECOMP_ABI_CALL(0x001FAEC7u, sub_001FAEC7); /* call 0x001FAEC7 */

loc_001FB02C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001FB04F; /* jle: less or equal (signed <=) */

loc_001FB030: ;
    PUSH32(esp, 0x1D);
    POP32(esp, ecx);
    PUSH32(esp, 0x1D);
    edi = ebp + -20;
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
    POP32(esp, ecx);
    esi = ebx;
    edi = ebx + -116;
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
    PUSH32(esp, 0x1D);
    POP32(esp, ecx);
    esi = ebp + -20;
    edi = ebx;
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
    edi = MEM32(ebp + 0x64);

loc_001FB04F: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x74;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001FB01F; /* jne: not equal / not zero */

loc_001FB057: ;
    ecx = MEM32(ebp + 0x68);

loc_001FB05A: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(ebp + 0x7C) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_001FB0D7; /* jbe: below or equal (unsigned <=) */

loc_001FB064: ;
    ebx = ecx + 0x74;
    MEM32(ebp + 0x60) = ebx;

loc_001FB06A: ;
    eax = MEM32(ebp + 0x7C);
    PUSH32(esp, 0x1D);
    POP32(esp, ecx);
    MEM32(ebp + 0x6C) = eax;
    esi = ebx + 0x74;
    edi = ebp + -20;
    PUSH32(esp, ebx);
    eax = ebp + -20;
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
    ecx = MEM32(ebp + 0x70);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001FB088u); RECOMP_ABI_CALL(0x001FAEC7u, sub_001FAEC7); /* call 0x001FAEC7 */

loc_001FB088: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001FB0B5; /* jge: greater or equal (signed >=) */

loc_001FB08C: ;
    esi = ebx;
    edi = ebx + 0x74;

loc_001FB091: ;
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1D);
    POP32(esp, ecx);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x74;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
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
    ecx = MEM32(ebp + 0x70);
    PUSH32(esp, ebx);
    eax = ebp + -20;
    PUSH32(esp, eax);
    edi = ebx + 0x74;
    esi = ebx;
    PUSH32(esp, 0x001FB0AEu); RECOMP_ABI_CALL(0x001FAEC7u, sub_001FAEC7); /* call 0x001FAEC7 */

loc_001FB0AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FB091; /* jl: less (signed <) */

loc_001FB0B2: ;
    ebx = MEM32(ebp + 0x60);

loc_001FB0B5: ;
    edi = MEM32(ebp + 0x6C);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x74);
    _fb = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + 0x68);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x7C);
    PUSH32(esp, 0x1D);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x74;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x64) (32-bit) */
    POP32(esp, ecx);
    esi = ebp + -20;
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
    MEM32(ebp + 0x60) = ebx;
    if (CMP_B(_fa, _fb)) goto loc_001FB06A; /* jb: below (unsigned <) */

loc_001FB0D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001FB0DA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x74;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB0E3
 * Original: 0x001FB0E3 - 0x001FB1B9 (214 bytes, 86 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FB0E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FB0E3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001FB1B3; /* je: equal / zero */

loc_001FB0FA: ;
    ecx = eax + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001FB1B3; /* je: equal / zero */

loc_001FB108: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = ZX16(MEM16(eax + 0xC));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    MEM32(ebp + -12) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_001FB1B2; /* jbe: below or equal (unsigned <=) */

loc_001FB11B: ;
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, 0x1D);
    POP32(esp, ecx);
    esi = eax;
    edi = ebp + -128;
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
    MEM32(ebp + 8) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_001FB162; /* jbe: below or equal (unsigned <=) */

loc_001FB135: ;
    ebx = eax + -116;

loc_001FB138: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    eax = ebp + -128;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FB145u); RECOMP_ABI_CALL(0x001FAEC7u, sub_001FAEC7); /* call 0x001FAEC7 */

loc_001FB145: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001FB15F; /* jge: greater or equal (signed >=) */

loc_001FB149: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = ebx + 0x74;
    PUSH32(esp, 0x1D);
    esi = ebx;
    POP32(esp, ecx);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x74;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
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
    if (CMP_A(_fa, _fb)) goto loc_001FB138; /* ja: above (unsigned >) */

loc_001FB15F: ;
    ebx = MEM32(ebp + -12);

loc_001FB162: ;
    eax = ebx + -1;
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_001FB19F; /* jae: above or equal (unsigned >=) */

loc_001FB16F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x74);
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ebp + -8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001FB176: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    eax = ebp + -128;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FB183u); RECOMP_ABI_CALL(0x001FAEC7u, sub_001FAEC7); /* call 0x001FAEC7 */

loc_001FB183: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001FB19F; /* jle: less or equal (signed <=) */

loc_001FB187: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    edi = ebx + -116;
    PUSH32(esp, 0x1D);
    esi = ebx;
    POP32(esp, ecx);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x74;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
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
    if (CMP_B(_fa, _fb)) goto loc_001FB176; /* jb: below (unsigned <) */

loc_001FB19F: ;
    edi = MEM32(ebp + 8);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x74);
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + -8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x1D);
    POP32(esp, ecx);
    esi = ebp + -128;
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
    POP32(esp, edi);
    POP32(esp, esi);

loc_001FB1B2: ;
    POP32(esp, ebx);

loc_001FB1B3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001FB1B9
 * Original: 0x001FB1B9 - 0x001FB267 (174 bytes, 56 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FB1B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FB1B9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001FB261; /* je: equal / zero */

loc_001FB1CC: ;
    edx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM8(edx + 0x24)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x24), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FB261; /* jne: not equal / not zero */

loc_001FB1D9: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 8;
    PUSH32(esp, esi);
    esi = ecx + eax * 8;
    eax = MEM32(esi + 0x13D4);
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(eax + 0xC));
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001FB25F; /* jbe: below or equal (unsigned <=) */

loc_001FB1F7: ;
    ecx = MEM32(edx);
    edx = MEM32(edx + 4);
    MEM32(ebp + -8) = edx;
    PUSH32(esp, ebx);

loc_001FB200: ;
    edx = ZX16(MEM16(ebp + 0x10));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x74);
    ebx = MEM32(edx + eax + 0x30);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FB218; /* jne: not equal / not zero */

loc_001FB20F: ;
    edx = MEM32(edx + eax + 0x34);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + -8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FB223; /* je: equal / zero */

loc_001FB218: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ebp + 0x10)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x10), LO16(edi) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FB200; /* jb: below (unsigned <) */

loc_001FB221: ;
    goto loc_001FB25E;

loc_001FB223: ;
    ecx = ZX16(MEM16(ebp + 0x10));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x74);
    edi = ecx + eax + 0x4C;
    edx = MEM32(edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x8000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001FB25E; /* je: equal / zero */

loc_001FB238: ;
    ecx = MEM32(ebp + -4);
    edx = edx & 0xF7FFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    MEM32(edi) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FB249u); RECOMP_ABI_CALL(0x001FAFC7u, sub_001FAFC7); /* call 0x001FAFC7 */

loc_001FB249: ;
    eax = MEM32(esi + 0x13DC);
    MEM32(esi + 0x13B4) = MEM32(esi + 0x13B4) | 8;
    _fa = (uint32_t)(MEM32(esi + 0x13B4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, MEM32(eax + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FB25Eu); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001FB25E: ;
    POP32(esp, ebx);

loc_001FB25F: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001FB261: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001FB267
 * Original: 0x001FB267 - 0x001FB289 (34 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB267(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FB267: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FB286; /* je: equal / zero */

loc_001FB26D: ;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x14));
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x001FB282u); RECOMP_ABI_CALL(0x001FA4CBu, sub_001FA4CB); /* call 0x001FA4CB */

loc_001FB282: ;
    eax = MEM32(esp + 8);

loc_001FB286: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001FB289
 * Original: 0x001FB289 - 0x001FB324 (155 bytes, 51 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB289(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FB289: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001FB2B6; /* je: equal / zero */

loc_001FB299: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FB2A3; /* je: equal / zero */

loc_001FB29E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FB2AA; /* jne: not equal / not zero */

loc_001FB2A3: ;
    MEM32(esi + 0x10) = 8;

loc_001FB2AA: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001FB2B2u); RECOMP_ABI_CALL(0x001F1E3Bu, sub_001F1E3B); /* call 0x001F1E3B */

loc_001FB2B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FB2AA; /* je: equal / zero */

loc_001FB2B6: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esi + 0x14));
    ecx = edi;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1FB1B9);
    PUSH32(esp, 0x001FB2C8u); RECOMP_ABI_CALL(0x001E67C9u, sub_001E67C9); /* call 0x001E67C9 */

loc_001FB2C8: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001FB2D0u); RECOMP_ABI_CALL(0x001F9D0Fu, sub_001F9D0F); /* call 0x001F9D0F */

loc_001FB2D0: ;
    eax = MEM32(esi + 0x14);
    eax = eax + eax * 8;
    eax = edi + eax * 8 + 0x13B4;
    MEM32(eax) = MEM32(eax) & 0xFFFFFFEFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0x14);
    eax = eax + eax * 8;
    eax = MEM32(edi + eax * 8 + 0x13D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FB307; /* je: equal / zero */

loc_001FB2F1: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001FB2F9u); RECOMP_ABI_CALL(0x0020C3FFu, sub_0020C3FF); /* call 0x0020C3FF */

loc_001FB2F9: ;
    eax = MEM32(esi + 0x14);
    eax = eax + eax * 8;
    MEM32(edi + eax * 8 + 0x13D4) = MEM32(edi + eax * 8 + 0x13D4) & 0;
    _fa = (uint32_t)(MEM32(edi + eax * 8 + 0x13D4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001FB307: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, 0x1F);
    eax = eax + eax * 8;
    MEM32(edi + eax * 8 + 0x13DC) = MEM32(edi + eax * 8 + 0x13DC) & 0;
    _fa = (uint32_t)(MEM32(edi + eax * 8 + 0x13DC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001FB31Fu); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001FB31F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB324
 * Original: 0x001FB324 - 0x001FB340 (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FB324(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FB324: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    SET_LO16(edx, MEM16(ebp + 0xC));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x64 (16-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB340(); return; } /* jbe: below or equal (unsigned <=) */

loc_001FB336: ;
    eax = 0x80150001u;
    g_seh_ebp = ebp; sub_001FB41F(); return; /* tail jmp 0x001FB41F */

}

/**
 * sub_001FB340
 * Original: 0x001FB340 - 0x001FB373 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB340: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(esi + 8) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    ecx = 0xB54;
    edi = esi + 0x30;
    MEM16(esi + 0xC) = LO16(edx);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = ZX16(LO16(edx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB402(); return; } /* jbe: below or equal (unsigned <=) */

loc_001FB36D: ;
    edx = MEM32(ebp + 0x14);
    eax = esi + 0x4C;

    g_seh_ebp = ebp; sub_001FB373(); return; /* fallthrough 0x001FB373 */

}

/**
 * sub_001FB373
 * Original: 0x001FB373 - 0x001FB39A (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB373(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB373: ;
    esi = MEM32(edx);
    ecx = esi + 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x18) (32-bit) */
    MEM32(edx) = ecx;
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB423(); return; } /* ja: above (unsigned >) */

loc_001FB383: ;
    ecx = MEM32(esi);
    MEM32(eax + -28) = ecx;
    ecx = MEM32(esi + 4);
    MEM32(eax + -24) = ecx;
    SET_LO8(ecx, MEM8(esi + 0xA));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB39A(); return; } /* jne: not equal / not zero */

loc_001FB395: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001FB3B2(); return; /* tail jmp 0x001FB3B2 */

}

/**
 * sub_001FB39A
 * Original: 0x001FB39A - 0x001FB3A7 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB39A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB39A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB3A7(); return; } /* jne: not equal / not zero */

loc_001FB39F: ;
    MEM32(eax) = 0x40000000;
    g_seh_ebp = ebp; sub_001FB3B2(); return; /* tail jmp 0x001FB3B2 */

}

/**
 * sub_001FB3A7
 * Original: 0x001FB3A7 - 0x001FB3B2 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB3A7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB3A7: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB42A(); return; } /* jne: not equal / not zero */

loc_001FB3AC: ;
    MEM32(eax) = 0x80000000u;

    g_seh_ebp = ebp; sub_001FB3B2(); return; /* fallthrough 0x001FB3B2 */

}

/**
 * sub_001FB3B2
 * Original: 0x001FB3B2 - 0x001FB402 (80 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB3B2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB3B2: ;
    ecx = esi + 8;
    MEM32(ebp + 0x14) = ecx;
    SET_LO16(ecx, MEM16(ecx));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x10 (16-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB423(); return; } /* ja: above (unsigned >) */

loc_001FB3C1: ;
    esi = MEM32(edx);
    ecx = ZX16(LO16(ecx));
    edi = ecx + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x18) (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB423(); return; } /* ja: above (unsigned >) */

loc_001FB3CE: ;
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax + -16;
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
    ecx = MEM32(ebp + 0x14);
    ecx = ZX16(MEM16(ecx));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edx) = MEM32(edx) + ecx;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 0x10);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x54) = ecx;
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x74;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -8) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB373(); return; } /* jb: below (unsigned <) */

loc_001FB3FF: ;
    esi = MEM32(ebp + 8);

    g_seh_ebp = ebp; sub_001FB402(); return; /* fallthrough 0x001FB402 */

}

/**
 * sub_001FB402
 * Original: 0x001FB402 - 0x001FB41F (29 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB402(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB402: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FB40Du); RECOMP_ABI_CALL(0x001FA128u, sub_001FA128); /* call 0x001FA128 */

loc_001FB40D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB42A(); return; } /* je: equal / zero */

loc_001FB411: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FB41Au); RECOMP_ABI_CALL(0x001FAFC7u, sub_001FAFC7); /* call 0x001FAFC7 */

loc_001FB41A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001FB41F(); return; /* fallthrough 0x001FB41F */

}

/**
 * sub_001FB41C
 * Original: 0x001FB41C - 0x001FB41F (3 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB41C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB41C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001FB41F(); return; /* fallthrough 0x001FB41F */

}

/**
 * sub_001FB41F
 * Original: 0x001FB41F - 0x001FB423 (4 bytes, 2 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB41F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB41F: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001FB423
 * Original: 0x001FB423 - 0x001FB42A (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB423(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB423: ;
    eax = 0x80150001u;
    g_seh_ebp = ebp; sub_001FB41C(); return; /* tail jmp 0x001FB41C */

}

/**
 * sub_001FB42A
 * Original: 0x001FB42A - 0x001FB431 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB42A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB42A: ;
    eax = 0x80150007u;
    g_seh_ebp = ebp; sub_001FB41C(); return; /* tail jmp 0x001FB41C */

}

/**
 * sub_001FB431
 * Original: 0x001FB431 - 0x001FB44C (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FB431(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FB431: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    eax = eax | MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -8) = ecx;
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001FB44C(); return; } /* jne: not equal / not zero */

loc_001FB442: ;
    eax = 0x80070057u;
    g_seh_ebp = ebp; sub_001FB608(); return; /* tail jmp 0x001FB608 */

}

/**
 * sub_001FB44C
 * Original: 0x001FB44C - 0x001FB4B1 (101 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB44C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB44C: ;
    edx = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(edx + 0xC));
    eax = ZX16(LO16(ecx));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    MEM32(ebp + -4) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_001FB482; /* jbe: below or equal (unsigned <=) */

loc_001FB461: ;
    eax = edx + 0x30;

loc_001FB464: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FB473; /* jne: not equal / not zero */

loc_001FB46B: ;
    esi = MEM32(eax + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FB482; /* je: equal / zero */

loc_001FB473: ;
    esi = ZX16(MEM16(edx + 0xC));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x74;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    MEM32(ebp + -4) = ebx;
    if (CMP_B(_fa, _fb)) goto loc_001FB464; /* jb: below (unsigned <) */

loc_001FB482: ;
    eax = ZX16(LO16(ecx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB4CD(); return; } /* jne: not equal / not zero */

loc_001FB48A: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x64 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB4BB(); return; } /* jne: not equal / not zero */

loc_001FB490: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    edi = eax + edx;
    _fa = (uint32_t)(MEM32(edi + 0xA0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xA0), 0xFFFFFFFFu (32-bit) */
    MEM32(ebp + -4) = ebx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB4B1(); return; } /* jne: not equal / not zero */

loc_001FB4A5: ;
    PUSH32(esp, 0x1D);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    g_seh_ebp = ebp; sub_001FB4C0(); return; /* tail jmp 0x001FB4C0 */

}

/**
 * sub_001FB4B1
 * Original: 0x001FB4B1 - 0x001FB4BB (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB4B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB4B1: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001FB605(); return; /* tail jmp 0x001FB605 */

}

/**
 * sub_001FB4BB
 * Original: 0x001FB4BB - 0x001FB4C0 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB4BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB4BB: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(edx + 0xC) = LO16(ecx);

    g_seh_ebp = ebp; sub_001FB4C0(); return; /* fallthrough 0x001FB4C0 */

}

/**
 * sub_001FB4C0
 * Original: 0x001FB4C0 - 0x001FB4CD (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB4C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB4C0: ;
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    MEM32(eax + edx + 0xA0) = MEM32(eax + edx + 0xA0) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + edx + 0xA0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001FB4CD(); return; /* fallthrough 0x001FB4CD */

}

/**
 * sub_001FB4CD
 * Original: 0x001FB4CD - 0x001FB523 (86 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB4CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB4CD: ;
    ecx = MEM32(ebp + 0x1C);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x74);
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -12) = ebx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x58) = ecx;
    ecx = MEM32(ebp + 0x20);
    MEM32(ebx + 0x30) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(ebx + 0x5C) = ecx;
    ecx = MEM32(ebp + 0x14);
    MEM32(ebx + 0x34) = eax;
    eax = MEM32(ebx + 0x4C);
    MEM32(ebx + 0x60) = ecx;
    SET_LO8(ecx, MEM8(ebp + 0x2C));
    _fb = (uint32_t)(MEM8(ebp + 0x24)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + MEM8(ebp + 0x24));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = eax & 0xFC000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(ebx + 0x64) = LO8(ecx);
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edi = ebx + 0x98;
    esi = ebx + 0x58;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x4C) = eax;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) { g_seh_ebp = ebp; sub_001FB523(); return; } /* je: equal / zero */

loc_001FB51C: ;
    eax = eax & 0xF7FFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001FB539(); return; /* tail jmp 0x001FB539 */

}

/**
 * sub_001FB523
 * Original: 0x001FB523 - 0x001FB539 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB523(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB523: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edi = 0x970234;
    esi = ebx + 0x58;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) { g_seh_ebp = ebp; sub_001FB53C(); return; } /* je: equal / zero */

loc_001FB534: ;
    eax = eax | 0x8000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001FB539(); return; /* fallthrough 0x001FB539 */

}

/**
 * sub_001FB539
 * Original: 0x001FB539 - 0x001FB53C (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB539(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB539: ;
    MEM32(ebx + 0x4C) = eax;

    g_seh_ebp = ebp; sub_001FB53C(); return; /* fallthrough 0x001FB53C */

}

/**
 * sub_001FB53C
 * Original: 0x001FB53C - 0x001FB5CD (145 bytes, 53 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB53C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB53C: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edi = 0x970234;
    esi = ebx + 0x58;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) goto loc_001FB57A; /* je: equal / zero */

loc_001FB54D: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax + 4));
    ecx = MEM32(ebp + -8);
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0x001FB55Du); RECOMP_ABI_CALL(0x001F9E85u, sub_001F9E85); /* call 0x001F9E85 */

loc_001FB55D: ;
    ecx = MEM32(ebp + -8);
    eax = eax + eax * 8;
    edi = ecx + eax * 8 + 0x13BC;
    PUSH32(esp, 2);
    esi = ebx + 0x58;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) goto loc_001FB57A; /* jne: not equal / not zero */

loc_001FB576: ;
    MEM8(ebx + 0x4F) = MEM8(ebx + 0x4F) & 0xC3;
    _fa = (uint32_t)(MEM8(ebx + 0x4F)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_001FB57A: ;
    SET_LO16(eax, MEM16(ebp + 0x24));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001FB59E; /* jbe: below or equal (unsigned <=) */

loc_001FB583: ;
    esi = MEM32(ebp + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FB59E; /* je: equal / zero */

loc_001FB58A: ;
    ecx = ZX16(LO16(eax));
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ebx + 0x65;
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

loc_001FB59E: ;
    _fa = (uint32_t)(MEM16(ebp + 0x2C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x2C), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB5CD(); return; } /* jbe: below or equal (unsigned <=) */

loc_001FB5A5: ;
    esi = MEM32(ebp + 0x30);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB5CD(); return; } /* je: equal / zero */

loc_001FB5AC: ;
    ecx = ZX16(MEM16(ebp + 0x2C));
    ebx = MEM32(ebp + 8);
    edx = ZX16(LO16(eax));
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ebp + -12);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edx + ebx + 0x65;
    edx = ecx;
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
    g_seh_ebp = ebp; sub_001FB5D0(); return; /* tail jmp 0x001FB5D0 */

}

/**
 * sub_001FB5CD
 * Original: 0x001FB5CD - 0x001FB5D0 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB5CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB5CD: ;
    ebx = MEM32(ebp + 8);

    g_seh_ebp = ebp; sub_001FB5D0(); return; /* fallthrough 0x001FB5D0 */

}

/**
 * sub_001FB5D0
 * Original: 0x001FB5D0 - 0x001FB605 (53 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001FB5D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB5D0: ;
    esi = ZX16(MEM16(ebp + 0x2C));
    edx = ZX16(LO16(eax));
    PUSH32(esp, 0x20);
    POP32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -4));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + -12);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + ebx + 0x65;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    ecx = MEM32(ebp + -8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001FB603u); RECOMP_ABI_CALL(0x001FB0E3u, sub_001FB0E3); /* call 0x001FB0E3 */

loc_001FB603: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001FB605(); return; /* fallthrough 0x001FB605 */

}

/**
 * sub_001FB605
 * Original: 0x001FB605 - 0x001FB608 (3 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB605(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB605: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001FB608(); return; /* fallthrough 0x001FB608 */

}

/**
 * sub_001FB608
 * Original: 0x001FB608 - 0x001FB60C (4 bytes, 2 insns)
 * CC: cdecl, 11 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB608(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB608: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 48; return; /* ret 44 */

}

/**
 * sub_001FB60C
 * Original: 0x001FB60C - 0x001FB695 (137 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FB60C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FB60C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    eax = eax | MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -8) = ecx;
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001FB736(); return; } /* je: equal / zero */

loc_001FB622: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0x10 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB736(); return; } /* ja: above (unsigned >) */

loc_001FB62C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB736(); return; } /* je: equal / zero */

loc_001FB636: ;
    edx = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(edx + 0xC));
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = ZX16(LO16(ecx));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001FB669; /* jbe: below or equal (unsigned <=) */

loc_001FB648: ;
    eax = edx + 0x30;

loc_001FB64B: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FB65A; /* jne: not equal / not zero */

loc_001FB652: ;
    edi = MEM32(eax + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FB669; /* je: equal / zero */

loc_001FB65A: ;
    edi = ZX16(MEM16(edx + 0xC));
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x74;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FB64B; /* jb: below (unsigned <) */

loc_001FB669: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB6A4(); return; } /* jne: not equal / not zero */

loc_001FB66E: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x64 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB69F(); return; } /* jne: not equal / not zero */

loc_001FB674: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    esi = eax + edx;
    _fa = (uint32_t)(MEM32(esi + 0xA0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xA0), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB695(); return; } /* jne: not equal / not zero */

loc_001FB689: ;
    PUSH32(esp, 0x1D);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x30;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    g_seh_ebp = ebp; sub_001FB6A4(); return; /* tail jmp 0x001FB6A4 */

}

/**
 * sub_001FB695
 * Original: 0x001FB695 - 0x001FB69F (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB695(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB695: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001FB73B(); return; /* tail jmp 0x001FB73B */

}

/**
 * sub_001FB69F
 * Original: 0x001FB69F - 0x001FB6A4 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB69F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB69F: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(edx + 0xC) = LO16(ecx);

    g_seh_ebp = ebp; sub_001FB6A4(); return; /* fallthrough 0x001FB6A4 */

}

/**
 * sub_001FB6A4
 * Original: 0x001FB6A4 - 0x001FB713 (111 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB6A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB6A4: ;
    eax = MEM32(ebp + -4);
    esi = MEM32(ebp + 0x20);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax + 0xA0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001FB6C3; /* jae: above or equal (unsigned >=) */

loc_001FB6B9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FB6C3; /* je: equal / zero */

loc_001FB6BE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFEu (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB732(); return; } /* jne: not equal / not zero */

loc_001FB6C3: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + 0x30) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEM32(eax + 0x34) = ecx;
    ecx = MEM32(eax + 0x4C);
    ecx = ecx & 0x3FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | MEM32(ebp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0xA0) = esi;
    MEM32(eax + 0x4C) = ecx;
    ecx = MEM32(ebp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB717(); return; } /* jbe: below or equal (unsigned <=) */

loc_001FB6EB: ;
    esi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB717(); return; } /* je: equal / zero */

loc_001FB6F2: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax + 0x3C;
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
    ecx = ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    POP32(esp, ebx);
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB713(); return; } /* jae: above or equal (unsigned >=) */

loc_001FB70C: ;
    MEM8(eax + ecx + 0x3C) = 0;
    g_seh_ebp = ebp; sub_001FB717(); return; /* tail jmp 0x001FB717 */

}

/**
 * sub_001FB713
 * Original: 0x001FB713 - 0x001FB717 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB713(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB713: ;
    MEM8(eax + 0x4B) = 0;

    g_seh_ebp = ebp; sub_001FB717(); return; /* fallthrough 0x001FB717 */

}

/**
 * sub_001FB717
 * Original: 0x001FB717 - 0x001FB732 (27 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB717(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB717: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FB726; /* je: equal / zero */

loc_001FB71D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FB726; /* je: equal / zero */

loc_001FB723: ;
    MEM32(edx + 8) = MEM32(edx + 8) + 1;
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001FB726: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(ebp + -8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001FB732u); RECOMP_ABI_CALL(0x001FB0E3u, sub_001FB0E3); /* call 0x001FB0E3 */

    g_seh_ebp = ebp; sub_001FB732(); return; /* fallthrough 0x001FB732 */

}

/**
 * sub_001FB732
 * Original: 0x001FB732 - 0x001FB736 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB732(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB732: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001FB73B(); return; /* tail jmp 0x001FB73B */

}

/**
 * sub_001FB736
 * Original: 0x001FB736 - 0x001FB741 (11 bytes, 5 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB736(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB736: ;
    eax = 0x80070057u;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001FB73B
 * Original: 0x001FB73B - 0x001FB741 (6 bytes, 4 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB73B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB73B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001FB741
 * Original: 0x001FB741 - 0x001FB77B (58 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB741(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB741: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(edx + 0xC));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB808(); return; } /* jbe: below or equal (unsigned <=) */

loc_001FB755: ;
    eax = edx + 0x30;
    PUSH32(esp, edi);

loc_001FB759: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FB76A; /* jne: not equal / not zero */

loc_001FB761: ;
    edi = MEM32(eax + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x18) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB77B(); return; } /* je: equal / zero */

loc_001FB76A: ;
    edi = ZX16(MEM16(edx + 0xC));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x74;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FB759; /* jb: below (unsigned <) */

loc_001FB776: ;
    g_seh_ebp = ebp; sub_001FB807(); return; /* tail jmp 0x001FB807 */

}

/**
 * sub_001FB77B
 * Original: 0x001FB77B - 0x001FB7E5 (106 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB77B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB77B: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB7E5(); return; } /* je: equal / zero */

loc_001FB784: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB7E5(); return; } /* je: equal / zero */

loc_001FB789: ;
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x74);
    ecx = MEM32(ecx + edx + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001FB7A3; /* jae: above or equal (unsigned >=) */

loc_001FB799: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FB7A3; /* je: equal / zero */

loc_001FB79E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFEu (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB807(); return; } /* jne: not equal / not zero */

loc_001FB7A3: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001FB7C7; /* jae: above or equal (unsigned >=) */

loc_001FB7A8: ;
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    eax = eax + edx + -68;

loc_001FB7B1: ;
    PUSH32(esp, 0x1D);
    esi = eax + 0x74;
    edi = eax;
    POP32(esp, ecx);
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
    ecx = ZX16(MEM16(edx + 0xC));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x74;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FB7B1; /* jb: below (unsigned <) */

loc_001FB7C7: ;
    MEM16(edx + 0xC) = MEM16(edx + 0xC) - 1;
    _fa = (uint32_t)(MEM16(edx + 0xC)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO16(esi, MEM16(edx + 0xC));
    MEM32(edx + 8) = MEM32(edx + 8) + 1;
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = ZX16(LO16(esi));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x74);
    PUSH32(esp, 0x1D);
    POP32(esp, ecx);
    edi = esi + edx + 0x30;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    g_seh_ebp = ebp; sub_001FB807(); return; /* tail jmp 0x001FB807 */

}

/**
 * sub_001FB7E5
 * Original: 0x001FB7E5 - 0x001FB807 (34 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB7E5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB7E5: ;
    esi = ebx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x74);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x4F) = MEM8(esi + 0x4F) & 0xC3;
    _fa = (uint32_t)(MEM8(esi + 0x4F)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(esi + 0xA0) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x98;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    PUSH32(esp, 0x001FB807u); RECOMP_ABI_CALL(0x001FB0E3u, sub_001FB0E3); /* call 0x001FB0E3 */

    g_seh_ebp = ebp; sub_001FB807(); return; /* fallthrough 0x001FB807 */

}

/**
 * sub_001FB807
 * Original: 0x001FB807 - 0x001FB808 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB807(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB807: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001FB808(); return; /* fallthrough 0x001FB808 */

}

/**
 * sub_001FB808
 * Original: 0x001FB808 - 0x001FB80F (7 bytes, 4 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB808(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FB808: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001FB80F
 * Original: 0x001FB80F - 0x001FB83E (47 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FB80F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FB80F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(edx + 0xC));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB85B(); return; } /* jbe: below or equal (unsigned <=) */

loc_001FB821: ;
    eax = edx + 0x30;
    PUSH32(esp, ebx);

loc_001FB825: ;
    ebx = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FB834; /* jne: not equal / not zero */

loc_001FB82C: ;
    ebx = MEM32(eax + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB83E(); return; } /* je: equal / zero */

loc_001FB834: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x74;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FB825; /* jb: below (unsigned <) */

loc_001FB83C: ;
    g_seh_ebp = ebp; sub_001FB85A(); return; /* tail jmp 0x001FB85A */

}

/**
 * sub_001FB83E
 * Original: 0x001FB83E - 0x001FB85A (28 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB83E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB83E: ;
    esi = MEM32(ebp + 0x14);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    eax = eax + edx + 0x4C;
    esi = ~esi;
    esi = esi & MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    esi = esi | MEM32(ebp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edx);
    MEM32(eax) = esi;
    PUSH32(esp, 0x001FB85Au); RECOMP_ABI_CALL(0x001FB0E3u, sub_001FB0E3); /* call 0x001FB0E3 */

    g_seh_ebp = ebp; sub_001FB85A(); return; /* fallthrough 0x001FB85A */

}

/**
 * sub_001FB85A
 * Original: 0x001FB85A - 0x001FB85B (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB85A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB85A: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001FB85B(); return; /* fallthrough 0x001FB85B */

}

/**
 * sub_001FB85B
 * Original: 0x001FB85B - 0x001FB861 (6 bytes, 4 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB85B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB85B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001FB861
 * Original: 0x001FB861 - 0x001FB893 (50 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FB861(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FB861: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    MEM32(ebp + -4) = ecx;
    ecx = ZX16(MEM16(edi + 0xC));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB8D4(); return; } /* jbe: below or equal (unsigned <=) */

loc_001FB877: ;
    eax = edi + 0x30;

loc_001FB87A: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FB889; /* jne: not equal / not zero */

loc_001FB881: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB893(); return; } /* je: equal / zero */

loc_001FB889: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x74;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FB87A; /* jb: below (unsigned <) */

loc_001FB891: ;
    g_seh_ebp = ebp; sub_001FB8D4(); return; /* tail jmp 0x001FB8D4 */

}

/**
 * sub_001FB893
 * Original: 0x001FB893 - 0x001FB8D4 (65 bytes, 22 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB893(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB893: ;
    ecx = MEM32(ebp + 0x20);
    edx = MEM32(ebp + 0x18);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 0x4F) = MEM8(eax + 0x4F) | 8;
    _fa = (uint32_t)(MEM8(eax + 0x4F)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(eax + 0x50) = ecx;
    ecx = MEM32(ebp + 0x24);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x1C);
    MEM32(eax + 0x54) = ecx;
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, ebx);
    MEM32(eax + 0x60) = ecx;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    MEM32(eax + 0x58) = edx;
    MEM32(eax + 0x5C) = esi;
    MEM32(eax + 0x98) = edx;
    MEM32(eax + 0x9C) = esi;
    PUSH32(esp, 0x001FB8D3u); RECOMP_ABI_CALL(0x001FB0E3u, sub_001FB0E3); /* call 0x001FB0E3 */

loc_001FB8D3: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001FB8D4(); return; /* fallthrough 0x001FB8D4 */

}

/**
 * sub_001FB8D4
 * Original: 0x001FB8D4 - 0x001FB8DA (6 bytes, 4 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB8D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB8D4: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001FB8DA
 * Original: 0x001FB8DA - 0x001FB911 (55 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FB8DA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FB8DA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    MEM32(ebp + -8) = ecx;
    ecx = ZX16(MEM16(ebx + 0xC));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB94C(); return; } /* jbe: below or equal (unsigned <=) */

loc_001FB8F2: ;
    eax = ebx + 0x30;

loc_001FB8F5: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FB904; /* jne: not equal / not zero */

loc_001FB8FC: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB911(); return; } /* je: equal / zero */

loc_001FB904: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x74;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FB8F5; /* jb: below (unsigned <) */

loc_001FB90F: ;
    g_seh_ebp = ebp; sub_001FB94C(); return; /* tail jmp 0x001FB94C */

}

/**
 * sub_001FB911
 * Original: 0x001FB911 - 0x001FB94C (59 bytes, 26 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB911(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB911: ;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = eax + ebx;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edi = edx + 0x58;
    esi = ebp + 0x14;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) goto loc_001FB94A; /* jne: not equal / not zero */

loc_001FB92B: ;
    MEM8(edx + 0x4F) = MEM8(edx + 0x4F) & 0xF7;
    _fa = (uint32_t)(MEM8(edx + 0x4F)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(ebp + -8);
    edi = edx + 0x50;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 0x98;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    PUSH32(esp, ebx);
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    PUSH32(esp, 0x001FB94Au); RECOMP_ABI_CALL(0x001FB0E3u, sub_001FB0E3); /* call 0x001FB0E3 */

loc_001FB94A: ;
    POP32(esp, edi);
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001FB94C(); return; /* fallthrough 0x001FB94C */

}

/**
 * sub_001FB94C
 * Original: 0x001FB94C - 0x001FB951 (5 bytes, 3 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB94C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB94C: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001FB951
 * Original: 0x001FB951 - 0x001FB97D (44 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB951(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FB951: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 0xC)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0xC), LO16(esi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001FB973; /* jbe: below or equal (unsigned <=) */

loc_001FB95E: ;
    edx = eax + 0x4C;
    PUSH32(esp, edi);

loc_001FB962: ;
    MEM8(edx + 3) = MEM8(edx + 3) & 0xCB;
    _fa = (uint32_t)(MEM8(edx + 3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edi = ZX16(MEM16(eax + 0xC));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x74;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FB962; /* jb: below (unsigned <) */

loc_001FB972: ;
    POP32(esp, edi);

loc_001FB973: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001FB979u); RECOMP_ABI_CALL(0x001FAFC7u, sub_001FAFC7); /* call 0x001FAFC7 */

loc_001FB979: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB97D
 * Original: 0x001FB97D - 0x001FB992 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FB97D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FB97D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB992(); return; } /* jne: not equal / not zero */

loc_001FB988: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001FBA8D(); return; /* tail jmp 0x001FBA8D */

}

/**
 * sub_001FB992
 * Original: 0x001FB992 - 0x001FB9AB (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB992(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB992: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(edi + 0x14D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14D0), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB9AB(); return; } /* jne: not equal / not zero */

loc_001FB99F: ;
    MEM32(ebp + 0xC) = 0x8015200Cu;
    g_seh_ebp = ebp; sub_001FBA8A(); return; /* tail jmp 0x001FBA8A */

}

/**
 * sub_001FB9AB
 * Original: 0x001FB9AB - 0x001FB9E3 (56 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB9AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB9AB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001FB9B8u); RECOMP_ABI_CALL(0x001F9E3Cu, sub_001F9E3C); /* call 0x001F9E3C */

loc_001FB9B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = MEM32(ebp + 0xC);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB9E3(); return; } /* je: equal / zero */

loc_001FB9BF: ;
    PUSH32(esp, MEM32(ebx + 4));
    eax = esi + esi * 8;
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, MEM32(edi + eax * 8 + 0x13D4));
    PUSH32(esp, 0x001FB9D3u); RECOMP_ABI_CALL(0x001F9ED6u, sub_001F9ED6); /* call 0x001F9ED6 */

loc_001FB9D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FB9E3(); return; } /* jne: not equal / not zero */

loc_001FB9D7: ;
    MEM32(ebp + 0xC) = 1;
    g_seh_ebp = ebp; sub_001FBA88(); return; /* tail jmp 0x001FBA88 */

}

/**
 * sub_001FB9E3
 * Original: 0x001FB9E3 - 0x001FBA88 (165 bytes, 48 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB9E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB9E3: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x3ED);
    ecx = edi;
    PUSH32(esp, 0x001FB9F5u); RECOMP_ABI_CALL(0x001F9634u, sub_001F9634); /* call 0x001F9634 */

loc_001FB9F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FBA88(); return; } /* jl: less (signed <) */

loc_001FBA00: ;
    eax = esi + esi * 8;
    esi = edi + eax * 8;
    ecx = MEM32(esi + 0x13A8);
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esi + 0x13AC);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebx);
    PUSH32(esp, 0);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, 0);
    MEM32(eax + 0x2C) = ecx;
    PUSH32(esp, MEM32(edi + 0x14D0));
    ecx = edi;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001FBA3Fu); RECOMP_ABI_CALL(0x001F9686u, sub_001F9686); /* call 0x001F9686 */

loc_001FBA3F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FBA88(); return; } /* jl: less (signed <) */

loc_001FBA46: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    PUSH32(esp, 0x001FBA50u); RECOMP_ABI_CALL(0x001F9E3Cu, sub_001F9E3C); /* call 0x001F9E3C */

loc_001FBA50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FBA88(); return; } /* je: equal / zero */

loc_001FBA54: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(ebx + 4));
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, MEM32(esi + 0x13D4));
    PUSH32(esp, 0x001FBA66u); RECOMP_ABI_CALL(0x001FB741u, sub_001FB741); /* call 0x001FB741 */

loc_001FBA66: ;
    PUSH32(esp, MEM32(esi + 0x13D4));
    ecx = edi;
    PUSH32(esp, 0x001FBA73u); RECOMP_ABI_CALL(0x001FAFC7u, sub_001FAFC7); /* call 0x001FAFC7 */

loc_001FBA73: ;
    eax = MEM32(esi + 0x13DC);
    MEM32(esi + 0x13B4) = MEM32(esi + 0x13B4) | 8;
    _fa = (uint32_t)(MEM32(esi + 0x13B4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0x001FBA88u); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

    g_seh_ebp = ebp; sub_001FBA88(); return; /* fallthrough 0x001FBA88 */

}

/**
 * sub_001FBA88
 * Original: 0x001FBA88 - 0x001FBA8A (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBA88(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBA88: ;
    POP32(esp, esi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001FBA8A(); return; /* fallthrough 0x001FBA8A */

}

/**
 * sub_001FBA8A
 * Original: 0x001FBA8A - 0x001FBA8D (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBA8A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBA8A: ;
    eax = MEM32(ebp + 0xC);

    g_seh_ebp = ebp; sub_001FBA8D(); return; /* fallthrough 0x001FBA8D */

}

/**
 * sub_001FBA8D
 * Original: 0x001FBA8D - 0x001FBA92 (5 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBA8D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBA8D: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001FBA92
 * Original: 0x001FBA92 - 0x001FBAAC (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FBA92(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FBA92: ;
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
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FBAAC(); return; } /* jne: not equal / not zero */

loc_001FBAA2: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001FBC66(); return; /* tail jmp 0x001FBC66 */

}

/**
 * sub_001FBAAC
 * Original: 0x001FBAAC - 0x001FBB3D (145 bytes, 43 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBAAC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBAAC: ;
    _fa = (uint32_t)(MEM32(ebx + 0x14D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x14D0), esi (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = esi;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FBC4D(); return; } /* je: equal / zero */

loc_001FBABC: ;
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001FBAC7u); RECOMP_ABI_CALL(0x001F9E3Cu, sub_001F9E3C); /* call 0x001F9E3C */

loc_001FBAC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FBC4D(); return; } /* je: equal / zero */

loc_001FBACF: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x14);
    eax = eax * 8 + 0x36;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F2);
    PUSH32(esp, 0x001FBAE8u); RECOMP_ABI_CALL(0x001F9634u, sub_001F9634); /* call 0x001F9634 */

loc_001FBAE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(ebp + -4);
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FBC54(); return; } /* jl: less (signed <) */

loc_001FBAF6: ;
    ecx = MEM32(ebp + 0x14);
    eax = edi + edi * 8;
    edi = ebx + eax * 8;
    eax = MEM32(edi + 0x13A8);
    MEM32(esi + 0x20) = eax;
    eax = MEM32(edi + 0x13AC);
    MEM32(esi + 0x24) = eax;
    eax = MEM32(ebx + 4);
    MEM32(esi + 0x28) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(esi + 0x30) = eax;
    MEM16(esi + 0x34) = MEM16(esi + 0x34) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x34)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = esi + 0x36;
    MEM32(ebp + -4) = eax;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FBB90(); return; } /* jbe: below or equal (unsigned <=) */

loc_001FBB32: ;
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + 8) = eax;
    MEM32(ebp + -8) = ecx;
    g_seh_ebp = ebp; sub_001FBB40(); return; /* tail jmp 0x001FBB40 */

}

/**
 * sub_001FBB3D
 * Original: 0x001FBB3D - 0x001FBB40 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBB3D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBB3D: ;
    eax = MEM32(ebp + 8);

    g_seh_ebp = ebp; sub_001FBB40(); return; /* fallthrough 0x001FBB40 */

}

/**
 * sub_001FBB40
 * Original: 0x001FBB40 - 0x001FBB83 (67 bytes, 24 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBB40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBB40: ;
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(edi + 0x13D4));
    ecx = ebx;
    MEM32(ebp + -12) = eax;
    PUSH32(esp, 0x001FBB57u); RECOMP_ABI_CALL(0x001F9ED6u, sub_001F9ED6); /* call 0x001F9ED6 */

loc_001FBB57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FBB83(); return; } /* je: equal / zero */

loc_001FBB5B: ;
    _fa = (uint32_t)(MEM32(eax + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x70), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FBB83(); return; } /* je: equal / zero */

loc_001FBB61: ;
    _fa = (uint32_t)(MEM8(eax + 0x1F)) & 0xFFu; _fb = (uint32_t)(0xC0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1F), 0xC0 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FBB83(); return; } /* jne: not equal / not zero */

loc_001FBB67: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -12);
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi + 0x34) = MEM16(esi + 0x34) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x34)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = eax;
    g_seh_ebp = ebp; sub_001FBB87(); return; /* tail jmp 0x001FBB87 */

}

/**
 * sub_001FBB83
 * Original: 0x001FBB83 - 0x001FBB87 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBB83(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBB83: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 4) = MEM32(esi + 4) + 0xFFFFFFF8u;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001FBB87(); return; /* fallthrough 0x001FBB87 */

}

/**
 * sub_001FBB87
 * Original: 0x001FBB87 - 0x001FBB90 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBB87(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBB87: ;
    _fb = (uint32_t)(0x56) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x56;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001FBB3D(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001FBB90(); return; /* fallthrough 0x001FBB90 */

}

/**
 * sub_001FBB90
 * Original: 0x001FBB90 - 0x001FBBA3 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBB90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBB90: ;
    SET_LO16(eax, MEM16(esi + 0x34));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FBBA3(); return; } /* jne: not equal / not zero */

loc_001FBB9B: ;
    MEM32(ebp + 8) = ecx;
    g_seh_ebp = ebp; sub_001FBC54(); return; /* tail jmp 0x001FBC54 */

}

/**
 * sub_001FBBA3
 * Original: 0x001FBBA3 - 0x001FBC4D (170 bytes, 51 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBBA3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBBA3: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebx + 0x14D0));
    eax = ZX16(LO16(eax));
    PUSH32(esp, 0x100);
    eax = eax * 8 + 0x36;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001FBBC3u); RECOMP_ABI_CALL(0x001F9686u, sub_001F9686); /* call 0x001F9686 */

loc_001FBBC3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FBC62(); return; } /* jl: less (signed <) */

loc_001FBBCE: ;
    eax = MEM32(ebp + 0xC);
    MEM32(edi + 0x13C4) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(edi + 0x13C8) = eax;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001FBC36; /* jbe: below or equal (unsigned <=) */

loc_001FBBE7: ;
    esi = MEM32(ebp + 0x18);
    MEM32(ebp + 0x14) = eax;

loc_001FBBED: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(esi);
    edx = MEM32(edi + 0x13D4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x001FBC02u); RECOMP_ABI_CALL(0x001F9ED6u, sub_001F9ED6); /* call 0x001F9ED6 */

loc_001FBC02: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FBC2E; /* je: equal / zero */

loc_001FBC06: ;
    _fa = (uint32_t)(MEM32(eax + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x70), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FBC2E; /* je: equal / zero */

loc_001FBC0C: ;
    _fa = (uint32_t)(MEM8(eax + 0x1F)) & 0xFFu; _fb = (uint32_t)(0xC0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1F), 0xC0 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001FBC2E; /* jne: not equal / not zero */

loc_001FBC12: ;
    PUSH32(esp, 0x4000000);
    PUSH32(esp, 0x30000000);
    PUSH32(esp, MEM32(esi + 4));
    ecx = ebx;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, MEM32(edi + 0x13D4));
    PUSH32(esp, 0x001FBC2Eu); RECOMP_ABI_CALL(0x001FB80Fu, sub_001FB80F); /* call 0x001FB80F */

loc_001FBC2E: ;
    _fb = (uint32_t)(0x56) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x56;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001FBBED; /* jne: not equal / not zero */

loc_001FBC36: ;
    eax = MEM32(edi + 0x13DC);
    MEM32(edi + 0x13B4) = MEM32(edi + 0x13B4) | 8;
    _fa = (uint32_t)(MEM32(edi + 0x13B4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0x001FBC4Bu); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001FBC4B: ;
    g_seh_ebp = ebp; sub_001FBC62(); return; /* tail jmp 0x001FBC62 */

}

/**
 * sub_001FBC4D
 * Original: 0x001FBC4D - 0x001FBC54 (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBC4D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBC4D: ;
    MEM32(ebp + 8) = 0x8015200Cu;

    g_seh_ebp = ebp; sub_001FBC54(); return; /* fallthrough 0x001FBC54 */

}

/**
 * sub_001FBC54
 * Original: 0x001FBC54 - 0x001FBC66 (18 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBC54(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBC54: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FBC62; /* je: equal / zero */

loc_001FBC58: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001FBC62u); RECOMP_ABI_CALL(0x0020C3FAu, sub_0020C3FA); /* call 0x0020C3FA */

loc_001FBC62: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001FBC66(); return; /* fallthrough 0x001FBC66 */

}

/**
 * sub_001FBC62
 * Original: 0x001FBC62 - 0x001FBC66 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBC62(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBC62: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001FBC66(); return; /* fallthrough 0x001FBC66 */

}

/**
 * sub_001FBC66
 * Original: 0x001FBC66 - 0x001FBC6C (6 bytes, 4 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBC66(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBC66: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001FBC6C
 * Original: 0x001FBC6C - 0x001FBC84 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FBC6C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FBC6C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FBC84(); return; } /* jne: not equal / not zero */

loc_001FBC7A: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001FBE48(); return; /* tail jmp 0x001FBE48 */

}

/**
 * sub_001FBC84
 * Original: 0x001FBC84 - 0x001FBD13 (143 bytes, 51 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBC84(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBC84: ;
    _fa = (uint32_t)(MEM32(ecx + 0x14D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14D0), eax (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FBE3B(); return; } /* je: equal / zero */

loc_001FBC96: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), eax (32-bit) */
    esi = MEM32(ebp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_001FBCAC; /* je: equal / zero */

loc_001FBC9E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FBCA4u); RECOMP_ABI_CALL(0x001F9E3Cu, sub_001F9E3C); /* call 0x001F9E3C */

loc_001FBCA4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FBE3B(); return; } /* je: equal / zero */

loc_001FBCAC: ;
    eax = esi + esi * 8;
    ebx = ecx + eax * 8;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edi = ebp + 0xC;
    esi = ebx + 0x13BC;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_001FBD13(); return; } /* jne: not equal / not zero */

loc_001FBCC4: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edi = 0x970234;
    esi = ebp + 0xC;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) { g_seh_ebp = ebp; sub_001FBD13(); return; } /* je: equal / zero */

loc_001FBCD5: ;
    edi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FBD1C(); return; } /* je: equal / zero */

loc_001FBCDC: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & eax;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001FBD0E; /* jbe: below or equal (unsigned <=) */

loc_001FBCE3: ;
    esi = MEM32(ebp + 0x18);

loc_001FBCE6: ;
    PUSH32(esp, MEM32(esi + 4));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, MEM32(ebx + 0x13D4));
    PUSH32(esp, 0x001FBCF9u); RECOMP_ABI_CALL(0x001F9ED6u, sub_001F9ED6); /* call 0x001F9ED6 */

loc_001FBCF9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FBD03; /* je: equal / zero */

loc_001FBCFD: ;
    _fa = (uint32_t)(MEM8(eax + 0x1F)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1F), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001FBD0E; /* jne: not equal / not zero */

loc_001FBD03: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x56) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x56;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FBCE6; /* jb: below (unsigned <) */

loc_001FBD0E: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FBD45(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001FBD13(); return; /* fallthrough 0x001FBD13 */

}

/**
 * sub_001FBD13
 * Original: 0x001FBD13 - 0x001FBD1C (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBD13(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBD13: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001FBE42(); return; /* tail jmp 0x001FBE42 */

}

/**
 * sub_001FBD1C
 * Original: 0x001FBD1C - 0x001FBD45 (41 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBD1C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBD1C: ;
    eax = MEM32(ebx + 0x13D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FBD45(); return; } /* je: equal / zero */

loc_001FBD26: ;
    ecx = ZX16(MEM16(eax + 0xC));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001FBD41; /* jbe: below or equal (unsigned <=) */

loc_001FBD30: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001FBD33: ;
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 3), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001FBD41; /* jne: not equal / not zero */

loc_001FBD39: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x74;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FBD33; /* jb: below (unsigned <) */

loc_001FBD41: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FBD13(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_001FBD45(); return; /* fallthrough 0x001FBD45 */

}

/**
 * sub_001FBD45
 * Original: 0x001FBD45 - 0x001FBE0E (201 bytes, 65 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBD45(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBD45: ;
    esi = MEM32(ebp + -4);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    eax = edi * 8 + 0x32;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F3);
    ecx = esi;
    PUSH32(esp, 0x001FBD60u); RECOMP_ABI_CALL(0x001F9634u, sub_001F9634); /* call 0x001F9634 */

loc_001FBD60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FBE42(); return; } /* jl: less (signed <) */

loc_001FBD6B: ;
    ecx = MEM32(ebx + 0x13A8);
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(ebx + 0x13AC);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEM32(eax + 0x2C) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM16(eax + 0x30) = LO16(edi);
    if (CMP_BE(_fa, _fb)) goto loc_001FBDB1; /* jbe: below or equal (unsigned <=) */

loc_001FBD96: ;
    edx = MEM32(ebp + 0x18);

loc_001FBD99: ;
    esi = MEM32(edx);
    MEM32(eax + ecx * 8 + 0x32) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + ecx * 8 + 0x36) = esi;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x56) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x56;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001FBD99; /* jb: below (unsigned <) */

loc_001FBDAE: ;
    esi = MEM32(ebp + -4);

loc_001FBDB1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x14D0));
    ecx = edi * 8 + 0x32;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001FBDD0u); RECOMP_ABI_CALL(0x001F9686u, sub_001F9686); /* call 0x001F9686 */

loc_001FBDD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FBE42(); return; } /* jl: less (signed <) */

loc_001FBDD7: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    PUSH32(esp, 0x001FBDE1u); RECOMP_ABI_CALL(0x001F9E3Cu, sub_001F9E3C); /* call 0x001F9E3C */

loc_001FBDE1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FBE32(); return; } /* je: equal / zero */

loc_001FBDE5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FBE0E(); return; } /* jbe: below or equal (unsigned <=) */

loc_001FBDE9: ;
    esi = MEM32(ebp + 0x18);

loc_001FBDEC: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x34000000);
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, MEM32(ebx + 0x13D4));
    PUSH32(esp, 0x001FBE06u); RECOMP_ABI_CALL(0x001FB80Fu, sub_001FB80F); /* call 0x001FB80F */

loc_001FBE06: ;
    _fb = (uint32_t)(0x56) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x56;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001FBDEC; /* jne: not equal / not zero */

loc_001FBE0C: ;
    g_seh_ebp = ebp; sub_001FBE1B(); return; /* tail jmp 0x001FBE1B */

}

/**
 * sub_001FBE0E
 * Original: 0x001FBE0E - 0x001FBE1B (13 bytes, 3 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBE0E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBE0E: ;
    PUSH32(esp, MEM32(ebx + 0x13D4));
    ecx = esi;
    PUSH32(esp, 0x001FBE1Bu); RECOMP_ABI_CALL(0x001FB951u, sub_001FB951); /* call 0x001FB951 */

    g_seh_ebp = ebp; sub_001FBE1B(); return; /* fallthrough 0x001FBE1B */

}

/**
 * sub_001FBE1B
 * Original: 0x001FBE1B - 0x001FBE32 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBE1B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBE1B: ;
    eax = MEM32(ebx + 0x13DC);
    MEM32(ebx + 0x13B4) = MEM32(ebx + 0x13B4) | 8;
    _fa = (uint32_t)(MEM32(ebx + 0x13B4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0x001FBE30u); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001FBE30: ;
    g_seh_ebp = ebp; sub_001FBE42(); return; /* tail jmp 0x001FBE42 */

}

/**
 * sub_001FBE32
 * Original: 0x001FBE32 - 0x001FBE3B (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBE32(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBE32: ;
    MEM32(ebx + 0x13B4) = MEM32(ebx + 0x13B4) | 4;
    _fa = (uint32_t)(MEM32(ebx + 0x13B4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001FBE42(); return; /* tail jmp 0x001FBE42 */

}

/**
 * sub_001FBE3B
 * Original: 0x001FBE3B - 0x001FBE42 (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBE3B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBE3B: ;
    MEM32(ebp + 0x14) = 0x8015200Cu;

    g_seh_ebp = ebp; sub_001FBE42(); return; /* fallthrough 0x001FBE42 */

}

/**
 * sub_001FBE42
 * Original: 0x001FBE42 - 0x001FBE48 (6 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBE42(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBE42: ;
    eax = MEM32(ebp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001FBE48(); return; /* fallthrough 0x001FBE48 */

}

/**
 * sub_001FBE48
 * Original: 0x001FBE48 - 0x001FBE4C (4 bytes, 2 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBE48(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBE48: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001FBE4C
 * Original: 0x001FBE4C - 0x001FBE65 (25 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FBE4C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FBE4C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FBE65(); return; } /* jne: not equal / not zero */

loc_001FBE5B: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001FC027(); return; /* tail jmp 0x001FC027 */

}

/**
 * sub_001FBE65
 * Original: 0x001FBE65 - 0x001FBE7F (26 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBE65(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBE65: ;
    _fa = (uint32_t)(MEM32(esi + 0x14D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14D0), edi (32-bit) */
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -8) = edi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FBE7F(); return; } /* jne: not equal / not zero */

loc_001FBE73: ;
    MEM32(ebp + 8) = 0x8015200Cu;
    g_seh_ebp = ebp; sub_001FC024(); return; /* tail jmp 0x001FC024 */

}

/**
 * sub_001FBE7F
 * Original: 0x001FBE7F - 0x001FBEB6 (55 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBE7F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBE7F: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001FBE8Bu); RECOMP_ABI_CALL(0x001F9E3Cu, sub_001F9E3C); /* call 0x001F9E3C */

loc_001FBE8B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FBEDC(); return; } /* je: equal / zero */

loc_001FBE8F: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, MEM32(eax));
    eax = ebx + ebx * 8;
    PUSH32(esp, MEM32(esi + eax * 8 + 0x13D4));
    PUSH32(esp, 0x001FBEA6u); RECOMP_ABI_CALL(0x001F9ED6u, sub_001F9ED6); /* call 0x001F9ED6 */

loc_001FBEA6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FBEB6(); return; } /* jne: not equal / not zero */

loc_001FBEAA: ;
    MEM32(ebp + 8) = 0x80152008u;
    g_seh_ebp = ebp; sub_001FC023(); return; /* tail jmp 0x001FC023 */

}

/**
 * sub_001FBEB6
 * Original: 0x001FBEB6 - 0x001FBECC (22 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBEB6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBEB6: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x40000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001FBECC(); return; } /* je: equal / zero */

loc_001FBEC0: ;
    MEM32(ebp + 8) = 0x80152004u;
    g_seh_ebp = ebp; sub_001FC023(); return; /* tail jmp 0x001FC023 */

}

/**
 * sub_001FBECC
 * Original: 0x001FBECC - 0x001FBEDC (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBECC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBECC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) { g_seh_ebp = ebp; sub_001FBEDC(); return; } /* js: sign (negative) */

loc_001FBED0: ;
    MEM32(ebp + 8) = 1;
    g_seh_ebp = ebp; sub_001FC023(); return; /* tail jmp 0x001FC023 */

}

/**
 * sub_001FBEDC
 * Original: 0x001FBEDC - 0x001FBF8B (175 bytes, 55 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBEDC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBEDC: ;
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001FBEEE; /* je: equal / zero */

loc_001FBEE4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001FBF8B(); return; } /* je: equal / zero */

loc_001FBEEB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001FBF44; /* jne: not equal / not zero */

loc_001FBEEE: ;
    PUSH32(esp, 0x34);
    POP32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3EF);
    ecx = esi;
    MEM32(ebp + -8) = eax;
    PUSH32(esp, 0x001FBF05u); RECOMP_ABI_CALL(0x001F9634u, sub_001F9634); /* call 0x001F9634 */

loc_001FBF05: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FC023(); return; } /* jl: less (signed <) */

loc_001FBF10: ;
    edi = MEM32(ebp + -4);
    eax = ebx + ebx * 8;
    ecx = MEM32(esi + eax * 8 + 0x13A8);
    MEM32(edi + 0x20) = ecx;
    eax = MEM32(esi + eax * 8 + 0x13AC);
    MEM32(edi + 0x24) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax);
    MEM32(edi + 0x28) = ecx;
    eax = MEM32(eax + 4);
    MEM32(edi + 0x2C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 2 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(edi + 0x30) = eax;

loc_001FBF44: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x14D0));
    ecx = esi;
    PUSH32(esp, 0x100);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, edi);
    PUSH32(esp, 0x001FBF5Eu); RECOMP_ABI_CALL(0x001F9686u, sub_001F9686); /* call 0x001F9686 */

loc_001FBF5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FC023(); return; } /* jl: less (signed <) */

loc_001FBF69: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001FBF71u); RECOMP_ABI_CALL(0x001F9E3Cu, sub_001F9E3C); /* call 0x001F9E3C */

loc_001FBF71: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FC023(); return; } /* je: equal / zero */

loc_001FBF79: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FBFD6(); return; } /* jne: not equal / not zero */

loc_001FBF7F: ;
    eax = ebx + ebx * 8;
    PUSH32(esp, MEM32(esi + eax * 8 + 0x13D4));
    g_seh_ebp = ebp; sub_001FC001(); return; /* tail jmp 0x001FC001 */

}

/**
 * sub_001FBF44
 * Original: 0x001FBF44 - 0x001FBF8B (71 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBF44(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBF44: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x14D0));
    ecx = esi;
    PUSH32(esp, 0x100);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, edi);
    PUSH32(esp, 0x001FBF5Eu); RECOMP_ABI_CALL(0x001F9686u, sub_001F9686); /* call 0x001F9686 */

loc_001FBF5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FC023(); return; } /* jl: less (signed <) */

loc_001FBF69: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001FBF71u); RECOMP_ABI_CALL(0x001F9E3Cu, sub_001F9E3C); /* call 0x001F9E3C */

loc_001FBF71: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FC023(); return; } /* je: equal / zero */

loc_001FBF79: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FBFD6(); return; } /* jne: not equal / not zero */

loc_001FBF7F: ;
    eax = ebx + ebx * 8;
    PUSH32(esp, MEM32(esi + eax * 8 + 0x13D4));
    g_seh_ebp = ebp; sub_001FC001(); return; /* tail jmp 0x001FC001 */

}

/**
 * sub_001FBF8B
 * Original: 0x001FBF8B - 0x001FBFD6 (75 bytes, 24 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBF8B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBF8B: ;
    PUSH32(esp, 0x30);
    POP32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3EE);
    ecx = esi;
    MEM32(ebp + -8) = eax;
    PUSH32(esp, 0x001FBFA2u); RECOMP_ABI_CALL(0x001F9634u, sub_001F9634); /* call 0x001F9634 */

loc_001FBFA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FC023(); return; } /* jl: less (signed <) */

loc_001FBFA9: ;
    edi = MEM32(ebp + -4);
    eax = ebx + ebx * 8;
    ecx = MEM32(esi + eax * 8 + 0x13A8);
    MEM32(edi + 0x20) = ecx;
    eax = MEM32(esi + eax * 8 + 0x13AC);
    MEM32(edi + 0x24) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax);
    MEM32(edi + 0x28) = ecx;
    eax = MEM32(eax + 4);
    MEM32(edi + 0x2C) = eax;
    g_seh_ebp = ebp; sub_001FBF44(); return; /* tail jmp 0x001FBF44 */

}

/**
 * sub_001FBFD6
 * Original: 0x001FBFD6 - 0x001FC001 (43 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBFD6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBFD6: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FBFE2; /* je: equal / zero */

loc_001FBFDC: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FC008(); return; } /* jne: not equal / not zero */

loc_001FBFE2: ;
    eax = ebx + ebx * 8;
    edi = esi + eax * 8 + 0x13D4;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(eax + 4));
    ecx = esi;
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0x001FBFFFu); RECOMP_ABI_CALL(0x001FB741u, sub_001FB741); /* call 0x001FB741 */

loc_001FBFFF: ;
    PUSH32(esp, MEM32(edi));

    g_seh_ebp = ebp; sub_001FC001(); return; /* fallthrough 0x001FC001 */

}

/**
 * sub_001FC001
 * Original: 0x001FC001 - 0x001FC008 (7 bytes, 2 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC001(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FC001: ;
    ecx = esi;
    PUSH32(esp, 0x001FC008u); RECOMP_ABI_CALL(0x001FAFC7u, sub_001FAFC7); /* call 0x001FAFC7 */

    g_seh_ebp = ebp; sub_001FC008(); return; /* fallthrough 0x001FC008 */

}

/**
 * sub_001FC008
 * Original: 0x001FC008 - 0x001FC023 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC008(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FC008: ;
    eax = ebx + ebx * 8;
    eax = esi + eax * 8;
    MEM32(eax + 0x13B4) = MEM32(eax + 0x13B4) | 8;
    _fa = (uint32_t)(MEM32(eax + 0x13B4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(eax + 0x13DC);
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0x001FC023u); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

    g_seh_ebp = ebp; sub_001FC023(); return; /* fallthrough 0x001FC023 */

}

/**
 * sub_001FC023
 * Original: 0x001FC023 - 0x001FC024 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC023(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FC023: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001FC024(); return; /* fallthrough 0x001FC024 */

}

/**
 * sub_001FC024
 * Original: 0x001FC024 - 0x001FC027 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC024(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FC024: ;
    eax = MEM32(ebp + 8);

    g_seh_ebp = ebp; sub_001FC027(); return; /* fallthrough 0x001FC027 */

}

/**
 * sub_001FC027
 * Original: 0x001FC027 - 0x001FC02D (6 bytes, 4 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC027(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FC027: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001FC02D
 * Original: 0x001FC02D - 0x001FC049 (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FC02D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC02D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(ebp + -8) = edi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FC049(); return; } /* jne: not equal / not zero */

loc_001FC03F: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_001FC2A6(); return; /* tail jmp 0x001FC2A6 */

}

/**
 * sub_001FC049
 * Original: 0x001FC049 - 0x001FC09C (83 bytes, 24 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC049(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FC049: ;
    _fa = (uint32_t)(MEM32(edi + 0x14D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14D0), eax (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -12) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FC29A(); return; } /* je: equal / zero */

loc_001FC05D: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001FC068u); RECOMP_ABI_CALL(0x001F9E3Cu, sub_001F9E3C); /* call 0x001F9E3C */

loc_001FC068: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FC29A(); return; } /* je: equal / zero */

loc_001FC070: ;
    eax = esi + esi * 8;
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, MEM32(esi + 4));
    ebx = edi + eax * 8;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, MEM32(ebx + 0x13D4));
    PUSH32(esp, 0x001FC089u); RECOMP_ABI_CALL(0x001F9ED6u, sub_001F9ED6); /* call 0x001F9ED6 */

loc_001FC089: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FC09C(); return; } /* jne: not equal / not zero */

loc_001FC090: ;
    MEM32(ebp + -4) = 0x80152008u;
    g_seh_ebp = ebp; sub_001FC2A1(); return; /* tail jmp 0x001FC2A1 */

}

/**
 * sub_001FC09C
 * Original: 0x001FC09C - 0x001FC154 (184 bytes, 51 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC09C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FC09C: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FC154(); return; } /* jne: not equal / not zero */

loc_001FC0A8: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x3ED);
    ecx = edi;
    PUSH32(esp, 0x001FC0BAu); RECOMP_ABI_CALL(0x001F9634u, sub_001F9634); /* call 0x001F9634 */

loc_001FC0BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FC2A1(); return; } /* jl: less (signed <) */

loc_001FC0C5: ;
    ecx = MEM32(ebx + 0x13A8);
    eax = MEM32(ebp + -12);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(ebx + 0x13AC);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0);
    MEM32(eax + 0x2C) = ecx;
    PUSH32(esp, MEM32(edi + 0x14D0));
    ecx = edi;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001FC0FEu); RECOMP_ABI_CALL(0x001F9686u, sub_001F9686); /* call 0x001F9686 */

loc_001FC0FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FC2A1(); return; } /* jl: less (signed <) */

loc_001FC109: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    PUSH32(esp, 0x001FC113u); RECOMP_ABI_CALL(0x001F9E3Cu, sub_001F9E3C); /* call 0x001F9E3C */

loc_001FC113: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001FC2A1(); return; } /* je: equal / zero */

loc_001FC11B: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, MEM32(ebx + 0x13D4));
    PUSH32(esp, 0x001FC12Du); RECOMP_ABI_CALL(0x001FB741u, sub_001FB741); /* call 0x001FB741 */

loc_001FC12D: ;
    PUSH32(esp, MEM32(ebx + 0x13D4));
    ecx = edi;
    PUSH32(esp, 0x001FC13Au); RECOMP_ABI_CALL(0x001FAFC7u, sub_001FAFC7); /* call 0x001FAFC7 */

loc_001FC13A: ;
    eax = MEM32(ebx + 0x13DC);
    MEM32(ebx + 0x13B4) = MEM32(ebx + 0x13B4) | 8;
    _fa = (uint32_t)(MEM32(ebx + 0x13B4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0x001FC14Fu); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001FC14F: ;
    g_seh_ebp = ebp; sub_001FC2A1(); return; /* tail jmp 0x001FC2A1 */

}

/**
 * sub_001FC154
 * Original: 0x001FC154 - 0x001FC17C (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC154(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FC154: ;
    edx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x8000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001FC17C(); return; } /* je: equal / zero */

loc_001FC15F: ;
    esi = eax + 0x28;
    edi = 0x970234;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -12) = esi;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_001FC185(); return; } /* jne: not equal / not zero */

loc_001FC170: ;
    eax = MEM32(ebp + -4);
    edx = edx & 0xF7FFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x1C) = edx;

    g_seh_ebp = ebp; sub_001FC17C(); return; /* fallthrough 0x001FC17C */

}

/**
 * sub_001FC17C
 * Original: 0x001FC17C - 0x001FC185 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC17C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FC17C: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001FC2A1(); return; /* tail jmp 0x001FC2A1 */

}

/**
 * sub_001FC185
 * Original: 0x001FC185 - 0x001FC211 (140 bytes, 43 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC185(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FC185: ;
    edi = MEM32(ebp + 0xC);
    esi = MEM32(ebp + -12);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 2);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_001FC17C(); return; } /* jne: not equal / not zero */

loc_001FC197: ;
    ecx = MEM32(ebp + -8);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3A);
    PUSH32(esp, 0x3F4);
    PUSH32(esp, 0x001FC1AAu); RECOMP_ABI_CALL(0x001F9634u, sub_001F9634); /* call 0x001F9634 */

loc_001FC1AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FC2A1(); return; } /* jl: less (signed <) */

loc_001FC1B5: ;
    eax = MEM32(ebx + 0x13A8);
    esi = MEM32(ebp + -16);
    edi = MEM32(ebp + 0xC);
    MEM32(esi + 0x20) = eax;
    eax = MEM32(ebx + 0x13AC);
    MEM32(esi + 0x24) = eax;
    eax = MEM32(edi);
    MEM32(esi + 0x28) = eax;
    eax = MEM32(edi + 4);
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(edi + 0x28);
    MEM32(esi + 0x30) = eax;
    eax = MEM32(edi + 0x2C);
    MEM32(esi + 0x34) = eax;
    MEM32(ebx + 0x13B4) = MEM32(ebx + 0x13B4) | 8;
    _fa = (uint32_t)(MEM32(ebx + 0x13B4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FC211(); return; } /* jne: not equal / not zero */

loc_001FC1F1: ;
    MEM16(esi + 0x38) = MEM16(esi + 0x38) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x38)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, MEM32(edi + 0x2C));
    ecx = MEM32(ebp + -8);
    PUSH32(esp, MEM32(edi + 0x28));
    PUSH32(esp, MEM32(edi + 4));
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, MEM32(ebx + 0x13D4));
    PUSH32(esp, 0x001FC20Fu); RECOMP_ABI_CALL(0x001FB8DAu, sub_001FB8DA); /* call 0x001FB8DA */

loc_001FC20F: ;
    g_seh_ebp = ebp; sub_001FC27B(); return; /* tail jmp 0x001FC27B */

}

/**
 * sub_001FC211
 * Original: 0x001FC211 - 0x001FC27B (106 bytes, 29 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC211(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FC211: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001FC27B(); return; } /* jne: not equal / not zero */

loc_001FC217: ;
    ecx = MEM32(ebp + -8);
    MEM16(esi + 0x38) = 1;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(edi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x30), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FC22F; /* jne: not equal / not zero */

loc_001FC228: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4D2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4D2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FC23F; /* jne: not equal / not zero */

loc_001FC22F: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001FC238u); RECOMP_ABI_CALL(0x001F976Au, sub_001F976A); /* call 0x001F976A */

loc_001FC238: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001FC2A1(); return; } /* jl: less (signed <) */

loc_001FC23F: ;
    PUSH32(esp, MEM32(edi + 0x2C));
    ecx = MEM32(ebp + -8);
    PUSH32(esp, MEM32(edi + 0x28));
    PUSH32(esp, MEM32(edi + 4));
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, MEM32(ebx + 0x13D4));
    PUSH32(esp, 0x001FC258u); RECOMP_ABI_CALL(0x001FB8DAu, sub_001FB8DA); /* call 0x001FB8DA */

loc_001FC258: ;
    PUSH32(esp, MEM32(ebx + 0x13D4));
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0x001FC266u); RECOMP_ABI_CALL(0x001FB951u, sub_001FB951); /* call 0x001FB951 */

loc_001FC266: ;
    eax = MEM32(ebx + 0x13DC);
    MEM32(ebx + 0x13B4) = MEM32(ebx + 0x13B4) | 8;
    _fa = (uint32_t)(MEM32(ebx + 0x13B4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0x001FC27Bu); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

    g_seh_ebp = ebp; sub_001FC27B(); return; /* fallthrough 0x001FC27B */

}

/**
 * sub_001FC27B
 * Original: 0x001FC27B - 0x001FC29A (31 bytes, 10 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC27B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FC27B: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ecx + 0x14D0));
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x3A);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FC295u); RECOMP_ABI_CALL(0x001F9686u, sub_001F9686); /* call 0x001F9686 */

loc_001FC295: ;
    MEM32(ebp + -4) = eax;
    g_seh_ebp = ebp; sub_001FC2A1(); return; /* tail jmp 0x001FC2A1 */

}

/**
 * sub_001FC29A
 * Original: 0x001FC29A - 0x001FC2A1 (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC29A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FC29A: ;
    MEM32(ebp + -4) = 0x8015200Cu;

    g_seh_ebp = ebp; sub_001FC2A1(); return; /* fallthrough 0x001FC2A1 */

}

/**
 * sub_001FC2A1
 * Original: 0x001FC2A1 - 0x001FC2A6 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC2A1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FC2A1: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001FC2A6(); return; /* fallthrough 0x001FC2A6 */

}
