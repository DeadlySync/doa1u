/**
 * DOAU1 - Recompiled code chunk 61
 * Functions: 250 (0x001B6182 - 0x001B8DEB)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001B6182
 * Original: 0x001B6182 - 0x001B6194 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6182(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6182: ;
    ecx = MEM32(esi + 0x80);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0xC0));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0xC0)); }
    MEM32(edi) = edx;
    g_seh_ebp = ebp; sub_001B61B2(); return; /* tail jmp 0x001B61B2 */

}

/**
 * sub_001B6194
 * Original: 0x001B6194 - 0x001B61B2 (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6194(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6194: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B61A3; /* je: equal / zero */

loc_001B619B: ;
    ecx = MEM32(esi + 0x148);
    MEM32(eax) = ecx;

loc_001B61A3: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B61B2(); return; } /* je: equal / zero */

loc_001B61AA: ;
    ecx = MEM32(esi + 0x148);
    MEM32(eax) = ecx;

    g_seh_ebp = ebp; sub_001B61B2(); return; /* fallthrough 0x001B61B2 */

}

/**
 * sub_001B61B2
 * Original: 0x001B61B2 - 0x001B61C3 (17 bytes, 8 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B61B2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B61B2: ;
    ecx = ebp + -8;
    PUSH32(esp, 0x001B61BAu); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B61BA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B61C3
 * Original: 0x001B61C3 - 0x001B620A (71 bytes, 31 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B61C3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B61C3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x68;
    PUSH32(esp, 3);
    ecx = edi;
    PUSH32(esp, 0x001B61D4u); RECOMP_ABI_CALL(0x001B24EEu, sub_001B24EE); /* call 0x001B24EE */

loc_001B61D4: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B6204; /* je: equal / zero */

loc_001B61DA: ;
    eax = MEM32(edi);
    PUSH32(esp, 0);
    ecx = esi;
    MEM8(eax + 0x3F) = 0x80;
    PUSH32(esp, 0x001B61E9u); RECOMP_ABI_CALL(0x001B567Eu, sub_001B567E); /* call 0x001B567E */

loc_001B61E9: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xA), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B6204; /* je: equal / zero */

loc_001B61F5: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001B6204u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B6201u); } /* indirect call */
    }

loc_001B6204: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001B620A
 * Original: 0x001B620A - 0x001B625E (84 bytes, 34 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B620A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B620A: ;
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
    ecx = ebp + -8;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B6220u); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B6220: ;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B6243; /* jne: not equal / not zero */

loc_001B6229: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM32(eax + 0xDC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xDC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B6243; /* je: equal / zero */

loc_001B6237: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001B6243u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B6240u); } /* indirect call */
    }

loc_001B6243: ;
    MEM32(esi + 0x14C) = MEM32(esi + 0x14C) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0x14C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ebp + -8;
    MEM32(esi + 0x150) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B6258u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B6258: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001B625E
 * Original: 0x001B625E - 0x001B6268 (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B625E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B625E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    g_seh_ebp = ebp; sub_001B62A0(); return; /* tail jmp 0x001B62A0 */

}

/**
 * sub_001B6268
 * Original: 0x001B6268 - 0x001B62A0 (56 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6268(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6268: ;
    eax = MEM32(esi + 0x80);
    ecx = MEM32(esi + 0x150);
    eax = MEM32(eax + 0xD8);
    eax = eax + ecx * 8;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B62B4(); return; } /* je: equal / zero */

loc_001B6284: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B62B4(); return; } /* jae: above or equal (unsigned >=) */

loc_001B6288: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B629A; /* je: equal / zero */

loc_001B628F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(eax + 4));
    { uint32_t _icall_target = MEM32(0x22BC00); PUSH32(esp, 0x001B629Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B6294u); } /* indirect call */
    }

loc_001B629A: ;
    MEM32(esi + 0x150) = MEM32(esi + 0x150) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x150)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_001B62A0(); return; /* fallthrough 0x001B62A0 */

}

/**
 * sub_001B62A0
 * Original: 0x001B62A0 - 0x001B62B4 (20 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B62A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B62A0: ;
    eax = MEM32(esi + 0x80);
    ecx = MEM32(esi + 0x150);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xDC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xDC) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001B6268(); return; } /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_001B62B4(); return; /* fallthrough 0x001B62B4 */

}

/**
 * sub_001B62B4
 * Original: 0x001B62B4 - 0x001B62BF (11 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B62B4(void)
{

loc_001B62B4: ;
    MEM32(esi + 0x14C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B62BF
 * Original: 0x001B62BF - 0x001B62F9 (58 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B62BF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B62BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x80);
    esi = MEM32(eax + 0xDC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B62F6; /* jbe: below or equal (unsigned <=) */

loc_001B62D3: ;
    eax = MEM32(edi + 0x80);
    eax = MEM32(eax + 0xD8);
    eax = eax + esi * 8;
    _fa = (uint32_t)(MEM32(eax + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -8), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B62F6; /* jne: not equal / not zero */

loc_001B62E8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(eax + -4));
    { uint32_t _icall_target = MEM32(0x22BC00); PUSH32(esp, 0x001B62F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B62EDu); } /* indirect call */
    }

loc_001B62F3: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B62D3; /* jne: not equal / not zero */

loc_001B62F6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B62F9
 * Original: 0x001B62F9 - 0x001B6328 (47 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B62F9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B62F9: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + 0x88;
    MEM32(eax + 0x18) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0x14) = edx;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B6325u); RECOMP_ABI_CALL(0x001B2300u, sub_001B2300); /* call 0x001B2300 */

loc_001B6325: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001B6328
 * Original: 0x001B6328 - 0x001B6342 (26 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6328(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B6328: ;
    eax = MEM32(esp + 4);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + 0x88;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B633Fu); RECOMP_ABI_CALL(0x001B2123u, sub_001B2123); /* call 0x001B2123 */

loc_001B633F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B6342
 * Original: 0x001B6342 - 0x001B6357 (21 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6342(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B6342: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B6351; /* je: equal / zero */

loc_001B634B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001B6351u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B634Eu); } /* indirect call */
    }

loc_001B6351: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B6369
 * Original: 0x001B6369 - 0x001B63C5 (92 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6369(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B6369: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x001B6379u); RECOMP_ABI_CALL(0x001B5619u, sub_001B5619); /* call 0x001B5619 */

loc_001B6379: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x281FA4;
    PUSH32(esp, 0x001B6388u); RECOMP_ABI_CALL(0x001B6342u, sub_001B6342); /* call 0x001B6342 */

loc_001B6388: ;
    MEM32(esi + 0x80) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 0x88;

loc_001B6396: ;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    MEM32(eax + 0xC) = esi;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B6396; /* jb: below (unsigned <) */

loc_001B63AA: ;
    MEM32(esi + 0x90) = MEM32(esi + 0x90) | 5;
    _fa = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xB0) = MEM32(esi + 0xB0) | 5;
    _fa = (uint32_t)(MEM32(esi + 0xB0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xD0) = MEM32(esi + 0xD0) | 5;
    _fa = (uint32_t)(MEM32(esi + 0xD0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B63C5
 * Original: 0x001B63C5 - 0x001B6415 (80 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B63C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B63C5: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x12;
    edx = 0x100;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ecx), LO16(edx) (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B6410; /* jne: not equal / not zero */

loc_001B63D8: ;
    PUSH32(esp, 0x001B63DDu); RECOMP_ABI_CALL(0x001B5C7Du, sub_001B5C7D); /* call 0x001B5C7D */

loc_001B63DD: ;
    eax = MEM32(esi + 0x80);
    PUSH32(esp, MEM32(eax + 0xC0));
    ecx = MEM32(esi + 8);
    PUSH32(esp, MEM32(eax + 0xBC));
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001B63FAu); RECOMP_ABI_CALL(0x001B3DBFu, sub_001B3DBF); /* call 0x001B3DBF */

loc_001B63FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x84) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B6415(); return; } /* jne: not equal / not zero */

loc_001B6404: ;
    ecx = esi;
    edi = 0x8007000Eu;
    PUSH32(esp, 0x001B6410u); RECOMP_ABI_CALL(0x001B5CF3u, sub_001B5CF3); /* call 0x001B5CF3 */

loc_001B6410: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B6410
 * Original: 0x001B6410 - 0x001B6415 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6410(void)
{

loc_001B6410: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B6415
 * Original: 0x001B6415 - 0x001B642A (21 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6415(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6415: ;
    eax = MEM32(esi + 0x80);
    PUSH32(esp, MEM32(eax + 0xC4));
    ecx = esi;
    PUSH32(esp, 0x001B6428u); RECOMP_ABI_CALL(0x001B5C81u, sub_001B5C81); /* call 0x001B5C81 */

loc_001B6428: ;
    g_seh_ebp = ebp; sub_001B6410(); return; /* tail jmp 0x001B6410 */

}

/**
 * sub_001B642A
 * Original: 0x001B642A - 0x001B647C (82 bytes, 27 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B642A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B642A: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = edi + 0x12;
    edx = 0x100;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ecx), LO16(edx) (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B647A; /* jne: not equal / not zero */

loc_001B643A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B6440u); RECOMP_ABI_CALL(0x001B5C7Du, sub_001B5C7D); /* call 0x001B5C7D */

loc_001B6440: ;
    PUSH32(esp, 0x20);
    ecx = edi;
    PUSH32(esp, 0x001B6449u); RECOMP_ABI_CALL(0x001B2556u, sub_001B2556); /* call 0x001B2556 */

loc_001B6449: ;
    esi = edi + 0x80;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0xD4);
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    _fb = (uint32_t)(MEM32(0x1CECB8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(0x1CECB8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001B646Au); RECOMP_ABI_CALL(0x001AD655u, sub_001AD655); /* call 0x001AD655 */

loc_001B646A: ;
    eax = MEM32(esi);
    PUSH32(esp, MEM32(eax + 0xC4));
    ecx = edi;
    PUSH32(esp, 0x001B6479u); RECOMP_ABI_CALL(0x001B5C81u, sub_001B5C81); /* call 0x001B5C81 */

loc_001B6479: ;
    POP32(esp, esi);

loc_001B647A: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B647C
 * Original: 0x001B647C - 0x001B64AE (50 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B647C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B647C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM32(eax + 0xDC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xDC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B6518(); return; } /* je: equal / zero */

loc_001B6496: ;
    _fa = (uint32_t)(MEM8(esi + 0x17)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x17), 2 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001B64AE(); return; } /* je: equal / zero */

loc_001B649E: ;
    ebx = MEM32(eax + 0xCC);
    edi = MEM32(eax + 0xD0);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001B64B6(); return; /* tail jmp 0x001B64B6 */

}

/**
 * sub_001B64AE
 * Original: 0x001B64AE - 0x001B64B6 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B64AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B64AE: ;
    edi = MEM32(eax + 0xC8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001B64B6(); return; /* fallthrough 0x001B64B6 */

}

/**
 * sub_001B64B6
 * Original: 0x001B64B6 - 0x001B6518 (98 bytes, 35 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B64B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B64B6: ;
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001B64C3u); RECOMP_ABI_CALL(0x001B60E4u, sub_001B60E4); /* call 0x001B60E4 */

loc_001B64C3: ;
    eax = MEM32(esi + 0x14C);
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001B64F2; /* ja: above (unsigned >) */

loc_001B64CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001B64F2; /* ja: above (unsigned >) */

loc_001B64D2: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001B64FE; /* jae: above or equal (unsigned >=) */

loc_001B64D7: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001B64E1u); RECOMP_ABI_CALL(0x001B625Eu, sub_001B625E); /* call 0x001B625E */

loc_001B64E1: ;
    MEM32(esi + 0x150) = MEM32(esi + 0x150) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x150)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001B64F2u); RECOMP_ABI_CALL(0x001B625Eu, sub_001B625E); /* call 0x001B625E */

loc_001B64F2: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    PUSH32(esp, 0x001B64FEu); RECOMP_ABI_CALL(0x001B625Eu, sub_001B625E); /* call 0x001B625E */

loc_001B64FE: ;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0x8002) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi + 0x12), 0x8002 (16-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B6518(); return; } /* jne: not equal / not zero */

loc_001B6508: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x001B6511u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B650Eu); } /* indirect call */
    }

loc_001B6511: ;
    ecx = esi;
    PUSH32(esp, 0x001B6518u); RECOMP_ABI_CALL(0x001B62BFu, sub_001B62BF); /* call 0x001B62BF */

    g_seh_ebp = ebp; sub_001B6518(); return; /* fallthrough 0x001B6518 */

}

/**
 * sub_001B6518
 * Original: 0x001B6518 - 0x001B651B (3 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6518(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6518: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001B651B
 * Original: 0x001B651B - 0x001B6549 (46 bytes, 16 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B651B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B651B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001B6524u); RECOMP_ABI_CALL(0x001B522Fu, sub_001B522F); /* call 0x001B522F */

loc_001B6524: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B6564(); return; } /* jl: less (signed <) */

loc_001B652A: ;
    eax = MEM32(esi + 0x80);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B6564(); return; } /* jne: not equal / not zero */

loc_001B6538: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x180000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x180000 (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001B6549(); return; } /* je: equal / zero */

loc_001B6540: ;
    ecx = esi;
    PUSH32(esp, 0x001B6547u); RECOMP_ABI_CALL(0x001B642Au, sub_001B642A); /* call 0x001B642A */

loc_001B6547: ;
    g_seh_ebp = ebp; sub_001B6564(); return; /* tail jmp 0x001B6564 */

}

/**
 * sub_001B6549
 * Original: 0x001B6549 - 0x001B6564 (27 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6549(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6549: ;
    _fa = (uint32_t)(MEM32(eax + 0xBC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xBC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B6564(); return; } /* je: equal / zero */

loc_001B6552: ;
    _fa = (uint32_t)(MEM32(eax + 0xC0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC0), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B6564(); return; } /* je: equal / zero */

loc_001B655B: ;
    ecx = esi;
    PUSH32(esp, 0x001B6562u); RECOMP_ABI_CALL(0x001B63C5u, sub_001B63C5); /* call 0x001B63C5 */

loc_001B6562: ;
    edi = eax;

    g_seh_ebp = ebp; sub_001B6564(); return; /* fallthrough 0x001B6564 */

}

/**
 * sub_001B6564
 * Original: 0x001B6564 - 0x001B6569 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6564(void)
{

loc_001B6564: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B6569
 * Original: 0x001B6569 - 0x001B6583 (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6569(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6569: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x182000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x182000 (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001B6583(); return; } /* je: equal / zero */

loc_001B657E: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001B6587(); return; /* tail jmp 0x001B6587 */

}

/**
 * sub_001B6583
 * Original: 0x001B6583 - 0x001B6587 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6583(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6583: ;
    ebx = MEM32(esp + 0x14);

    g_seh_ebp = ebp; sub_001B6587(); return; /* fallthrough 0x001B6587 */

}

/**
 * sub_001B6587
 * Original: 0x001B6587 - 0x001B65C5 (62 bytes, 22 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6587(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6587: ;
    ecx = esi;
    PUSH32(esp, 0x001B658Eu); RECOMP_ABI_CALL(0x001B651Bu, sub_001B651B); /* call 0x001B651B */

loc_001B658E: ;
    ebp = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B6610(); return; } /* jl: less (signed <) */

loc_001B6596: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B65AC; /* je: equal / zero */

loc_001B659B: ;
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(0x42) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), 0x42 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B65AC; /* jne: not equal / not zero */

loc_001B65A1: ;
    PUSH32(esp, 0x40);
    ecx = esi;
    PUSH32(esp, 0x001B65AAu); RECOMP_ABI_CALL(0x001B4957u, sub_001B4957); /* call 0x001B4957 */

loc_001B65AA: ;
    ebp = eax;

loc_001B65AC: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B6610(); return; } /* jl: less (signed <) */

loc_001B65B0: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM8(eax + 9)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 9), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001B65C5(); return; } /* je: equal / zero */

loc_001B65BC: ;
    ecx = esi;
    PUSH32(esp, 0x001B65C3u); RECOMP_ABI_CALL(0x001B5A89u, sub_001B5A89); /* call 0x001B5A89 */

loc_001B65C3: ;
    g_seh_ebp = ebp; sub_001B6610(); return; /* tail jmp 0x001B6610 */

}

/**
 * sub_001B65C5
 * Original: 0x001B65C5 - 0x001B65DA (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B65C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B65C5: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B65DA(); return; } /* jne: not equal / not zero */

loc_001B65CA: ;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0x446) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi + 0x12), 0x446 (16-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B65DA(); return; } /* jne: not equal / not zero */

loc_001B65D2: ;
    eax = MEM32(esi + 0x148);
    g_seh_ebp = ebp; sub_001B65DC(); return; /* tail jmp 0x001B65DC */

}

/**
 * sub_001B65DA
 * Original: 0x001B65DA - 0x001B65DC (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001B65DA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B65DA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001B65DC(); return; /* fallthrough 0x001B65DC */

}

/**
 * sub_001B65DC
 * Original: 0x001B65DC - 0x001B65F1 (21 bytes, 8 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B65DC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B65DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x148) = edi;
    ecx = esi;
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B65F1(); return; } /* je: equal / zero */

loc_001B65E9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B65EFu); RECOMP_ABI_CALL(0x001B5E77u, sub_001B5E77); /* call 0x001B5E77 */

loc_001B65EF: ;
    g_seh_ebp = ebp; sub_001B65F6(); return; /* tail jmp 0x001B65F6 */

}

/**
 * sub_001B65F1
 * Original: 0x001B65F1 - 0x001B65F6 (5 bytes, 1 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B65F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B65F1: ;
    PUSH32(esp, 0x001B65F6u); RECOMP_ABI_CALL(0x001B5D36u, sub_001B5D36); /* call 0x001B5D36 */

    g_seh_ebp = ebp; sub_001B65F6(); return; /* fallthrough 0x001B65F6 */

}

/**
 * sub_001B65F6
 * Original: 0x001B65F6 - 0x001B6610 (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B65F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B65F6: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM32(eax + 0xDC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xDC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B6610(); return; } /* je: equal / zero */

loc_001B6604: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001B6610u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B660Du); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001B6610(); return; /* fallthrough 0x001B6610 */

}

/**
 * sub_001B6610
 * Original: 0x001B6610 - 0x001B6619 (9 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6610: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B6619
 * Original: 0x001B6619 - 0x001B6664 (75 bytes, 28 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6619(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B6619: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi + 0x12), 0x100 (16-bit) */
    MEM32(esi + 0x148) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_001B663E; /* je: equal / zero */

loc_001B662D: ;
    eax = MEM32(esi + 0x80);
    PUSH32(esp, MEM32(eax + 0xC4));
    PUSH32(esp, 0x001B663Eu); RECOMP_ABI_CALL(0x001B5C81u, sub_001B5C81); /* call 0x001B5C81 */

loc_001B663E: ;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B665F; /* jne: not equal / not zero */

loc_001B6647: ;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi + 0x12), 0x200 (16-bit) */
    PUSH32(esp, 2);
    POP32(esp, eax);
    if (TEST_Z(_fa, _fb)) goto loc_001B6655; /* je: equal / zero */

loc_001B6652: ;
    PUSH32(esp, 3);
    POP32(esp, eax);

loc_001B6655: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001B665Du); RECOMP_ABI_CALL(0x001B6569u, sub_001B6569); /* call 0x001B6569 */

loc_001B665D: ;
    edi = eax;

loc_001B665F: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B6664
 * Original: 0x001B6664 - 0x001B6682 (30 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6664(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B6664: ;
    SET_LO8(edx, MEM8(ecx + 0x12));
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B6681; /* jne: not equal / not zero */

loc_001B6671: ;
    SET_LO16(eax, MEM16(ecx + 0x12));
    eax = eax >> 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B6681u); RECOMP_ABI_CALL(0x001B6569u, sub_001B6569); /* call 0x001B6569 */

loc_001B6681: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B6682
 * Original: 0x001B6682 - 0x001B66C5 (67 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6682(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6682: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x12));
    PUSH32(esp, edi);
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B670A(); return; } /* jne: not equal / not zero */

loc_001B6694: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001B66C5(); return; } /* je: equal / zero */

loc_001B669B: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B66BC; /* je: equal / zero */

loc_001B66A2: ;
    SET_LO16(eax, MEM16(esi + 0x12));
    SET_LO16(eax, LO16(eax) & 0x203);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x203) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x203 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B66BC; /* jne: not equal / not zero */

loc_001B66B0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001B66B6u); RECOMP_ABI_CALL(0x001B6569u, sub_001B6569); /* call 0x001B6569 */

loc_001B66B6: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B670A(); return; } /* jl: less (signed <) */

loc_001B66BC: ;
    ecx = esi;
    PUSH32(esp, 0x001B66C3u); RECOMP_ABI_CALL(0x001B487Fu, sub_001B487F); /* call 0x001B487F */

loc_001B66C3: ;
    g_seh_ebp = ebp; sub_001B670A(); return; /* tail jmp 0x001B670A */

}

/**
 * sub_001B66C5
 * Original: 0x001B66C5 - 0x001B670A (69 bytes, 23 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B66C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B66C5: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x182000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x182000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B66E3; /* jne: not equal / not zero */

loc_001B66D4: ;
    PUSH32(esp, edi);
    eax = esi + 0x148;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001B66E3u); RECOMP_ABI_CALL(0x001B60E4u, sub_001B60E4); /* call 0x001B60E4 */

loc_001B66E3: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001B66EBu); RECOMP_ABI_CALL(0x001B567Eu, sub_001B567E); /* call 0x001B567E */

loc_001B66EB: ;
    ecx = esi;
    PUSH32(esp, 0x001B66F2u); RECOMP_ABI_CALL(0x001B647Cu, sub_001B647C); /* call 0x001B647C */

loc_001B66F2: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xA), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001B670A(); return; } /* je: equal / zero */

loc_001B66FE: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001B670Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B6707u); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001B670A(); return; /* fallthrough 0x001B670A */

}

/**
 * sub_001B670A
 * Original: 0x001B670A - 0x001B6712 (8 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B670A(void)
{

loc_001B670A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B6712
 * Original: 0x001B6712 - 0x001B67F0 (222 bytes, 66 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B6712(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B6712: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B67F0(); return; } /* jne: not equal / not zero */

loc_001B6730: ;
    eax = ZX8(MEM8(esi + 0x64));
    eax = ZX16(MEM16(esi + eax * 2 + 0xA));
    ecx = MEM32(0x1CEC38);
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + 0x54;

loc_001B6746: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x100000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B6746; /* jne: not equal / not zero */

loc_001B674E: ;
    SET_LO16(eax, MEM16(esi + 0x12));
    SET_LO16(eax, LO16(eax) & 0x203);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x203) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x203 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B6783; /* jne: not equal / not zero */

loc_001B675C: ;
    eax = MEM32(esi + 0x80);
    ecx = MEM32(eax + 0xD0);
    _fb = (uint32_t)(MEM32(eax + 0xCC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(eax + 0xCC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B6783; /* jb: below (unsigned <) */

loc_001B6773: ;
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B677Cu); RECOMP_ABI_CALL(0x001B6569u, sub_001B6569); /* call 0x001B6569 */

loc_001B677C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B67F9(); return; } /* jl: less (signed <) */

loc_001B6783: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B678Eu); RECOMP_ABI_CALL(0x001B253Du, sub_001B253D); /* call 0x001B253D */

loc_001B678E: ;
    ecx = ebp + -12;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B6798u); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B6798: ;
    eax = ZX8(MEM8(esi + 0x64));
    ecx = eax;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_001B67A1: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B67A1; /* jb: below (unsigned <) */

loc_001B67AE: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B67E5; /* jbe: below or equal (unsigned <=) */

loc_001B67B4: ;
    eax = esi + 0xC;

loc_001B67B7: ;
    edx = ZX16(MEM16(eax));
    MEM32(-25033992) = edx;
    MEM32(-25033988) = 1;
    MEM32(-25033768) = edi;
    MEM32(-25033988) = 0;
    edx = ZX8(MEM8(esi + 0x64));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B67B7; /* jb: below (unsigned <) */

loc_001B67E5: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B67EDu); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B67ED: ;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_001B67F9(); return; /* tail jmp 0x001B67F9 */

}

/**
 * sub_001B67F0
 * Original: 0x001B67F0 - 0x001B67F9 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B67F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B67F0: ;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x148) = eax;

    g_seh_ebp = ebp; sub_001B67F9(); return; /* fallthrough 0x001B67F9 */

}

/**
 * sub_001B67F9
 * Original: 0x001B67F9 - 0x001B6808 (15 bytes, 6 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B67F9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B67F9: ;
    ecx = esi;
    PUSH32(esp, 0x001B6800u); RECOMP_ABI_CALL(0x001B647Cu, sub_001B647C); /* call 0x001B647C */

loc_001B6800: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B6808
 * Original: 0x001B6808 - 0x001B682A (34 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6808(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6808: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x001B6812u); RECOMP_ABI_CALL(0x001B405Du, sub_001B405D); /* call 0x001B405D */

loc_001B6812: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B682A(); return; } /* jl: less (signed <) */

loc_001B6816: ;
    ecx = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM8(ecx + 0xA)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0xA), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B682A(); return; } /* jne: not equal / not zero */

loc_001B6822: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001B651B(); return; /* tail jmp 0x001B651B */

}

/**
 * sub_001B682A
 * Original: 0x001B682A - 0x001B682C (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B682A(void)
{

loc_001B682A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B682C
 * Original: 0x001B682C - 0x001B6845 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B682C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B682C: ;
    edx = MEM32(ecx + 0x80);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x148) = eax;
    _fa = (uint32_t)(MEM8(edx + 0xA)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0xA), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B6845(); return; } /* jne: not equal / not zero */

loc_001B6840: ;
    g_seh_ebp = ebp; sub_001B651B(); return; /* tail jmp 0x001B651B */

}

/**
 * sub_001B6845
 * Original: 0x001B6845 - 0x001B6846 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6845(void)
{

loc_001B6845: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B6846
 * Original: 0x001B6846 - 0x001B6893 (77 bytes, 30 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6846(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6846: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x001B6853u); RECOMP_ABI_CALL(0x001B6682u, sub_001B6682); /* call 0x001B6682 */

loc_001B6853: ;
    ecx = esi;
    PUSH32(esp, 0x001B685Au); RECOMP_ABI_CALL(0x001B5594u, sub_001B5594); /* call 0x001B5594 */

loc_001B685A: ;
    edi = esi + 0x90;

loc_001B6860: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B686D; /* je: equal / zero */

loc_001B6865: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x001B686Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B686Au); } /* indirect call */
    }

loc_001B686D: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B6860; /* jb: below (unsigned <) */

loc_001B6876: ;
    ecx = esi;
    PUSH32(esp, 0x001B687Du); RECOMP_ABI_CALL(0x001B5CF3u, sub_001B5CF3); /* call 0x001B5CF3 */

loc_001B687D: ;
    ecx = esi + 0x12;
    SET_LO16(edx, 0x3111);
    PUSH32(esp, 0x001B6889u); RECOMP_ABI_CALL(0x001B5C79u, sub_001B5C79); /* call 0x001B5C79 */

loc_001B6889: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_001B41BB(); return; /* tail jmp 0x001B41BB */

}

/**
 * sub_001B6893
 * Original: 0x001B6893 - 0x001B68E8 (85 bytes, 33 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6893(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6893: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x12));
    PUSH32(esp, edi);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = eax;
    if ((_fa == 0)) goto loc_001B68D0; /* je: equal / zero */

loc_001B68A3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001B68AAu); RECOMP_ABI_CALL(0x001B6682u, sub_001B6682); /* call 0x001B6682 */

loc_001B68AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B68E8(); return; } /* jl: less (signed <) */

loc_001B68AE: ;
    ecx = esi;
    PUSH32(esp, 0x001B68B5u); RECOMP_ABI_CALL(0x001B5594u, sub_001B5594); /* call 0x001B5594 */

loc_001B68B5: ;
    eax = MEM32(esi + 0x80);
    eax = ZX8(MEM8(eax + 0xE));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x64)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x64) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B68D0; /* je: equal / zero */

loc_001B68C9: ;
    ecx = esi;
    PUSH32(esp, 0x001B68D0u); RECOMP_ABI_CALL(0x001B6846u, sub_001B6846); /* call 0x001B6846 */

loc_001B68D0: ;
    ecx = esi;
    PUSH32(esp, 0x001B68D7u); RECOMP_ABI_CALL(0x001B40A8u, sub_001B40A8); /* call 0x001B40A8 */

loc_001B68D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B68E8(); return; } /* jl: less (signed <) */

loc_001B68DB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B68E8(); return; } /* je: equal / zero */

loc_001B68DF: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001B651B(); return; /* tail jmp 0x001B651B */

}

/**
 * sub_001B68E8
 * Original: 0x001B68E8 - 0x001B68EB (3 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B68E8(void)
{

loc_001B68E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B68EB
 * Original: 0x001B68EB - 0x001B6924 (57 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B68EB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B68EB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax | MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = ecx;
    if ((_fa == 0)) goto loc_001B6910; /* je: equal / zero */

loc_001B68FC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001B690Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B6909u); } /* indirect call */
    }

loc_001B690C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B691C; /* jne: not equal / not zero */

loc_001B6910: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B691Au); RECOMP_ABI_CALL(0x001B6569u, sub_001B6569); /* call 0x001B6569 */

loc_001B691A: ;
    edi = eax;

loc_001B691C: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B6924
 * Original: 0x001B6924 - 0x001B695D (57 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B6924(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B6924: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax | MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = ecx;
    if ((_fa == 0)) goto loc_001B6949; /* je: equal / zero */

loc_001B6935: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001B6945u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B6942u); } /* indirect call */
    }

loc_001B6945: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B6955; /* jne: not equal / not zero */

loc_001B6949: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B6953u); RECOMP_ABI_CALL(0x001B6682u, sub_001B6682); /* call 0x001B6682 */

loc_001B6953: ;
    edi = eax;

loc_001B6955: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B695D
 * Original: 0x001B695D - 0x001B6970 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B695D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B695D: ;
    _fa = (uint32_t)(MEM8(ecx + 0x12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x12), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001B6970(); return; } /* je: equal / zero */

loc_001B6963: ;
    _fa = (uint32_t)(MEM16(ecx + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0x8002) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ecx + 0x12), 0x8002 (16-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B6977(); return; } /* jne: not equal / not zero */

loc_001B696B: ;
    g_seh_ebp = ebp; sub_001B6846(); return; /* tail jmp 0x001B6846 */

}

/**
 * sub_001B6970
 * Original: 0x001B6970 - 0x001B6977 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6970: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x001B6977u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B6974u); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001B6977(); return; /* fallthrough 0x001B6977 */

}

/**
 * sub_001B6977
 * Original: 0x001B6977 - 0x001B6978 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6977(void)
{

loc_001B6977: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B6978
 * Original: 0x001B6978 - 0x001B69B5 (61 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6978(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6978: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi) = 0x281FA4;
    PUSH32(esp, 0x001B6987u); RECOMP_ABI_CALL(0x001B6846u, sub_001B6846); /* call 0x001B6846 */

loc_001B6987: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001B6989: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001B6991u); RECOMP_ABI_CALL(0x001B6328u, sub_001B6328); /* call 0x001B6328 */

loc_001B6991: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B6989; /* jb: below (unsigned <) */

loc_001B6997: ;
    esi = edi + 0x80;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B69AC; /* je: equal / zero */

loc_001B69A3: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x001B69A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B69A6u); } /* indirect call */
    }

loc_001B69A9: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001B69AC: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001B5A51(); return; /* tail jmp 0x001B5A51 */

}

/**
 * sub_001B69B5
 * Original: 0x001B69B5 - 0x001B69D2 (29 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B69B5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B69B5: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B69D2(); return; } /* jne: not equal / not zero */

loc_001B69BF: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xA), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001B69D2(); return; } /* je: equal / zero */

loc_001B69CB: ;
    PUSH32(esp, 0x001B69D0u); RECOMP_ABI_CALL(0x001B6846u, sub_001B6846); /* call 0x001B6846 */

loc_001B69D0: ;
    g_seh_ebp = ebp; sub_001B69D9(); return; /* tail jmp 0x001B69D9 */

}

/**
 * sub_001B69D2
 * Original: 0x001B69D2 - 0x001B69D9 (7 bytes, 2 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B69D2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B69D2: ;
    ecx = esi;
    PUSH32(esp, 0x001B69D9u); RECOMP_ABI_CALL(0x001B5CF3u, sub_001B5CF3); /* call 0x001B5CF3 */

    g_seh_ebp = ebp; sub_001B69D9(); return; /* fallthrough 0x001B69D9 */

}

/**
 * sub_001B69D9
 * Original: 0x001B69D9 - 0x001B69E6 (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B69D9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B69D9: ;
    MEM32(esi + 0x148) = MEM32(esi + 0x148) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x148)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B69E6
 * Original: 0x001B69E6 - 0x001B6A09 (35 bytes, 16 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B69E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B69E6: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001B6A2D(); return; } /* je: equal / zero */

loc_001B69EF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001B6A26(); return; } /* je: equal / zero */

loc_001B69F2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001B6A1F(); return; } /* je: equal / zero */

loc_001B69F5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001B6A14(); return; } /* je: equal / zero */

loc_001B69F8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001B6A09(); return; } /* je: equal / zero */

loc_001B69FB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001B6A32(); return; } /* jne: not equal / not zero */

loc_001B69FE: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x001B6A07u); RECOMP_ABI_CALL(0x001B5FF6u, sub_001B5FF6); /* call 0x001B5FF6 */

loc_001B6A07: ;
    g_seh_ebp = ebp; sub_001B6A32(); return; /* tail jmp 0x001B6A32 */

}

/**
 * sub_001B6A09
 * Original: 0x001B6A09 - 0x001B6A14 (11 bytes, 3 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6A09(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6A09: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x001B6A12u); RECOMP_ABI_CALL(0x001B6682u, sub_001B6682); /* call 0x001B6682 */

loc_001B6A12: ;
    g_seh_ebp = ebp; sub_001B6A32(); return; /* tail jmp 0x001B6A32 */

}

/**
 * sub_001B6A14
 * Original: 0x001B6A14 - 0x001B6A1F (11 bytes, 3 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6A14(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6A14: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x001B6A1Du); RECOMP_ABI_CALL(0x001B6569u, sub_001B6569); /* call 0x001B6569 */

loc_001B6A1D: ;
    g_seh_ebp = ebp; sub_001B6A32(); return; /* tail jmp 0x001B6A32 */

}

/**
 * sub_001B6A1F
 * Original: 0x001B6A1F - 0x001B6A26 (7 bytes, 2 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6A1F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6A1F: ;
    PUSH32(esp, 0x001B6A24u); RECOMP_ABI_CALL(0x001B647Cu, sub_001B647C); /* call 0x001B647C */

loc_001B6A24: ;
    g_seh_ebp = ebp; sub_001B6A32(); return; /* tail jmp 0x001B6A32 */

}

/**
 * sub_001B6A26
 * Original: 0x001B6A26 - 0x001B6A2D (7 bytes, 2 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6A26(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6A26: ;
    PUSH32(esp, 0x001B6A2Bu); RECOMP_ABI_CALL(0x001B695Du, sub_001B695D); /* call 0x001B695D */

loc_001B6A2B: ;
    g_seh_ebp = ebp; sub_001B6A32(); return; /* tail jmp 0x001B6A32 */

}

/**
 * sub_001B6A2D
 * Original: 0x001B6A2D - 0x001B6A32 (5 bytes, 1 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6A2D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6A2D: ;
    PUSH32(esp, 0x001B6A32u); RECOMP_ABI_CALL(0x001B4903u, sub_001B4903); /* call 0x001B4903 */

    g_seh_ebp = ebp; sub_001B6A32(); return; /* fallthrough 0x001B6A32 */

}

/**
 * sub_001B6A32
 * Original: 0x001B6A32 - 0x001B6A35 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6A32(void)
{

loc_001B6A32: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B6A35
 * Original: 0x001B6A35 - 0x001B6A50 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6A35(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B6A35: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001B6A3Du); RECOMP_ABI_CALL(0x001B6978u, sub_001B6978); /* call 0x001B6978 */

loc_001B6A3D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B6A4A; /* je: equal / zero */

loc_001B6A44: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B6A4Au); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001B6A4A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B6A5B
 * Original: 0x001B6A5B - 0x001B6A64 (9 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6A5B(void)
{

loc_001B6A5B: ;
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(esp + 4), g_mxcsr, 1); /* cvttss2si */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B6A64
 * Original: 0x001B6A64 - 0x001B6AA6 (66 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B6A64(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001B6A64: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(1.0); /* fld1 */
    MEM32(ebp + -8) = 0x40549A78;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 8)); /* fmul dword ptr [ebp + 8] */
    fp_top() = recomp_frndint(fp_top(), g_fp_control_word); /* frndint */
    MEMF(ebp + -12) = (float)fp_top(); /* fst */
    /* wait - FPU sync */
    fp_push(1.0); /* fld1 */
    fp_top() = recomp_fscale(fp_top(), fp_st1()); /* fscale */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ebp + -20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 8)); /* fmul dword ptr [ebp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + -12)); /* fsub dword ptr [ebp - 0xc] */
    fp_top() = expm1(fp_top() * 0.69314718055994530942); /* f2xm1 */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + -4)); /* fadd dword ptr [ebp - 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    MEMF(ebp + -16) = (float)fp_top(); fp_pop(); /* fstp */
    /* wait - FPU sync */
    fp_push(MEMF(ebp + -16)); /* fld float */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B6AA6
 * Original: 0x001B6AA6 - 0x001B6AF4 (78 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B6AA6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001B6AA6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    MEM32(ebp + -8) = 0x40549A78;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x281FCC)); /* fmul dword ptr [0x281fcc] */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    fp_top() = recomp_frndint(fp_top(), g_fp_control_word); /* frndint */
    MEMF(ebp + -12) = (float)fp_top(); /* fst */
    /* wait - FPU sync */
    fp_push(1.0); /* fld1 */
    fp_top() = recomp_fscale(fp_top(), fp_st1()); /* fscale */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ebp + -20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + -12)); /* fsub dword ptr [ebp - 0xc] */
    fp_top() = expm1(fp_top() * 0.69314718055994530942); /* f2xm1 */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 8)); /* fadd dword ptr [ebp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    MEMF(ebp + -16) = (float)fp_top(); fp_pop(); /* fstp */
    /* wait - FPU sync */
    fp_push(MEMF(ebp + -16)); /* fld float */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B6B28
 * Original: 0x001B6B28 - 0x001B6B4D (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B6B28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001B6B28: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    fp_push(MEMF(ebp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C23C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c23c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) { g_seh_ebp = ebp; sub_001B6B4D(); return; } /* jp: parity */

loc_001B6B3C: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C248)); /* fsub dword ptr [0x22c248] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x281FD4)); /* fmul dword ptr [0x281fd4] */
    g_seh_ebp = ebp; sub_001B6B4F(); return; /* tail jmp 0x001B6B4F */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B6B4D
 * Original: 0x001B6B4D - 0x001B6B4F (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6B4D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6B4D: ;
    fp_push(1.0); /* fld1 */

    g_seh_ebp = ebp; sub_001B6B4F(); return; /* fallthrough 0x001B6B4F */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B6B4F
 * Original: 0x001B6B4F - 0x001B6BB6 (103 bytes, 36 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6B4F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6B4F: ;
    PUSH32(esp, ebx);
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    MEM32(ebp + 8) = 0x1CE400;
    edx = 0x130;
    PUSH32(esp, edi);

loc_001B6B61: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, 2);
    POP32(esp, edi);

loc_001B6B67: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x281FD0)); /* fmul dword ptr [0x281fd0] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001B6B7Bu); RECOMP_ABI_CALL(0x001B6A5Bu, sub_001B6A5B); /* call 0x001B6A5B */

loc_001B6B7B: ;
    ebx = MEM32(ecx);
    MEM32(edx + ebx) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B6B67; /* jne: not equal / not zero */

loc_001B6B89: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 4;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x150) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x150 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B6B61; /* jl: less (signed <) */

loc_001B6B95: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x281FD0)); /* fmul dword ptr [0x281fd0] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001B6BA7u); RECOMP_ABI_CALL(0x001B6A5Bu, sub_001B6A5B); /* call 0x001B6A5B */

loc_001B6BA7: ;
    ecx = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x160) = eax;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B6BB6
 * Original: 0x001B6BB6 - 0x001B6BEF (57 bytes, 19 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6BB6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001B6BB6: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = 0x18C;
    esi = 0x1CE380;

loc_001B6BC2: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1CE37C)); /* fmul dword ptr [0x1ce37c] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001B6BD7u); RECOMP_ABI_CALL(0x001B6A5Bu, sub_001B6A5B); /* call 0x001B6A5B */

loc_001B6BD7: ;
    edi = MEM32(ecx);
    MEM32(edx + edi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x19C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B6BC2; /* jl: less (signed <) */

loc_001B6BEA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B6BEF
 * Original: 0x001B6BEF - 0x001B6C0D (30 bytes, 8 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6BEF(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001B6BEF: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x281FD0)); /* fmul dword ptr [0x281fd0] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001B6C02u); RECOMP_ABI_CALL(0x001B6A5Bu, sub_001B6A5B); /* call 0x001B6A5B */

loc_001B6C02: ;
    ecx = MEM32(ecx);
    MEM32(ecx + 0x118) = eax;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B6C0D
 * Original: 0x001B6C0D - 0x001B6C45 (56 bytes, 18 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B6C0D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001B6C0D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMF(ebp + 8)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1CE37C)); /* fmul dword ptr [0x1ce37c] */
    MEMF(ebp + 8) = (float)fp_top(); /* fst */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B6C25u); RECOMP_ABI_CALL(0x001B6A5Bu, sub_001B6A5B); /* call 0x001B6A5B */

loc_001B6C25: ;
    edx = MEM32(ecx);
    fp_push(MEMF(ebp + 8)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edx + 0x19C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B6C39u); RECOMP_ABI_CALL(0x001B6A5Bu, sub_001B6A5B); /* call 0x001B6A5B */

loc_001B6C39: ;
    ecx = MEM32(ecx);
    MEM32(ecx + 0x1A0) = eax;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B6C45
 * Original: 0x001B6C45 - 0x001B6CDF (154 bytes, 50 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B6C45(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001B6C45: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    fp_push(MEMF(ebp + 8)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x281FD0)); /* fmul dword ptr [0x281fd0] */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B6C5Du); RECOMP_ABI_CALL(0x001B6A5Bu, sub_001B6A5B); /* call 0x001B6A5B */

loc_001B6C5D: ;
    edx = MEM32(ecx);
    MEM32(edx + 0x12C) = eax;
    edx = 0x11C;
    esi = 0x1CE388;

loc_001B6C6F: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x12C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    fp_push((double)SMEM32(ebp + -4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001B6C87; /* jge: greater or equal (signed >=) */

loc_001B6C81: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_001B6C87: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B6C92u); RECOMP_ABI_CALL(0x001B6A5Bu, sub_001B6A5B); /* call 0x001B6A5B */

loc_001B6C92: ;
    edi = MEM32(ecx);
    MEM32(edx + edi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x12C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B6C6F; /* jl: less (signed <) */

loc_001B6CA5: ;
    esi = 0x150;
    edx = 0x1CE38C;

loc_001B6CAF: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx)); /* fadd dword ptr [edx] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x281FD0)); /* fmul dword ptr [0x281fd0] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B6CC6u); RECOMP_ABI_CALL(0x001B6A5Bu, sub_001B6A5B); /* call 0x001B6A5B */

loc_001B6CC6: ;
    edi = MEM32(ecx);
    MEM32(esi + edi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x160) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x160 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B6CAF; /* jl: less (signed <) */

loc_001B6CD9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B6CDF
 * Original: 0x001B6CDF - 0x001B6D5C (125 bytes, 42 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6CDF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001B6CDF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0x1CE3D0;
    eax = 0x164;
    PUSH32(esp, edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001B6CEE: ;
    PUSH32(esp, 2);
    edx = eax;
    POP32(esp, edi);

loc_001B6CF3: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + edx)); /* fmul dword ptr [esi + edx] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1CE378)); /* fmul dword ptr [0x1ce378] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001B6D09u); RECOMP_ABI_CALL(0x001B6A5Bu, sub_001B6A5B); /* call 0x001B6A5B */

loc_001B6D09: ;
    ebx = MEM32(ecx);
    MEM32(edx + ebx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B6CF3; /* jne: not equal / not zero */

loc_001B6D14: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x184) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x184 (32-bit) */
    eax = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001B6CEE; /* jl: less (signed <) */

loc_001B6D1E: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x281FD8)); /* fmul dword ptr [0x281fd8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001B6D31u); RECOMP_ABI_CALL(0x001B6A5Bu, sub_001B6A5B); /* call 0x001B6A5B */

loc_001B6D31: ;
    edx = MEM32(ecx);
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    PUSH32(esp, ecx);
    MEM32(edx + 0x188) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1CE378)); /* fmul dword ptr [0x1ce378] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001B6D4Eu); RECOMP_ABI_CALL(0x001B6A5Bu, sub_001B6A5B); /* call 0x001B6A5B */

loc_001B6D4E: ;
    ecx = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x184) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B6D5C
 * Original: 0x001B6D5C - 0x001B6DA9 (77 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6D5C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B6D5C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001B6D5E: ;
    edx = MEM32(ecx);
    edx = eax + edx + 0xAC;
    MEM32(edx) = MEM32(edx) - 1;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = MEM32(ecx);
    edx = eax + edx + 0xAC;
    MEM32(edx) = MEM32(edx) >> 2;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(ecx);
    edx = eax + edx + 0xAC;
    MEM32(edx) = MEM32(edx) + 1;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x70 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B6D5E; /* jb: below (unsigned <) */

loc_001B6D88: ;
    eax = MEM32(ecx);
    MEM32(eax + 0x1A4) = 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001B6D96: ;
    edx = MEM32(ecx);
    MEM32(eax + edx + 0x1A8) = MEM32(eax + edx + 0x1A8) & 0;
    _fa = (uint32_t)(MEM32(eax + edx + 0x1A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x78 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B6D96; /* jb: below (unsigned <) */

loc_001B6DA8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B6DA9
 * Original: 0x001B6DA9 - 0x001B6DDB (50 bytes, 17 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: standard_frame
 */
void sub_001B6DA9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001B6DA9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFD8F0u (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 0x14)); /* fdiv dword ptr [ebp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x281FDC)); /* fmul dword ptr [0x281fdc] */
    MEMD(ebp + -8) = fp_top(); fp_pop(); /* fstp */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B6DDB(); return; } /* jg: greater (signed >) */

loc_001B6DC8: ;
    eax = MEM32(ebp + 0x18);
    fp_push(0.0); /* fldz */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    eax = MEM32(ebp + 0x1C);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    g_seh_ebp = ebp; sub_001B6E62(); return; /* tail jmp 0x001B6E62 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B6DD1
 * Original: 0x001B6DD1 - 0x001B6DDB (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001B6DD1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6DD1: ;
    eax = MEM32(ebp + 0x1C);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    g_seh_ebp = ebp; sub_001B6E62(); return; /* tail jmp 0x001B6E62 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B6DDB
 * Original: 0x001B6DDB - 0x001B6DEF (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001B6DDB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6DDB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B6DEF(); return; } /* jne: not equal / not zero */

loc_001B6DDF: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B6E04(); return; } /* jne: not equal / not zero */

loc_001B6DE4: ;
    eax = MEM32(ebp + 0x18);
    fp_push(0.0); /* fldz */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    g_seh_ebp = ebp; sub_001B6DD1(); return; /* tail jmp 0x001B6DD1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B6DEF
 * Original: 0x001B6DEF - 0x001B6E04 (21 bytes, 8 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001B6DEF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6DEF: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B6E04(); return; } /* jne: not equal / not zero */

loc_001B6DF5: ;
    ecx = MEM32(ebp + 0x18);
    fp_push(0.0); /* fldz */
    PUSH32(esp, eax);
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001B6E02u); RECOMP_ABI_CALL(0x001B6AA6u, sub_001B6AA6); /* call 0x001B6AA6 */

loc_001B6E02: ;
    g_seh_ebp = ebp; sub_001B6DD1(); return; /* tail jmp 0x001B6DD1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B6E04
 * Original: 0x001B6E04 - 0x001B6E62 (94 bytes, 38 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001B6E04(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6E04: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B6E0Au); RECOMP_ABI_CALL(0x001B6AA6u, sub_001B6AA6); /* call 0x001B6AA6 */

loc_001B6E0A: ;
    MEMD(ebp + -16) = fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B6E18u); RECOMP_ABI_CALL(0x001B6AA6u, sub_001B6AA6); /* call 0x001B6AA6 */

loc_001B6E18: ;
    fp_push(MEMD(ebp + -8)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = cos(fp_top()); /* fcos */
    eax = MEM32(ebp + 0x18);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_top() = RECOMP_FP_PC(MEMD(0x22C178) - fp_top()); /* fsubr qword ptr [0x22c178] */
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_top() = RECOMP_FP_PC(MEMD(0x22C178) - fp_top()); /* fsubr qword ptr [0x22c178] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 3) & 7]); /* fsub st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    eax = MEM32(ebp + 0x1C);
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(ebp + -16)); /* fmul qword ptr [ebp - 0x10] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

    g_seh_ebp = ebp; sub_001B6E62(); return; /* fallthrough 0x001B6E62 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B6E62
 * Original: 0x001B6E62 - 0x001B6E66 (4 bytes, 2 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6E62(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6E62: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001B6E66
 * Original: 0x001B6E66 - 0x001B6EBD (87 bytes, 31 insns)
 * Category: game_audio
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B6E66(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001B6E66: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B6E8Bu); RECOMP_ABI_CALL(0x001B6DA9u, sub_001B6DA9); /* call 0x001B6DA9 */

loc_001B6E8B: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1CE378)); /* fmul dword ptr [0x1ce378] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B6E9Du); RECOMP_ABI_CALL(0x001B6A5Bu, sub_001B6A5B); /* call 0x001B6A5B */

loc_001B6E9D: ;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    ecx = MEM32(ebp + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1CE378)); /* fmul dword ptr [0x1ce378] */
    PUSH32(esp, ecx);
    MEM32(ecx) = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B6EB4u); RECOMP_ABI_CALL(0x001B6A5Bu, sub_001B6A5B); /* call 0x001B6A5B */

loc_001B6EB4: ;
    ecx = MEM32(ebp + 0x1C);
    MEM32(ecx) = eax;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B6EBD
 * Original: 0x001B6EBD - 0x001B6F36 (121 bytes, 44 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns float_sse
 * Frame: standard_frame
 */
void sub_001B6EBD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001B6EBD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFFD8F0u (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B6F45(); return; } /* jle: less or equal (signed <=) */

loc_001B6ECD: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B6F45(); return; } /* je: equal / zero */

loc_001B6ED2: ;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    eax = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 0x14)); /* fdiv dword ptr [ebp + 0x14] */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x281FDC)); /* fmul dword ptr [0x281fdc] */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = cos(fp_top()); /* fcos */
    MEMD(ebp + -8) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B6EEEu); RECOMP_ABI_CALL(0x001B6AA6u, sub_001B6AA6); /* call 0x001B6AA6 */

loc_001B6EEE: ;
    fp_push(MEMD(ebp + -8)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(MEMD(0x22C178) - fp_top()); /* fsubr qword ptr [0x22c178] */
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMD(ebp + -8)); /* fsub qword ptr [ebp - 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_push(MEMD(ebp + -8)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(ebp + -8)); /* fmul qword ptr [ebp - 8] */
    fp_top() = RECOMP_FP_PC(MEMD(0x22C178) - fp_top()); /* fsubr qword ptr [0x22c178] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c0d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B6F36(); return; } /* jne: not equal / not zero */

loc_001B6F2D: ;
    fp_pop(); /* fstp st(0) */
    eax = 0xFFFF;
    g_seh_ebp = ebp; sub_001B6F45(); return; /* tail jmp 0x001B6F45 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B6F36
 * Original: 0x001B6F36 - 0x001B6F49 (19 bytes, 6 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001B6F36(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6F36: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1CE37C)); /* fmul dword ptr [0x1ce37c] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001B6F45u); RECOMP_ABI_CALL(0x001B6A5Bu, sub_001B6A5B); /* call 0x001B6A5B */

loc_001B6F45: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B6F45
 * Original: 0x001B6F45 - 0x001B6F49 (4 bytes, 2 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6F45(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6F45: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001B6F49
 * Original: 0x001B6F49 - 0x001B6FAA (97 bytes, 32 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B6F49(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001B6F49: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMF(0x281FE0)); /* fld float */
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = ecx;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B6F72u); RECOMP_ABI_CALL(0x001B6DA9u, sub_001B6DA9); /* call 0x001B6DA9 */

loc_001B6F72: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1CE378)); /* fmul dword ptr [0x1ce378] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B6F84u); RECOMP_ABI_CALL(0x001B6A5Bu, sub_001B6A5B); /* call 0x001B6A5B */

loc_001B6F84: ;
    ecx = MEM32(edx);
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1CE378)); /* fmul dword ptr [0x1ce378] */
    PUSH32(esp, ecx);
    MEM32(ecx + 0x1AC) = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B6F9Eu); RECOMP_ABI_CALL(0x001B6A5Bu, sub_001B6A5B); /* call 0x001B6A5B */

loc_001B6F9E: ;
    ecx = MEM32(edx);
    MEM32(ecx + 0x1B0) = eax;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B6FAA
 * Original: 0x001B6FAA - 0x001B7055 (171 bytes, 58 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B6FAA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001B6FAA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    fp_push((double)SMEM32(ebp + 0xC)); /* fild */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001B6FBD; /* jge: greater or equal (signed >=) */

loc_001B6FB7: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_001B6FBD: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x281FE8)); /* fmul dword ptr [0x281fe8] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 0x10)); /* fdiv dword ptr [ebp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x281FE4)); /* fmul dword ptr [0x281fe4] */
    MEMF(ebp + 0xC) = (float)fp_top(); /* fst */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B6FD8u); RECOMP_ABI_CALL(0x001B6A5Bu, sub_001B6A5B); /* call 0x001B6A5B */

loc_001B6FD8: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    edx = eax;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001B6FF3; /* jp: parity */

loc_001B6FEA: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 0x14)); /* fdiv dword ptr [ebp + 0x14] */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_001B6FF3: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B7000u); RECOMP_ABI_CALL(0x001B6A5Bu, sub_001B6A5B); /* call 0x001B6A5B */

loc_001B7000: ;
    fp_push(MEMF(0x281FD0)); /* fld float */
    esi = ebp + 0xC;
    PUSH32(esp, esi);
    esi = ebp + 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B7023u); RECOMP_ABI_CALL(0x001B6DA9u, sub_001B6DA9); /* call 0x001B6DA9 */

loc_001B7023: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1CE378)); /* fmul dword ptr [0x1ce378] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B7035u); RECOMP_ABI_CALL(0x001B6A5Bu, sub_001B6A5B); /* call 0x001B6A5B */

loc_001B7035: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    ecx = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1CE378)); /* fmul dword ptr [0x1ce378] */
    PUSH32(esp, ecx);
    MEM32(ecx + 4) = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B704Du); RECOMP_ABI_CALL(0x001B6A5Bu, sub_001B6A5B); /* call 0x001B6A5B */

loc_001B704D: ;
    MEM32(ecx + 8) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B7055
 * Original: 0x001B7055 - 0x001B70BF (106 bytes, 41 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B7055(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001B7055: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 0x14);
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x14)); /* fmul dword ptr [ecx + 0x14] */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0xC)); /* fmul dword ptr [ebp + 0xc] */
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(ecx + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x1C)); /* fmul dword ptr [ecx + 0x1c] */
    fp_push((double)SMEM32(ecx + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x24)); /* fmul dword ptr [ecx + 0x24] */
    MEMF(ebp + 0x14) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B7085u); RECOMP_ABI_CALL(0x001B6A5Bu, sub_001B6A5B); /* call 0x001B6A5B */

loc_001B7085: ;
    _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(1.0); /* fld1 */
    edx = MEM32(ebp + 0x18);
    MEM32(edx) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x1C)); /* fsub dword ptr [ecx + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(ecx + 0x18)); /* fimul dword ptr [ecx + 0x18] */
    PUSH32(esp, ecx);
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x24)); /* fsub dword ptr [ecx + 0x24] */
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(ecx + 0x20)); /* fimul dword ptr [ecx + 0x20] */
    MEMF(ebp + 0xC) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B70ADu); RECOMP_ABI_CALL(0x001B6A5Bu, sub_001B6A5B); /* call 0x001B6A5B */

loc_001B70AD: ;
    edi = eax;
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ecx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0xFFFFD8F0u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B70BF(); return; } /* jge: greater or equal (signed >=) */

loc_001B70BB: ;
    edi = edx;
    g_seh_ebp = ebp; sub_001B70C5(); return; /* tail jmp 0x001B70C5 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B70BF
 * Original: 0x001B70BF - 0x001B70C5 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B70BF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B70BF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B70C5(); return; } /* jle: less or equal (signed <=) */

loc_001B70C3: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001B70C5(); return; /* fallthrough 0x001B70C5 */

}

/**
 * sub_001B70C5
 * Original: 0x001B70C5 - 0x001B70EF (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B70C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B70C5: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_push(MEMF(ebp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B7110(); return; } /* jne: not equal / not zero */

loc_001B70D8: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x281BFC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x281bfc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) { g_seh_ebp = ebp; sub_001B70EF(); return; } /* jp: parity */

loc_001B70EA: ;
    MEM32(ebp + 8) = edx;
    g_seh_ebp = ebp; sub_001B710A(); return; /* tail jmp 0x001B710A */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B70EF
 * Original: 0x001B70EF - 0x001B710A (27 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001B70EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B70EF: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(0.30102999566398119521); /* fldlg2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x281E0C)); /* fmul dword ptr [0x281e0c] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001B7107u); RECOMP_ABI_CALL(0x001B6A5Bu, sub_001B6A5B); /* call 0x001B6A5B */

loc_001B7107: ;
    MEM32(ebp + 8) = eax;

    g_seh_ebp = ebp; sub_001B710A(); return; /* fallthrough 0x001B710A */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B710A
 * Original: 0x001B710A - 0x001B7110 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B710A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B710A: ;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x14)); /* fadd dword ptr [ebp + 0x14] */

    g_seh_ebp = ebp; sub_001B7110(); return; /* fallthrough 0x001B7110 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B7110
 * Original: 0x001B7110 - 0x001B713A (42 bytes, 16 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7110: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001B7119u); RECOMP_ABI_CALL(0x001B6A5Bu, sub_001B6A5B); /* call 0x001B6A5B */

loc_001B7119: ;
    _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    esi = MEM32(ebp + 0x1C);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi) = eax;
    PUSH32(esp, 0x001B712Du); RECOMP_ABI_CALL(0x001B6A5Bu, sub_001B6A5B); /* call 0x001B6A5B */

loc_001B712D: ;
    esi = eax;
    _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ecx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B713A(); return; } /* jge: greater or equal (signed >=) */

loc_001B7136: ;
    esi = edx;
    g_seh_ebp = ebp; sub_001B7140(); return; /* tail jmp 0x001B7140 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B713A
 * Original: 0x001B713A - 0x001B7140 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B713A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B713A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B7140(); return; } /* jle: less or equal (signed <=) */

loc_001B713E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001B7140(); return; /* fallthrough 0x001B7140 */

}

/**
 * sub_001B7140
 * Original: 0x001B7140 - 0x001B7184 (68 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7140: ;
    fp_push(MEMF(0x281FE0)); /* fld float */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001B715Au); RECOMP_ABI_CALL(0x001B6EBDu, sub_001B6EBD); /* call 0x001B6EBD */

loc_001B715A: ;
    fp_push(MEMF(0x281FE0)); /* fld float */
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx) = eax;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001B7179u); RECOMP_ABI_CALL(0x001B6EBDu, sub_001B6EBD); /* call 0x001B6EBD */

loc_001B7179: ;
    ecx = MEM32(ebp + 0x24);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B7184
 * Original: 0x001B7184 - 0x001B726E (234 bytes, 78 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B7184(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001B7184: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esi = ecx;
    eax = MEM32(esi);
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    eax = MEM32(eax + 0x160);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B71BBu); RECOMP_ABI_CALL(0x001B6FAAu, sub_001B6FAA); /* call 0x001B6FAA */

loc_001B71BB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001B71BD: ;
    ecx = MEM32(esi);
    edx = MEM32(ebp + -8);
    MEM32(eax + ecx + 0x1B8) = edx;
    ecx = MEM32(esi);
    edx = MEM32(ebp + -4);
    MEM32(eax + ecx + 0x1BC) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B71BD; /* jl: less (signed <) */

loc_001B71DD: ;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(eax + 0x160));
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B7207u); RECOMP_ABI_CALL(0x001B6FAAu, sub_001B6FAA); /* call 0x001B6FAA */

loc_001B7207: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001B7209: ;
    ecx = MEM32(esi);
    edx = MEM32(ebp + -8);
    MEM32(eax + ecx + 0x20C) = edx;
    ecx = MEM32(esi);
    edx = MEM32(ebp + -4);
    MEM32(eax + ecx + 0x210) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B7209; /* jl: less (signed <) */

loc_001B7229: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001B722D: ;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(edi + eax + 0xEC));
    eax = ebx + eax + 0x1D8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B725Cu); RECOMP_ABI_CALL(0x001B6FAAu, sub_001B6FAA); /* call 0x001B6FAA */

loc_001B725C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B722D; /* jl: less (signed <) */

loc_001B7267: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B726E
 * Original: 0x001B726E - 0x001B7439 (459 bytes, 158 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B726E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001B726E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = ecx;
    MEM32(esi) = eax;
    fp_push(MEMF(edi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C220)); /* fmul dword ptr [0x22c220] */
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C220)); /* fmul dword ptr [0x22c220] */
    fp_top() = RECOMP_FP_PC(MEMF(0x22C164) - fp_top()); /* fsubr dword ptr [0x22c164] */
    fp_push(MEMF(edi + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C0D0)); /* fsub dword ptr [0x22c0d0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2363AC)); /* fmul dword ptr [0x2363ac] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c0d0] */
    MEMF(ebp + 0xC) = (float)fp_top(); /* fst */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001B72C2; /* jp: parity */

loc_001B72BB: ;
    fp_pop(); /* fstp st(0) */
    fp_push(1.0); /* fld1 */
    MEMF(ebp + 0xC) = (float)fp_top(); /* fst */

loc_001B72C2: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x281FEC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x281fec] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B72D6; /* jne: not equal / not zero */

loc_001B72CF: ;
    MEM32(ebp + 0xC) = 0x42700000;

loc_001B72D6: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B72DDu); RECOMP_ABI_CALL(0x001B6D5Cu, sub_001B6D5C); /* call 0x001B6D5C */

loc_001B72DD: ;
    fp_push(MEMF(edi + 0x30)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(edi + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B72ECu); RECOMP_ABI_CALL(0x001B6F49u, sub_001B6F49); /* call 0x001B6F49 */

loc_001B72EC: ;
    eax = MEM32(edi + 0x18);
    _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B72F8u); RECOMP_ABI_CALL(0x001B6AA6u, sub_001B6AA6); /* call 0x001B6AA6 */

loc_001B72F8: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B7303u); RECOMP_ABI_CALL(0x001B6BB6u, sub_001B6BB6); /* call 0x001B6BB6 */

loc_001B7303: ;
    fp_push(MEMF(edi + 0x1C)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B730Fu); RECOMP_ABI_CALL(0x001B6BEFu, sub_001B6BEF); /* call 0x001B6BEF */

loc_001B730F: ;
    eax = MEM32(edi + 0x20);
    _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B731Bu); RECOMP_ABI_CALL(0x001B6AA6u, sub_001B6AA6); /* call 0x001B6AA6 */

loc_001B731B: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B7326u); RECOMP_ABI_CALL(0x001B6C0Du, sub_001B6C0D); /* call 0x001B6C0D */

loc_001B7326: ;
    fp_push(MEMF(edi + 0x24)); /* fld float */
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B7334u); RECOMP_ABI_CALL(0x001B6C45u, sub_001B6C45); /* call 0x001B6C45 */

loc_001B7334: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B7340u); RECOMP_ABI_CALL(0x001B6B28u, sub_001B6B28); /* call 0x001B6B28 */

loc_001B7340: ;
    fp_push(MEMF(edi + 0x30)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    fp_push(MEMF(edi + 0x14)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x10)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B735Eu); RECOMP_ABI_CALL(0x001B7184u, sub_001B7184); /* call 0x001B7184 */

loc_001B735E: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B736Cu); RECOMP_ABI_CALL(0x001B6CDFu, sub_001B6CDF); /* call 0x001B6CDF */

loc_001B736C: ;
    PUSH32(esp, 0xFFFFFFFCu);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);

loc_001B7371: ;
    eax = MEM32(esi);
    eax = ecx + eax + 0xAC;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x70 (32-bit) */
    MEM32(eax) = edx;
    if (CMP_B(_fa, _fb)) goto loc_001B7371; /* jb: below (unsigned <) */

loc_001B7389: ;
    ecx = 0x118;

loc_001B738E: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x12C (32-bit) */
    MEM32(eax) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001B738E; /* jl: less (signed <) */

loc_001B73A4: ;
    edx = 0x130;
    ecx = 0x150;
    PUSH32(esp, ebx);

loc_001B73AF: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(eax);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx & edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(eax) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_001B73AF; /* jl: less (signed <) */

loc_001B73C1: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x12C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = edx;

loc_001B73CF: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x160) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x160 (32-bit) */
    MEM32(eax) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001B73CF; /* jl: less (signed <) */

loc_001B73E5: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x160;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001B73F5: ;
    eax = MEM32(esi);
    eax = ecx + eax + 0xAC;
    MEM32(eax) = MEM32(eax) - 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x70 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B73F5; /* jb: below (unsigned <) */

loc_001B7408: ;
    edx = 0x11C;

loc_001B740D: ;
    eax = MEM32(esi);
    ecx = edx + eax;
    eax = MEM32(eax + 0x118);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x12C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B740D; /* jl: less (signed <) */

loc_001B7425: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x118);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x12C) = MEM32(eax + 0x12C) + ecx;
    _fa = (uint32_t)(MEM32(eax + 0x12C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001B7439(); return; /* fallthrough 0x001B7439 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B7439
 * Original: 0x001B7439 - 0x001B7461 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7439(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7439: ;
    eax = MEM32(esi);
    edx = ecx + eax;
    edi = edx + 0x134;
    ebx = MEM32(edi);
    MEM32(ebp + 8) = edx;
    edx = ecx + 0x130;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = eax;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -8) = ebx;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B7461(); return; } /* jbe: below or equal (unsigned <=) */

loc_001B745D: ;
    edi = eax;
    g_seh_ebp = ebp; sub_001B7463(); return; /* tail jmp 0x001B7463 */

}

/**
 * sub_001B7461
 * Original: 0x001B7461 - 0x001B7463 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7461(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7461: ;
    edi = MEM32(edi);

    g_seh_ebp = ebp; sub_001B7463(); return; /* fallthrough 0x001B7463 */

}

/**
 * sub_001B7463
 * Original: 0x001B7463 - 0x001B750A (167 bytes, 56 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7463(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7463: ;
    ebx = edi;
    edi = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(ebp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(edi + 0xAC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B750A(); return; } /* jbe: below or equal (unsigned <=) */

loc_001B7479: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + 8) = edi;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001B7489; /* jge: greater or equal (signed >=) */

loc_001B7483: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_001B7489: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + 8) = ebx;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001B7499; /* jge: greater or equal (signed >=) */

loc_001B7493: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_001B7499: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(ebp + -4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001B74B1; /* jge: greater or equal (signed >=) */

loc_001B74AB: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_001B74B1: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 8)); /* fmul dword ptr [ebp + 8] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001B74BDu); RECOMP_ABI_CALL(0x001B6A5Bu, sub_001B6A5B); /* call 0x001B6A5B */

loc_001B74BD: ;
    edi = MEM32(esi);
    MEM32(edx + edi) = eax;
    eax = MEM32(esi);
    eax = MEM32(ecx + eax + 0x134);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0xC) = eax;
    fp_push((double)SMEM32(ebp + 0xC)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001B74DE; /* jge: greater or equal (signed >=) */

loc_001B74D8: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_001B74DE: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 8)); /* fmul dword ptr [ebp + 8] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001B74EAu); RECOMP_ABI_CALL(0x001B6A5Bu, sub_001B6A5B); /* call 0x001B6A5B */

loc_001B74EA: ;
    edi = MEM32(esi);
    PUSH32(esp, 2);
    MEM32(ecx + edi + 0x134) = eax;
    POP32(esp, edi);

loc_001B74F6: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(eax);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = ebx;
    if ((_fa != 0)) goto loc_001B74F6; /* jne: not equal / not zero */

loc_001B7508: ;
    g_seh_ebp = ebp; sub_001B751D(); return; /* tail jmp 0x001B751D */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B750A
 * Original: 0x001B750A - 0x001B751D (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B750A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B750A: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax) = MEM32(eax) - edx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi);
    eax = ecx + eax + 0x134;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax) = MEM32(eax) - edx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

    g_seh_ebp = ebp; sub_001B751D(); return; /* fallthrough 0x001B751D */

}

/**
 * sub_001B751D
 * Original: 0x001B751D - 0x001B7579 (92 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B751D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B751D: ;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B7439(); return; } /* jl: less (signed <) */

loc_001B752F: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0x150;

loc_001B7536: ;
    eax = MEM32(esi);
    ecx = eax + edx;
    eax = MEM32(eax + edi + 0xCC);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B7548; /* jbe: below or equal (unsigned <=) */

loc_001B7546: ;
    MEM32(ecx) = eax;

loc_001B7548: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x160) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x160 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B7536; /* jl: less (signed <) */

loc_001B7556: ;
    eax = MEM32(esi);
    ecx = eax + 0x160;
    eax = MEM32(eax + 0x10C);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B756A; /* jbe: below or equal (unsigned <=) */

loc_001B7568: ;
    MEM32(ecx) = eax;

loc_001B756A: ;
    edi = 0x164;
    edx = 0x7FFFFF;
    ebx = 0xFF800001u;

    g_seh_ebp = ebp; sub_001B7579(); return; /* fallthrough 0x001B7579 */

}

/**
 * sub_001B7579
 * Original: 0x001B7579 - 0x001B7587 (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7579(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7579: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B7587(); return; } /* jle: less or equal (signed <=) */

loc_001B7583: ;
    MEM32(eax) = edx;
    g_seh_ebp = ebp; sub_001B758D(); return; /* tail jmp 0x001B758D */

}

/**
 * sub_001B7587
 * Original: 0x001B7587 - 0x001B758D (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7587(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7587: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B758D(); return; } /* jge: greater or equal (signed >=) */

loc_001B758B: ;
    MEM32(eax) = ebx;

    g_seh_ebp = ebp; sub_001B758D(); return; /* fallthrough 0x001B758D */

}

/**
 * sub_001B758D
 * Original: 0x001B758D - 0x001B75F6 (105 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B758D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B758D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x184) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x184 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B7579(); return; } /* jl: less (signed <) */

loc_001B7598: ;
    ecx = 0x118;
    POP32(esp, ebx);

loc_001B759E: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = MEM32(eax) << 2;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x12C (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B759E; /* jb: below (unsigned <) */

loc_001B75B0: ;
    eax = MEM32(esi);
    MEM32(eax + 0x12C) = MEM32(eax + 0x12C) << 2;
    _fa = (uint32_t)(MEM32(eax + 0x12C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = 0x130;

loc_001B75BE: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = MEM32(eax) << 2;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x150) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x150 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B75BE; /* jb: below (unsigned <) */

loc_001B75D0: ;
    ecx = 0x150;

loc_001B75D5: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = MEM32(eax) << 2;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x160) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x160 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B75D5; /* jb: below (unsigned <) */

loc_001B75E7: ;
    esi = MEM32(esi);
    MEM32(esi + 0x160) = MEM32(esi + 0x160) << 2;
    _fa = (uint32_t)(MEM32(esi + 0x160)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B7611
 * Original: 0x001B7611 - 0x001B7632 (33 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7611(void)
{

loc_001B7611: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x282000;
    MEM32(esi + 4) = 0x281FF0;
    PUSH32(esp, 0x001B7629u); RECOMP_ABI_CALL(0x001B009Eu, sub_001B009E); /* call 0x001B009E */

loc_001B7629: ;
    MEM32(esi + 4) = 0x281DFC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B7632
 * Original: 0x001B7632 - 0x001B763F (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7632(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7632: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 8) = MEM32(eax + 8) + 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(eax + 8);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B763F
 * Original: 0x001B763F - 0x001B764F (16 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B763F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B763F: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B764Cu); RECOMP_ABI_CALL(0x001A8B02u, sub_001A8B02); /* call 0x001A8B02 */

loc_001B764C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B764F
 * Original: 0x001B764F - 0x001B765E (15 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001B764F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B764F: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 2;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B765E
 * Original: 0x001B765E - 0x001B7663 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001B765E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B765E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B7663
 * Original: 0x001B7663 - 0x001B7675 (18 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7663(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7663: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001B7672u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B766Fu); } /* indirect call */
    }

loc_001B7672: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B7675
 * Original: 0x001B7675 - 0x001B7687 (18 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001B7675(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7675: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x40);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B7687
 * Original: 0x001B7687 - 0x001B7699 (18 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001B7687(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7687: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x4C);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B7699
 * Original: 0x001B7699 - 0x001B76B0 (23 bytes, 6 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7699(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7699: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001B76ADu); RECOMP_ABI_CALL(0x001B02B6u, sub_001B02B6); /* call 0x001B02B6 */

loc_001B76AD: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B76C7
 * Original: 0x001B76C7 - 0x001B76EC (37 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001B76C7(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B76C7: ;
    eax = MEM32(esp + 8);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(esp + 4);
    MEM32(eax) = 1;
    ecx = MEM32(ecx + 0x4C);
    ecx = ZX16(MEM16(ecx + 0xC));
    MEM32(eax + 8) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B76EC
 * Original: 0x001B76EC - 0x001B76EF (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B76EC(void)
{

loc_001B76EC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B76EF
 * Original: 0x001B76EF - 0x001B774E (95 bytes, 40 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B76EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B76EF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    eax = MEM32(edi);
    MEM32(ebp + -4) = eax;
    eax = MEM32(edi + 4);
    MEM32(ebp + 0x10) = eax;
    ebx = ZX16(MEM16(ecx + 0xC));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    PUSH32(esp, edi);
    MEM32(ebp + 0x10) = eax;
    ecx = ZX16(MEM16(ecx + 0xC));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    MEM32(ebp + 0x10) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B7725u); RECOMP_ABI_CALL(0x001B244Eu, sub_001B244E); /* call 0x001B244E */

loc_001B7725: ;
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = esi + 0xC;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(esi + 0x50));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B773Au); RECOMP_ABI_CALL(0x001B04CBu, sub_001B04CB); /* call 0x001B04CB */

loc_001B773A: ;
    ebx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B774E(); return; } /* jl: less (signed <) */

loc_001B7742: ;
    ecx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + ecx;
    _fa = (uint32_t)(MEM32(esi + 0x50)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_seh_ebp = ebp; sub_001B7756(); return; /* tail jmp 0x001B7756 */

}

/**
 * sub_001B774E
 * Original: 0x001B774E - 0x001B7756 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B774E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B774E: ;
    PUSH32(esp, 0x80004005u);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);

    g_seh_ebp = ebp; sub_001B7756(); return; /* fallthrough 0x001B7756 */

}

/**
 * sub_001B7756
 * Original: 0x001B7756 - 0x001B7765 (15 bytes, 8 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7756(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7756: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001B775Cu); RECOMP_ABI_CALL(0x001B246Cu, sub_001B246C); /* call 0x001B246C */

loc_001B775C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B7765
 * Original: 0x001B7765 - 0x001B777E (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7765(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7765: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 4);
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001B777E(); return; } /* je: equal / zero */

loc_001B7772: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001B7782(); return; } /* jne: not equal / not zero */

loc_001B7776: ;
    ecx = MEM32(eax + 0x40);
    MEM32(eax + 0x50) = ecx;
    g_seh_ebp = ebp; sub_001B7782(); return; /* tail jmp 0x001B7782 */

}

/**
 * sub_001B777E
 * Original: 0x001B777E - 0x001B7782 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B777E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B777E: ;
    MEM32(eax + 0x50) = MEM32(eax + 0x50) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x50)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001B7782(); return; /* fallthrough 0x001B7782 */

}

/**
 * sub_001B7782
 * Original: 0x001B7782 - 0x001B779B (25 bytes, 9 insns)
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001B7782(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7782: ;
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x50) = MEM32(eax + 0x50) + ecx;
    _fa = (uint32_t)(MEM32(eax + 0x50)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(eax + 0x50);
    if (CMP_EQ(_fa, _fb)) goto loc_001B7796; /* je: equal / zero */

loc_001B7794: ;
    MEM32(ecx) = eax;

loc_001B7796: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001B779B
 * Original: 0x001B779B - 0x001B783D (162 bytes, 63 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B779B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001B779B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = esi + 0xC;
    PUSH32(esp, 2);
    ecx = edi;
    MEM32(esi + 0x18) = 1;
    MEM32(esi + 0x1C) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B77BDu); RECOMP_ABI_CALL(0x001AEF0Eu, sub_001AEF0E); /* call 0x001AEF0E */

loc_001B77BD: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B77C7u); RECOMP_ABI_CALL(0x001AEF01u, sub_001AEF01); /* call 0x001AEF01 */

loc_001B77C7: ;
    ebx = ebx + ebx * 2;
    PUSH32(esp, 1);
    if (4) _cf = (int)(((ebx) >> (32 - (4))) & 1);
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x626F5344);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B77DAu); RECOMP_ABI_CALL(0x001AEB13u, sub_001AEB13); /* call 0x001AEB13 */

loc_001B77DA: ;
    edi = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF8FFF2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    eax = eax + 0x8007000Eu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x40) = edi;
    if ((_fas < 0)) goto loc_001B7834; /* js: sign (negative) */

loc_001B77EF: ;
    ecx = ebx;
    edx = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 8) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_001B7834; /* jbe: below or equal (unsigned <=) */

loc_001B780B: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001B780D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B7816u); RECOMP_ABI_CALL(0x000AD49Bu, sub_000AD49B); /* call 0x000AD49B */

loc_001B7816: ;
    ecx = MEM32(esi + 0x40);
    MEM32(ecx + edi + 0x10) = eax;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(MEM32(eax + edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edi + 0x10), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001B7834; /* je: equal / zero */

loc_001B7826: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x30)) >> 32) & 1);
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001B780D; /* jb: below (unsigned <) */

loc_001B7834: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B783D
 * Original: 0x001B783D - 0x001B7855 (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001B783D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B783D: ;
    eax = MEM32(esp + 8);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B7855
 * Original: 0x001B7855 - 0x001B7880 (43 bytes, 20 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B7855(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7855: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ecx (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B7886(); return; } /* je: equal / zero */

loc_001B7867: ;
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001B7880(); return; } /* je: equal / zero */

loc_001B786E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001B7883(); return; } /* jne: not equal / not zero */

loc_001B7872: ;
    eax = esi + 0x20;
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B787Eu); RECOMP_ABI_CALL(0x001AF0D2u, sub_001AF0D2); /* call 0x001AF0D2 */

loc_001B787E: ;
    g_seh_ebp = ebp; sub_001B7883(); return; /* tail jmp 0x001B7883 */

}

/**
 * sub_001B7880
 * Original: 0x001B7880 - 0x001B7883 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7880: ;
    MEM32(esi + 0x20) = ecx;

    g_seh_ebp = ebp; sub_001B7883(); return; /* fallthrough 0x001B7883 */

}

/**
 * sub_001B7883
 * Original: 0x001B7883 - 0x001B7886 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7883(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7883: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x20) = MEM32(esi + 0x20) + edi;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001B7886(); return; /* fallthrough 0x001B7886 */

}

/**
 * sub_001B7886
 * Original: 0x001B7886 - 0x001B789B (21 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7886(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7886: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = esi + 0xC;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, edi);
    PUSH32(esp, 0x001B7895u); RECOMP_ABI_CALL(0x001AF057u, sub_001AF057); /* call 0x001AF057 */

loc_001B7895: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001B789B
 * Original: 0x001B789B - 0x001B7941 (166 bytes, 64 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B789B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B789B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B7930; /* je: equal / zero */

loc_001B78AF: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B78BD; /* je: equal / zero */

loc_001B78B5: ;
    PUSH32(esp, MEM32(esi + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B78BDu); RECOMP_ABI_CALL(0x0015D4A7u, sub_0015D4A7); /* call 0x0015D4A7 */

loc_001B78BD: ;
    eax = esi + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BBC0); PUSH32(esp, 0x001B78C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B78C1u); } /* indirect call */
    }

loc_001B78C7: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), ebx (32-bit) */
    MEM32(ebp + 8) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_001B7926; /* jbe: below or equal (unsigned <=) */

loc_001B78CF: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001B78D2: ;
    eax = MEM32(esi + 0x40);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2C), 0x8000000Au (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B78EF; /* jne: not equal / not zero */

loc_001B78E0: ;
    PUSH32(esp, 1);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B78EFu); RECOMP_ABI_CALL(0x000ADDE5u, sub_000ADDE5); /* call 0x000ADDE5 */

loc_001B78EF: ;
    eax = MEM32(esi + 0x40);
    MEM32(eax + edi + 0x2C) = ebx;
    eax = MEM32(esi + 0x40);
    PUSH32(esp, MEM32(eax + edi + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B7902u); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001B7902: ;
    eax = MEM32(esi + 0x40);
    PUSH32(esp, 0x80004004u);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = eax + edi + 0x14;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B7917u); RECOMP_ABI_CALL(0x001B246Cu, sub_001B246C); /* call 0x001B246C */

loc_001B7917: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1C) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B78D2; /* jb: below (unsigned <) */

loc_001B7925: ;
    POP32(esp, edi);

loc_001B7926: ;
    eax = esi + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001B7930u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B792Au); } /* indirect call */
    }

loc_001B7930: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001B7939u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B7936u); } /* indirect call */
    }

loc_001B7939: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B7941
 * Original: 0x001B7941 - 0x001B7967 (38 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7941(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7941: ;
    edx = MEM32(ecx + 0x1C);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B7961; /* jbe: below or equal (unsigned <=) */

loc_001B794B: ;
    eax = MEM32(ecx + 0x40);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001B7951: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x8000000Au (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B7967(); return; } /* jne: not equal / not zero */

loc_001B7959: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B7951; /* jb: below (unsigned <) */

loc_001B7961: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B7963
 * Original: 0x001B7963 - 0x001B7967 (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7963(void)
{

loc_001B7963: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B7967
 * Original: 0x001B7967 - 0x001B7976 (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7967(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7967: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B7971; /* je: equal / zero */

loc_001B796F: ;
    MEM32(eax) = esi;

loc_001B7971: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001B7963(); return; /* tail jmp 0x001B7963 */

}

/**
 * sub_001B7976
 * Original: 0x001B7976 - 0x001B7A1E (168 bytes, 64 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B7976(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7976: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B7A18; /* je: equal / zero */

loc_001B798B: ;
    eax = esi + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(ebp + -8) = eax;
    { uint32_t _icall_target = MEM32(0x22BBC0); PUSH32(esp, 0x001B7998u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B7992u); } /* indirect call */
    }

loc_001B7998: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), ebx (32-bit) */
    MEM32(ebp + 8) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_001B7A0F; /* jbe: below or equal (unsigned <=) */

loc_001B79A0: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001B79A3: ;
    eax = MEM32(esi + 0x40);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2C), 0x8000000Au (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B7A00; /* jne: not equal / not zero */

loc_001B79B1: ;
    PUSH32(esp, ebx);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B79BFu); RECOMP_ABI_CALL(0x000ADDE5u, sub_000ADDE5); /* call 0x000ADDE5 */

loc_001B79BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B7A00; /* je: equal / zero */

loc_001B79C3: ;
    eax = MEM32(esi + 0x40);
    MEM32(eax + edi + 0x2C) = ebx;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(MEM32(eax + edi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edi + 0x1C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B79DC; /* je: equal / zero */

loc_001B79D3: ;
    eax = MEM32(eax + edi + 0x1C);
    ecx = MEM32(ebp + -4);
    MEM32(eax) = ecx;

loc_001B79DC: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(MEM32(eax + edi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edi + 0x20), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B79EF; /* je: equal / zero */

loc_001B79E5: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax + 0x20);
    eax = MEM32(eax + 0x2C);
    MEM32(ecx) = eax;

loc_001B79EF: ;
    eax = MEM32(esi + 0x40);
    eax = MEM32(eax + edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B7A00; /* je: equal / zero */

loc_001B79FA: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B7A00u); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001B7A00: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1C) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B79A3; /* jb: below (unsigned <) */

loc_001B7A0E: ;
    POP32(esp, edi);

loc_001B7A0F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -8));
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001B7A18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B7A12u); } /* indirect call */
    }

loc_001B7A18: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B7A1E
 * Original: 0x001B7A1E - 0x001B7A28 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7A1E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7A1E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esp + 4) = MEM32(esp + 4) - 4;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001B7632(); return; /* tail jmp 0x001B7632 */

}

/**
 * sub_001B7A28
 * Original: 0x001B7A28 - 0x001B7A32 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7A28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7A28: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esp + 4) = MEM32(esp + 4) - 4;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001B763F(); return; /* tail jmp 0x001B763F */

}

/**
 * sub_001B7A32
 * Original: 0x001B7A32 - 0x001B7A4D (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7A32(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7A32: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001B7A3Au); RECOMP_ABI_CALL(0x001B7611u, sub_001B7611); /* call 0x001B7611 */

loc_001B7A3A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7A47; /* je: equal / zero */

loc_001B7A41: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B7A47u); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001B7A47: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B7A50
 * Original: 0x001B7A50 - 0x001B7A94 (68 bytes, 18 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7A50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7A50: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi + 4) = 0x281DFC;
    MEM32(esi + 8) = 1;
    PUSH32(esp, 0x001B7A69u); RECOMP_ABI_CALL(0x001AEE9Au, sub_001AEE9A); /* call 0x001AEE9A */

loc_001B7A69: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esi) = 0x282040;
    MEM32(esi + 4) = 0x282030;
    { uint32_t _icall_target = MEM32(0x22BD0C); PUSH32(esp, 0x001B7A8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B7A86u); } /* indirect call */
    }

loc_001B7A8C: ;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B7A94
 * Original: 0x001B7A94 - 0x001B7AA1 (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7A94(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7A94: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 8) = MEM32(eax + 8) + 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(eax + 8);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B7AA1
 * Original: 0x001B7AA1 - 0x001B7AB1 (16 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7AA1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7AA1: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B7AAEu); RECOMP_ABI_CALL(0x001A8B02u, sub_001A8B02); /* call 0x001A8B02 */

loc_001B7AAE: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B7AB1
 * Original: 0x001B7AB1 - 0x001B7AB6 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001B7AB1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7AB1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B7AB6
 * Original: 0x001B7AB6 - 0x001B7AC9 (19 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7AB6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7AB6: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001B7AC6u); RECOMP_ABI_CALL(0x001AF0D2u, sub_001AF0D2); /* call 0x001AF0D2 */

loc_001B7AC6: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B7AC9
 * Original: 0x001B7AC9 - 0x001B7AD3 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7AC9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7AC9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esp + 4) = MEM32(esp + 4) - 4;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001B7A94(); return; /* tail jmp 0x001B7A94 */

}

/**
 * sub_001B7AD3
 * Original: 0x001B7AD3 - 0x001B7ADD (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7AD3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7AD3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esp + 4) = MEM32(esp + 4) - 4;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001B7AA1(); return; /* tail jmp 0x001B7AA1 */

}

/**
 * sub_001B7ADD
 * Original: 0x001B7ADD - 0x001B7B0D (48 bytes, 18 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B7ADD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7ADD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    MEM32(esi) = 3;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B7B06; /* je: equal / zero */

loc_001B7AF3: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B7AFCu); RECOMP_ABI_CALL(0x001B7941u, sub_001B7941); /* call 0x001B7941 */

loc_001B7AFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B7B06; /* jne: not equal / not zero */

loc_001B7B00: ;
    MEM32(esi) = 1;

loc_001B7B06: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B7B0D
 * Original: 0x001B7B0D - 0x001B7B72 (101 bytes, 37 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7B0D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7B0D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x282040;
    MEM32(esi + 4) = 0x282030;
    PUSH32(esp, 0x001B7B23u); RECOMP_ABI_CALL(0x001B789Bu, sub_001B789B); /* call 0x001B789B */

loc_001B7B23: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B7B61; /* je: equal / zero */

loc_001B7B29: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B7B4F; /* jbe: below or equal (unsigned <=) */

loc_001B7B31: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001B7B34: ;
    eax = MEM32(esi + 0x40);
    eax = MEM32(eax + edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B7B45; /* je: equal / zero */

loc_001B7B3F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B7B45u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_001B7B45: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x1C) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B7B34; /* jb: below (unsigned <) */

loc_001B7B4E: ;
    POP32(esp, edi);

loc_001B7B4F: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001B7B61; /* je: equal / zero */

loc_001B7B57: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B7B5Du); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001B7B5D: ;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001B7B61: ;
    ecx = esi + 0xC;
    PUSH32(esp, 0x001B7B69u); RECOMP_ABI_CALL(0x001B0071u, sub_001B0071); /* call 0x001B0071 */

loc_001B7B69: ;
    MEM32(esi + 4) = 0x281DFC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B7B72
 * Original: 0x001B7B72 - 0x001B7BC1 (79 bytes, 33 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B7B72(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7B72: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    esi = 0x80004005u;
    MEM32(ebp + -4) = esi;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B7BC8(); return; } /* je: equal / zero */

loc_001B7B8C: ;
    eax = MEM32(ebx);
    MEM32(ebp + 0x10) = eax;
    eax = MEM32(ebx + 4);
    PUSH32(esp, ebx);
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B7B9Du); RECOMP_ABI_CALL(0x001B244Eu, sub_001B244E); /* call 0x001B244E */

loc_001B7B9D: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B7BB2u); RECOMP_ABI_CALL(0x001AEFF0u, sub_001AEFF0); /* call 0x001AEFF0 */

loc_001B7BB2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B7BC1(); return; } /* jl: less (signed <) */

loc_001B7BB9: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -8));
    g_seh_ebp = ebp; sub_001B7BC5(); return; /* tail jmp 0x001B7BC5 */

}

/**
 * sub_001B7BC1
 * Original: 0x001B7BC1 - 0x001B7BC5 (4 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7BC1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7BC1: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);

    g_seh_ebp = ebp; sub_001B7BC5(); return; /* fallthrough 0x001B7BC5 */

}

/**
 * sub_001B7BC5
 * Original: 0x001B7BC5 - 0x001B7BC8 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7BC5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7BC5: ;
    PUSH32(esp, ebx);
    g_seh_ebp = ebp; sub_001B7C0D(); return; /* tail jmp 0x001B7C0D */

}

/**
 * sub_001B7BC8
 * Original: 0x001B7BC8 - 0x001B7C17 (79 bytes, 29 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7BC8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7BC8: ;
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B7CCA(); return; } /* je: equal / zero */

loc_001B7BD3: ;
    eax = MEM32(esi);
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, esi);
    MEM32(ebp + 0xC) = eax;
    PUSH32(esp, 0x001B7BE4u); RECOMP_ABI_CALL(0x001B244Eu, sub_001B244E); /* call 0x001B244E */

loc_001B7BE4: ;
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B7C21(); return; } /* jne: not equal / not zero */

loc_001B7BEC: ;
    PUSH32(esp, edi);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebx + 0xC;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, 0x001B7BFFu); RECOMP_ABI_CALL(0x001AEF5Cu, sub_001AEF5C); /* call 0x001AEF5C */

loc_001B7BFF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B7C17(); return; } /* jl: less (signed <) */

loc_001B7C06: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B7C12u); RECOMP_ABI_CALL(0x001B246Cu, sub_001B246C); /* call 0x001B246C */

loc_001B7C12: ;
    g_seh_ebp = ebp; sub_001B7CCA(); return; /* tail jmp 0x001B7CCA */

}

/**
 * sub_001B7C0C
 * Original: 0x001B7C0C - 0x001B7C17 (11 bytes, 3 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7C0C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7C0C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B7C12u); RECOMP_ABI_CALL(0x001B246Cu, sub_001B246C); /* call 0x001B246C */

loc_001B7C12: ;
    g_seh_ebp = ebp; sub_001B7CCA(); return; /* tail jmp 0x001B7CCA */

}

/**
 * sub_001B7C0D
 * Original: 0x001B7C0D - 0x001B7C17 (10 bytes, 2 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7C0D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7C0D: ;
    PUSH32(esp, 0x001B7C12u); RECOMP_ABI_CALL(0x001B246Cu, sub_001B246C); /* call 0x001B246C */

loc_001B7C12: ;
    g_seh_ebp = ebp; sub_001B7CCA(); return; /* tail jmp 0x001B7CCA */

}

/**
 * sub_001B7C17
 * Original: 0x001B7C17 - 0x001B7C21 (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7C17(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7C17: ;
    PUSH32(esp, 0x80004005u);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    g_seh_ebp = ebp; sub_001B7C0C(); return; /* tail jmp 0x001B7C0C */

}

/**
 * sub_001B7C21
 * Original: 0x001B7C21 - 0x001B7CB3 (146 bytes, 51 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7C21(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7C21: ;
    eax = ebx + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(ebp + -16) = eax;
    { uint32_t _icall_target = MEM32(0x22BBC0); PUSH32(esp, 0x001B7C2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B7C28u); } /* indirect call */
    }

loc_001B7C2E: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(ebp + 8) = edi;
    PUSH32(esp, 0x001B7C3Cu); RECOMP_ABI_CALL(0x001B7941u, sub_001B7941); /* call 0x001B7941 */

loc_001B7C3C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B7CB3(); return; } /* je: equal / zero */

loc_001B7C40: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebx + 0x40);
    PUSH32(esp, 6);
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ecx + eax + 0x14;
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
    ecx = MEM32(ebx + 0x40);
    esi = MEM32(ebp + 0x10);
    MEM32(ecx + eax + 0x2C) = 0x8000000Au;
    ecx = MEM32(ebx + 0x40);
    edx = MEM32(ebx + 0x20);
    MEM32(ecx + eax + 8) = edx;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 0x20) = MEM32(ebx + 0x20) + ecx;
    _fa = (uint32_t)(MEM32(ebx + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebx + 0x40);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebx + 0xC;
    PUSH32(esp, MEM32(ebp + -12));
    MEM32(ebp + 8) = eax;
    PUSH32(esp, 0x001B7C8Du); RECOMP_ABI_CALL(0x001AEF5Cu, sub_001AEF5C); /* call 0x001AEF5C */

loc_001B7C8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B7CC1(); return; } /* jge: greater or equal (signed >=) */

loc_001B7C94: ;
    PUSH32(esp, 0x80004005u);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B7CA2u); RECOMP_ABI_CALL(0x001B246Cu, sub_001B246C); /* call 0x001B246C */

loc_001B7CA2: ;
    eax = MEM32(ebx + 0x40);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax + ecx + 0x10));
    PUSH32(esp, 0x001B7CB1u); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

loc_001B7CB1: ;
    g_seh_ebp = ebp; sub_001B7CC1(); return; /* tail jmp 0x001B7CC1 */

}

/**
 * sub_001B7CB3
 * Original: 0x001B7CB3 - 0x001B7CC1 (14 bytes, 6 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7CB3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7CB3: ;
    PUSH32(esp, 0x80004005u);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B7CC1u); RECOMP_ABI_CALL(0x001B246Cu, sub_001B246C); /* call 0x001B246C */

    g_seh_ebp = ebp; sub_001B7CC1(); return; /* fallthrough 0x001B7CC1 */

}

/**
 * sub_001B7CC1
 * Original: 0x001B7CC1 - 0x001B7CCA (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7CC1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7CC1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -16));
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001B7CCAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B7CC4u); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001B7CCA(); return; /* fallthrough 0x001B7CCA */

}

/**
 * sub_001B7CCA
 * Original: 0x001B7CCA - 0x001B7CD4 (10 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7CCA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7CCA: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B7CD7
 * Original: 0x001B7CD7 - 0x001B7CF2 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7CD7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7CD7: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001B7CDFu); RECOMP_ABI_CALL(0x001B7B0Du, sub_001B7B0D); /* call 0x001B7B0D */

loc_001B7CDF: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7CEC; /* je: equal / zero */

loc_001B7CE6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B7CECu); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001B7CEC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B7CF2
 * Original: 0x001B7CF2 - 0x001B7D20 (46 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7CF2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7CF2: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi + 4) = 0x281DFC;
    MEM32(esi + 8) = 1;
    PUSH32(esp, 0x001B7D0Bu); RECOMP_ABI_CALL(0x001B0076u, sub_001B0076); /* call 0x001B0076 */

loc_001B7D0B: ;
    MEM32(esi + 0x50) = MEM32(esi + 0x50) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x50)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = 0x282000;
    MEM32(esi + 4) = 0x281FF0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B7D5D
 * Original: 0x001B7D5D - 0x001B7D7A (29 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7D5D(void)
{

loc_001B7D5D: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    { uint32_t _icall_target = MEM32(0x22BD1C); PUSH32(esp, 0x001B7D6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B7D68u); } /* indirect call */
    }

loc_001B7D6E: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001B7D76u); RECOMP_ABI_CALL(0x001B99EFu, sub_001B99EF); /* call 0x001B99EF */

loc_001B7D76: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B7D7A
 * Original: 0x001B7D7A - 0x001B7D95 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7D7A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7D7A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001B7D82u); RECOMP_ABI_CALL(0x001B9F86u, sub_001B9F86); /* call 0x001B9F86 */

loc_001B7D82: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7D8F; /* je: equal / zero */

loc_001B7D89: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B7D8Fu); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001B7D8F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B7D95
 * Original: 0x001B7D95 - 0x001B7DBC (39 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7D95(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7D95: ;
    PUSH32(esp, 0x001B7D9Au); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001B7D9A: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    edx = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B7DBC(); return; } /* je: equal / zero */

loc_001B7DA6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B7DB5; /* je: equal / zero */

loc_001B7DAA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001B7DB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B7DAFu); } /* indirect call */
    }

loc_001B7DB5: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001B7DEB(); return; /* tail jmp 0x001B7DEB */

}

/**
 * sub_001B7DBC
 * Original: 0x001B7DBC - 0x001B7DEB (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001B7DBC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7DBC: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edi = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(ecx) = 5;
    eax = ZX16(MEM16(0x1CE448));
    MEM32(ecx + 4) = eax;
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001B7DE9; /* je: equal / zero */

loc_001B7DDE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001B7DE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B7DE3u); } /* indirect call */
    }

loc_001B7DE9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001B7DEB(); return; /* fallthrough 0x001B7DEB */

}

/**
 * sub_001B7DEB
 * Original: 0x001B7DEB - 0x001B7DEE (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7DEB(void)
{

loc_001B7DEB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B7DEE
 * Original: 0x001B7DEE - 0x001B7E15 (39 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7DEE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7DEE: ;
    PUSH32(esp, 0x001B7DF3u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001B7DF3: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    eax = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B7E15(); return; } /* je: equal / zero */

loc_001B7DFF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B7E0E; /* je: equal / zero */

loc_001B7E03: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001B7E0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B7E08u); } /* indirect call */
    }

loc_001B7E0E: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001B7E33(); return; /* tail jmp 0x001B7E33 */

}

/**
 * sub_001B7E15
 * Original: 0x001B7E15 - 0x001B7E33 (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001B7E15(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7E15: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x2C);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001B7E31; /* je: equal / zero */

loc_001B7E26: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001B7E31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B7E2Bu); } /* indirect call */
    }

loc_001B7E31: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001B7E33(); return; /* fallthrough 0x001B7E33 */

}

/**
 * sub_001B7E33
 * Original: 0x001B7E33 - 0x001B7E36 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7E33(void)
{

loc_001B7E33: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B7E36
 * Original: 0x001B7E36 - 0x001B7E71 (59 bytes, 18 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B7E36(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7E36: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -12) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B7E4Au); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001B7E4A: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), edi (32-bit) */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B7E71(); return; } /* je: equal / zero */

loc_001B7E58: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B7E67; /* je: equal / zero */

loc_001B7E5C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001B7E67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B7E61u); } /* indirect call */
    }

loc_001B7E67: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001B7F0C(); return; /* tail jmp 0x001B7F0C */

}

/**
 * sub_001B7E71
 * Original: 0x001B7E71 - 0x001B7E98 (39 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7E71(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7E71: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ebp + -16;
    PUSH32(esp, 0x001B7E7Bu); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B7E7B: ;
    ebx = MEM32(ebp + 8);
    esi = ebx + 0x18;
    PUSH32(esp, esi);
    eax = ebx + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B7E8Bu); RECOMP_ABI_CALL(0x001B24CBu, sub_001B24CB); /* call 0x001B24CB */

loc_001B7E8B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B7E98(); return; } /* jne: not equal / not zero */

loc_001B7E8F: ;
    MEM32(ebp + -4) = 0x88780032u;
    g_seh_ebp = ebp; sub_001B7EB0(); return; /* tail jmp 0x001B7EB0 */

}

/**
 * sub_001B7E98
 * Original: 0x001B7E98 - 0x001B7EB0 (24 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7E98(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7E98: ;
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, 6);
    MEM32(ebp + 8) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    edi = eax;
    PUSH32(esp, eax);
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
    PUSH32(esp, 0x001B7EAEu); RECOMP_ABI_CALL(0x001B244Eu, sub_001B244E); /* call 0x001B244E */

loc_001B7EAE: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001B7EB0(); return; /* fallthrough 0x001B7EB0 */

}

/**
 * sub_001B7EB0
 * Original: 0x001B7EB0 - 0x001B7F0C (92 bytes, 29 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7EB0: ;
    ecx = ebp + -16;
    PUSH32(esp, 0x001B7EB8u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B7EB8: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B7EF7; /* jl: less (signed <) */

loc_001B7EBD: ;
    esi = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, MEM32(esi + 8));
    { uint32_t _icall_target = MEM32(0x22BD20); PUSH32(esp, 0x001B7ECDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B7EC7u); } /* indirect call */
    }

loc_001B7ECD: ;
    PUSH32(esp, MEM32(esi + 0xC));
    ecx = MEM32(ebx + 0xC);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x001B7EDBu); RECOMP_ABI_CALL(0x001B7D5Du, sub_001B7D5D); /* call 0x001B7D5D */

loc_001B7EDB: ;
    ecx = MEM32(ebx + 0xC);
    PUSH32(esp, 0x001B7EE3u); RECOMP_ABI_CALL(0x001B9CD0u, sub_001B9CD0); /* call 0x001B9CD0 */

loc_001B7EE3: ;
    ecx = MEM32(ebx + 0xC);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x001B7EEDu); RECOMP_ABI_CALL(0x001B9B86u, sub_001B9B86); /* call 0x001B9B86 */

loc_001B7EED: ;
    eax = ebx + 0x18;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B7EF7; /* jne: not equal / not zero */

loc_001B7EF4: ;
    MEM32(ebx + 0x2C) = edi;

loc_001B7EF7: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), edi (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001B7F09; /* je: equal / zero */

loc_001B7EFE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001B7F09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B7F03u); } /* indirect call */
    }

loc_001B7F09: ;
    eax = MEM32(ebp + -4);

    g_seh_ebp = ebp; sub_001B7F0C(); return; /* fallthrough 0x001B7F0C */

}

/**
 * sub_001B7F0C
 * Original: 0x001B7F0C - 0x001B7F11 (5 bytes, 3 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7F0C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7F0C: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B7F11
 * Original: 0x001B7F11 - 0x001B7F4A (57 bytes, 21 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7F11(void)
{

loc_001B7F11: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(edi + 0xC));
    ebx = edi + 8;
    PUSH32(esp, MEM32(ebx));
    esi = ecx;
    { uint32_t _icall_target = MEM32(0x22BD20); PUSH32(esp, 0x001B7F2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B7F24u); } /* indirect call */
    }

loc_001B7F2A: ;
    PUSH32(esp, MEM32(esp + 0x14));
    MEM32(esi + 0x2C) = 1;
    PUSH32(esp, MEM32(esi + 0x24));
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001B7F44u); RECOMP_ABI_CALL(0x001B246Cu, sub_001B246C); /* call 0x001B246C */

loc_001B7F44: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B7F4A
 * Original: 0x001B7F4A - 0x001B7F74 (42 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7F4A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7F4A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001B7F53u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001B7F53: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), edi (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B7F74(); return; } /* je: equal / zero */

loc_001B7F5E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B7F6D; /* je: equal / zero */

loc_001B7F62: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001B7F6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B7F67u); } /* indirect call */
    }

loc_001B7F6D: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001B7FB2(); return; /* tail jmp 0x001B7FB2 */

}

/**
 * sub_001B7F74
 * Original: 0x001B7F74 - 0x001B7F91 (29 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7F74(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7F74: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0x2000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B7F91(); return; } /* je: equal / zero */

loc_001B7F7E: ;
    PUSH32(esp, 0x001B7F83u); RECOMP_ABI_CALL(0x0015D43Eu, sub_0015D43E); /* call 0x0015D43E */

loc_001B7F83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x30000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B7F91(); return; } /* jne: not equal / not zero */

loc_001B7F8A: ;
    edi = 0x88780032u;
    g_seh_ebp = ebp; sub_001B7FA1(); return; /* tail jmp 0x001B7FA1 */

}

/**
 * sub_001B7F91
 * Original: 0x001B7F91 - 0x001B7FA1 (16 bytes, 4 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7F91(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7F91: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x001B7FA1u); RECOMP_ABI_CALL(0x001B9899u, sub_001B9899); /* call 0x001B9899 */

    g_seh_ebp = ebp; sub_001B7FA1(); return; /* fallthrough 0x001B7FA1 */

}

/**
 * sub_001B7FA1
 * Original: 0x001B7FA1 - 0x001B7FB2 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7FA1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7FA1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B7FB0; /* je: equal / zero */

loc_001B7FA5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001B7FB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B7FAAu); } /* indirect call */
    }

loc_001B7FB0: ;
    eax = edi;

    g_seh_ebp = ebp; sub_001B7FB2(); return; /* fallthrough 0x001B7FB2 */

}

/**
 * sub_001B7FB2
 * Original: 0x001B7FB2 - 0x001B7FB7 (5 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7FB2(void)
{

loc_001B7FB2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B7FB7
 * Original: 0x001B7FB7 - 0x001B7FDF (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7FB7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7FB7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B7FBDu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001B7FBD: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B7FDF(); return; } /* je: equal / zero */

loc_001B7FC9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B7FD8; /* je: equal / zero */

loc_001B7FCD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001B7FD8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B7FD2u); } /* indirect call */
    }

loc_001B7FD8: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001B8002(); return; /* tail jmp 0x001B8002 */

}

/**
 * sub_001B7FDF
 * Original: 0x001B7FDF - 0x001B8002 (35 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001B7FDF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7FDF: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x001B7FEBu); RECOMP_ABI_CALL(0x001B98CAu, sub_001B98CA); /* call 0x001B98CA */

loc_001B7FEB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001B8000; /* je: equal / zero */

loc_001B7FF5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001B8000u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B7FFAu); } /* indirect call */
    }

loc_001B8000: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001B8002(); return; /* fallthrough 0x001B8002 */

}

/**
 * sub_001B8002
 * Original: 0x001B8002 - 0x001B8006 (4 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8002(void)
{

loc_001B8002: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B8009
 * Original: 0x001B8009 - 0x001B8037 (46 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B8009(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8009: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B8012u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001B8012: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B8037(); return; } /* je: equal / zero */

loc_001B8021: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8030; /* je: equal / zero */

loc_001B8025: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001B8030u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B802Au); } /* indirect call */
    }

loc_001B8030: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001B8083(); return; /* tail jmp 0x001B8083 */

}

/**
 * sub_001B8037
 * Original: 0x001B8037 - 0x001B8050 (25 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8037(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8037: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    ecx = MEM32(ebx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001B804B; /* je: equal / zero */

loc_001B8044: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x001B804Bu); RECOMP_ABI_CALL(0x001B9B38u, sub_001B9B38); /* call 0x001B9B38 */

loc_001B804B: ;
    esi = ebx + 0x10;
    g_seh_ebp = ebp; sub_001B8067(); return; /* tail jmp 0x001B8067 */

}

/**
 * sub_001B8050
 * Original: 0x001B8050 - 0x001B8067 (23 bytes, 8 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8050: ;
    PUSH32(esp, edi);
    eax = ebx + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B805Au); RECOMP_ABI_CALL(0x001B1730u, sub_001B1730); /* call 0x001B1730 */

loc_001B805A: ;
    PUSH32(esp, 0x80004004u);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001B8067u); RECOMP_ABI_CALL(0x001B7F11u, sub_001B7F11); /* call 0x001B7F11 */

    g_seh_ebp = ebp; sub_001B8067(); return; /* fallthrough 0x001B8067 */

}

/**
 * sub_001B8067
 * Original: 0x001B8067 - 0x001B8083 (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001B8067(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8067: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B8050(); return; } /* jne: not equal / not zero */

loc_001B806D: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001B8081; /* je: equal / zero */

loc_001B8076: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001B8081u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B807Bu); } /* indirect call */
    }

loc_001B8081: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001B8083(); return; /* fallthrough 0x001B8083 */

}

/**
 * sub_001B8083
 * Original: 0x001B8083 - 0x001B8087 (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8083(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8083: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B8087
 * Original: 0x001B8087 - 0x001B80CF (72 bytes, 34 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B8087(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001B8087: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B809Du); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B809D: ;
    ebx = edi + 0x10;
    PUSH32(esp, ebx);
    eax = edi + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B80AAu); RECOMP_ABI_CALL(0x001B24CBu, sub_001B24CB); /* call 0x001B24CB */

loc_001B80AA: ;
    esi = eax;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(ebx));
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx = ebp + -8;
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B80BCu); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B80BC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001B80CA; /* je: equal / zero */

loc_001B80C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B80CAu); RECOMP_ABI_CALL(0x001B7F11u, sub_001B7F11); /* call 0x001B7F11 */

loc_001B80CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001B80CF
 * Original: 0x001B80CF - 0x001B80DB (12 bytes, 3 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B80CF(void)
{

loc_001B80CF: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x001B80D8u); RECOMP_ABI_CALL(0x001B8087u, sub_001B8087); /* call 0x001B8087 */

loc_001B80D8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B80DB
 * Original: 0x001B80DB - 0x001B8109 (46 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B80DB(void)
{

loc_001B80DB: ;
    eax = ecx;
    MEM32(eax + 4) = 0x281DFC;
    MEM32(eax + 8) = 1;
    ecx = eax + 0x10;
    MEM32(eax + 0x14) = ecx;
    MEM32(ecx) = ecx;
    ecx = eax + 0x18;
    MEM32(eax) = 0x282078;
    MEM32(eax + 4) = 0x282068;
    MEM32(eax + 0x1C) = ecx;
    MEM32(ecx) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8109
 * Original: 0x001B8109 - 0x001B8130 (39 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8109(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8109: ;
    PUSH32(esp, 0x001B810Eu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001B810E: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    ecx = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B8130(); return; } /* je: equal / zero */

loc_001B811A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8129; /* je: equal / zero */

loc_001B811E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001B8129u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B8123u); } /* indirect call */
    }

loc_001B8129: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001B814D(); return; /* tail jmp 0x001B814D */

}

/**
 * sub_001B8130
 * Original: 0x001B8130 - 0x001B814D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8130: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 8) = MEM32(eax + 8) + 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_001B814A; /* je: equal / zero */

loc_001B813F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001B814Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B8144u); } /* indirect call */
    }

loc_001B814A: ;
    eax = esi;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001B814D(); return; /* fallthrough 0x001B814D */

}

/**
 * sub_001B814D
 * Original: 0x001B814D - 0x001B8150 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B814D(void)
{

loc_001B814D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B8150
 * Original: 0x001B8150 - 0x001B8178 (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8150: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B8156u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001B8156: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B8178(); return; } /* je: equal / zero */

loc_001B8162: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8171; /* je: equal / zero */

loc_001B8166: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001B8171u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B816Bu); } /* indirect call */
    }

loc_001B8171: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001B819A(); return; /* tail jmp 0x001B819A */

}

/**
 * sub_001B8178
 * Original: 0x001B8178 - 0x001B819A (34 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8178(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8178: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B8186u); RECOMP_ABI_CALL(0x001A8B02u, sub_001A8B02); /* call 0x001A8B02 */

loc_001B8186: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001B8197; /* je: equal / zero */

loc_001B818C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001B8197u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B8191u); } /* indirect call */
    }

loc_001B8197: ;
    eax = edi;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001B819A(); return; /* fallthrough 0x001B819A */

}

/**
 * sub_001B819A
 * Original: 0x001B819A - 0x001B819E (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B819A(void)
{

loc_001B819A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B819E
 * Original: 0x001B819E - 0x001B81A3 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001B819E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B819E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B81A3
 * Original: 0x001B81A3 - 0x001B81AD (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B81A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B81A3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esp + 4) = MEM32(esp + 4) - 4;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001B8109(); return; /* tail jmp 0x001B8109 */

}

/**
 * sub_001B81AD
 * Original: 0x001B81AD - 0x001B81B7 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B81AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B81AD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esp + 4) = MEM32(esp + 4) - 4;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001B8150(); return; /* tail jmp 0x001B8150 */

}

/**
 * sub_001B81B7
 * Original: 0x001B81B7 - 0x001B8224 (109 bytes, 34 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B81B7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B81B7: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x282078;
    MEM32(esi + 4) = 0x282068;
    PUSH32(esp, 0x001B81CDu); RECOMP_ABI_CALL(0x001B8009u, sub_001B8009); /* call 0x001B8009 */

loc_001B81CD: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B81E2; /* je: equal / zero */

loc_001B81D4: ;
    PUSH32(esp, MEM32(eax));
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x001B81DEu); RECOMP_ABI_CALL(0x001B9EC9u, sub_001B9EC9); /* call 0x001B9EC9 */

loc_001B81DE: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001B81E2: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B81F3; /* je: equal / zero */

loc_001B81E9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B81EFu); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001B81EF: ;
    MEM32(esi + 0x28) = MEM32(esi + 0x28) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001B81F3: ;
    MEM32(0x1CEAA8) = MEM32(0x1CEAA8) - 1;
    _fa = (uint32_t)(MEM32(0x1CEAA8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B821B; /* jne: not equal / not zero */

loc_001B81FB: ;
    ecx = MEM32(0x1CEAAC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B821B; /* je: equal / zero */

loc_001B8205: ;
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x001B820Du); RECOMP_ABI_CALL(0x001B9F86u, sub_001B9F86); /* call 0x001B9F86 */

loc_001B820D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001B8213u); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001B8213: ;
    MEM32(0x1CEAAC) = MEM32(0x1CEAAC) & 0;
    _fa = (uint32_t)(MEM32(0x1CEAAC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);

loc_001B821B: ;
    MEM32(esi + 4) = 0x281DFC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B8224
 * Original: 0x001B8224 - 0x001B8275 (81 bytes, 27 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8224(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8224: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    MEM32(esi + 0x20) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(esi + 0x24) = ecx;
    ecx = MEM32(0x1CEAA8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x1CEAA8) = MEM32(0x1CEAA8) + 1;
    _fa = (uint32_t)(MEM32(0x1CEAA8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebx = 0x7FF8FFF2;
    ebp = 0x8007000Eu;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B829B(); return; } /* jne: not equal / not zero */

loc_001B8258: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x626F5344);
    PUSH32(esp, 0x001B8266u); RECOMP_ABI_CALL(0x001AEB13u, sub_001AEB13); /* call 0x001AEB13 */

loc_001B8266: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B8275(); return; } /* je: equal / zero */

loc_001B826A: ;
    ecx = eax;
    PUSH32(esp, 0x001B8271u); RECOMP_ABI_CALL(0x001B9682u, sub_001B9682); /* call 0x001B9682 */

loc_001B8271: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_001B8277(); return; /* tail jmp 0x001B8277 */

}

/**
 * sub_001B8275
 * Original: 0x001B8275 - 0x001B8277 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8275(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8275: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001B8277(); return; /* fallthrough 0x001B8277 */

}

/**
 * sub_001B8277
 * Original: 0x001B8277 - 0x001B829B (36 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8277(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8277: ;
    eax = ecx;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebp)) >> 32) & 1);
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x1CEAAC) = ecx;
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_001B8330(); return; } /* js: sign (negative) */

loc_001B828D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001B8293u); RECOMP_ABI_CALL(0x001B9F93u, sub_001B9F93); /* call 0x001B9F93 */

loc_001B8293: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B8330(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_001B829B(); return; /* fallthrough 0x001B829B */

}

/**
 * sub_001B829B
 * Original: 0x001B829B - 0x001B82AB (16 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B829B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B829B: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001B82AB(); return; } /* je: equal / zero */

loc_001B82A3: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001B82AF(); return; } /* jne: not equal / not zero */

loc_001B82A6: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001B82B3(); return; /* tail jmp 0x001B82B3 */

}

/**
 * sub_001B82AB
 * Original: 0x001B82AB - 0x001B82AF (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B82AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B82AB: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001B82B3(); return; /* tail jmp 0x001B82B3 */

}

/**
 * sub_001B82AF
 * Original: 0x001B82AF - 0x001B82B3 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B82AF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B82AF: ;
    edx = MEM32(esp + 0x14);

    g_seh_ebp = ebp; sub_001B82B3(); return; /* fallthrough 0x001B82B3 */

}

/**
 * sub_001B82B3
 * Original: 0x001B82B3 - 0x001B8330 (125 bytes, 44 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B82B3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B82B3: ;
    ecx = MEM32(0x1CEAAC);
    _fa = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001B82C3; /* je: equal / zero */

loc_001B82BE: ;
    eax = 0x88780032u;

loc_001B82C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B8330(); return; } /* jl: less (signed <) */

loc_001B82C7: ;
    edi = esi + 0xC;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001B82D1u); RECOMP_ABI_CALL(0x001B9987u, sub_001B9987); /* call 0x001B9987 */

loc_001B82D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B8330(); return; } /* jl: less (signed <) */

loc_001B82D5: ;
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1B80CF);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001B82E4u); RECOMP_ABI_CALL(0x001B9BE0u, sub_001B9BE0); /* call 0x001B9BE0 */

loc_001B82E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B8330(); return; } /* jl: less (signed <) */

loc_001B82E8: ;
    PUSH32(esp, 1);
    edi = 0x3E0;
    PUSH32(esp, edi);
    PUSH32(esp, 0x61645344);
    PUSH32(esp, 0x001B82FAu); RECOMP_ABI_CALL(0x001AEB13u, sub_001AEB13); /* call 0x001AEB13 */

loc_001B82FA: ;
    MEM32(esi + 0x28) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebp)) >> 32) & 1);
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_001B8330(); return; } /* js: sign (negative) */

loc_001B8307: ;
    edx = esi + 0x18;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001B830C: ;
    ecx = MEM32(esi + 0x28);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebx)) >> 32) & 1);
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    ebp = MEM32(edx + 4);
    MEM32(ecx + 4) = ebp;
    MEM32(edx + 4) = ecx;
    ebp = MEM32(ecx + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x20)) >> 32) & 1);
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_001B830C; /* jb: below (unsigned <) */

loc_001B8329: ;
    MEM32(esi + 0x2C) = 1;

    g_seh_ebp = ebp; sub_001B8330(); return; /* fallthrough 0x001B8330 */

}

/**
 * sub_001B8330
 * Original: 0x001B8330 - 0x001B8337 (7 bytes, 5 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8330: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001B8337
 * Original: 0x001B8337 - 0x001B8352 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8337(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8337: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001B833Fu); RECOMP_ABI_CALL(0x001B81B7u, sub_001B81B7); /* call 0x001B81B7 */

loc_001B833F: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B834C; /* je: equal / zero */

loc_001B8346: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B834Cu); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001B834C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B8352
 * Original: 0x001B8352 - 0x001B836C (26 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8352(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8352: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = MEM32(ecx) & 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    MEM32(ecx + 8) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx + 0x14;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = ecx;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B836C
 * Original: 0x001B836C - 0x001B839A (46 bytes, 20 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B836C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B836C: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8398; /* je: equal / zero */

loc_001B8376: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8398; /* je: equal / zero */

loc_001B837D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x22BD20); PUSH32(esp, 0x001B8387u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B8381u); } /* indirect call */
    }

loc_001B8387: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8398; /* je: equal / zero */

loc_001B838E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B8394u); RECOMP_ABI_CALL(0x001AEA94u, sub_001AEA94); /* call 0x001AEA94 */

loc_001B8394: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001B8398: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B839A
 * Original: 0x001B839A - 0x001B843A (160 bytes, 58 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B839A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B839A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 1 (32-bit) */
    PUSH32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax + 0xC;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    eax = ecx + 0x1CEC08;
    MEM32(esi + 0x10) = eax;
    ecx = ecx + 0x1CEC18;
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(ecx + 8);
    edx = edx >> 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ZX16(LO16(edx));
    MEM32(esi) = edx;
    MEM32(esi + 4) = ebx;
    edi = MEM32(ecx);
    ecx = MEM32(eax + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = ecx;
    eax = MEM32(eax);
    MEM32(ebp + -12) = eax;
    eax = edx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001B841D; /* je: equal / zero */

loc_001B83F5: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B8406u); RECOMP_ABI_CALL(0x001B8EEFu, sub_001B8EEF); /* call 0x001B8EEF */

loc_001B8406: ;
    ecx = MEM32(ebp + 8);
    MEM32(edi + ecx * 8 + 4) = MEM32(edi + ecx * 8 + 4) & 0;
    _fa = (uint32_t)(MEM32(edi + ecx * 8 + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi + ecx * 8) = eax;
    eax = MEM32(esi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(ebp + 8) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_001B83F5; /* jb: below (unsigned <) */

loc_001B841D: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0 (32-bit) */
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 4);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B843A(); return; } /* je: equal / zero */

loc_001B8429: ;
    MEM32(0xFE802040u) = eax;
    eax = MEM32(esi);
    _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0xFE8020D4u) = eax;
    g_seh_ebp = ebp; sub_001B8446(); return; /* tail jmp 0x001B8446 */

}

/**
 * sub_001B843A
 * Original: 0x001B843A - 0x001B8446 (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B843A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B843A: ;
    MEM32(0xFE802048u) = eax;
    eax = MEM32(esi);
    MEM32(0xFE8020DCu) = eax;

    g_seh_ebp = ebp; sub_001B8446(); return; /* fallthrough 0x001B8446 */

}

/**
 * sub_001B8446
 * Original: 0x001B8446 - 0x001B844D (7 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8446(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8446: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B844D
 * Original: 0x001B844D - 0x001B849F (82 bytes, 32 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B844D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B844D: ;
    edx = MEM32(ecx + 4);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x1CECD8);
    if (CMP_BE(_fa, _fb)) goto loc_001B8487; /* jbe: below or equal (unsigned <=) */

loc_001B8468: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    edx = edx + eax * 8;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001B8474: ;
    ebx = MEM32(esi);
    MEM32(edx + 4) = MEM32(edx + 4) & 0;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B8474; /* jne: not equal / not zero */

loc_001B8485: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001B8487: ;
    edx = MEM32(ecx);
    _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    eax = eax << 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(-25157420) = edx;
    MEM32(ecx) = eax;
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B849F
 * Original: 0x001B849F - 0x001B84C7 (40 bytes, 17 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B849F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B849F: ;
    eax = ecx;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
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
    ecx = eax;
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
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B84C7
 * Original: 0x001B84C7 - 0x001B8524 (93 bytes, 37 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B84C7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B84C7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    edx = MEM32(ebx + 4);
    eax = MEM32(ebx);
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -12) = eax;
    eax = MEM32(0x1CECD8);
    MEM32(ebp + -4) = eax;
    eax = ecx;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -8) = eax;
    if (CMP_A(_fa, _fb)) goto loc_001B851D; /* ja: above (unsigned >) */

loc_001B84F3: ;
    _fa = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x1C), ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B8596(); return; } /* jae: above or equal (unsigned >=) */

loc_001B84FC: ;
    esi = ebx + 0x14;
    edi = ebp + -28;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, 0x61645344);
    MEM32(ebx + 0x1C) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B8516u); RECOMP_ABI_CALL(0x001AEA4Du, sub_001AEA4D); /* call 0x001AEA4D */

loc_001B8516: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B8524(); return; } /* jne: not equal / not zero */

loc_001B851D: ;
    eax = 0x8007000Eu;
    g_seh_ebp = ebp; sub_001B8598(); return; /* tail jmp 0x001B8598 */

}

/**
 * sub_001B8524
 * Original: 0x001B8524 - 0x001B8596 (114 bytes, 37 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8524(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8524: ;
    edi = MEM32(0x22BD20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x001B8532u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B8530u); } /* indirect call */
    }

loc_001B8532: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B856B; /* jbe: below or equal (unsigned <=) */

loc_001B8539: ;
    ecx = MEM32(ebp + -4);
    edx = MEM32(ebp + -12);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = ecx + edx * 8;
    MEM32(ebp + -4) = eax;

loc_001B8549: ;
    eax = MEM32(ebx + 0x14);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD1C); PUSH32(esp, 0x001B8556u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B8550u); } /* indirect call */
    }

loc_001B8556: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x1000;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B8549; /* jne: not equal / not zero */

loc_001B856B: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    MEM32(0xFE8020D4u) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B8596(); return; } /* je: equal / zero */

loc_001B857E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + -28));
    { uint32_t _icall_target = edi; PUSH32(esp, 0x001B8588u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B8586u); } /* indirect call */
    }

loc_001B8588: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B8596(); return; } /* je: equal / zero */

loc_001B858E: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x001B8596u); RECOMP_ABI_CALL(0x001AEA94u, sub_001AEA94); /* call 0x001AEA94 */

    g_seh_ebp = ebp; sub_001B8596(); return; /* fallthrough 0x001B8596 */

}

/**
 * sub_001B8596
 * Original: 0x001B8596 - 0x001B859F (9 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8596(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8596: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B8598
 * Original: 0x001B8598 - 0x001B859F (7 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8598(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8598: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B859F
 * Original: 0x001B859F - 0x001B8618 (121 bytes, 42 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B859F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B859F: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    edx = ecx;
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_001B85B8; /* jne: not equal / not zero */

loc_001B85AD: ;
    eax = MEM32(0x1CEC04);
    ecx = MEM32(0x1CEC00);

loc_001B85B8: ;
    PUSH32(esp, esi);
    edx = ecx;
    esi = eax;
    { uint32_t _c = (uint32_t)(2) & 31u; if (_c && _c < 32u) { esi = (esi << _c) | (edx >> (32 - _c)); _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shld result */ } }  /* shld */
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esi ^ eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _c = (uint32_t)(1) & 31u; if (_c && _c < 32u) { esi = (esi << _c) | (edx >> (32 - _c)); _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shld result */ } }  /* shld */
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx << 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _c = (uint32_t)(1) & 31u; if (_c && _c < 32u) { ecx = (ecx >> _c) | (eax << (32 - _c)); _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shrd result */ } }  /* shrd */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = esi | ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(0x1CEC00) = esi;
    MEM32(0x1CEC04) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001B8613; /* je: equal / zero */

loc_001B85FC: ;
    ecx = MEM32(esp + 0x18);
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = 0x1CEC00;
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
    ecx = eax;
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

loc_001B8613: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001B8618
 * Original: 0x001B8618 - 0x001B867C (100 bytes, 46 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B8618(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8618: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = ZX8(MEM8(ebp + 0x10));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    MEM32(ebp + 8) = eax;
    if ((_fa == 0)) goto loc_001B865C; /* je: equal / zero */

loc_001B862B: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001B8645; /* je: equal / zero */

loc_001B862E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B8675; /* jne: not equal / not zero */

loc_001B8632: ;
    PUSH32(esp, 0x20);
    POP32(esp, ecx);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ebp + 0xC);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001B8675;

loc_001B8645: ;
    SET_LO8(ecx, 0x10);
    _fb = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - MEM8(ebp + 0xC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    edx = eax;
    SET_LO16(edx, LO16(edx) >> LO8(ecx));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    ecx = MEM32(ebp + 0xC);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(ebp + 8) = LO16(edx);
    goto loc_001B8672;

loc_001B865C: ;
    SET_LO8(eax, MEM8(ebp + 8));
    SET_LO8(ecx, 8);
    _fb = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - MEM8(ebp + 0xC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) >> LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    ecx = MEM32(ebp + 0xC);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) | LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ebp + 8) = LO8(edx);

loc_001B8672: ;
    eax = MEM32(ebp + 8);

loc_001B8675: ;
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B867C
 * Original: 0x001B867C - 0x001B86E3 (103 bytes, 48 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B867C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B867C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = ZX8(MEM8(ebp + 0x10));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    MEM32(ebp + 8) = eax;
    if ((_fa == 0)) goto loc_001B86C2; /* je: equal / zero */

loc_001B868F: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001B86A9; /* je: equal / zero */

loc_001B8692: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B86DC; /* jne: not equal / not zero */

loc_001B8696: ;
    PUSH32(esp, 0x20);
    POP32(esp, ecx);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ebp + 0xC);
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001B86DC;

loc_001B86A9: ;
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO16(ecx, MEM16(ebp + 0xC));
    SET_LO16(eax, LO16(eax) >> LO8(ecx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(ebp + 8) = LO16(edx);
    goto loc_001B86D9;

loc_001B86C2: ;
    SET_LO8(eax, MEM8(ebp + 8));
    PUSH32(esp, 8);
    POP32(esp, ecx);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(ebp + 0xC));
    SET_LO8(eax, LO8(eax) >> LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) | LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ebp + 8) = LO8(edx);

loc_001B86D9: ;
    eax = MEM32(ebp + 8);

loc_001B86DC: ;
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B86E3
 * Original: 0x001B86E3 - 0x001B8710 (45 bytes, 17 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B86E3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B86E3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7FA49BCA);
    PUSH32(esp, 0x49DE12BA);
    PUSH32(esp, 0x001B86F7u); RECOMP_ABI_CALL(0x001B859Fu, sub_001B859F); /* call 0x001B859F */

loc_001B86F7: ;
    PUSH32(esp, 0x50);
    POP32(esp, esi);

loc_001B86FA: ;
    PUSH32(esp, 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001B8709u); RECOMP_ABI_CALL(0x001B859Fu, sub_001B859F); /* call 0x001B859F */

loc_001B8709: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B86FA; /* jne: not equal / not zero */

loc_001B870C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B8710
 * Original: 0x001B8710 - 0x001B87B5 (165 bytes, 70 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B8710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8710: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B8721u); RECOMP_ABI_CALL(0x001B86E3u, sub_001B86E3); /* call 0x001B86E3 */

loc_001B8721: ;
    edi = MEM32(ebp + 8);
    esi = MEM32(ebp + 0x14);
    eax = ebp + -8;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001B8732: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8743; /* je: equal / zero */

loc_001B8737: ;
    eax = ebp + ecx + -8;
    SET_LO8(edx, MEM8(edi + eax));
    SET_LO8(edx, LO8(edx) ^ MEM8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + eax) = LO8(edx);

loc_001B8743: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B8732; /* jb: below (unsigned <) */

loc_001B8749: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B8756u); RECOMP_ABI_CALL(0x001B859Fu, sub_001B859F); /* call 0x001B859F */

loc_001B8756: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B875F; /* je: equal / zero */

loc_001B875B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 8;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001B875F: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B87AC; /* jbe: below or equal (unsigned <=) */

loc_001B8766: ;
    ebx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(ebp + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0xC) = ebx;
    goto loc_001B8774;

loc_001B8771: ;
    ebx = MEM32(ebp + 0xC);

loc_001B8774: ;
    PUSH32(esp, 1);
    eax = ebp + 0x1B;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B8783u); RECOMP_ABI_CALL(0x001B859Fu, sub_001B859F); /* call 0x001B859F */

loc_001B8783: ;
    edx = MEM32(ebp + 0x14);
    esi = edi + edx;
    SET_LO8(edx, MEM8(ebx + esi));
    ebx = MEM32(ebp + 8);
    eax = edi;
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ecx, MEM8(ebp + eax + -8));
    SET_LO8(eax, MEM8(eax + ebx));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(ecx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(edx) ^ MEM8(ebp + 0x1B));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x10) (32-bit) */
    MEM8(esi) = LO8(edx);
    if (CMP_B(_fa, _fb)) goto loc_001B8771; /* jb: below (unsigned <) */

loc_001B87AC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001B87B5
 * Original: 0x001B87B5 - 0x001B87FE (73 bytes, 30 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B87B5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B87B5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B87C6u); RECOMP_ABI_CALL(0x001B86E3u, sub_001B86E3); /* call 0x001B86E3 */

loc_001B87C6: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B87FE(); return; } /* je: equal / zero */

loc_001B87CD: ;
    esi = MEM32(ebp + 0xC);
    eax = ebp + -8;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001B87D7: ;
    eax = ebp + ecx + -8;
    SET_LO8(edx, MEM8(esi + eax));
    SET_LO8(edx, LO8(edx) ^ MEM8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    MEM8(ebp + ecx + -17) = LO8(edx);
    if (CMP_B(_fa, _fb)) goto loc_001B87D7; /* jb: below (unsigned <) */

loc_001B87EA: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B8815(); return; } /* je: equal / zero */

loc_001B87F1: ;
    ecx = MEM32(ebp + -16);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -12);
    MEM32(eax + 4) = ecx;
    g_seh_ebp = ebp; sub_001B8815(); return; /* tail jmp 0x001B8815 */

}

/**
 * sub_001B87FE
 * Original: 0x001B87FE - 0x001B880A (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B87FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B87FE: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B880A(); return; } /* jne: not equal / not zero */

loc_001B8805: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001B887E(); return; /* tail jmp 0x001B887E */

}

/**
 * sub_001B880A
 * Original: 0x001B880A - 0x001B8815 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B880A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B880A: ;
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -12) = eax;

    g_seh_ebp = ebp; sub_001B8815(); return; /* fallthrough 0x001B8815 */

}

/**
 * sub_001B8815
 * Original: 0x001B8815 - 0x001B8884 (111 bytes, 44 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8815(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8815: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x001B8822u); RECOMP_ABI_CALL(0x001B859Fu, sub_001B859F); /* call 0x001B859F */

loc_001B8822: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B882F; /* je: equal / zero */

loc_001B8827: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 8;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 8;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001B882F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B887C; /* jbe: below or equal (unsigned <=) */

loc_001B8834: ;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    MEM32(ebp + 0x18) = eax;

loc_001B883E: ;
    ecx = MEM32(ebp + 0x14);
    eax = edi;
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ebx, MEM8(ebp + eax + -8));
    SET_LO8(eax, MEM8(ebp + eax + -16));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(ebx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    esi = edi + ecx;
    ecx = MEM32(ebp + 0x18);
    SET_LO8(ecx, MEM8(ecx + esi));
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    PUSH32(esp, 1);
    eax = ebp + 0xF;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM8(ebp + 0xB) = LO8(ecx);
    PUSH32(esp, 0x001B886Du); RECOMP_ABI_CALL(0x001B859Fu, sub_001B859F); /* call 0x001B859F */

loc_001B886D: ;
    SET_LO8(ebx, LO8(ebx) ^ MEM8(ebp + 0xF));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ebx, LO8(ebx) ^ MEM8(ebp + 0xB));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x10) (32-bit) */
    MEM8(esi) = LO8(ebx);
    if (CMP_B(_fa, _fb)) goto loc_001B883E; /* jb: below (unsigned <) */

loc_001B887B: ;
    POP32(esp, ebx);

loc_001B887C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001B887E
 * Original: 0x001B887E - 0x001B8884 (6 bytes, 4 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B887E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B887E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001B88A8
 * Original: 0x001B88A8 - 0x001B88C3 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B88A8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B88A8: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001B88B0u); RECOMP_ABI_CALL(0x001B1549u, sub_001B1549); /* call 0x001B1549 */

loc_001B88B0: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B88BD; /* je: equal / zero */

loc_001B88B7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B88BDu); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001B88BD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B88C3
 * Original: 0x001B88C3 - 0x001B88DE (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B88C3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B88C3: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001B88CBu); RECOMP_ABI_CALL(0x001BA29Eu, sub_001BA29E); /* call 0x001BA29E */

loc_001B88CB: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B88D8; /* je: equal / zero */

loc_001B88D2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B88D8u); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001B88D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B88DE
 * Original: 0x001B88DE - 0x001B89B1 (211 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B88DE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B88DE: ;
    eax = MEM32(0xFE820010u);
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B88DE; /* jb: below (unsigned <) */

loc_001B88EB: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);

loc_001B88F0: ;
    esi = MEM32(0x1CEC38);
    edx = ecx;
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + esi + 0x7C) = edx;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8000 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B88F0; /* jb: below (unsigned <) */

loc_001B890F: ;
    eax = MEM32(0x1CEC3C);
    MEM32(0xFE80202Cu) = eax;
    eax = MEM32(0x1CEC7C);
    MEM32(0xFE802038u) = eax;
    eax = MEM32(0x1CEC8C);
    MEM32(0xFE80203Cu) = eax;
    eax = MEM32(0x1CEC5C);
    MEM32(0xFE802030u) = eax;
    eax = MEM32(0x1CEC6C);
    MEM32(0xFE802034u) = eax;
    eax = MEM32(0x1CEC4C);
    MEM32(0xFE80115Cu) = eax;
    eax = 0xFFF;
    MEM32(0xFE8202A4u) = eax;
    MEM32(0xFE8202B0u) = eax;
    MEM32(0xFE8202A0u) = eax;
    MEM32(0xFE8202A8u) = eax;
    MEM32(0xFE8202ACu) = eax;
    MEM32(-25032700) = 0x7FF;
    eax = MEM32(0x1CECBC);
    MEM32(0xFE820808u) = eax;
    eax = MEM32(0x1CE1C0);
    edx = MEM32(eax + 0x18);
    esi = MEM32(eax + 0x10);
    PUSH32(esp, 0x1F);
    POP32(esp, ecx);
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = MEM32(eax + 8);
    eax = MEM32(eax);
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(-25034048) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B89B1
 * Original: 0x001B89B1 - 0x001B8A7A (201 bytes, 60 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B89B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B89B1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(0x1CEC9C);
    MEM32(0xFE802044u) = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(-24903936) = esi;
    MEM32(-24903932) = esi;
    eax = MEM32(0x1CEC10);
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0xFE8020D8u) = eax;
    MEM32(0xFE801148u) = eax;
    PUSH32(esp, edi);
    MEM32(-25153500) = esi;
    edi = 0x2000;
    MEM32(-25153496) = edi;
    eax = MEM32(0x1CEC98);
    MEM32(ebp + -8) = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = esi;

loc_001B8A02: ;
    ecx = MEM32(0x1CEC0C);
    ebx = MEM32(ebp + -4);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001B8A0D: ;
    ebx = MEM32(-25034736);
    ebx = ebx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B8A0D; /* jb: below (unsigned <) */

loc_001B8A1B: ;
    _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0x1000;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(-25028608) = edx;
    MEM32(-25028600) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = esi;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B8A02; /* jb: below (unsigned <) */

loc_001B8A3C: ;
    eax = MEM32(0xFE820010u);
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B8A3C; /* jb: below (unsigned <) */

loc_001B8A49: ;
    ebx = MEM32(ebp + -8);
    MEM32(-25030656) = esi;
    MEM32(-25030652) = edi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xC), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B8A9A(); return; } /* jne: not equal / not zero */

loc_001B8A60: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x626F5344);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B8A6Du); RECOMP_ABI_CALL(0x001AEB13u, sub_001AEB13); /* call 0x001AEB13 */

loc_001B8A6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B8A7A(); return; } /* je: equal / zero */

loc_001B8A71: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B8A78u); RECOMP_ABI_CALL(0x001B124Cu, sub_001B124C); /* call 0x001B124C */

loc_001B8A78: ;
    g_seh_ebp = ebp; sub_001B8A7C(); return; /* tail jmp 0x001B8A7C */

}

/**
 * sub_001B8A7A
 * Original: 0x001B8A7A - 0x001B8A7C (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001B8A7A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8A7A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001B8A7C(); return; /* fallthrough 0x001B8A7C */

}

/**
 * sub_001B8A7C
 * Original: 0x001B8A7C - 0x001B8A9A (30 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8A7C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8A7C: ;
    esi = eax;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x7FF8FFF2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    esi = esi + 0x8007000Eu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0xC) = eax;
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_001B8A9A(); return; } /* js: sign (negative) */

loc_001B8A93: ;
    ecx = eax;
    PUSH32(esp, 0x001B8A9Au); RECOMP_ABI_CALL(0x001B1286u, sub_001B1286); /* call 0x001B1286 */

    g_seh_ebp = ebp; sub_001B8A9A(); return; /* fallthrough 0x001B8A9A */

}

/**
 * sub_001B8A9A
 * Original: 0x001B8A9A - 0x001B8AF0 (86 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8A9A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8A9A: ;
    eax = MEM32(ebp + -8);
    MEM32(-24903684) = edi;
    eax = eax & 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0xFE83FF10u) = eax;
    MEM32(-24903916) = 0xFF;
    eax = MEM32(0xFE803024u);
    MEM32(0xFE80302Cu) = eax;
    eax = MEM32(0xFE803034u);
    MEM32(0xFE80303Cu) = eax;
    eax = MEM32(0xFE803044u);
    MEM32(0xFE80304Cu) = eax;
    eax = MEM32(0xFE803054u);
    MEM32(0xFE80305Cu) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(-24903684) = 3;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001B8AF0
 * Original: 0x001B8AF0 - 0x001B8B31 (65 bytes, 27 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B8AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8AF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0xFE85FFFCu) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebx (32-bit) */
    PUSH32(esp, edi);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(ebp + -12) = ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(ebp + -20) = ecx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B8B57(); return; } /* je: equal / zero */

loc_001B8B17: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x626F5344);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B8B24u); RECOMP_ABI_CALL(0x001AEB13u, sub_001AEB13); /* call 0x001AEB13 */

loc_001B8B24: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B8B31(); return; } /* je: equal / zero */

loc_001B8B28: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B8B2Fu); RECOMP_ABI_CALL(0x001BA1A9u, sub_001BA1A9); /* call 0x001BA1A9 */

loc_001B8B2F: ;
    g_seh_ebp = ebp; sub_001B8B33(); return; /* tail jmp 0x001B8B33 */

}

/**
 * sub_001B8B31
 * Original: 0x001B8B31 - 0x001B8B33 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001B8B31(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8B31: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001B8B33(); return; /* fallthrough 0x001B8B33 */

}

/**
 * sub_001B8B33
 * Original: 0x001B8B33 - 0x001B8B57 (36 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8B33(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8B33: ;
    edx = eax;
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x7FF8FFF2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    edx = edx + 0x8007000Eu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = eax;
    MEM32(ebp + -12) = edx;
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_001B8B57(); return; } /* js: sign (negative) */

loc_001B8B4D: ;
    PUSH32(esp, MEM32(esi + 0xC));
    ecx = eax;
    PUSH32(esp, 0x001B8B57u); RECOMP_ABI_CALL(0x001BA2BBu, sub_001BA2BB); /* call 0x001BA2BB */

    g_seh_ebp = ebp; sub_001B8B57(); return; /* fallthrough 0x001B8B57 */

}

/**
 * sub_001B8B57
 * Original: 0x001B8B57 - 0x001B8C94 (317 bytes, 91 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8B57(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8B57: ;
    eax = MEM32(0x1CECAC);
    MEM32(0xFE80204Cu) = eax;
    MEM32(-24772864) = ebx;
    MEM32(-24772860) = ebx;
    eax = MEM32(0x1CEC20);
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0xFE8020E0u) = eax;
    eax = MEM32(0x1CECA8);
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -8) = ebx;
    edi = 0xFE804028u;
    ecx = 0x1CE428;
    MEM32(ebp + -16) = 2;

loc_001B8B97: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx), 0xFFFFF000u (32-bit) */
    MEM32(ebp + -4) = ebx;
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B8BD6; /* jbe: below or equal (unsigned <=) */

loc_001B8BA2: ;
    eax = MEM32(ebp + -8);
    ebx = MEM32(ebp + -24);
    edx = eax;
    edx = edx << 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx + eax * 8;

loc_001B8BB0: ;
    ebx = MEM32(0x1CEC1C);
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = ebx;
    ebx = MEM32(ecx);
    ebx = ebx >> 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B8BB0; /* jb: below (unsigned <) */

loc_001B8BD4: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001B8BD6: ;
    eax = MEM32(ebp + -8);
    eax = eax << 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi + -4) = eax;
    edx = MEM32(ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B8B97; /* jne: not equal / not zero */

loc_001B8BF6: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B8C68; /* jl: less (signed <) */

loc_001B8BFB: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8C68; /* je: equal / zero */

loc_001B8C00: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x2000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001B8C0Eu); RECOMP_ABI_CALL(0x001BA231u, sub_001BA231); /* call 0x001BA231 */

loc_001B8C0E: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x4000);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001B8C1Du); RECOMP_ABI_CALL(0x001BA259u, sub_001BA259); /* call 0x001BA259 */

loc_001B8C1D: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1CECB8);
    PUSH32(esp, 0x001B8C2Cu); RECOMP_ABI_CALL(0x001B1532u, sub_001B1532); /* call 0x001B1532 */

loc_001B8C2C: ;
    eax = MEM32(0x1CE4A0);
    ecx = eax;
    edi = 0xFFFF;
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8C68; /* je: equal / zero */

loc_001B8C3F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B8C68; /* jne: not equal / not zero */

loc_001B8C46: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x001B8C4Eu); RECOMP_ABI_CALL(0x001BA1B6u, sub_001BA1B6); /* call 0x001BA1B6 */

loc_001B8C4E: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    ecx = MEM32(0x1CE4A0);
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0xC) = edx;

loc_001B8C68: ;
    eax = MEM32(ebp + -12);
    MEM32(-24772772) = ebx;
    POP32(esp, edi);
    MEM32(-24772848) = 1;
    POP32(esp, esi);
    MEM32(-24772844) = 0xFFFFFFFFu;
    MEM32(-24772612) = 3;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001B8C94
 * Original: 0x001B8C94 - 0x001B8D2E (154 bytes, 58 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8C94(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8C94: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x1CEC1C);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    esi = ebx + 0x14;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x001B8CACu); RECOMP_ABI_CALL(0x001B9F93u, sub_001B9F93); /* call 0x001B9F93 */

loc_001B8CAC: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B8D46(); return; } /* jl: less (signed <) */

loc_001B8CB6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x001B8CC1u); RECOMP_ABI_CALL(0x001B9987u, sub_001B9987); /* call 0x001B9987 */

loc_001B8CC1: ;
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B8D46(); return; } /* jl: less (signed <) */

loc_001B8CC9: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B8CD3u); RECOMP_ABI_CALL(0x001B9BE0u, sub_001B9BE0); /* call 0x001B9BE0 */

loc_001B8CD3: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B8D46(); return; } /* jl: less (signed <) */

loc_001B8CD9: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x2000);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001B8CE6u); RECOMP_ABI_CALL(0x001B99EFu, sub_001B99EF); /* call 0x001B99EF */

loc_001B8CE6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x001B8CF1u); RECOMP_ABI_CALL(0x001B9987u, sub_001B9987); /* call 0x001B9987 */

loc_001B8CF1: ;
    edi = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B8D46(); return; } /* jl: less (signed <) */

loc_001B8CF9: ;
    ecx = MEM32(ebx + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B8D04u); RECOMP_ABI_CALL(0x001B9BE0u, sub_001B9BE0); /* call 0x001B9BE0 */

loc_001B8D04: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001B8D46(); return; } /* jl: less (signed <) */

loc_001B8D0A: ;
    _fa = (uint32_t)(MEM8(0x1CE4A2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x1CE4A2), 1 (8-bit) */
    ecx = MEM32(ebx + 0x18);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001B8D2E(); return; } /* je: equal / zero */

loc_001B8D16: ;
    PUSH32(esp, 0x4000);
    _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x2000;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001B8D27u); RECOMP_ABI_CALL(0x001B99EFu, sub_001B99EF); /* call 0x001B99EF */

loc_001B8D27: ;
    PUSH32(esp, 0x2000002);
    g_seh_ebp = ebp; sub_001B8D3E(); return; /* tail jmp 0x001B8D3E */

}

/**
 * sub_001B8D2E
 * Original: 0x001B8D2E - 0x001B8D3E (16 bytes, 4 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8D2E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8D2E: ;
    PUSH32(esp, 0x2000);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001B8D39u); RECOMP_ABI_CALL(0x001B99EFu, sub_001B99EF); /* call 0x001B99EF */

loc_001B8D39: ;
    PUSH32(esp, 0x2000000);

    g_seh_ebp = ebp; sub_001B8D3E(); return; /* fallthrough 0x001B8D3E */

}

/**
 * sub_001B8D3E
 * Original: 0x001B8D3E - 0x001B8D46 (8 bytes, 2 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8D3E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8D3E: ;
    ecx = MEM32(ebx + 0x18);
    PUSH32(esp, 0x001B8D46u); RECOMP_ABI_CALL(0x001B9899u, sub_001B9899); /* call 0x001B9899 */

    g_seh_ebp = ebp; sub_001B8D46(); return; /* fallthrough 0x001B8D46 */

}

/**
 * sub_001B8D46
 * Original: 0x001B8D46 - 0x001B8D4D (7 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8D46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8D46: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001B8D4D
 * Original: 0x001B8D4D - 0x001B8D84 (55 bytes, 19 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B8D4D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8D4D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B8D5Eu); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B8D5E: ;
    eax = MEM32(0xFE801004u);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(-25161724) = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B8D80u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B8D80: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B8D84
 * Original: 0x001B8D84 - 0x001B8DBB (55 bytes, 19 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B8D84(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8D84: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B8D95u); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B8D95: ;
    eax = MEM32(0xFE801510u);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(-25160432) = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B8DB7u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B8DB7: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B8DBB
 * Original: 0x001B8DBB - 0x001B8DEB (48 bytes, 19 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B8DBB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8DBB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B8DCCu); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B8DCC: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(-25161472);
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001B8DFB(); return; } /* je: equal / zero */

loc_001B8DDA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001B8DF3(); return; } /* je: equal / zero */

loc_001B8DDD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001B8DEB(); return; } /* je: equal / zero */

loc_001B8DE0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001B8E04(); return; } /* jne: not equal / not zero */

loc_001B8DE3: ;
    ecx = ecx & 0xFFFFEFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001B8E04(); return; /* tail jmp 0x001B8E04 */

}

/**
 * sub_001B8DEB
 * Original: 0x001B8DEB - 0x001B8DF3 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8DEB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8DEB: ;
    ecx = ecx | 0x1007;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001B8E04(); return; /* tail jmp 0x001B8E04 */

}
