/**
 * DOAU1 - Recompiled code chunk 57
 * Functions: 250 (0x001AA269 - 0x001AD003)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001AA269
 * Original: 0x001AA269 - 0x001AA26D (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA269(void)
{

loc_001AA269: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AA26D
 * Original: 0x001AA26D - 0x001AA295 (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA26D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA26D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AA273u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AA273: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA295(); return; } /* je: equal / zero */

loc_001AA27F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA28E; /* je: equal / zero */

loc_001AA283: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AA28Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA288u); } /* indirect call */
    }

loc_001AA28E: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001AA2BA(); return; /* tail jmp 0x001AA2BA */

}

/**
 * sub_001AA295
 * Original: 0x001AA295 - 0x001AA2BA (37 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA295(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA295: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x001AA2A6u); RECOMP_ABI_CALL(0x001B26C4u, sub_001B26C4); /* call 0x001B26C4 */

loc_001AA2A6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AA2B7; /* je: equal / zero */

loc_001AA2AC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AA2B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA2B1u); } /* indirect call */
    }

loc_001AA2B7: ;
    eax = edi;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001AA2BA(); return; /* fallthrough 0x001AA2BA */

}

/**
 * sub_001AA2BA
 * Original: 0x001AA2BA - 0x001AA2BE (4 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA2BA(void)
{

loc_001AA2BA: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AA2BE
 * Original: 0x001AA2BE - 0x001AA2EA (44 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AA2BE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA2BE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AA2C8u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AA2C8: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    ebx = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA2EA(); return; } /* je: equal / zero */

loc_001AA2D4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA2E3; /* je: equal / zero */

loc_001AA2D8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AA2E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA2DDu); } /* indirect call */
    }

loc_001AA2E3: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001AA330(); return; /* tail jmp 0x001AA330 */

}

/**
 * sub_001AA2EA
 * Original: 0x001AA2EA - 0x001AA330 (70 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA2EA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA2EA: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AA2FBu); RECOMP_ABI_CALL(0x001B26C4u, sub_001B26C4); /* call 0x001B26C4 */

loc_001AA2FB: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AA31D; /* jl: less (signed <) */

loc_001AA301: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA30C; /* jne: not equal / not zero */

loc_001AA307: ;
    edi = 0x88780032u;

loc_001AA30C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AA31D; /* jl: less (signed <) */

loc_001AA310: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x001AA31Bu); RECOMP_ABI_CALL(0x001B30EEu, sub_001B30EE); /* call 0x001B30EE */

loc_001AA31B: ;
    edi = eax;

loc_001AA31D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA32C; /* je: equal / zero */

loc_001AA321: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AA32Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA326u); } /* indirect call */
    }

loc_001AA32C: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001AA330(); return; /* fallthrough 0x001AA330 */

}

/**
 * sub_001AA330
 * Original: 0x001AA330 - 0x001AA335 (5 bytes, 3 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA330: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AA335
 * Original: 0x001AA335 - 0x001AA386 (81 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA335(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA335: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AA33Bu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AA33B: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AA35D; /* je: equal / zero */

loc_001AA347: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA356; /* je: equal / zero */

loc_001AA34B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AA356u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA350u); } /* indirect call */
    }

loc_001AA356: ;
    eax = 0x80004005u;
    goto loc_001AA382;

loc_001AA35D: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x001AA36Eu); RECOMP_ABI_CALL(0x001B31BCu, sub_001B31BC); /* call 0x001B31BC */

loc_001AA36E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AA37F; /* je: equal / zero */

loc_001AA374: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AA37Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA379u); } /* indirect call */
    }

loc_001AA37F: ;
    eax = edi;
    POP32(esp, edi);

loc_001AA382: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AA386
 * Original: 0x001AA386 - 0x001AA3DF (89 bytes, 27 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA386(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA386: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AA38Cu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AA38C: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AA3AE; /* je: equal / zero */

loc_001AA398: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA3A7; /* je: equal / zero */

loc_001AA39C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AA3A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA3A1u); } /* indirect call */
    }

loc_001AA3A7: ;
    eax = 0x80004005u;
    goto loc_001AA3DB;

loc_001AA3AE: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x001AA3C7u); RECOMP_ABI_CALL(0x001B324Au, sub_001B324A); /* call 0x001B324A */

loc_001AA3C7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AA3D8; /* je: equal / zero */

loc_001AA3CD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AA3D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA3D2u); } /* indirect call */
    }

loc_001AA3D8: ;
    eax = edi;
    POP32(esp, edi);

loc_001AA3DB: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001AA3DF
 * Original: 0x001AA3DF - 0x001AA40A (43 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AA3DF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA3DF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AA3E8u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AA3E8: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA40A(); return; } /* je: equal / zero */

loc_001AA3F4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA403; /* je: equal / zero */

loc_001AA3F8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AA403u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA3FDu); } /* indirect call */
    }

loc_001AA403: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001AA444(); return; /* tail jmp 0x001AA444 */

}

/**
 * sub_001AA40A
 * Original: 0x001AA40A - 0x001AA429 (31 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA40A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA40A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA429(); return; } /* je: equal / zero */

loc_001AA417: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x001AA425u); RECOMP_ABI_CALL(0x001B2B18u, sub_001B2B18); /* call 0x001B2B18 */

loc_001AA425: ;
    edi = eax;
    g_seh_ebp = ebp; sub_001AA432(); return; /* tail jmp 0x001AA432 */

}

/**
 * sub_001AA429
 * Original: 0x001AA429 - 0x001AA432 (9 bytes, 3 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA429(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA429: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001AA430u); RECOMP_ABI_CALL(0x001B2D46u, sub_001B2D46); /* call 0x001B2D46 */

loc_001AA430: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001AA432(); return; /* fallthrough 0x001AA432 */

}

/**
 * sub_001AA432
 * Original: 0x001AA432 - 0x001AA444 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA432(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA432: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA441; /* je: equal / zero */

loc_001AA436: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AA441u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA43Bu); } /* indirect call */
    }

loc_001AA441: ;
    eax = edi;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001AA444(); return; /* fallthrough 0x001AA444 */

}

/**
 * sub_001AA444
 * Original: 0x001AA444 - 0x001AA449 (5 bytes, 3 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA444(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA444: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001AA44F
 * Original: 0x001AA44F - 0x001AA4CB (124 bytes, 44 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns float_sse
 * Frame: standard_frame
 */
void sub_001AA44F(void)
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

loc_001AA44F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AA460u); RECOMP_ABI_CALL(0x001A8A77u, sub_001A8A77); /* call 0x001A8A77 */

loc_001AA460: ;
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx);
    esi = MEM32(ebp + 0xC);
    eax = eax | MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001AA47C; /* je: equal / zero */

loc_001AA474: ;
    eax = eax | 0xFFFF0000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 8) = eax;

loc_001AA47C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15200010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x15200010 (32-bit) */
    edi = MEM32(ebp + 0x18);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA4DB(); return; } /* je: equal / zero */

loc_001AA486: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA4CB(); return; } /* je: equal / zero */

loc_001AA48C: ;
    fp_push(MEMF(esi + 0x68)); /* fld float */
    eax = ebp + -52;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x58);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(esi + 0x54));
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    PUSH32(esp, MEM32(esi + 0x50));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x38)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x48)); /* fmul dword ptr [esi + 0x48] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AA4C6u); RECOMP_ABI_CALL(0x001A8BBCu, sub_001A8BBC); /* call 0x001A8BBC */

loc_001AA4C6: ;
    eax = MEM32(ebp + -52);
    g_seh_ebp = ebp; sub_001AA4D0(); return; /* tail jmp 0x001AA4D0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AA4CB
 * Original: 0x001AA4CB - 0x001AA4D0 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA4CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA4CB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -52) = eax;

    g_seh_ebp = ebp; sub_001AA4D0(); return; /* fallthrough 0x001AA4D0 */

}

/**
 * sub_001AA4D0
 * Original: 0x001AA4D0 - 0x001AA4DB (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA4D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA4D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA4DB(); return; } /* je: equal / zero */

loc_001AA4D5: ;
    MEM32(edi) = MEM32(edi) | 1;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 4) = eax;

    g_seh_ebp = ebp; sub_001AA4DB(); return; /* fallthrough 0x001AA4DB */

}

/**
 * sub_001AA4DB
 * Original: 0x001AA4DB - 0x001AA507 (44 bytes, 15 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA4DB(void)
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

loc_001AA4DB: ;
    _fa = (uint32_t)(MEM16(ebp + 0xA)) & 0xFFFFu; _fb = (uint32_t)(0x4014) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp + 0xA), 0x4014 (16-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA517(); return; } /* je: equal / zero */

loc_001AA4E3: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA507(); return; } /* je: equal / zero */

loc_001AA4E9: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(esi + 0x34));
    PUSH32(esp, MEM32(esi + 0x24));
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, 0x001AA502u); RECOMP_ABI_CALL(0x001A8BF3u, sub_001A8BF3); /* call 0x001A8BF3 */

loc_001AA502: ;
    eax = MEM32(ebp + -48);
    g_seh_ebp = ebp; sub_001AA50C(); return; /* tail jmp 0x001AA50C */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AA507
 * Original: 0x001AA507 - 0x001AA50C (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA507(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA507: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -48) = eax;

    g_seh_ebp = ebp; sub_001AA50C(); return; /* fallthrough 0x001AA50C */

}

/**
 * sub_001AA50C
 * Original: 0x001AA50C - 0x001AA517 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA50C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA50C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA517(); return; } /* je: equal / zero */

loc_001AA511: ;
    MEM32(edi) = MEM32(edi) | 2;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 8) = eax;

    g_seh_ebp = ebp; sub_001AA517(); return; /* fallthrough 0x001AA517 */

}

/**
 * sub_001AA517
 * Original: 0x001AA517 - 0x001AA563 (76 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA517(void)
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

loc_001AA517: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x34800008) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 8), 0x34800008 (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA580(); return; } /* je: equal / zero */

loc_001AA520: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA563(); return; } /* je: equal / zero */

loc_001AA526: ;
    fp_push(MEMF(esi + 0x78)); /* fld float */
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -44;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x58);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x74)); /* fld float */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x68)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x44)); /* fmul dword ptr [esi + 0x44] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001AA55Bu); RECOMP_ABI_CALL(0x001A8C13u, sub_001A8C13); /* call 0x001A8C13 */

loc_001AA55B: ;
    ecx = MEM32(ebp + -40);
    eax = MEM32(ebp + -44);
    g_seh_ebp = ebp; sub_001AA56D(); return; /* tail jmp 0x001AA56D */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AA563
 * Original: 0x001AA563 - 0x001AA56D (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA563(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA563: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -44) = eax;
    MEM32(ebp + -40) = ecx;

    g_seh_ebp = ebp; sub_001AA56D(); return; /* fallthrough 0x001AA56D */

}

/**
 * sub_001AA56D
 * Original: 0x001AA56D - 0x001AA580 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA56D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA56D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AA577; /* jne: not equal / not zero */

loc_001AA572: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA580(); return; } /* je: equal / zero */

loc_001AA577: ;
    MEM32(edi) = MEM32(edi) | 4;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0xC) = eax;
    MEM32(edi + 0x10) = ecx;

    g_seh_ebp = ebp; sub_001AA580(); return; /* fallthrough 0x001AA580 */

}

/**
 * sub_001AA580
 * Original: 0x001AA580 - 0x001AA5B6 (54 bytes, 20 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA580(void)
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

loc_001AA580: ;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(0x24) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xB), 0x24 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA5D3(); return; } /* je: equal / zero */

loc_001AA586: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA5B6(); return; } /* je: equal / zero */

loc_001AA58C: ;
    _fa = (uint32_t)(MEM8(esi + 0x58)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x58), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA5B6(); return; } /* je: equal / zero */

loc_001AA592: ;
    fp_push(MEMF(esi + 0x78)); /* fld float */
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x74)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001AA5AEu); RECOMP_ABI_CALL(0x001A8C47u, sub_001A8C47); /* call 0x001A8C47 */

loc_001AA5AE: ;
    ecx = MEM32(ebp + -32);
    eax = MEM32(ebp + -36);
    g_seh_ebp = ebp; sub_001AA5C0(); return; /* tail jmp 0x001AA5C0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AA5B6
 * Original: 0x001AA5B6 - 0x001AA5C0 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA5B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA5B6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -32) = ecx;

    g_seh_ebp = ebp; sub_001AA5C0(); return; /* fallthrough 0x001AA5C0 */

}

/**
 * sub_001AA5C0
 * Original: 0x001AA5C0 - 0x001AA5D3 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA5C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA5C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AA5CA; /* jne: not equal / not zero */

loc_001AA5C5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x18) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA5D3(); return; } /* je: equal / zero */

loc_001AA5CA: ;
    MEM32(edi) = MEM32(edi) | 8;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x14) = eax;
    MEM32(edi + 0x18) = ecx;

    g_seh_ebp = ebp; sub_001AA5D3(); return; /* fallthrough 0x001AA5D3 */

}

/**
 * sub_001AA5D3
 * Original: 0x001AA5D3 - 0x001AA60D (58 bytes, 18 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001AA5D3(void)
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

loc_001AA5D3: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82800028u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 8), 0x82800028u (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA61D(); return; } /* je: equal / zero */

loc_001AA5DC: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA60D(); return; } /* je: equal / zero */

loc_001AA5E2: ;
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    eax = ebp + -20;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x4C)); /* fmul dword ptr [esi + 0x4c] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x44)); /* fmul dword ptr [esi + 0x44] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001AA608u); RECOMP_ABI_CALL(0x001A8C69u, sub_001A8C69); /* call 0x001A8C69 */

loc_001AA608: ;
    eax = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_001AA612(); return; /* tail jmp 0x001AA612 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AA60D
 * Original: 0x001AA60D - 0x001AA612 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA60D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA60D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -20) = eax;

    g_seh_ebp = ebp; sub_001AA612(); return; /* fallthrough 0x001AA612 */

}

/**
 * sub_001AA612
 * Original: 0x001AA612 - 0x001AA61D (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA612(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA612: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x24) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA61D(); return; } /* je: equal / zero */

loc_001AA617: ;
    MEM32(edi) = MEM32(edi) | 0x20;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x24) = eax;

    g_seh_ebp = ebp; sub_001AA61D(); return; /* fallthrough 0x001AA61D */

}

/**
 * sub_001AA61D
 * Original: 0x001AA61D - 0x001AA637 (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA61D(void)
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

loc_001AA61D: ;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xB), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA66E(); return; } /* je: equal / zero */

loc_001AA623: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA637(); return; } /* je: equal / zero */

loc_001AA629: ;
    fp_push(MEMF(esi + 0x74)); /* fld float */
    eax = MEM32(esi + 0x78);
    MEMF(ebp + -16) = (float)fp_top(); /* fst */
    MEM32(ebp + -12) = eax;
    g_seh_ebp = ebp; sub_001AA641(); return; /* tail jmp 0x001AA641 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AA637
 * Original: 0x001AA637 - 0x001AA641 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001AA637(void)
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

loc_001AA637: ;
    fp_push(0.0); /* fldz */
    MEMF(ebp + -16) = (float)fp_top(); /* fst */
    fp_push(0.0); /* fldz */
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */

    g_seh_ebp = ebp; sub_001AA641(); return; /* fallthrough 0x001AA641 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AA641
 * Original: 0x001AA641 - 0x001AA66C (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001AA641(void)
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

loc_001AA641: ;
    fp_push(MEMF(edi + 0x28)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001AA65E; /* jp: parity */

loc_001AA64F: ;
    fp_push(MEMF(edi + 0x2C)); /* fld float */
    fp_push(MEMF(ebp + -12)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) { g_seh_ebp = ebp; sub_001AA66C(); return; } /* jnp: not parity */

loc_001AA65E: ;
    eax = MEM32(ebp + -12);
    MEMF(edi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi) = MEM32(edi) | 0x40;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x2C) = eax;
    g_seh_ebp = ebp; sub_001AA66E(); return; /* tail jmp 0x001AA66E */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AA66C
 * Original: 0x001AA66C - 0x001AA66E (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001AA66C(void)
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

loc_001AA66C: ;
    fp_pop(); /* fstp st(0) */

    g_seh_ebp = ebp; sub_001AA66E(); return; /* fallthrough 0x001AA66E */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AA66E
 * Original: 0x001AA66E - 0x001AA6DD (111 bytes, 37 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA66E(void)
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

loc_001AA66E: ;
    eax = MEM32(ebp + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA721(); return; } /* je: equal / zero */

loc_001AA67B: ;
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA721(); return; } /* je: equal / zero */

loc_001AA686: ;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(0x14) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xB), 0x14 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA69C; /* jne: not equal / not zero */

loc_001AA68C: ;
    ebx = MEM32(eax);
    ebx = ebx | MEM32(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F0804) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0x7F0804 (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA721(); return; } /* je: equal / zero */

loc_001AA69C: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA6DD(); return; } /* je: equal / zero */

loc_001AA6A2: ;
    fp_push(MEMF(eax + 0x30)); /* fld float */
    edx = ebp + -4;
    PUSH32(esp, edx);
    edx = ebp + -8;
    PUSH32(esp, edx);
    edx = ebp + -24;
    PUSH32(esp, edx);
    edx = ebp + -28;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x68)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001AA6CFu); RECOMP_ABI_CALL(0x001B7055u, sub_001B7055); /* call 0x001B7055 */

loc_001AA6CF: ;
    _fa = (uint32_t)(MEM8(esi + 0x58)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x58), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA6E9(); return; } /* je: equal / zero */

loc_001AA6D5: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;
    g_seh_ebp = ebp; sub_001AA6E9(); return; /* tail jmp 0x001AA6E9 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AA6DD
 * Original: 0x001AA6DD - 0x001AA6E9 (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA6DD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA6DD: ;
    MEM32(ebp + -28) = edx;
    MEM32(ebp + -24) = edx;
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -4) = edx;

    g_seh_ebp = ebp; sub_001AA6E9(); return; /* fallthrough 0x001AA6E9 */

}

/**
 * sub_001AA6E9
 * Original: 0x001AA6E9 - 0x001AA721 (56 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA6E9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA6E9: ;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x1C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AA6F9; /* jne: not equal / not zero */

loc_001AA6F1: ;
    ecx = MEM32(ebp + -24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x20) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA705; /* je: equal / zero */

loc_001AA6F9: ;
    MEM32(edi) = MEM32(edi) | 0x10;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x1C) = eax;
    eax = MEM32(ebp + -24);
    MEM32(edi + 0x20) = eax;

loc_001AA705: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x30) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AA715; /* jne: not equal / not zero */

loc_001AA70D: ;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x34) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA721(); return; } /* je: equal / zero */

loc_001AA715: ;
    MEM8(edi) = MEM8(edi) | 0x80;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(edi + 0x30) = eax;
    eax = MEM32(ebp + -4);
    MEM32(edi + 0x34) = eax;

    g_seh_ebp = ebp; sub_001AA721(); return; /* fallthrough 0x001AA721 */

}

/**
 * sub_001AA721
 * Original: 0x001AA721 - 0x001AA730 (15 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA721(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA721: ;
    ecx = ebp + 8;
    PUSH32(esp, 0x001AA729u); RECOMP_ABI_CALL(0x001A8A9Cu, sub_001A8A9C); /* call 0x001A8A9C */

loc_001AA729: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001AA730
 * Original: 0x001AA730 - 0x001AA7FA (202 bytes, 75 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AA730(void)
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

loc_001AA730: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AA73Fu); RECOMP_ABI_CALL(0x001A8A77u, sub_001A8A77); /* call 0x001A8A77 */

loc_001AA73F: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -44;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AA76Fu); RECOMP_ABI_CALL(0x001A8C13u, sub_001A8C13); /* call 0x001A8C13 */

loc_001AA76F: ;
    esi = MEM32(ebp + 0x14);
    eax = MEM32(ebp + -44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xC) (32-bit) */
    ecx = MEM32(ebp + -40);
    if (CMP_NE(_fa, _fb)) goto loc_001AA782; /* jne: not equal / not zero */

loc_001AA77D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA78B; /* je: equal / zero */

loc_001AA782: ;
    MEM32(esi) = MEM32(esi) | 4;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = ecx;

loc_001AA78B: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AA7A7u); RECOMP_ABI_CALL(0x001A8C47u, sub_001A8C47); /* call 0x001A8C47 */

loc_001AA7A7: ;
    eax = MEM32(ebp + -36);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x14) (32-bit) */
    ecx = MEM32(ebp + -32);
    if (CMP_NE(_fa, _fb)) goto loc_001AA7B7; /* jne: not equal / not zero */

loc_001AA7B2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x18) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA7C0; /* je: equal / zero */

loc_001AA7B7: ;
    MEM32(esi) = MEM32(esi) | 8;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = ecx;

loc_001AA7C0: ;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_push(MEMF(ebp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001AA7DE; /* jp: parity */

loc_001AA7CF: ;
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001AA7ED; /* jnp: not parity */

loc_001AA7DE: ;
    eax = MEM32(ebp + 8);
    MEM32(esi) = MEM32(esi) | 0x40;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x28) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x2C) = eax;

loc_001AA7ED: ;
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AA7F5u); RECOMP_ABI_CALL(0x001A8A9Cu, sub_001A8A9C); /* call 0x001A8A9C */

loc_001AA7F5: ;
    POP32(esp, esi);
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
 * sub_001AA7FA
 * Original: 0x001AA7FA - 0x001AA816 (28 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AA7FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA7FA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ecx + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFD8F0u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AA816(); return; } /* jge: greater or equal (signed >=) */

loc_001AA812: ;
    edi = eax;
    g_seh_ebp = ebp; sub_001AA81C(); return; /* tail jmp 0x001AA81C */

}

/**
 * sub_001AA815
 * Original: 0x001AA815 - 0x001AA833 (30 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA815(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA815: ;
    PUSH32(esp, 0 /* seg:es */);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001AA81C; /* jle: less or equal (signed <=) */

loc_001AA81A: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001AA81C: ;
    edx = MEM32(ecx + 0xC);
    esi = MEM32(ecx + 0x14);
    ebx = MEM32(ecx + 0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AA833(); return; } /* jge: greater or equal (signed >=) */

loc_001AA82F: ;
    esi = eax;
    g_seh_ebp = ebp; sub_001AA839(); return; /* tail jmp 0x001AA839 */

}

/**
 * sub_001AA816
 * Original: 0x001AA816 - 0x001AA833 (29 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA816(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA816: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001AA81C; /* jle: less or equal (signed <=) */

loc_001AA81A: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001AA81C: ;
    edx = MEM32(ecx + 0xC);
    esi = MEM32(ecx + 0x14);
    ebx = MEM32(ecx + 0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AA833(); return; } /* jge: greater or equal (signed >=) */

loc_001AA82F: ;
    esi = eax;
    g_seh_ebp = ebp; sub_001AA839(); return; /* tail jmp 0x001AA839 */

}

/**
 * sub_001AA81C
 * Original: 0x001AA81C - 0x001AA833 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA81C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA81C: ;
    edx = MEM32(ecx + 0xC);
    esi = MEM32(ecx + 0x14);
    ebx = MEM32(ecx + 0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AA833(); return; } /* jge: greater or equal (signed >=) */

loc_001AA82F: ;
    esi = eax;
    g_seh_ebp = ebp; sub_001AA839(); return; /* tail jmp 0x001AA839 */

}

/**
 * sub_001AA833
 * Original: 0x001AA833 - 0x001AA839 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA833(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA833: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AA839(); return; } /* jle: less or equal (signed <=) */

loc_001AA837: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001AA839(); return; /* fallthrough 0x001AA839 */

}

/**
 * sub_001AA839
 * Original: 0x001AA839 - 0x001AA84C (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA839(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA839: ;
    edx = MEM32(ecx + 0x10);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(ebp + 8) = edx;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AA84C(); return; } /* jge: greater or equal (signed >=) */

loc_001AA847: ;
    MEM32(ebp + 8) = eax;
    g_seh_ebp = ebp; sub_001AA854(); return; /* tail jmp 0x001AA854 */

}

/**
 * sub_001AA84C
 * Original: 0x001AA84C - 0x001AA854 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA84C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA84C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AA854(); return; } /* jle: less or equal (signed <=) */

loc_001AA850: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001AA854(); return; /* fallthrough 0x001AA854 */

}

/**
 * sub_001AA854
 * Original: 0x001AA854 - 0x001AA867 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA854(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA854: ;
    edx = MEM32(ecx + 0x18);
    _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ecx + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AA867(); return; } /* jge: greater or equal (signed >=) */

loc_001AA863: ;
    edx = eax;
    g_seh_ebp = ebp; sub_001AA86D(); return; /* tail jmp 0x001AA86D */

}

/**
 * sub_001AA867
 * Original: 0x001AA867 - 0x001AA86D (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA867(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA867: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AA86D(); return; } /* jle: less or equal (signed <=) */

loc_001AA86B: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001AA86D(); return; /* fallthrough 0x001AA86D */

}

/**
 * sub_001AA86D
 * Original: 0x001AA86D - 0x001AA87A (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA86D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA86D: ;
    ecx = MEM32(ecx + 0x20);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AA87A(); return; } /* jge: greater or equal (signed >=) */

loc_001AA876: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_001AA880(); return; /* tail jmp 0x001AA880 */

}

/**
 * sub_001AA87A
 * Original: 0x001AA87A - 0x001AA880 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA87A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA87A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AA880(); return; } /* jle: less or equal (signed <=) */

loc_001AA87E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001AA880(); return; /* fallthrough 0x001AA880 */

}

/**
 * sub_001AA880
 * Original: 0x001AA880 - 0x001AA890 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA880: ;
    ebx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA8C9(); return; } /* jbe: below or equal (unsigned <=) */

loc_001AA887: ;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = ebx;

    g_seh_ebp = ebp; sub_001AA890(); return; /* fallthrough 0x001AA890 */

}

/**
 * sub_001AA890
 * Original: 0x001AA890 - 0x001AA8B0 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA890: ;
    ebx = MEM32(eax + -4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA8BF(); return; } /* je: equal / zero */

loc_001AA898: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 5 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA8BB(); return; } /* jbe: below or equal (unsigned <=) */

loc_001AA89D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 7 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA8B7(); return; } /* jbe: below or equal (unsigned <=) */

loc_001AA8A2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 9 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA8B0(); return; } /* jbe: below or equal (unsigned <=) */

loc_001AA8A7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA8BB(); return; } /* jne: not equal / not zero */

loc_001AA8AC: ;
    MEM32(eax) = ecx;
    g_seh_ebp = ebp; sub_001AA8C1(); return; /* tail jmp 0x001AA8C1 */

}

/**
 * sub_001AA8B0
 * Original: 0x001AA8B0 - 0x001AA8B7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA8B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA8B0: ;
    ebx = MEM32(ebp + 8);
    MEM32(eax) = ebx;
    g_seh_ebp = ebp; sub_001AA8C1(); return; /* tail jmp 0x001AA8C1 */

}

/**
 * sub_001AA8B7
 * Original: 0x001AA8B7 - 0x001AA8BB (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA8B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA8B7: ;
    MEM32(eax) = esi;
    g_seh_ebp = ebp; sub_001AA8C1(); return; /* tail jmp 0x001AA8C1 */

}

/**
 * sub_001AA8BB
 * Original: 0x001AA8BB - 0x001AA8BF (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA8BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA8BB: ;
    MEM32(eax) = edi;
    g_seh_ebp = ebp; sub_001AA8C1(); return; /* tail jmp 0x001AA8C1 */

}

/**
 * sub_001AA8BF
 * Original: 0x001AA8BF - 0x001AA8C1 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA8BF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA8BF: ;
    MEM32(eax) = edx;

    g_seh_ebp = ebp; sub_001AA8C1(); return; /* fallthrough 0x001AA8C1 */

}

/**
 * sub_001AA8C1
 * Original: 0x001AA8C1 - 0x001AA8C9 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA8C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA8C1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001AA890(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001AA8C9(); return; /* fallthrough 0x001AA8C9 */

}

/**
 * sub_001AA8C9
 * Original: 0x001AA8C9 - 0x001AA8D0 (7 bytes, 5 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA8C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA8C9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AA8D0
 * Original: 0x001AA8D0 - 0x001AA907 (55 bytes, 17 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AA8D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA8D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    ecx = ebp + 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AA8DCu); RECOMP_ABI_CALL(0x001A8A77u, sub_001A8A77); /* call 0x001A8A77 */

loc_001AA8DC: ;
    _fa = (uint32_t)(MEM32(0x1CE4B0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4B0), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA8ED; /* je: equal / zero */

loc_001AA8E5: ;
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AA8EDu); RECOMP_ABI_CALL(0x001B6D5Cu, sub_001B6D5C); /* call 0x001B6D5C */

loc_001AA8ED: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebp + -4;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AA8FBu); RECOMP_ABI_CALL(0x001B726Eu, sub_001B726E); /* call 0x001B726E */

loc_001AA8FB: ;
    ecx = ebp + 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AA903u); RECOMP_ABI_CALL(0x001A8A9Cu, sub_001A8A9C); /* call 0x001A8A9C */

loc_001AA903: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AA907
 * Original: 0x001AA907 - 0x001AA91C (21 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA907(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA907: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA916; /* je: equal / zero */

loc_001AA910: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001AA916u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA913u); } /* indirect call */
    }

loc_001AA916: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AA91C
 * Original: 0x001AA91C - 0x001AA930 (20 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA91C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA91C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA92A; /* je: equal / zero */

loc_001AA925: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001AA92Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA928u); } /* indirect call */
    }

loc_001AA92A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AA930
 * Original: 0x001AA930 - 0x001AA944 (20 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA930: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA93E; /* je: equal / zero */

loc_001AA939: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001AA93Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA93Cu); } /* indirect call */
    }

loc_001AA93E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AA944
 * Original: 0x001AA944 - 0x001AA958 (20 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA944(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA944: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA952; /* je: equal / zero */

loc_001AA94D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001AA952u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA950u); } /* indirect call */
    }

loc_001AA952: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AA958
 * Original: 0x001AA958 - 0x001AA96D (21 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA958(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA958: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA967; /* je: equal / zero */

loc_001AA961: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001AA967u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA964u); } /* indirect call */
    }

loc_001AA967: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AA96D
 * Original: 0x001AA96D - 0x001AA982 (21 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA96D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA96D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA97C; /* je: equal / zero */

loc_001AA976: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001AA97Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA979u); } /* indirect call */
    }

loc_001AA97C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AA982
 * Original: 0x001AA982 - 0x001AA997 (21 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA982(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA982: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA991; /* je: equal / zero */

loc_001AA98B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001AA991u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA98Eu); } /* indirect call */
    }

loc_001AA991: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AA997
 * Original: 0x001AA997 - 0x001AA9A1 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA997(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA997: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esp + 4) = MEM32(esp + 4) - 4;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001AA0D9(); return; /* tail jmp 0x001AA0D9 */

}

/**
 * sub_001AA9A1
 * Original: 0x001AA9A1 - 0x001AA9AB (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA9A1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA9A1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esp + 4) = MEM32(esp + 4) - 4;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001AA120(); return; /* tail jmp 0x001AA120 */

}

/**
 * sub_001AA9AB
 * Original: 0x001AA9AB - 0x001AA9C7 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA9AB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA9AB: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x281DFC;
    if (TEST_Z(_fa, _fb)) goto loc_001AA9C1; /* je: equal / zero */

loc_001AA9BB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AA9C1u); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001AA9C1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AA9C7
 * Original: 0x001AA9C7 - 0x001AA9EF (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA9C7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA9C7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AA9CDu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AA9CD: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AA9EF(); return; } /* je: equal / zero */

loc_001AA9D9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA9E8; /* je: equal / zero */

loc_001AA9DD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AA9E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AA9E2u); } /* indirect call */
    }

loc_001AA9E8: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001AAA11(); return; /* tail jmp 0x001AAA11 */

}

/**
 * sub_001AA9EF
 * Original: 0x001AA9EF - 0x001AAA11 (34 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA9EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA9EF: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x001AA9FDu); RECOMP_ABI_CALL(0x001A9822u, sub_001A9822); /* call 0x001A9822 */

loc_001AA9FD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AAA0E; /* je: equal / zero */

loc_001AAA03: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AAA0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AAA08u); } /* indirect call */
    }

loc_001AAA0E: ;
    eax = edi;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001AAA11(); return; /* fallthrough 0x001AAA11 */

}

/**
 * sub_001AAA11
 * Original: 0x001AAA11 - 0x001AAA15 (4 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAA11(void)
{

loc_001AAA11: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AAA15
 * Original: 0x001AAA15 - 0x001AAA63 (78 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAA15(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AAA15: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AAA1Bu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AAA1B: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AAA3D; /* je: equal / zero */

loc_001AAA27: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AAA36; /* je: equal / zero */

loc_001AAA2B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AAA36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AAA30u); } /* indirect call */
    }

loc_001AAA36: ;
    eax = 0x80004005u;
    goto loc_001AAA5F;

loc_001AAA3D: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x001AAA4Bu); RECOMP_ABI_CALL(0x001A9809u, sub_001A9809); /* call 0x001A9809 */

loc_001AAA4B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AAA5C; /* je: equal / zero */

loc_001AAA51: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AAA5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AAA56u); } /* indirect call */
    }

loc_001AAA5C: ;
    eax = edi;
    POP32(esp, edi);

loc_001AAA5F: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AAA63
 * Original: 0x001AAA63 - 0x001AAAB1 (78 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAA63(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AAA63: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AAA69u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AAA69: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AAA8B; /* je: equal / zero */

loc_001AAA75: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AAA84; /* je: equal / zero */

loc_001AAA79: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AAA84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AAA7Eu); } /* indirect call */
    }

loc_001AAA84: ;
    eax = 0x80004005u;
    goto loc_001AAAAD;

loc_001AAA8B: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x001AAA99u); RECOMP_ABI_CALL(0x001A983Eu, sub_001A983E); /* call 0x001A983E */

loc_001AAA99: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AAAAA; /* je: equal / zero */

loc_001AAA9F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AAAAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AAAA4u); } /* indirect call */
    }

loc_001AAAAA: ;
    eax = edi;
    POP32(esp, edi);

loc_001AAAAD: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AAAB1
 * Original: 0x001AAAB1 - 0x001AAAFF (78 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAAB1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AAAB1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AAAB7u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AAAB7: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AAAD9; /* je: equal / zero */

loc_001AAAC3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AAAD2; /* je: equal / zero */

loc_001AAAC7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AAAD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AAACCu); } /* indirect call */
    }

loc_001AAAD2: ;
    eax = 0x80004005u;
    goto loc_001AAAFB;

loc_001AAAD9: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x001AAAE7u); RECOMP_ABI_CALL(0x001A9851u, sub_001A9851); /* call 0x001A9851 */

loc_001AAAE7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AAAF8; /* je: equal / zero */

loc_001AAAED: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AAAF8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AAAF2u); } /* indirect call */
    }

loc_001AAAF8: ;
    eax = edi;
    POP32(esp, edi);

loc_001AAAFB: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AAAFF
 * Original: 0x001AAAFF - 0x001AAB4D (78 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAAFF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AAAFF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AAB05u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AAB05: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AAB27; /* je: equal / zero */

loc_001AAB11: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AAB20; /* je: equal / zero */

loc_001AAB15: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AAB20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AAB1Au); } /* indirect call */
    }

loc_001AAB20: ;
    eax = 0x80004005u;
    goto loc_001AAB49;

loc_001AAB27: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x001AAB35u); RECOMP_ABI_CALL(0x001A9864u, sub_001A9864); /* call 0x001A9864 */

loc_001AAB35: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AAB46; /* je: equal / zero */

loc_001AAB3B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AAB46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AAB40u); } /* indirect call */
    }

loc_001AAB46: ;
    eax = edi;
    POP32(esp, edi);

loc_001AAB49: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AAB4D
 * Original: 0x001AAB4D - 0x001AAB75 (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAB4D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AAB4D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AAB53u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AAB53: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AAB75(); return; } /* je: equal / zero */

loc_001AAB5F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AAB6E; /* je: equal / zero */

loc_001AAB63: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AAB6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AAB68u); } /* indirect call */
    }

loc_001AAB6E: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001AAB97(); return; /* tail jmp 0x001AAB97 */

}

/**
 * sub_001AAB75
 * Original: 0x001AAB75 - 0x001AAB97 (34 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAB75(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AAB75: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x001AAB83u); RECOMP_ABI_CALL(0x001A9877u, sub_001A9877); /* call 0x001A9877 */

loc_001AAB83: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AAB94; /* je: equal / zero */

loc_001AAB89: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AAB94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AAB8Eu); } /* indirect call */
    }

loc_001AAB94: ;
    eax = edi;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001AAB97(); return; /* fallthrough 0x001AAB97 */

}

/**
 * sub_001AAB97
 * Original: 0x001AAB97 - 0x001AAB9B (4 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAB97(void)
{

loc_001AAB97: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AAB9B
 * Original: 0x001AAB9B - 0x001AABC3 (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAB9B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AAB9B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AABA1u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AABA1: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AABC3(); return; } /* je: equal / zero */

loc_001AABAD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AABBC; /* je: equal / zero */

loc_001AABB1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AABBCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AABB6u); } /* indirect call */
    }

loc_001AABBC: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001AABE5(); return; /* tail jmp 0x001AABE5 */

}

/**
 * sub_001AABC3
 * Original: 0x001AABC3 - 0x001AABE5 (34 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AABC3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AABC3: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x001AABD1u); RECOMP_ABI_CALL(0x001A989Au, sub_001A989A); /* call 0x001A989A */

loc_001AABD1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AABE2; /* je: equal / zero */

loc_001AABD7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AABE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AABDCu); } /* indirect call */
    }

loc_001AABE2: ;
    eax = edi;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001AABE5(); return; /* fallthrough 0x001AABE5 */

}

/**
 * sub_001AABE5
 * Original: 0x001AABE5 - 0x001AABE9 (4 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AABE5(void)
{

loc_001AABE5: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AABE9
 * Original: 0x001AABE9 - 0x001AAC37 (78 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AABE9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AABE9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AABEFu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AABEF: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AAC11; /* je: equal / zero */

loc_001AABFB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AAC0A; /* je: equal / zero */

loc_001AABFF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AAC0Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AAC04u); } /* indirect call */
    }

loc_001AAC0A: ;
    eax = 0x80004005u;
    goto loc_001AAC33;

loc_001AAC11: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x001AAC1Fu); RECOMP_ABI_CALL(0x001A98C8u, sub_001A98C8); /* call 0x001A98C8 */

loc_001AAC1F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AAC30; /* je: equal / zero */

loc_001AAC25: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AAC30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AAC2Au); } /* indirect call */
    }

loc_001AAC30: ;
    eax = edi;
    POP32(esp, edi);

loc_001AAC33: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AAC37
 * Original: 0x001AAC37 - 0x001AAC85 (78 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAC37(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AAC37: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AAC3Du); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AAC3D: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AAC5F; /* je: equal / zero */

loc_001AAC49: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AAC58; /* je: equal / zero */

loc_001AAC4D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AAC58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AAC52u); } /* indirect call */
    }

loc_001AAC58: ;
    eax = 0x80004005u;
    goto loc_001AAC81;

loc_001AAC5F: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x001AAC6Du); RECOMP_ABI_CALL(0x001A98DBu, sub_001A98DB); /* call 0x001A98DB */

loc_001AAC6D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AAC7E; /* je: equal / zero */

loc_001AAC73: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AAC7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AAC78u); } /* indirect call */
    }

loc_001AAC7E: ;
    eax = edi;
    POP32(esp, edi);

loc_001AAC81: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AAC85
 * Original: 0x001AAC85 - 0x001AACD1 (76 bytes, 22 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAC85(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AAC85: ;
    PUSH32(esp, 0x001AAC8Au); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AAC8A: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    ecx = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AACAC; /* je: equal / zero */

loc_001AAC96: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AACA5; /* je: equal / zero */

loc_001AAC9A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AACA5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AAC9Fu); } /* indirect call */
    }

loc_001AACA5: ;
    eax = 0x80004005u;
    goto loc_001AACCE;

loc_001AACAC: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x001AACBAu); RECOMP_ABI_CALL(0x001A9A0Cu, sub_001A9A0C); /* call 0x001A9A0C */

loc_001AACBA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AACCB; /* je: equal / zero */

loc_001AACC0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AACCBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AACC5u); } /* indirect call */
    }

loc_001AACCB: ;
    eax = esi;
    POP32(esp, esi);

loc_001AACCE: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AACD1
 * Original: 0x001AACD1 - 0x001AAD23 (82 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AACD1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AACD1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AACD7u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AACD7: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AACF9; /* je: equal / zero */

loc_001AACE3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AACF2; /* je: equal / zero */

loc_001AACE7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AACF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AACECu); } /* indirect call */
    }

loc_001AACF2: ;
    eax = 0x80004005u;
    goto loc_001AAD1F;

loc_001AACF9: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AAD0Bu); RECOMP_ABI_CALL(0x001A9809u, sub_001A9809); /* call 0x001A9809 */

loc_001AAD0B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AAD1C; /* je: equal / zero */

loc_001AAD11: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AAD1Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AAD16u); } /* indirect call */
    }

loc_001AAD1C: ;
    eax = edi;
    POP32(esp, edi);

loc_001AAD1F: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AAD23
 * Original: 0x001AAD23 - 0x001AAD75 (82 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAD23(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AAD23: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AAD29u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AAD29: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AAD4B; /* je: equal / zero */

loc_001AAD35: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AAD44; /* je: equal / zero */

loc_001AAD39: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AAD44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AAD3Eu); } /* indirect call */
    }

loc_001AAD44: ;
    eax = 0x80004005u;
    goto loc_001AAD71;

loc_001AAD4B: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AAD5Du); RECOMP_ABI_CALL(0x001A9822u, sub_001A9822); /* call 0x001A9822 */

loc_001AAD5D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AAD6E; /* je: equal / zero */

loc_001AAD63: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AAD6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AAD68u); } /* indirect call */
    }

loc_001AAD6E: ;
    eax = edi;
    POP32(esp, edi);

loc_001AAD71: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AAD75
 * Original: 0x001AAD75 - 0x001AADC7 (82 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAD75(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AAD75: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AAD7Bu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AAD7B: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AAD9D; /* je: equal / zero */

loc_001AAD87: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AAD96; /* je: equal / zero */

loc_001AAD8B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AAD96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AAD90u); } /* indirect call */
    }

loc_001AAD96: ;
    eax = 0x80004005u;
    goto loc_001AADC3;

loc_001AAD9D: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AADAFu); RECOMP_ABI_CALL(0x001A983Eu, sub_001A983E); /* call 0x001A983E */

loc_001AADAF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AADC0; /* je: equal / zero */

loc_001AADB5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AADC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AADBAu); } /* indirect call */
    }

loc_001AADC0: ;
    eax = edi;
    POP32(esp, edi);

loc_001AADC3: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AADC7
 * Original: 0x001AADC7 - 0x001AAE19 (82 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AADC7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AADC7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AADCDu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AADCD: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AADEF; /* je: equal / zero */

loc_001AADD9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AADE8; /* je: equal / zero */

loc_001AADDD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AADE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AADE2u); } /* indirect call */
    }

loc_001AADE8: ;
    eax = 0x80004005u;
    goto loc_001AAE15;

loc_001AADEF: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AAE01u); RECOMP_ABI_CALL(0x001A9851u, sub_001A9851); /* call 0x001A9851 */

loc_001AAE01: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AAE12; /* je: equal / zero */

loc_001AAE07: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AAE12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AAE0Cu); } /* indirect call */
    }

loc_001AAE12: ;
    eax = edi;
    POP32(esp, edi);

loc_001AAE15: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AAE19
 * Original: 0x001AAE19 - 0x001AAE6B (82 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAE19(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AAE19: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AAE1Fu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AAE1F: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AAE41; /* je: equal / zero */

loc_001AAE2B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AAE3A; /* je: equal / zero */

loc_001AAE2F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AAE3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AAE34u); } /* indirect call */
    }

loc_001AAE3A: ;
    eax = 0x80004005u;
    goto loc_001AAE67;

loc_001AAE41: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AAE53u); RECOMP_ABI_CALL(0x001A9864u, sub_001A9864); /* call 0x001A9864 */

loc_001AAE53: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AAE64; /* je: equal / zero */

loc_001AAE59: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AAE64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AAE5Eu); } /* indirect call */
    }

loc_001AAE64: ;
    eax = edi;
    POP32(esp, edi);

loc_001AAE67: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AAE6B
 * Original: 0x001AAE6B - 0x001AAE93 (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAE6B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AAE6B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AAE71u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AAE71: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AAE93(); return; } /* je: equal / zero */

loc_001AAE7D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AAE8C; /* je: equal / zero */

loc_001AAE81: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AAE8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AAE86u); } /* indirect call */
    }

loc_001AAE8C: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001AAEB9(); return; /* tail jmp 0x001AAEB9 */

}

/**
 * sub_001AAE93
 * Original: 0x001AAE93 - 0x001AAEB9 (38 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAE93(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AAE93: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AAEA5u); RECOMP_ABI_CALL(0x001A9877u, sub_001A9877); /* call 0x001A9877 */

loc_001AAEA5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AAEB6; /* je: equal / zero */

loc_001AAEAB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AAEB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AAEB0u); } /* indirect call */
    }

loc_001AAEB6: ;
    eax = edi;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001AAEB9(); return; /* fallthrough 0x001AAEB9 */

}

/**
 * sub_001AAEB9
 * Original: 0x001AAEB9 - 0x001AAEBD (4 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAEB9(void)
{

loc_001AAEB9: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AAEBD
 * Original: 0x001AAEBD - 0x001AAEE5 (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAEBD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AAEBD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AAEC3u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AAEC3: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AAEE5(); return; } /* je: equal / zero */

loc_001AAECF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AAEDE; /* je: equal / zero */

loc_001AAED3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AAEDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AAED8u); } /* indirect call */
    }

loc_001AAEDE: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001AAF0B(); return; /* tail jmp 0x001AAF0B */

}

/**
 * sub_001AAEE5
 * Original: 0x001AAEE5 - 0x001AAF0B (38 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAEE5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AAEE5: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AAEF7u); RECOMP_ABI_CALL(0x001A989Au, sub_001A989A); /* call 0x001A989A */

loc_001AAEF7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AAF08; /* je: equal / zero */

loc_001AAEFD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AAF08u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AAF02u); } /* indirect call */
    }

loc_001AAF08: ;
    eax = edi;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001AAF0B(); return; /* fallthrough 0x001AAF0B */

}

/**
 * sub_001AAF0B
 * Original: 0x001AAF0B - 0x001AAF0F (4 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAF0B(void)
{

loc_001AAF0B: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AAF0F
 * Original: 0x001AAF0F - 0x001AAF61 (82 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAF0F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AAF0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AAF15u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AAF15: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AAF37; /* je: equal / zero */

loc_001AAF21: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AAF30; /* je: equal / zero */

loc_001AAF25: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AAF30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AAF2Au); } /* indirect call */
    }

loc_001AAF30: ;
    eax = 0x80004005u;
    goto loc_001AAF5D;

loc_001AAF37: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AAF49u); RECOMP_ABI_CALL(0x001A98C8u, sub_001A98C8); /* call 0x001A98C8 */

loc_001AAF49: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AAF5A; /* je: equal / zero */

loc_001AAF4F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AAF5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AAF54u); } /* indirect call */
    }

loc_001AAF5A: ;
    eax = edi;
    POP32(esp, edi);

loc_001AAF5D: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AAF61
 * Original: 0x001AAF61 - 0x001AAFB3 (82 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAF61(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AAF61: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AAF67u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AAF67: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AAF89; /* je: equal / zero */

loc_001AAF73: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AAF82; /* je: equal / zero */

loc_001AAF77: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AAF82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AAF7Cu); } /* indirect call */
    }

loc_001AAF82: ;
    eax = 0x80004005u;
    goto loc_001AAFAF;

loc_001AAF89: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AAF9Bu); RECOMP_ABI_CALL(0x001A98DBu, sub_001A98DB); /* call 0x001A98DB */

loc_001AAF9B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AAFAC; /* je: equal / zero */

loc_001AAFA1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AAFACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AAFA6u); } /* indirect call */
    }

loc_001AAFAC: ;
    eax = edi;
    POP32(esp, edi);

loc_001AAFAF: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AB003
 * Original: 0x001AB003 - 0x001AB01A (23 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB003(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB003: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AB00Eu); RECOMP_ABI_CALL(0x001A8DE8u, sub_001A8DE8); /* call 0x001A8DE8 */

loc_001AB00E: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AB01A
 * Original: 0x001AB01A - 0x001AB031 (23 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB01A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB01A: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AB025u); RECOMP_ABI_CALL(0x001A8DE8u, sub_001A8DE8); /* call 0x001A8DE8 */

loc_001AB025: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AB031
 * Original: 0x001AB031 - 0x001AB04D (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB031(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB031: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AB04Au); RECOMP_ABI_CALL(0x001A91C6u, sub_001A91C6); /* call 0x001A91C6 */

loc_001AB04A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AB04D
 * Original: 0x001AB04D - 0x001AB069 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB04D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB04D: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AB066u); RECOMP_ABI_CALL(0x001A9232u, sub_001A9232); /* call 0x001A9232 */

loc_001AB066: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AB069
 * Original: 0x001AB069 - 0x001AB090 (39 bytes, 16 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AB069(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB069: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0x10));
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + 0xC));
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AB08Cu); RECOMP_ABI_CALL(0x001A927Fu, sub_001A927F); /* call 0x001A927F */

loc_001AB08C: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001AB090
 * Original: 0x001AB090 - 0x001AB0B7 (39 bytes, 16 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AB090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB090: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0x10));
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + 0xC));
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AB0B3u); RECOMP_ABI_CALL(0x001A9345u, sub_001A9345); /* call 0x001A9345 */

loc_001AB0B3: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001AB0B7
 * Original: 0x001AB0B7 - 0x001AB0E1 (42 bytes, 17 insns)
 * Category: game_audio
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AB0B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB0B7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x1C));
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0x14));
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + 0x10));
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AB0DDu); RECOMP_ABI_CALL(0x001A92E3u, sub_001A92E3); /* call 0x001A92E3 */

loc_001AB0DD: ;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001AB0E1
 * Original: 0x001AB0E1 - 0x001AB0F9 (24 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB0E1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB0E1: ;
    eax = MEM32(esp + 4);
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AB0F6u); RECOMP_ABI_CALL(0x001A93A4u, sub_001A93A4); /* call 0x001A93A4 */

loc_001AB0F6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AB0F9
 * Original: 0x001AB0F9 - 0x001AB115 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB0F9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB0F9: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AB112u); RECOMP_ABI_CALL(0x001A95DFu, sub_001A95DF); /* call 0x001A95DF */

loc_001AB112: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AB115
 * Original: 0x001AB115 - 0x001AB135 (32 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB115(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB115: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AB132u); RECOMP_ABI_CALL(0x001A93F4u, sub_001A93F4); /* call 0x001A93F4 */

loc_001AB132: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AB135
 * Original: 0x001AB135 - 0x001AB151 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB135(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB135: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AB14Eu); RECOMP_ABI_CALL(0x001A9453u, sub_001A9453); /* call 0x001A9453 */

loc_001AB14E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AB151
 * Original: 0x001AB151 - 0x001AB171 (32 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB151(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB151: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AB16Eu); RECOMP_ABI_CALL(0x001A9462u, sub_001A9462); /* call 0x001A9462 */

loc_001AB16E: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AB171
 * Original: 0x001AB171 - 0x001AB1C9 (88 bytes, 31 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB171(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB171: ;
    eax = MEM32(esp + 4);
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AB186u); RECOMP_ABI_CALL(0x001A94A8u, sub_001A94A8); /* call 0x001A94A8 */

loc_001AB186: ;
    esp += 8; return; /* ret 4 */

    esp += 20; return; /* ret 16 */

    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AB1C9
 * Original: 0x001AB1C9 - 0x001AB1E0 (23 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB1C9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB1C9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AB1D4u); RECOMP_ABI_CALL(0x001A8E1Eu, sub_001A8E1E); /* call 0x001A8E1E */

loc_001AB1D4: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AB1E0
 * Original: 0x001AB1E0 - 0x001AB1F7 (23 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB1E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB1E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AB1EBu); RECOMP_ABI_CALL(0x001A8E1Eu, sub_001A8E1E); /* call 0x001A8E1E */

loc_001AB1EB: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AB1F7
 * Original: 0x001AB1F7 - 0x001AB213 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB1F7_gen(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB1F7: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AB210u); RECOMP_ABI_CALL(0x001AA9C7u, sub_001AA9C7); /* call 0x001AA9C7 */

loc_001AB210: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AB213
 * Original: 0x001AB213 - 0x001AB22F (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB213(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB213: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AB22Cu); RECOMP_ABI_CALL(0x001AAA15u, sub_001AAA15); /* call 0x001AAA15 */

loc_001AB22C: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AB22F
 * Original: 0x001AB22F - 0x001AB24B (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB22F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB22F: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AB248u); RECOMP_ABI_CALL(0x001AAA63u, sub_001AAA63); /* call 0x001AAA63 */

loc_001AB248: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AB24B
 * Original: 0x001AB24B - 0x001AB267 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB24B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB24B: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AB264u); RECOMP_ABI_CALL(0x001AAAB1u, sub_001AAAB1); /* call 0x001AAAB1 */

loc_001AB264: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AB267
 * Original: 0x001AB267 - 0x001AB283 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB267(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB267: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AB280u); RECOMP_ABI_CALL(0x001AAAFFu, sub_001AAAFF); /* call 0x001AAAFF */

loc_001AB280: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AB283
 * Original: 0x001AB283 - 0x001AB29F (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB283(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB283: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AB29Cu); RECOMP_ABI_CALL(0x001AAB4Du, sub_001AAB4D); /* call 0x001AAB4D */

loc_001AB29C: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AB29F
 * Original: 0x001AB29F - 0x001AB2BB (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB29F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB29F: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AB2B8u); RECOMP_ABI_CALL(0x001AAB9Bu, sub_001AAB9B); /* call 0x001AAB9B */

loc_001AB2B8: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AB2BB
 * Original: 0x001AB2BB - 0x001AB2DF (36 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB2BB_gen(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB2BB: ;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AB2DCu); RECOMP_ABI_CALL(0x001A9BD9u, sub_001A9BD9); /* call 0x001A9BD9 */

loc_001AB2DC: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001AB2DF
 * Original: 0x001AB2DF - 0x001AB303 (36 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB2DF(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB2DF: ;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AB300u); RECOMP_ABI_CALL(0x001A9C2Au, sub_001A9C2A); /* call 0x001A9C2A */

loc_001AB300: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001AB303
 * Original: 0x001AB303 - 0x001AB31B (24 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB303_gen(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB303: ;
    eax = MEM32(esp + 4);
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AB318u); RECOMP_ABI_CALL(0x001A9C83u, sub_001A9C83); /* call 0x001A9C83 */

loc_001AB318: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AB31B
 * Original: 0x001AB31B - 0x001AB33F (36 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB31B_gen(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB31B: ;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AB33Cu); RECOMP_ABI_CALL(0x001A9CD2u, sub_001A9CD2); /* call 0x001A9CD2 */

loc_001AB33C: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001AB33F
 * Original: 0x001AB33F - 0x001AB35B (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB33F_gen(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB33F: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AB358u); RECOMP_ABI_CALL(0x001A9D2Bu, sub_001A9D2B); /* call 0x001A9D2B */

loc_001AB358: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AB35B
 * Original: 0x001AB35B - 0x001AB37F (36 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB35B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB35B: ;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AB37Cu); RECOMP_ABI_CALL(0x001A9D7Cu, sub_001A9D7C); /* call 0x001A9D7C */

loc_001AB37C: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001AB37F
 * Original: 0x001AB37F - 0x001AB39F (32 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB37F_gen(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB37F: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AB39Cu); RECOMP_ABI_CALL(0x001A9E26u, sub_001A9E26); /* call 0x001A9E26 */

loc_001AB39C: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AB39F
 * Original: 0x001AB39F - 0x001AB3BB (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB39F_gen(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB39F: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AB3B8u); RECOMP_ABI_CALL(0x001A9DD5u, sub_001A9DD5); /* call 0x001A9DD5 */

loc_001AB3B8: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AB3BB
 * Original: 0x001AB3BB - 0x001AB3DB (32 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB3BB_gen(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB3BB: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AB3D8u); RECOMP_ABI_CALL(0x001A9EABu, sub_001A9EAB); /* call 0x001A9EAB */

loc_001AB3D8: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AB3DB
 * Original: 0x001AB3DB - 0x001AB3F7 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB3DB_gen(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB3DB: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AB3F4u); RECOMP_ABI_CALL(0x001A9FE2u, sub_001A9FE2); /* call 0x001A9FE2 */

loc_001AB3F4: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AB3F7
 * Original: 0x001AB3F7 - 0x001AB427 (48 bytes, 19 insns)
 * Category: game_audio
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AB3F7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB3F7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x24));
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x20));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0x1C));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + 0x18));
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, MEM32(ebp + 0x10));
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AB423u); RECOMP_ABI_CALL(0x001A9F00u, sub_001A9F00); /* call 0x001A9F00 */

loc_001AB423: ;
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001AB427
 * Original: 0x001AB427 - 0x001AB447 (32 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB427(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB427: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AB444u); RECOMP_ABI_CALL(0x001AA033u, sub_001AA033); /* call 0x001AA033 */

loc_001AB444: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AB447
 * Original: 0x001AB447 - 0x001AB49B (84 bytes, 30 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB447(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB447: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AB460u); RECOMP_ABI_CALL(0x001AABE9u, sub_001AABE9); /* call 0x001AABE9 */

loc_001AB460: ;
    esp += 12; return; /* ret 8 */

    esp += 12; return; /* ret 8 */

    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AB49B
 * Original: 0x001AB49B - 0x001AB4A0 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB49B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB49B: ;
    g_seh_ebp = ebp; sub_001AAD23(); return; /* tail jmp 0x001AAD23 */

}

/**
 * sub_001AB4A0
 * Original: 0x001AB4A0 - 0x001AB4A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB4A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB4A0: ;
    g_seh_ebp = ebp; sub_001AACD1(); return; /* tail jmp 0x001AACD1 */

}

/**
 * sub_001AB4A5
 * Original: 0x001AB4A5 - 0x001AB4AA (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB4A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB4A5: ;
    g_seh_ebp = ebp; sub_001AAD75(); return; /* tail jmp 0x001AAD75 */

}

/**
 * sub_001AB4AA
 * Original: 0x001AB4AA - 0x001AB4AF (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB4AA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB4AA: ;
    g_seh_ebp = ebp; sub_001AADC7(); return; /* tail jmp 0x001AADC7 */

}

/**
 * sub_001AB4AF
 * Original: 0x001AB4AF - 0x001AB4B4 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB4AF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB4AF: ;
    g_seh_ebp = ebp; sub_001AAE19(); return; /* tail jmp 0x001AAE19 */

}

/**
 * sub_001AB4B4
 * Original: 0x001AB4B4 - 0x001AB4B9 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB4B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB4B4: ;
    g_seh_ebp = ebp; sub_001AAE6B(); return; /* tail jmp 0x001AAE6B */

}

/**
 * sub_001AB4B9
 * Original: 0x001AB4B9 - 0x001AB4BE (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB4B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB4B9: ;
    g_seh_ebp = ebp; sub_001AAEBD(); return; /* tail jmp 0x001AAEBD */

}

/**
 * sub_001AB4BE
 * Original: 0x001AB4BE - 0x001AB4C3 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB4BE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB4BE: ;
    g_seh_ebp = ebp; sub_001AA335(); return; /* tail jmp 0x001AA335 */

}

/**
 * sub_001AB4C3
 * Original: 0x001AB4C3 - 0x001AB4DB (24 bytes, 6 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB4C3(void)
{

loc_001AB4C3: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x001AB4D8u); RECOMP_ABI_CALL(0x001AA386u, sub_001AA386); /* call 0x001AA386 */

loc_001AB4D8: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001AB4DB
 * Original: 0x001AB4DB - 0x001AB4F3 (24 bytes, 6 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB4DB(void)
{

loc_001AB4DB: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x001AB4F0u); RECOMP_ABI_CALL(0x001AA3DFu, sub_001AA3DF); /* call 0x001AA3DF */

loc_001AB4F0: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001AB4F3
 * Original: 0x001AB4F3 - 0x001AB502 (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB4F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB4F3: ;
    g_seh_ebp = ebp; sub_001AAF0F(); return; /* tail jmp 0x001AAF0F */

    g_seh_ebp = ebp; sub_001AAF61(); return; /* tail jmp 0x001AAF61 */

    g_seh_ebp = ebp; sub_001AAFB3(); return; /* tail jmp 0x001AAFB3 */

}

/**
 * sub_001AB502
 * Original: 0x001AB502 - 0x001AB50B (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AB502(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001AB502: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001AA44F(); return; /* tail jmp 0x001AA44F */

}

/**
 * sub_001AB531
 * Original: 0x001AB531 - 0x001AB55A (41 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB531(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB531: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AB537u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AB537: ;
    esi = ZX8(LO8(eax));
    eax = MEM32(0x1CEB28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB549; /* je: equal / zero */

loc_001AB543: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB549u); RECOMP_ABI_CALL(0x001A95AEu, sub_001A95AE); /* call 0x001A95AE */

loc_001AB549: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001AB559; /* je: equal / zero */

loc_001AB54E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AB559u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AB553u); } /* indirect call */
    }

loc_001AB559: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AB55A
 * Original: 0x001AB55A - 0x001AB589 (47 bytes, 17 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AB55A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB55A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = ebx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AB571u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AB571: ;
    _fa = (uint32_t)(MEM32(0x1CEB28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CEB28), ebx (32-bit) */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -12) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001AB589(); return; } /* jne: not equal / not zero */

loc_001AB57F: ;
    esi = 0x88780032u;
    g_seh_ebp = ebp; sub_001AB710(); return; /* tail jmp 0x001AB710 */

}

/**
 * sub_001AB589
 * Original: 0x001AB589 - 0x001AB5BF (54 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB589(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB589: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001AB616(); return; } /* je: equal / zero */

loc_001AB593: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001AB59Bu); RECOMP_ABI_CALL(0x000AEC8Du, sub_000AEC8D); /* call 0x000AEC8D */

loc_001AB59B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(ebp + 8) = eax;
    ebx = 0xFFFF;
    edi = 0x80070000u;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001AB5D2(); return; } /* jne: not equal / not zero */

loc_001AB5AD: ;
    PUSH32(esp, 0x001AB5B2u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001AB5B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AB5BF(); return; } /* jg: greater (signed >) */

loc_001AB5B6: ;
    PUSH32(esp, 0x001AB5BBu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001AB5BB: ;
    esi = eax;
    g_seh_ebp = ebp; sub_001AB5CA(); return; /* tail jmp 0x001AB5CA */

}

/**
 * sub_001AB5BF
 * Original: 0x001AB5BF - 0x001AB5CA (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB5BF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB5BF: ;
    PUSH32(esp, 0x001AB5C4u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001AB5C4: ;
    esi = eax;
    esi = esi & ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001AB5CA(); return; /* fallthrough 0x001AB5CA */

}

/**
 * sub_001AB5CA
 * Original: 0x001AB5CA - 0x001AB5D2 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB5CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB5CA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AB70B(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_001AB5D2(); return; /* fallthrough 0x001AB5D2 */

}

/**
 * sub_001AB5D2
 * Original: 0x001AB5D2 - 0x001AB5F3 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB5D2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB5D2: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001AB5DAu); RECOMP_ABI_CALL(0x000AED69u, sub_000AED69); /* call 0x000AED69 */

loc_001AB5DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001AB5FE(); return; } /* jne: not equal / not zero */

loc_001AB5E1: ;
    PUSH32(esp, 0x001AB5E6u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001AB5E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AB5F3(); return; } /* jg: greater (signed >) */

loc_001AB5EA: ;
    PUSH32(esp, 0x001AB5EFu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001AB5EF: ;
    esi = eax;
    g_seh_ebp = ebp; sub_001AB5FE(); return; /* tail jmp 0x001AB5FE */

}

/**
 * sub_001AB5F3
 * Original: 0x001AB5F3 - 0x001AB5FE (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB5F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB5F3: ;
    PUSH32(esp, 0x001AB5F8u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001AB5F8: ;
    esi = eax;
    esi = esi & ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001AB5FE(); return; /* fallthrough 0x001AB5FE */

}

/**
 * sub_001AB5FE
 * Original: 0x001AB5FE - 0x001AB616 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB5FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB5FE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AB70B(); return; } /* jl: less (signed <) */

loc_001AB606: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001AB60Eu); RECOMP_ABI_CALL(0x000AECF4u, sub_000AECF4); /* call 0x000AECF4 */

loc_001AB60E: ;
    MEM32(ebp + -4) = eax;
    g_seh_ebp = ebp; sub_001AB6CD(); return; /* tail jmp 0x001AB6CD */

}

/**
 * sub_001AB616
 * Original: 0x001AB616 - 0x001AB64E (56 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB616(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB616: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001AB62Au); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_001AB62A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(ebp + 8) = eax;
    ebx = 0xFFFF;
    edi = 0x80070000u;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001AB661(); return; } /* jne: not equal / not zero */

loc_001AB63C: ;
    PUSH32(esp, 0x001AB641u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001AB641: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AB64E(); return; } /* jg: greater (signed >) */

loc_001AB645: ;
    PUSH32(esp, 0x001AB64Au); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001AB64A: ;
    esi = eax;
    g_seh_ebp = ebp; sub_001AB659(); return; /* tail jmp 0x001AB659 */

}

/**
 * sub_001AB64E
 * Original: 0x001AB64E - 0x001AB659 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB64E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB64E: ;
    PUSH32(esp, 0x001AB653u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001AB653: ;
    esi = eax;
    esi = esi & ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001AB659(); return; /* fallthrough 0x001AB659 */

}

/**
 * sub_001AB659
 * Original: 0x001AB659 - 0x001AB661 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB659(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB659: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AB70B(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_001AB661(); return; /* fallthrough 0x001AB661 */

}

/**
 * sub_001AB661
 * Original: 0x001AB661 - 0x001AB684 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB661(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB661: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001AB66Bu); RECOMP_ABI_CALL(0x000AB1B1u, sub_000AB1B1); /* call 0x000AB1B1 */

loc_001AB66B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001AB68F(); return; } /* jne: not equal / not zero */

loc_001AB672: ;
    PUSH32(esp, 0x001AB677u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001AB677: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AB684(); return; } /* jg: greater (signed >) */

loc_001AB67B: ;
    PUSH32(esp, 0x001AB680u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001AB680: ;
    esi = eax;
    g_seh_ebp = ebp; sub_001AB68F(); return; /* tail jmp 0x001AB68F */

}

/**
 * sub_001AB684
 * Original: 0x001AB684 - 0x001AB68F (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB684(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB684: ;
    PUSH32(esp, 0x001AB689u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001AB689: ;
    esi = eax;
    esi = esi & ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001AB68F(); return; /* fallthrough 0x001AB68F */

}

/**
 * sub_001AB68F
 * Original: 0x001AB68F - 0x001AB6CD (62 bytes, 20 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB68F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB68F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AB70B(); return; } /* jl: less (signed <) */

loc_001AB693: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x61645344);
    PUSH32(esp, 0x001AB6A2u); RECOMP_ABI_CALL(0x001AEB13u, sub_001AEB13); /* call 0x001AEB13 */

loc_001AB6A2: ;
    esi = eax;
    MEM32(ebp + -4) = esi;
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
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_001AB70B(); return; } /* js: sign (negative) */

loc_001AB6B9: ;
    PUSH32(esp, 0);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001AB6CDu); RECOMP_ABI_CALL(0x000AA788u, sub_000AA788); /* call 0x000AA788 */

    g_seh_ebp = ebp; sub_001AB6CD(); return; /* fallthrough 0x001AB6CD */

}

/**
 * sub_001AB6CD
 * Original: 0x001AB6CD - 0x001AB6E3 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB6CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB6CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001AB6EE(); return; } /* jne: not equal / not zero */

loc_001AB6D1: ;
    PUSH32(esp, 0x001AB6D6u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001AB6D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AB6E3(); return; } /* jg: greater (signed >) */

loc_001AB6DA: ;
    PUSH32(esp, 0x001AB6DFu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001AB6DF: ;
    esi = eax;
    g_seh_ebp = ebp; sub_001AB6EE(); return; /* tail jmp 0x001AB6EE */

}

/**
 * sub_001AB6E3
 * Original: 0x001AB6E3 - 0x001AB6EE (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB6E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB6E3: ;
    PUSH32(esp, 0x001AB6E8u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001AB6E8: ;
    esi = eax;
    esi = esi & ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001AB6EE(); return; /* fallthrough 0x001AB6EE */

}

/**
 * sub_001AB6EE
 * Original: 0x001AB6EE - 0x001AB70B (29 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB6EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB6EE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AB70B(); return; } /* jl: less (signed <) */

loc_001AB6F2: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(0x1CEB28));
    PUSH32(esp, 0x001AB709u); RECOMP_ABI_CALL(0x001A927Fu, sub_001A927F); /* call 0x001A927F */

loc_001AB709: ;
    esi = eax;

    g_seh_ebp = ebp; sub_001AB70B(); return; /* fallthrough 0x001AB70B */

}

/**
 * sub_001AB70B
 * Original: 0x001AB70B - 0x001AB710 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB70B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB70B: ;
    edi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001AB710(); return; /* fallthrough 0x001AB710 */

}

/**
 * sub_001AB710
 * Original: 0x001AB710 - 0x001AB727 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB710: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001AB727(); return; } /* je: equal / zero */

loc_001AB716: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AB743(); return; } /* je: equal / zero */

loc_001AB71A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AB743(); return; } /* je: equal / zero */

loc_001AB71F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001AB725u); RECOMP_ABI_CALL(0x000AED15u, sub_000AED15); /* call 0x000AED15 */

loc_001AB725: ;
    g_seh_ebp = ebp; sub_001AB743(); return; /* tail jmp 0x001AB743 */

}

/**
 * sub_001AB727
 * Original: 0x001AB727 - 0x001AB743 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB727(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB727: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB734; /* je: equal / zero */

loc_001AB72C: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x001AB734u); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001AB734: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AB743(); return; } /* je: equal / zero */

loc_001AB738: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AB743(); return; } /* je: equal / zero */

loc_001AB73D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001AB743u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

    g_seh_ebp = ebp; sub_001AB743(); return; /* fallthrough 0x001AB743 */

}

/**
 * sub_001AB743
 * Original: 0x001AB743 - 0x001AB75C (25 bytes, 10 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB743(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB743: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB753; /* je: equal / zero */

loc_001AB748: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AB753u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AB74Du); } /* indirect call */
    }

loc_001AB753: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001AB75C
 * Original: 0x001AB75C - 0x001AB95B (511 bytes, 161 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AB75C(void)
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

loc_001AB75C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x284) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x284;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(0x1CEB2C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x1CEB2C), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AB783; /* jne: not equal / not zero */

loc_001AB772: ;
    MEM32(0x1CEB2C) = MEM32(0x1CEB2C) | 1;
    _fa = (uint32_t)(MEM32(0x1CEB2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1BA410) = 0x108;

loc_001AB783: ;
    PUSH32(esp, edi);
    edi = MEM32(0x1CEB28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AB79A; /* jne: not equal / not zero */

loc_001AB78E: ;
    MEM32(ebp + -4) = 0x88780032u;
    goto loc_001AB953;

loc_001AB79A: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    eax = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    if ((_fa == 0)) goto loc_001AB8D7; /* je: equal / zero */

loc_001AB7AA: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001AB891; /* je: equal / zero */

loc_001AB7B3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001AB7C3; /* je: equal / zero */

loc_001AB7B7: ;
    MEM32(ebp + -4) = 0x88780032u;
    goto loc_001AB951;

loc_001AB7C3: ;
    PUSH32(esp, 0x118);
    eax = ebp + -644;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AB7DAu); RECOMP_ABI_CALL(0x001A9345u, sub_001A9345); /* call 0x001A9345 */

loc_001AB7DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AB951; /* jl: less (signed <) */

loc_001AB7E2: ;
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    eax = ebp + -644;
    PUSH32(esp, eax);
    esi = ebx + 4;
    edi = ebp + -96;
    eax = ebp + -100;
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
    PUSH32(esp, eax);
    ecx = ebp + 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AB800u); RECOMP_ABI_CALL(0x001B726Eu, sub_001B726E); /* call 0x001B726E */

loc_001AB800: ;
    MEM32(ebp + -628) = MEM32(ebp + -628) | 4;
    _fa = (uint32_t)(MEM32(ebp + -628)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    eax = ebp + -628;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(0x1CEB28));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AB822u); RECOMP_ABI_CALL(0x001A92E3u, sub_001A92E3); /* call 0x001A92E3 */

loc_001AB822: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001AB860; /* jl: less (signed <) */

loc_001AB829: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(0x1BA410));
    eax = ebp + -364;
    PUSH32(esp, eax);
    PUSH32(esp, 0x118);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(0x1CEB28));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AB84Bu); RECOMP_ABI_CALL(0x001A92E3u, sub_001A92E3); /* call 0x001A92E3 */

loc_001AB84B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001AB860; /* jl: less (signed <) */

loc_001AB852: ;
    PUSH32(esp, MEM32(0x1CEB28));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AB85Du); RECOMP_ABI_CALL(0x001A93A4u, sub_001A93A4); /* call 0x001A93A4 */

loc_001AB85D: ;
    MEM32(ebp + -4) = eax;

loc_001AB860: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB951; /* je: equal / zero */

loc_001AB86B: ;
    ecx = MEM32(ebx);
    MEM32(eax) = ecx;
    ecx = MEM32(0x1BA410);
    edi = eax + 4;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ebp + -364;
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
    goto loc_001AB951;

loc_001AB891: ;
    fp_push(MEMF(ebx + 8)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esi = ebp + -48;
    fp_push(MEMF(ebx + 0xC)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 4)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AB8B0u); RECOMP_ABI_CALL(0x001A8FF9u, sub_001A8FF9); /* call 0x001A8FF9 */

loc_001AB8B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    eax = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AB8C2u); RECOMP_ABI_CALL(0x001A92E3u, sub_001A92E3); /* call 0x001A92E3 */

loc_001AB8C2: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB951; /* je: equal / zero */

loc_001AB8D0: ;
    PUSH32(esp, 5);
    esi = ebp + -48;
    goto loc_001AB947;

loc_001AB8D7: ;
    fp_push(MEMF(ebx + 4)); /* fld float */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AB8E4u); RECOMP_ABI_CALL(0x001A8F8Bu, sub_001A8F8B); /* call 0x001A8F8B */

loc_001AB8E4: ;
    fp_push(MEMF(ebx + 0xC)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esi = ebp + -44;
    fp_push(MEMF(ebx + 0x10)); /* fld float */
    MEM32(ebp + -48) = eax;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 8)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AB906u); RECOMP_ABI_CALL(0x001A8FF9u, sub_001A8FF9); /* call 0x001A8FF9 */

loc_001AB906: ;
    fp_push(MEMF(ebx + 0x18)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esi = ebp + -24;
    fp_push(MEMF(ebx + 0x1C)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x14)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AB925u); RECOMP_ABI_CALL(0x001A8FF9u, sub_001A8FF9); /* call 0x001A8FF9 */

loc_001AB925: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AB938u); RECOMP_ABI_CALL(0x001A92E3u, sub_001A92E3); /* call 0x001A92E3 */

loc_001AB938: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB951; /* je: equal / zero */

loc_001AB942: ;
    PUSH32(esp, 0xB);
    esi = ebp + -48;

loc_001AB947: ;
    ecx = MEM32(ebx);
    MEM32(eax) = ecx;
    edi = eax + 4;
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

loc_001AB951: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001AB953: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
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
 * sub_001AB95B
 * Original: 0x001AB95B - 0x001AB9CE (115 bytes, 46 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB95B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB95B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x54);
    PUSH32(esp, 0x001AB964u); RECOMP_ABI_CALL(0x001A89F6u, sub_001A89F6); /* call 0x001A89F6 */

loc_001AB964: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001AB974; /* je: equal / zero */

loc_001AB969: ;
    ecx = eax;
    PUSH32(esp, 0x001AB970u); RECOMP_ABI_CALL(0x001B7CF2u, sub_001B7CF2); /* call 0x001B7CF2 */

loc_001AB970: ;
    edi = eax;
    goto loc_001AB976;

loc_001AB974: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001AB976: ;
    esi = edi;
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
    if ((_fas < 0)) goto loc_001AB9BD; /* js: sign (negative) */

loc_001AB98A: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, 0x001AB994u); RECOMP_ABI_CALL(0x001A8D7Eu, sub_001A8D7E); /* call 0x001A8D7E */

loc_001AB994: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001AB9BD; /* jl: less (signed <) */

loc_001AB99A: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB9AD; /* je: equal / zero */

loc_001AB9A1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(edi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x001AB9ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AB9A8u); } /* indirect call */
    }

loc_001AB9AB: ;
    esi = eax;

loc_001AB9AD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001AB9BD; /* jl: less (signed <) */

loc_001AB9B1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001AB9B7u); RECOMP_ABI_CALL(0x001AA91Cu, sub_001AA91C); /* call 0x001AA91C */

loc_001AB9B7: ;
    ecx = MEM32(esp + 0x14);
    MEM32(ecx) = eax;

loc_001AB9BD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB9C7; /* je: equal / zero */

loc_001AB9C1: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001AB9C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AB9C4u); } /* indirect call */
    }

loc_001AB9C7: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AB9CE
 * Original: 0x001AB9CE - 0x001ABA3D (111 bytes, 43 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB9CE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB9CE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x54);
    PUSH32(esp, 0x001AB9D7u); RECOMP_ABI_CALL(0x001A89F6u, sub_001A89F6); /* call 0x001A89F6 */

loc_001AB9D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001AB9E7; /* je: equal / zero */

loc_001AB9DC: ;
    ecx = eax;
    PUSH32(esp, 0x001AB9E3u); RECOMP_ABI_CALL(0x001B7CF2u, sub_001B7CF2); /* call 0x001B7CF2 */

loc_001AB9E3: ;
    edi = eax;
    goto loc_001AB9E9;

loc_001AB9E7: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001AB9E9: ;
    esi = edi;
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
    if ((_fas < 0)) goto loc_001ABA2C; /* js: sign (negative) */

loc_001AB9FD: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001ABA10; /* je: equal / zero */

loc_001ABA04: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, 0x001ABA0Eu); RECOMP_ABI_CALL(0x001A8D7Eu, sub_001A8D7E); /* call 0x001A8D7E */

loc_001ABA0E: ;
    goto loc_001ABA1A;

loc_001ABA10: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, edi);
    PUSH32(esp, 0x001ABA1Au); RECOMP_ABI_CALL(0x001A8D93u, sub_001A8D93); /* call 0x001A8D93 */

loc_001ABA1A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001ABA2C; /* jl: less (signed <) */

loc_001ABA20: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001ABA26u); RECOMP_ABI_CALL(0x001AA91Cu, sub_001AA91C); /* call 0x001AA91C */

loc_001ABA26: ;
    ecx = MEM32(esp + 0x14);
    MEM32(ecx) = eax;

loc_001ABA2C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001ABA36; /* je: equal / zero */

loc_001ABA30: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001ABA36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ABA33u); } /* indirect call */
    }

loc_001ABA36: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001ABA3D
 * Original: 0x001ABA3D - 0x001ABAA7 (106 bytes, 44 insns)
 * Category: game_audio
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001ABA3D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001ABA3D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x44);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ABA49u); RECOMP_ABI_CALL(0x001A89F6u, sub_001A89F6); /* call 0x001A89F6 */

loc_001ABA49: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001ABA59; /* je: equal / zero */

loc_001ABA4E: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ABA55u); RECOMP_ABI_CALL(0x001B7A50u, sub_001B7A50); /* call 0x001B7A50 */

loc_001ABA55: ;
    edi = eax;
    goto loc_001ABA5B;

loc_001ABA59: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001ABA5B: ;
    esi = edi;
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
    if ((_fas < 0)) goto loc_001ABA95; /* js: sign (negative) */

loc_001ABA6F: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ABA84u); RECOMP_ABI_CALL(0x001A8DA8u, sub_001A8DA8); /* call 0x001A8DA8 */

loc_001ABA84: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001ABA95; /* jl: less (signed <) */

loc_001ABA8A: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ABA90u); RECOMP_ABI_CALL(0x001AA930u, sub_001AA930); /* call 0x001AA930 */

loc_001ABA90: ;
    ecx = MEM32(ebp + 0x1C);
    MEM32(ecx) = eax;

loc_001ABA95: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001ABA9F; /* je: equal / zero */

loc_001ABA99: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001ABA9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ABA9Cu); } /* indirect call */
    }

loc_001ABA9F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001ABAA7
 * Original: 0x001ABAA7 - 0x001ABB03 (92 bytes, 37 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABAA7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001ABAA7: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x001ABAB0u); RECOMP_ABI_CALL(0x001A89F6u, sub_001A89F6); /* call 0x001A89F6 */

loc_001ABAB0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001ABAC0; /* je: equal / zero */

loc_001ABAB5: ;
    ecx = eax;
    PUSH32(esp, 0x001ABABCu); RECOMP_ABI_CALL(0x001B7A50u, sub_001B7A50); /* call 0x001B7A50 */

loc_001ABABC: ;
    edi = eax;
    goto loc_001ABAC2;

loc_001ABAC0: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001ABAC2: ;
    esi = edi;
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
    if ((_fas < 0)) goto loc_001ABAF2; /* js: sign (negative) */

loc_001ABAD6: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, 0x001ABAE0u); RECOMP_ABI_CALL(0x001A8DC9u, sub_001A8DC9); /* call 0x001A8DC9 */

loc_001ABAE0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001ABAF2; /* jl: less (signed <) */

loc_001ABAE6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001ABAECu); RECOMP_ABI_CALL(0x001AA930u, sub_001AA930); /* call 0x001AA930 */

loc_001ABAEC: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;

loc_001ABAF2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001ABAFC; /* je: equal / zero */

loc_001ABAF6: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001ABAFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ABAF9u); } /* indirect call */
    }

loc_001ABAFC: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001ABB03
 * Original: 0x001ABB03 - 0x001ABB63 (96 bytes, 38 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABB03(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001ABB03: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x001ABB0Cu); RECOMP_ABI_CALL(0x001A89F6u, sub_001A89F6); /* call 0x001A89F6 */

loc_001ABB0C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001ABB1C; /* je: equal / zero */

loc_001ABB11: ;
    ecx = eax;
    PUSH32(esp, 0x001ABB18u); RECOMP_ABI_CALL(0x001B7A50u, sub_001B7A50); /* call 0x001B7A50 */

loc_001ABB18: ;
    edi = eax;
    goto loc_001ABB1E;

loc_001ABB1C: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001ABB1E: ;
    esi = edi;
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
    if ((_fas < 0)) goto loc_001ABB52; /* js: sign (negative) */

loc_001ABB32: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, edi);
    PUSH32(esp, 0x001ABB40u); RECOMP_ABI_CALL(0x001B779Bu, sub_001B779B); /* call 0x001B779B */

loc_001ABB40: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001ABB52; /* jl: less (signed <) */

loc_001ABB46: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001ABB4Cu); RECOMP_ABI_CALL(0x001AA930u, sub_001AA930); /* call 0x001AA930 */

loc_001ABB4C: ;
    ecx = MEM32(esp + 0x14);
    MEM32(ecx) = eax;

loc_001ABB52: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001ABB5C; /* je: equal / zero */

loc_001ABB56: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001ABB5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ABB59u); } /* indirect call */
    }

loc_001ABB5C: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001ABB63
 * Original: 0x001ABB63 - 0x001ABBE0 (125 bytes, 48 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABB63(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001ABB63: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001ABB6Bu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001ABB6B: ;
    PUSH32(esp, 0x30);
    ebx = ZX8(LO8(eax));
    PUSH32(esp, 0x001ABB75u); RECOMP_ABI_CALL(0x001A89F6u, sub_001A89F6); /* call 0x001A89F6 */

loc_001ABB75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001ABB85; /* je: equal / zero */

loc_001ABB7A: ;
    ecx = eax;
    PUSH32(esp, 0x001ABB81u); RECOMP_ABI_CALL(0x001B80DBu, sub_001B80DB); /* call 0x001B80DB */

loc_001ABB81: ;
    edi = eax;
    goto loc_001ABB87;

loc_001ABB85: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001ABB87: ;
    esi = edi;
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
    if ((_fas < 0)) goto loc_001ABBBF; /* js: sign (negative) */

loc_001ABB9B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x18));
    eax = MEM32(edi);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x001ABBADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ABBAAu); } /* indirect call */
    }

loc_001ABBAD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001ABBBF; /* jl: less (signed <) */

loc_001ABBB3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001ABBB9u); RECOMP_ABI_CALL(0x001AA944u, sub_001AA944); /* call 0x001AA944 */

loc_001ABBB9: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = eax;

loc_001ABBBF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001ABBC9; /* je: equal / zero */

loc_001ABBC3: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001ABBC9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ABBC6u); } /* indirect call */
    }

loc_001ABBC9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001ABBD8; /* je: equal / zero */

loc_001ABBCD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ABBD8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ABBD2u); } /* indirect call */
    }

loc_001ABBD8: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001ABBE3
 * Original: 0x001ABBE3 - 0x001ABBFE (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABBE3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ABBE3: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001ABBEBu); RECOMP_ABI_CALL(0x001A918Cu, sub_001A918C); /* call 0x001A918C */

loc_001ABBEB: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ABBF8; /* je: equal / zero */

loc_001ABBF2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001ABBF8u); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001ABBF8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ABBFE
 * Original: 0x001ABBFE - 0x001ABC1B (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABBFE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ABBFE: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001ABC37(); return; } /* jne: not equal / not zero */

loc_001ABC0B: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 8), 0x200010 (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001ABC1B(); return; } /* je: equal / zero */

loc_001ABC14: ;
    eax = 0x1CE1B4;
    g_seh_ebp = ebp; sub_001ABC37(); return; /* tail jmp 0x001ABC37 */

}

/**
 * sub_001ABC1B
 * Original: 0x001ABC1B - 0x001ABC2A (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABC1B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ABC1B: ;
    _fa = (uint32_t)(MEM32(esi + 0xB0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xB0), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001ABC2A(); return; } /* je: equal / zero */

loc_001ABC23: ;
    eax = 0x1BA424;
    g_seh_ebp = ebp; sub_001ABC37(); return; /* tail jmp 0x001ABC37 */

}

/**
 * sub_001ABC2A
 * Original: 0x001ABC2A - 0x001ABC37 (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABC2A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ABC2A: ;
    eax = ZX8(MEM8(esi + 0xE));
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax * 4 + 0x1BA414);

    g_seh_ebp = ebp; sub_001ABC37(); return; /* fallthrough 0x001ABC37 */

}

/**
 * sub_001ABC37
 * Original: 0x001ABC37 - 0x001ABCAE (119 bytes, 41 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABC37(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ABC37: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001ABC5A; /* jbe: below or equal (unsigned <=) */

loc_001ABC3B: ;
    PUSH32(esp, edi);

loc_001ABC3C: ;
    edx = MEM32(eax + 4);
    SET_LO8(edx, MEM8(edx + ecx * 8));
    MEM8(esi + ecx + 0x28) = LO8(edx);
    edi = MEM32(eax + 4);
    edi = MEM32(edi + ecx * 8 + 4);
    edx = ZX8(LO8(edx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + edx * 4 + 0x30) = edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001ABC3C; /* jb: below (unsigned <) */

loc_001ABC59: ;
    POP32(esp, edi);

loc_001ABC5A: ;
    eax = MEM32(eax);
    MEM32(esi + 0x24) = eax;
    eax = MEM32(esi + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ABC82; /* je: equal / zero */

loc_001ABC69: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x82000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ABC82; /* je: equal / zero */

loc_001ABC75: ;
    PUSH32(esp, MEM32(eax + 0xD4));
    ecx = esi;
    PUSH32(esp, 0x001ABC82u); RECOMP_ABI_CALL(0x001A974Eu, sub_001A974E); /* call 0x001A974E */

loc_001ABC82: ;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001ABCC5(); return; } /* je: equal / zero */

loc_001ABC88: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 5 (32-bit) */
    PUSH32(esp, 2);
    POP32(esp, edx);
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001ABCAE(); return; } /* jb: below (unsigned <) */

loc_001ABC91: ;
    _fa = (uint32_t)(MEM8(esi + 0x2C)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x2C), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001ABCAE(); return; } /* jne: not equal / not zero */

loc_001ABC96: ;
    ecx = esi + 0xB4;
    eax = MEM32(ecx);
    _fa = (uint32_t)(MEM8(eax + 0x58)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x58), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001ABCC5(); return; } /* jne: not equal / not zero */

loc_001ABCA3: ;
    MEM32(eax + 0x58) = MEM32(eax + 0x58) | edx;
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ecx);
    MEM8(eax + 3) = MEM8(eax + 3) | 4;
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001ABCC5(); return; /* tail jmp 0x001ABCC5 */

}

/**
 * sub_001ABCAE
 * Original: 0x001ABCAE - 0x001ABCC5 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABCAE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ABCAE: ;
    ecx = esi + 0xB4;
    eax = MEM32(ecx);
    _fa = (uint32_t)(MEM8(eax + 0x58)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x58), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001ABCC5(); return; } /* je: equal / zero */

loc_001ABCBB: ;
    MEM32(eax + 0x58) = MEM32(eax + 0x58) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(ecx);
    MEM8(ecx + 3) = MEM8(ecx + 3) | 4;
    _fa = (uint32_t)(MEM8(ecx + 3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001ABCC5(); return; /* fallthrough 0x001ABCC5 */

}

/**
 * sub_001ABCC5
 * Original: 0x001ABCC5 - 0x001ABCC9 (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABCC5(void)
{

loc_001ABCC5: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ABCC9
 * Original: 0x001ABCC9 - 0x001ABD9C (211 bytes, 70 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001ABCC9(void)
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

loc_001ABCC9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ABCDFu); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001ABCDF: ;
    ecx = MEM32(esi + 0xB0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ABD41; /* je: equal / zero */

loc_001ABCE9: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x82000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ABD34; /* je: equal / zero */

loc_001ABCF5: ;
    eax = MEM32(eax + 0xD4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), edi (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_001ABD25; /* jbe: below or equal (unsigned <=) */

loc_001ABD05: ;
    eax = MEM32(esi + 0x24);
    edx = esi + 0x28;
    MEM32(ebp + -4) = eax;
    PUSH32(esp, ebx);

loc_001ABD0F: ;
    SET_LO8(eax, MEM8(edx));
    ebx = ZX8(LO8(eax));
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ABD1E; /* je: equal / zero */

loc_001ABD19: ;
    MEM8(ebp + edi + -16) = LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001ABD1E: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001ABD0F; /* jne: not equal / not zero */

loc_001ABD24: ;
    POP32(esp, ebx);

loc_001ABD25: ;
    eax = MEM32(ebp + -16);
    MEM32(esi + 0x28) = eax;
    eax = MEM32(ebp + -12);
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x24) = edi;

loc_001ABD34: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001ABD3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ABD37u); } /* indirect call */
    }

loc_001ABD3A: ;
    MEM32(esi + 0xB0) = MEM32(esi + 0xB0) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xB0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001ABD41: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ABD49u); RECOMP_ABI_CALL(0x001AA958u, sub_001AA958); /* call 0x001AA958 */

loc_001ABD49: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xB0) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001ABD8E; /* je: equal / zero */

loc_001ABD53: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x82000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ABD8E; /* je: equal / zero */

loc_001ABD5F: ;
    edi = MEM32(eax + 0xD4);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ABD71u); RECOMP_ABI_CALL(0x001A974Eu, sub_001A974E); /* call 0x001A974E */

loc_001ABD71: ;
    eax = ZX8(MEM8(esi + 0xE));
    MEM32(ebp + 8) = eax;
    PUSH32(esp, ecx);
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) / fp_top()); /* fdivr dword ptr [0x22c0d0] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ABD8Au); RECOMP_ABI_CALL(0x001A8B2Cu, sub_001A8B2C); /* call 0x001A8B2C */

loc_001ABD8A: ;
    MEM32(esi + edi * 4 + 0x30) = eax;

loc_001ABD8E: ;
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ABD96u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001ABD96: ;
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
 * sub_001ABD9C
 * Original: 0x001ABD9C - 0x001ABDC6 (42 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABD9C(void)
{

loc_001ABD9C: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    eax = esi + 0x14;
    MEM32(esi + 4) = 1;
    MEM32(esi) = 0x281E68;
    MEM32(esi + 0x18) = eax;
    MEM32(eax) = eax;
    PUSH32(esp, 0x001ABDBDu); RECOMP_ABI_CALL(0x001AA907u, sub_001AA907); /* call 0x001AA907 */

loc_001ABDBD: ;
    MEM32(esi + 8) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ABDC6
 * Original: 0x001ABDC6 - 0x001ABDE1 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABDC6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ABDC6: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001ABDCEu); RECOMP_ABI_CALL(0x001A97BCu, sub_001A97BC); /* call 0x001A97BC */

loc_001ABDCE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ABDDB; /* je: equal / zero */

loc_001ABDD5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001ABDDBu); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001ABDDB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ABDE1
 * Original: 0x001ABDE1 - 0x001ABE78 (151 bytes, 45 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABDE1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ABDE1: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x001ABDEBu); RECOMP_ABI_CALL(0x001AA96Du, sub_001AA96D); /* call 0x001AA96D */

loc_001ABDEB: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x001ABDFBu); RECOMP_ABI_CALL(0x001AA982u, sub_001AA982); /* call 0x001AA982 */

loc_001ABDFB: ;
    MEM32(esi + 0x10) = eax;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ABE74; /* je: equal / zero */

loc_001ABE04: ;
    ecx = MEM32(esi + 8);
    eax = esi + 0x14;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    ecx = MEM32(eax);
    MEM32(ecx + 4) = eax;
    eax = MEM32(0x1CE4A0);
    edx = eax;
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    ecx = 0x4000000;
    if (CMP_EQ(_fa, _fb)) goto loc_001ABE3A; /* je: equal / zero */

loc_001ABE33: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ABE56; /* je: equal / zero */

loc_001ABE3A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001ABE56; /* js: sign (negative) */

loc_001ABE3E: ;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0xB4);
    MEM32(eax + 0x58) = MEM32(eax + 0x58) | 1;
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0xB4);
    MEM32(eax) = MEM32(eax) | ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001ABE56: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xA), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ABE74; /* je: equal / zero */

loc_001ABE5F: ;
    eax = MEM32(eax + 0xB4);
    MEM32(eax + 0x58) = MEM32(eax + 0x58) | 4;
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0xB4);
    MEM32(eax) = MEM32(eax) | ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001ABE74: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001ABE78
 * Original: 0x001ABE78 - 0x001ABE9C (36 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABE78(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ABE78: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_001ABE8B; /* jne: not equal / not zero */

loc_001ABE85: ;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0x10);

loc_001ABE8B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ABE91u); RECOMP_ABI_CALL(0x001A8F37u, sub_001A8F37); /* call 0x001A8F37 */

loc_001ABE91: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001ABE98u); RECOMP_ABI_CALL(0x001A9809u, sub_001A9809); /* call 0x001A9809 */

loc_001ABE98: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001ABE9C
 * Original: 0x001ABE9C - 0x001ABEF0 (84 bytes, 34 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABE9C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001ABE9C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = esi + -28;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(edi + 0x10);
    eax = MEM32(eax + 0xB0);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001ABEE8; /* je: equal / zero */

loc_001ABEBF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001ABED1; /* je: equal / zero */

loc_001ABEC3: ;
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, 0x001ABECBu); RECOMP_ABI_CALL(0x001B594Au, sub_001B594A); /* call 0x001B594A */

loc_001ABECB: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001ABEE8; /* jl: less (signed <) */

loc_001ABED1: ;
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001ABEDAu); RECOMP_ABI_CALL(0x001ABCC9u, sub_001ABCC9); /* call 0x001ABCC9 */

loc_001ABEDA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001ABEE8; /* je: equal / zero */

loc_001ABEDE: ;
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, 0x001ABEE6u); RECOMP_ABI_CALL(0x001B583Du, sub_001B583D); /* call 0x001B583D */

loc_001ABEE6: ;
    ebx = eax;

loc_001ABEE8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001ABEF0
 * Original: 0x001ABEF0 - 0x001ABF0D (29 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABEF0(void)
{

loc_001ABEF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x001ABF01u); RECOMP_ABI_CALL(0x001ABBFEu, sub_001ABBFE); /* call 0x001ABBFE */

loc_001ABF01: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x001ABF09u); RECOMP_ABI_CALL(0x001B53A9u, sub_001B53A9); /* call 0x001B53A9 */

loc_001ABF09: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001ABF0D
 * Original: 0x001ABF0D - 0x001AC045 (312 bytes, 85 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001ABF0D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ABF0D: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + 0xB4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    MEM32(edx + 8) = esi;
    esi = MEM32(ecx + 8);
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0xC) = esi;
    esi = MEM32(ecx + 0xC);
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0x10) = esi;
    esi = MEM32(ecx + 0x10);
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0x14) = esi;
    esi = MEM32(ecx + 0x14);
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0x18) = esi;
    esi = MEM32(ecx + 0x18);
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0x1C) = esi;
    esi = MEM32(ecx + 0x1C);
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0x20) = esi;
    esi = MEM32(ecx + 0x20);
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0x24) = esi;
    esi = MEM32(ecx + 0x24);
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0x28) = esi;
    esi = MEM32(ecx + 0x28);
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0x2C) = esi;
    esi = MEM32(ecx + 0x2C);
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0x30) = esi;
    esi = MEM32(ecx + 0x30);
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0x34) = esi;
    esi = MEM32(ecx + 0x34);
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0x38) = esi;
    esi = MEM32(ecx + 0x38);
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0x3C) = esi;
    esi = MEM32(ecx + 0x3C);
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0x40) = esi;
    esi = MEM32(ecx + 0x40);
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0x44) = esi;
    esi = MEM32(ecx + 0x44);
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0x48) = esi;
    edx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x48);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0x4C) = ecx;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0xB4);
    MEM16(ecx + 2) = MEM16(ecx + 2) | 0xFFFF;
    _fa = (uint32_t)(MEM16(ecx + 2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    POP32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_001AC040; /* jne: not equal / not zero */

loc_001AC03A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AC040u); RECOMP_ABI_CALL(0x001A98B7u, sub_001A98B7); /* call 0x001A98B7 */

loc_001AC040: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AC045
 * Original: 0x001AC045 - 0x001AC088 (67 bytes, 18 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001AC045(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AC045: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0xB4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x20) = edx;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0xB4);
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0x24) = edx;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0xB4);
    MEM8(ecx + 2) = MEM8(ecx + 2) | 4;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AC083; /* jne: not equal / not zero */

loc_001AC07D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AC083u); RECOMP_ABI_CALL(0x001A98B7u, sub_001A98B7); /* call 0x001A98B7 */

loc_001AC083: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001AC088
 * Original: 0x001AC088 - 0x001AC0DA (82 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AC088(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AC088: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0xB4);
    edx = MEM32(ebp + 0xC);
    MEM32(ecx + 0x28) = edx;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0xB4);
    edx = MEM32(ebp + 0x10);
    MEM32(ecx + 0x2C) = edx;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0xB4);
    edx = MEM32(ebp + 0x14);
    MEM32(ecx + 0x30) = edx;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0xB4);
    MEM8(ecx + 2) = MEM8(ecx + 2) | 8;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(ebp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x18), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AC0D4; /* jne: not equal / not zero */

loc_001AC0CE: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AC0D4u); RECOMP_ABI_CALL(0x001A98B7u, sub_001A98B7); /* call 0x001A98B7 */

loc_001AC0D4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001AC0DA
 * Original: 0x001AC0DA - 0x001AC10D (51 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001AC0DA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AC0DA: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax + 0xB4);
    edx = MEM32(esp + 8);
    MEM32(eax + 0x34) = edx;
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax + 0xB4);
    MEM8(eax + 2) = MEM8(eax + 2) | 0x10;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AC108; /* jne: not equal / not zero */

loc_001AC102: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AC108u); RECOMP_ABI_CALL(0x001A98B7u, sub_001A98B7); /* call 0x001A98B7 */

loc_001AC108: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AC10D
 * Original: 0x001AC10D - 0x001AC140 (51 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001AC10D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AC10D: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax + 0xB4);
    edx = MEM32(esp + 8);
    MEM32(eax + 0x3C) = edx;
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax + 0xB4);
    MEM8(eax + 2) = MEM8(eax + 2) | 0x20;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AC13B; /* jne: not equal / not zero */

loc_001AC135: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AC13Bu); RECOMP_ABI_CALL(0x001A98B7u, sub_001A98B7); /* call 0x001A98B7 */

loc_001AC13B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AC140
 * Original: 0x001AC140 - 0x001AC173 (51 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001AC140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AC140: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax + 0xB4);
    edx = MEM32(esp + 8);
    MEM32(eax + 0x38) = edx;
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax + 0xB4);
    MEM8(eax + 2) = MEM8(eax + 2) | 0x20;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AC16E; /* jne: not equal / not zero */

loc_001AC168: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AC16Eu); RECOMP_ABI_CALL(0x001A98B7u, sub_001A98B7); /* call 0x001A98B7 */

loc_001AC16E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AC173
 * Original: 0x001AC173 - 0x001AC1A6 (51 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001AC173(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AC173: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax + 0xB4);
    edx = MEM32(esp + 8);
    MEM32(eax + 0x40) = edx;
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax + 0xB4);
    MEM8(eax + 2) = MEM8(eax + 2) | 0x40;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AC1A1; /* jne: not equal / not zero */

loc_001AC19B: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AC1A1u); RECOMP_ABI_CALL(0x001A98B7u, sub_001A98B7); /* call 0x001A98B7 */

loc_001AC1A1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AC1A6
 * Original: 0x001AC1A6 - 0x001AC1F8 (82 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AC1A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AC1A6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0xB4);
    edx = MEM32(ebp + 0xC);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0xB4);
    edx = MEM32(ebp + 0x10);
    MEM32(ecx + 0xC) = edx;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0xB4);
    edx = MEM32(ebp + 0x14);
    MEM32(ecx + 0x10) = edx;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0xB4);
    MEM8(ecx + 2) = MEM8(ecx + 2) | 1;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(ebp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x18), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AC1F2; /* jne: not equal / not zero */

loc_001AC1EC: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AC1F2u); RECOMP_ABI_CALL(0x001A98B7u, sub_001A98B7); /* call 0x001A98B7 */

loc_001AC1F2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001AC1F8
 * Original: 0x001AC1F8 - 0x001AC24A (82 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AC1F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AC1F8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0xB4);
    edx = MEM32(ebp + 0xC);
    MEM32(ecx + 0x14) = edx;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0xB4);
    edx = MEM32(ebp + 0x10);
    MEM32(ecx + 0x18) = edx;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0xB4);
    edx = MEM32(ebp + 0x14);
    MEM32(ecx + 0x1C) = edx;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0xB4);
    MEM8(ecx + 2) = MEM8(ecx + 2) | 2;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(ebp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x18), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AC244; /* jne: not equal / not zero */

loc_001AC23E: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AC244u); RECOMP_ABI_CALL(0x001A98B7u, sub_001A98B7); /* call 0x001A98B7 */

loc_001AC244: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001AC24A
 * Original: 0x001AC24A - 0x001AC27D (51 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001AC24A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AC24A: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax + 0xB4);
    edx = MEM32(esp + 8);
    MEM32(eax + 0x44) = edx;
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax + 0xB4);
    MEM8(eax + 2) = MEM8(eax + 2) | 0x80;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AC278; /* jne: not equal / not zero */

loc_001AC272: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AC278u); RECOMP_ABI_CALL(0x001A98B7u, sub_001A98B7); /* call 0x001A98B7 */

loc_001AC278: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AC27D
 * Original: 0x001AC27D - 0x001AC2B0 (51 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001AC27D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AC27D: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax + 0xB4);
    edx = MEM32(esp + 8);
    MEM32(eax + 0x4C) = edx;
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax + 0xB4);
    MEM8(eax + 3) = MEM8(eax + 3) | 2;
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AC2AB; /* jne: not equal / not zero */

loc_001AC2A5: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AC2ABu); RECOMP_ABI_CALL(0x001A98B7u, sub_001A98B7); /* call 0x001A98B7 */

loc_001AC2AB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AC2B0
 * Original: 0x001AC2B0 - 0x001AC2E3 (51 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001AC2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AC2B0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax + 0xB4);
    edx = MEM32(esp + 8);
    MEM32(eax + 0x48) = edx;
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax + 0xB4);
    MEM8(eax + 3) = MEM8(eax + 3) | 1;
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AC2DE; /* jne: not equal / not zero */

loc_001AC2D8: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AC2DEu); RECOMP_ABI_CALL(0x001A98B7u, sub_001A98B7); /* call 0x001A98B7 */

loc_001AC2DE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AC2E3
 * Original: 0x001AC2E3 - 0x001AC326 (67 bytes, 18 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001AC2E3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AC2E3: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0xB4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x50) = edx;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0xB4);
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0x54) = edx;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0xB4);
    MEM8(ecx + 3) = MEM8(ecx + 3) | 1;
    _fa = (uint32_t)(MEM8(ecx + 3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AC321; /* jne: not equal / not zero */

loc_001AC31B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AC321u); RECOMP_ABI_CALL(0x001A98B7u, sub_001A98B7); /* call 0x001A98B7 */

loc_001AC321: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001AC326
 * Original: 0x001AC326 - 0x001AC3F0 (202 bytes, 49 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001AC326(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AC326: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + 0xB4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    MEM32(edx + 0x80) = esi;
    esi = MEM32(ecx + 4);
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0x84) = esi;
    esi = MEM32(ecx + 8);
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0x88) = esi;
    esi = MEM32(ecx + 0xC);
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0x8C) = esi;
    esi = MEM32(ecx + 0x10);
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0x90) = esi;
    esi = MEM32(ecx + 0x14);
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0x94) = esi;
    esi = MEM32(ecx + 0x18);
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0x98) = esi;
    esi = MEM32(ecx + 0x1C);
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0x9C) = esi;
    edx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x20);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0xA0) = ecx;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0xB4);
    MEM8(ecx + 0x7E) = MEM8(ecx + 0x7E) | 0x7F;
    _fa = (uint32_t)(MEM8(ecx + 0x7E)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    POP32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_001AC3EB; /* jne: not equal / not zero */

loc_001AC3E5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AC3EBu); RECOMP_ABI_CALL(0x001A98B7u, sub_001A98B7); /* call 0x001A98B7 */

loc_001AC3EB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AC3F0
 * Original: 0x001AC3F0 - 0x001AC414 (36 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC3F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AC3F0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xCC) = MEM32(ecx + 0xCC) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0xCC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0xC4) = eax;
    eax = MEM32(esp + 8);
    MEM32(ecx + 0xC8) = eax;
    MEM32(ecx + 0xD0) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AC414
 * Original: 0x001AC414 - 0x001AC42C (24 bytes, 8 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC414(void)
{

loc_001AC414: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x001AC420u); RECOMP_ABI_CALL(0x001ABD9Cu, sub_001ABD9C); /* call 0x001ABD9C */

loc_001AC420: ;
    MEM32(esi) = 0x281E78;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AC42C
 * Original: 0x001AC42C - 0x001AC447 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC42C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AC42C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001AC434u); RECOMP_ABI_CALL(0x001A9B15u, sub_001A9B15); /* call 0x001A9B15 */

loc_001AC434: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AC441; /* je: equal / zero */

loc_001AC43B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AC441u); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001AC441: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AC447
 * Original: 0x001AC447 - 0x001AC4C7 (128 bytes, 42 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AC447(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AC447: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AC450u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AC450: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    edi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AC472; /* je: equal / zero */

loc_001AC45C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AC46B; /* je: equal / zero */

loc_001AC460: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AC46Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AC465u); } /* indirect call */
    }

loc_001AC46B: ;
    eax = 0x80004005u;
    goto loc_001AC4C2;

loc_001AC472: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(ebp + 8);
    ecx = MEM32(edx + 0x1C);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001AC494; /* je: equal / zero */

loc_001AC480: ;
    esi = MEM32(ebp + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0xC0) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001AC49D; /* jbe: below or equal (unsigned <=) */

loc_001AC48D: ;
    esi = 0x88780032u;
    goto loc_001AC4B0;

loc_001AC494: ;
    eax = MEM32(ecx + 0xC0);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001AC49D: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AC4A6u); RECOMP_ABI_CALL(0x001AC3F0u, sub_001AC3F0); /* call 0x001AC3F0 */

loc_001AC4A6: ;
    ecx = MEM32(edx + 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AC4AEu); RECOMP_ABI_CALL(0x001B6619u, sub_001B6619); /* call 0x001B6619 */

loc_001AC4AE: ;
    esi = eax;

loc_001AC4B0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AC4BF; /* je: equal / zero */

loc_001AC4B4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AC4BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AC4B9u); } /* indirect call */
    }

loc_001AC4BF: ;
    eax = esi;
    POP32(esp, esi);

loc_001AC4C2: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AC4C7
 * Original: 0x001AC4C7 - 0x001AC4E2 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC4C7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AC4C7: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001AC4CFu); RECOMP_ABI_CALL(0x001AA09Bu, sub_001AA09B); /* call 0x001AA09B */

loc_001AC4CF: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AC4DC; /* je: equal / zero */

loc_001AC4D6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AC4DCu); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001AC4DC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AC4ED
 * Original: 0x001AC4ED - 0x001AC515 (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC4ED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AC4ED: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AC4F3u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AC4F3: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AC515(); return; } /* je: equal / zero */

loc_001AC4FF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AC50E; /* je: equal / zero */

loc_001AC503: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AC50Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AC508u); } /* indirect call */
    }

loc_001AC50E: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001AC537(); return; /* tail jmp 0x001AC537 */

}

/**
 * sub_001AC515
 * Original: 0x001AC515 - 0x001AC537 (34 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC515(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AC515: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x001AC523u); RECOMP_ABI_CALL(0x001ABE78u, sub_001ABE78); /* call 0x001ABE78 */

loc_001AC523: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AC534; /* je: equal / zero */

loc_001AC529: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AC534u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AC52Eu); } /* indirect call */
    }

loc_001AC534: ;
    eax = edi;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001AC537(); return; /* fallthrough 0x001AC537 */

}

/**
 * sub_001AC537
 * Original: 0x001AC537 - 0x001AC53B (4 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC537(void)
{

loc_001AC537: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AC53B
 * Original: 0x001AC53B - 0x001AC589 (78 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC53B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AC53B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AC541u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AC541: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AC563; /* je: equal / zero */

loc_001AC54D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AC55C; /* je: equal / zero */

loc_001AC551: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AC55Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AC556u); } /* indirect call */
    }

loc_001AC55C: ;
    eax = 0x80004005u;
    goto loc_001AC585;

loc_001AC563: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x001AC571u); RECOMP_ABI_CALL(0x001ABE9Cu, sub_001ABE9C); /* call 0x001ABE9C */

loc_001AC571: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AC582; /* je: equal / zero */

loc_001AC577: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AC582u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AC57Cu); } /* indirect call */
    }

loc_001AC582: ;
    eax = edi;
    POP32(esp, edi);

loc_001AC585: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AC589
 * Original: 0x001AC589 - 0x001AC5B1 (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC589(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AC589: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AC58Fu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AC58F: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AC5B1(); return; } /* je: equal / zero */

loc_001AC59B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AC5AA; /* je: equal / zero */

loc_001AC59F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AC5AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AC5A4u); } /* indirect call */
    }

loc_001AC5AA: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001AC5D3(); return; /* tail jmp 0x001AC5D3 */

}

/**
 * sub_001AC5B1
 * Original: 0x001AC5B1 - 0x001AC5D3 (34 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC5B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AC5B1: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x001AC5BFu); RECOMP_ABI_CALL(0x001ABEF0u, sub_001ABEF0); /* call 0x001ABEF0 */

loc_001AC5BF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AC5D0; /* je: equal / zero */

loc_001AC5C5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AC5D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AC5CAu); } /* indirect call */
    }

loc_001AC5D0: ;
    eax = edi;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001AC5D3(); return; /* fallthrough 0x001AC5D3 */

}

/**
 * sub_001AC5D3
 * Original: 0x001AC5D3 - 0x001AC5D7 (4 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC5D3(void)
{

loc_001AC5D3: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AC5D7
 * Original: 0x001AC5D7 - 0x001AC629 (82 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC5D7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AC5D7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AC5DDu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AC5DD: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AC5FF; /* je: equal / zero */

loc_001AC5E9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AC5F8; /* je: equal / zero */

loc_001AC5ED: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AC5F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AC5F2u); } /* indirect call */
    }

loc_001AC5F8: ;
    eax = 0x80004005u;
    goto loc_001AC625;

loc_001AC5FF: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x001AC611u); RECOMP_ABI_CALL(0x001ABF0Du, sub_001ABF0D); /* call 0x001ABF0D */

loc_001AC611: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AC622; /* je: equal / zero */

loc_001AC617: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AC622u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AC61Cu); } /* indirect call */
    }

loc_001AC622: ;
    eax = edi;
    POP32(esp, edi);

loc_001AC625: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AC629
 * Original: 0x001AC629 - 0x001AC67F (86 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC629(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AC629: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AC62Fu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AC62F: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AC651; /* je: equal / zero */

loc_001AC63B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AC64A; /* je: equal / zero */

loc_001AC63F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AC64Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AC644u); } /* indirect call */
    }

loc_001AC64A: ;
    eax = 0x80004005u;
    goto loc_001AC67B;

loc_001AC651: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x001AC667u); RECOMP_ABI_CALL(0x001AC045u, sub_001AC045); /* call 0x001AC045 */

loc_001AC667: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AC678; /* je: equal / zero */

loc_001AC66D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AC678u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AC672u); } /* indirect call */
    }

loc_001AC678: ;
    eax = edi;
    POP32(esp, edi);

loc_001AC67B: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001AC67F
 * Original: 0x001AC67F - 0x001AC6E6 (103 bytes, 34 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AC67F(void)
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

loc_001AC67F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AC688u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AC688: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AC6AA; /* je: equal / zero */

loc_001AC694: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AC6A3; /* je: equal / zero */

loc_001AC698: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AC6A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AC69Du); } /* indirect call */
    }

loc_001AC6A3: ;
    eax = 0x80004005u;
    goto loc_001AC6E1;

loc_001AC6AA: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x18));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AC6CDu); RECOMP_ABI_CALL(0x001AC088u, sub_001AC088); /* call 0x001AC088 */

loc_001AC6CD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AC6DE; /* je: equal / zero */

loc_001AC6D3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AC6DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AC6D8u); } /* indirect call */
    }

loc_001AC6DE: ;
    eax = edi;
    POP32(esp, edi);

loc_001AC6E1: ;
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
 * sub_001AC6E6
 * Original: 0x001AC6E6 - 0x001AC738 (82 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC6E6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AC6E6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AC6ECu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AC6EC: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AC70E; /* je: equal / zero */

loc_001AC6F8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AC707; /* je: equal / zero */

loc_001AC6FC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AC707u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AC701u); } /* indirect call */
    }

loc_001AC707: ;
    eax = 0x80004005u;
    goto loc_001AC734;

loc_001AC70E: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x001AC720u); RECOMP_ABI_CALL(0x001AC0DAu, sub_001AC0DA); /* call 0x001AC0DA */

loc_001AC720: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AC731; /* je: equal / zero */

loc_001AC726: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AC731u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AC72Bu); } /* indirect call */
    }

loc_001AC731: ;
    eax = edi;
    POP32(esp, edi);

loc_001AC734: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AC738
 * Original: 0x001AC738 - 0x001AC78E (86 bytes, 27 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC738(void)
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

loc_001AC738: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AC73Eu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AC73E: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AC760; /* je: equal / zero */

loc_001AC74A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AC759; /* je: equal / zero */

loc_001AC74E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AC759u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AC753u); } /* indirect call */
    }

loc_001AC759: ;
    eax = 0x80004005u;
    goto loc_001AC78A;

loc_001AC760: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x001AC776u); RECOMP_ABI_CALL(0x001AC10Du, sub_001AC10D); /* call 0x001AC10D */

loc_001AC776: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AC787; /* je: equal / zero */

loc_001AC77C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AC787u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AC781u); } /* indirect call */
    }

loc_001AC787: ;
    eax = edi;
    POP32(esp, edi);

loc_001AC78A: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AC78E
 * Original: 0x001AC78E - 0x001AC7B6 (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC78E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AC78E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AC794u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AC794: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AC7B6(); return; } /* je: equal / zero */

loc_001AC7A0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AC7AF; /* je: equal / zero */

loc_001AC7A4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AC7AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AC7A9u); } /* indirect call */
    }

loc_001AC7AF: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001AC7E0(); return; /* tail jmp 0x001AC7E0 */

}

/**
 * sub_001AC7B6
 * Original: 0x001AC7B6 - 0x001AC7E0 (42 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC7B6(void)
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

loc_001AC7B6: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x001AC7CCu); RECOMP_ABI_CALL(0x001AC140u, sub_001AC140); /* call 0x001AC140 */

loc_001AC7CC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AC7DD; /* je: equal / zero */

loc_001AC7D2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AC7DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AC7D7u); } /* indirect call */
    }

loc_001AC7DD: ;
    eax = edi;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001AC7E0(); return; /* fallthrough 0x001AC7E0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AC7E0
 * Original: 0x001AC7E0 - 0x001AC7E4 (4 bytes, 2 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC7E0(void)
{

loc_001AC7E0: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AC7E4
 * Original: 0x001AC7E4 - 0x001AC836 (82 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC7E4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AC7E4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AC7EAu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AC7EA: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AC80C; /* je: equal / zero */

loc_001AC7F6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AC805; /* je: equal / zero */

loc_001AC7FA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AC805u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AC7FFu); } /* indirect call */
    }

loc_001AC805: ;
    eax = 0x80004005u;
    goto loc_001AC832;

loc_001AC80C: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x001AC81Eu); RECOMP_ABI_CALL(0x001AC173u, sub_001AC173); /* call 0x001AC173 */

loc_001AC81E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AC82F; /* je: equal / zero */

loc_001AC824: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AC82Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AC829u); } /* indirect call */
    }

loc_001AC82F: ;
    eax = edi;
    POP32(esp, edi);

loc_001AC832: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AC836
 * Original: 0x001AC836 - 0x001AC861 (43 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AC836(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AC836: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AC83Fu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AC83F: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AC861(); return; } /* je: equal / zero */

loc_001AC84B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AC85A; /* je: equal / zero */

loc_001AC84F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AC85Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AC854u); } /* indirect call */
    }

loc_001AC85A: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001AC898(); return; /* tail jmp 0x001AC898 */

}

/**
 * sub_001AC861
 * Original: 0x001AC861 - 0x001AC898 (55 bytes, 18 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC861(void)
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

loc_001AC861: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x18));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001AC884u); RECOMP_ABI_CALL(0x001AC1A6u, sub_001AC1A6); /* call 0x001AC1A6 */

loc_001AC884: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AC895; /* je: equal / zero */

loc_001AC88A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AC895u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AC88Fu); } /* indirect call */
    }

loc_001AC895: ;
    eax = edi;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001AC898(); return; /* fallthrough 0x001AC898 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AC898
 * Original: 0x001AC898 - 0x001AC89D (5 bytes, 3 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC898(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AC898: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001AC89D
 * Original: 0x001AC89D - 0x001AC8C8 (43 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AC89D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AC89D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AC8A6u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AC8A6: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AC8C8(); return; } /* je: equal / zero */

loc_001AC8B2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AC8C1; /* je: equal / zero */

loc_001AC8B6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AC8C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AC8BBu); } /* indirect call */
    }

loc_001AC8C1: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001AC8FF(); return; /* tail jmp 0x001AC8FF */

}

/**
 * sub_001AC8C8
 * Original: 0x001AC8C8 - 0x001AC8FF (55 bytes, 18 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC8C8(void)
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

loc_001AC8C8: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x18));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001AC8EBu); RECOMP_ABI_CALL(0x001AC1F8u, sub_001AC1F8); /* call 0x001AC1F8 */

loc_001AC8EB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AC8FC; /* je: equal / zero */

loc_001AC8F1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AC8FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AC8F6u); } /* indirect call */
    }

loc_001AC8FC: ;
    eax = edi;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001AC8FF(); return; /* fallthrough 0x001AC8FF */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AC8FF
 * Original: 0x001AC8FF - 0x001AC904 (5 bytes, 3 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC8FF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AC8FF: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001AC904
 * Original: 0x001AC904 - 0x001AC95A (86 bytes, 27 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC904(void)
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

loc_001AC904: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AC90Au); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AC90A: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AC92C; /* je: equal / zero */

loc_001AC916: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AC925; /* je: equal / zero */

loc_001AC91A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AC925u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AC91Fu); } /* indirect call */
    }

loc_001AC925: ;
    eax = 0x80004005u;
    goto loc_001AC956;

loc_001AC92C: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x001AC942u); RECOMP_ABI_CALL(0x001AC24Au, sub_001AC24A); /* call 0x001AC24A */

loc_001AC942: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AC953; /* je: equal / zero */

loc_001AC948: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AC953u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AC94Du); } /* indirect call */
    }

loc_001AC953: ;
    eax = edi;
    POP32(esp, edi);

loc_001AC956: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AC95A
 * Original: 0x001AC95A - 0x001AC9B0 (86 bytes, 27 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC95A(void)
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

loc_001AC95A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AC960u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AC960: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AC982; /* je: equal / zero */

loc_001AC96C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AC97B; /* je: equal / zero */

loc_001AC970: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AC97Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AC975u); } /* indirect call */
    }

loc_001AC97B: ;
    eax = 0x80004005u;
    goto loc_001AC9AC;

loc_001AC982: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x001AC998u); RECOMP_ABI_CALL(0x001AC27Du, sub_001AC27D); /* call 0x001AC27D */

loc_001AC998: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AC9A9; /* je: equal / zero */

loc_001AC99E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AC9A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AC9A3u); } /* indirect call */
    }

loc_001AC9A9: ;
    eax = edi;
    POP32(esp, edi);

loc_001AC9AC: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AC9B0
 * Original: 0x001AC9B0 - 0x001ACA06 (86 bytes, 27 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC9B0(void)
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

loc_001AC9B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AC9B6u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AC9B6: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AC9D8; /* je: equal / zero */

loc_001AC9C2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AC9D1; /* je: equal / zero */

loc_001AC9C6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AC9D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AC9CBu); } /* indirect call */
    }

loc_001AC9D1: ;
    eax = 0x80004005u;
    goto loc_001ACA02;

loc_001AC9D8: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x001AC9EEu); RECOMP_ABI_CALL(0x001AC2B0u, sub_001AC2B0); /* call 0x001AC2B0 */

loc_001AC9EE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AC9FF; /* je: equal / zero */

loc_001AC9F4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AC9FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AC9F9u); } /* indirect call */
    }

loc_001AC9FF: ;
    eax = edi;
    POP32(esp, edi);

loc_001ACA02: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001ACA06
 * Original: 0x001ACA06 - 0x001ACA5C (86 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACA06(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ACA06: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001ACA0Cu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001ACA0C: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001ACA2E; /* je: equal / zero */

loc_001ACA18: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ACA27; /* je: equal / zero */

loc_001ACA1C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACA27u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACA21u); } /* indirect call */
    }

loc_001ACA27: ;
    eax = 0x80004005u;
    goto loc_001ACA58;

loc_001ACA2E: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x001ACA44u); RECOMP_ABI_CALL(0x001AC2E3u, sub_001AC2E3); /* call 0x001AC2E3 */

loc_001ACA44: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001ACA55; /* je: equal / zero */

loc_001ACA4A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACA55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACA4Fu); } /* indirect call */
    }

loc_001ACA55: ;
    eax = edi;
    POP32(esp, edi);

loc_001ACA58: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001ACA5C
 * Original: 0x001ACA5C - 0x001ACAAE (82 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACA5C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ACA5C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001ACA62u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001ACA62: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001ACA84; /* je: equal / zero */

loc_001ACA6E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ACA7D; /* je: equal / zero */

loc_001ACA72: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACA7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACA77u); } /* indirect call */
    }

loc_001ACA7D: ;
    eax = 0x80004005u;
    goto loc_001ACAAA;

loc_001ACA84: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x001ACA96u); RECOMP_ABI_CALL(0x001AC326u, sub_001AC326); /* call 0x001AC326 */

loc_001ACA96: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001ACAA7; /* je: equal / zero */

loc_001ACA9C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACAA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACAA1u); } /* indirect call */
    }

loc_001ACAA7: ;
    eax = edi;
    POP32(esp, edi);

loc_001ACAAA: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001ACAAE
 * Original: 0x001ACAAE - 0x001ACB00 (82 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACAAE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ACAAE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001ACAB4u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001ACAB4: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001ACAD6; /* je: equal / zero */

loc_001ACAC0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ACACF; /* je: equal / zero */

loc_001ACAC4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACACFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACAC9u); } /* indirect call */
    }

loc_001ACACF: ;
    eax = 0x80004005u;
    goto loc_001ACAFC;

loc_001ACAD6: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ACAE8u); RECOMP_ABI_CALL(0x001ABE78u, sub_001ABE78); /* call 0x001ABE78 */

loc_001ACAE8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001ACAF9; /* je: equal / zero */

loc_001ACAEE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACAF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACAF3u); } /* indirect call */
    }

loc_001ACAF9: ;
    eax = edi;
    POP32(esp, edi);

loc_001ACAFC: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001ACB00
 * Original: 0x001ACB00 - 0x001ACB52 (82 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ACB00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001ACB06u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001ACB06: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001ACB28; /* je: equal / zero */

loc_001ACB12: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ACB21; /* je: equal / zero */

loc_001ACB16: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACB21u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACB1Bu); } /* indirect call */
    }

loc_001ACB21: ;
    eax = 0x80004005u;
    goto loc_001ACB4E;

loc_001ACB28: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ACB3Au); RECOMP_ABI_CALL(0x001ABE9Cu, sub_001ABE9C); /* call 0x001ABE9C */

loc_001ACB3A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001ACB4B; /* je: equal / zero */

loc_001ACB40: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACB4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACB45u); } /* indirect call */
    }

loc_001ACB4B: ;
    eax = edi;
    POP32(esp, edi);

loc_001ACB4E: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001ACB52
 * Original: 0x001ACB52 - 0x001ACB7A (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACB52(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ACB52: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001ACB58u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001ACB58: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001ACB7A(); return; } /* je: equal / zero */

loc_001ACB64: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ACB73; /* je: equal / zero */

loc_001ACB68: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACB73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACB6Du); } /* indirect call */
    }

loc_001ACB73: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001ACBA0(); return; /* tail jmp 0x001ACBA0 */

}

/**
 * sub_001ACB7A
 * Original: 0x001ACB7A - 0x001ACBA0 (38 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACB7A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ACB7A: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ACB8Cu); RECOMP_ABI_CALL(0x001ABEF0u, sub_001ABEF0); /* call 0x001ABEF0 */

loc_001ACB8C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001ACB9D; /* je: equal / zero */

loc_001ACB92: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACB9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACB97u); } /* indirect call */
    }

loc_001ACB9D: ;
    eax = edi;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001ACBA0(); return; /* fallthrough 0x001ACBA0 */

}

/**
 * sub_001ACBA0
 * Original: 0x001ACBA0 - 0x001ACBA4 (4 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACBA0(void)
{

loc_001ACBA0: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001ACBA4
 * Original: 0x001ACBA4 - 0x001ACBFA (86 bytes, 27 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACBA4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ACBA4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001ACBAAu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001ACBAA: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001ACBCC; /* je: equal / zero */

loc_001ACBB6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ACBC5; /* je: equal / zero */

loc_001ACBBA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACBC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACBBFu); } /* indirect call */
    }

loc_001ACBC5: ;
    eax = 0x80004005u;
    goto loc_001ACBF6;

loc_001ACBCC: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ACBE2u); RECOMP_ABI_CALL(0x001ABF0Du, sub_001ABF0D); /* call 0x001ABF0D */

loc_001ACBE2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001ACBF3; /* je: equal / zero */

loc_001ACBE8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACBF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACBEDu); } /* indirect call */
    }

loc_001ACBF3: ;
    eax = edi;
    POP32(esp, edi);

loc_001ACBF6: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001ACBFA
 * Original: 0x001ACBFA - 0x001ACC54 (90 bytes, 28 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACBFA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ACBFA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001ACC00u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001ACC00: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001ACC22; /* je: equal / zero */

loc_001ACC0C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ACC1B; /* je: equal / zero */

loc_001ACC10: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACC1Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACC15u); } /* indirect call */
    }

loc_001ACC1B: ;
    eax = 0x80004005u;
    goto loc_001ACC50;

loc_001ACC22: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x18));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ACC3Cu); RECOMP_ABI_CALL(0x001AC045u, sub_001AC045); /* call 0x001AC045 */

loc_001ACC3C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001ACC4D; /* je: equal / zero */

loc_001ACC42: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACC4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACC47u); } /* indirect call */
    }

loc_001ACC4D: ;
    eax = edi;
    POP32(esp, edi);

loc_001ACC50: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001ACC54
 * Original: 0x001ACC54 - 0x001ACCBF (107 bytes, 36 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001ACC54(void)
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

loc_001ACC54: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ACC5Du); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001ACC5D: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001ACC7F; /* je: equal / zero */

loc_001ACC69: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ACC78; /* je: equal / zero */

loc_001ACC6D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACC78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACC72u); } /* indirect call */
    }

loc_001ACC78: ;
    eax = 0x80004005u;
    goto loc_001ACCBA;

loc_001ACC7F: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x18));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ACCA6u); RECOMP_ABI_CALL(0x001AC088u, sub_001AC088); /* call 0x001AC088 */

loc_001ACCA6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001ACCB7; /* je: equal / zero */

loc_001ACCAC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACCB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACCB1u); } /* indirect call */
    }

loc_001ACCB7: ;
    eax = edi;
    POP32(esp, edi);

loc_001ACCBA: ;
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
 * sub_001ACCBF
 * Original: 0x001ACCBF - 0x001ACD15 (86 bytes, 27 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACCBF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ACCBF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001ACCC5u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001ACCC5: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001ACCE7; /* je: equal / zero */

loc_001ACCD1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ACCE0; /* je: equal / zero */

loc_001ACCD5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACCE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACCDAu); } /* indirect call */
    }

loc_001ACCE0: ;
    eax = 0x80004005u;
    goto loc_001ACD11;

loc_001ACCE7: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ACCFDu); RECOMP_ABI_CALL(0x001AC0DAu, sub_001AC0DA); /* call 0x001AC0DA */

loc_001ACCFD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001ACD0E; /* je: equal / zero */

loc_001ACD03: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACD0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACD08u); } /* indirect call */
    }

loc_001ACD0E: ;
    eax = edi;
    POP32(esp, edi);

loc_001ACD11: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001ACD15
 * Original: 0x001ACD15 - 0x001ACD6F (90 bytes, 29 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACD15(void)
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

loc_001ACD15: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001ACD1Bu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001ACD1B: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001ACD3D; /* je: equal / zero */

loc_001ACD27: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ACD36; /* je: equal / zero */

loc_001ACD2B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACD36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACD30u); } /* indirect call */
    }

loc_001ACD36: ;
    eax = 0x80004005u;
    goto loc_001ACD6B;

loc_001ACD3D: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ACD57u); RECOMP_ABI_CALL(0x001AC10Du, sub_001AC10D); /* call 0x001AC10D */

loc_001ACD57: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001ACD68; /* je: equal / zero */

loc_001ACD5D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACD68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACD62u); } /* indirect call */
    }

loc_001ACD68: ;
    eax = edi;
    POP32(esp, edi);

loc_001ACD6B: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001ACD6F
 * Original: 0x001ACD6F - 0x001ACDC9 (90 bytes, 29 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACD6F(void)
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

loc_001ACD6F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001ACD75u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001ACD75: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001ACD97; /* je: equal / zero */

loc_001ACD81: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ACD90; /* je: equal / zero */

loc_001ACD85: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACD90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACD8Au); } /* indirect call */
    }

loc_001ACD90: ;
    eax = 0x80004005u;
    goto loc_001ACDC5;

loc_001ACD97: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ACDB1u); RECOMP_ABI_CALL(0x001AC140u, sub_001AC140); /* call 0x001AC140 */

loc_001ACDB1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001ACDC2; /* je: equal / zero */

loc_001ACDB7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACDC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACDBCu); } /* indirect call */
    }

loc_001ACDC2: ;
    eax = edi;
    POP32(esp, edi);

loc_001ACDC5: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001ACDC9
 * Original: 0x001ACDC9 - 0x001ACE1F (86 bytes, 27 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACDC9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ACDC9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001ACDCFu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001ACDCF: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001ACDF1; /* je: equal / zero */

loc_001ACDDB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ACDEA; /* je: equal / zero */

loc_001ACDDF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACDEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACDE4u); } /* indirect call */
    }

loc_001ACDEA: ;
    eax = 0x80004005u;
    goto loc_001ACE1B;

loc_001ACDF1: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ACE07u); RECOMP_ABI_CALL(0x001AC173u, sub_001AC173); /* call 0x001AC173 */

loc_001ACE07: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001ACE18; /* je: equal / zero */

loc_001ACE0D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACE18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACE12u); } /* indirect call */
    }

loc_001ACE18: ;
    eax = edi;
    POP32(esp, edi);

loc_001ACE1B: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001ACE1F
 * Original: 0x001ACE1F - 0x001ACE8A (107 bytes, 36 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001ACE1F(void)
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

loc_001ACE1F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ACE28u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001ACE28: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001ACE4A; /* je: equal / zero */

loc_001ACE34: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ACE43; /* je: equal / zero */

loc_001ACE38: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACE43u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACE3Du); } /* indirect call */
    }

loc_001ACE43: ;
    eax = 0x80004005u;
    goto loc_001ACE85;

loc_001ACE4A: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x18));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ACE71u); RECOMP_ABI_CALL(0x001AC1A6u, sub_001AC1A6); /* call 0x001AC1A6 */

loc_001ACE71: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001ACE82; /* je: equal / zero */

loc_001ACE77: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACE82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACE7Cu); } /* indirect call */
    }

loc_001ACE82: ;
    eax = edi;
    POP32(esp, edi);

loc_001ACE85: ;
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
 * sub_001ACE8A
 * Original: 0x001ACE8A - 0x001ACEF5 (107 bytes, 36 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001ACE8A(void)
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

loc_001ACE8A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ACE93u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001ACE93: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001ACEB5; /* je: equal / zero */

loc_001ACE9F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ACEAE; /* je: equal / zero */

loc_001ACEA3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACEAEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACEA8u); } /* indirect call */
    }

loc_001ACEAE: ;
    eax = 0x80004005u;
    goto loc_001ACEF0;

loc_001ACEB5: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x18));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ACEDCu); RECOMP_ABI_CALL(0x001AC1F8u, sub_001AC1F8); /* call 0x001AC1F8 */

loc_001ACEDC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001ACEED; /* je: equal / zero */

loc_001ACEE2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACEEDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACEE7u); } /* indirect call */
    }

loc_001ACEED: ;
    eax = edi;
    POP32(esp, edi);

loc_001ACEF0: ;
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
 * sub_001ACEF5
 * Original: 0x001ACEF5 - 0x001ACF4F (90 bytes, 29 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACEF5(void)
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

loc_001ACEF5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001ACEFBu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001ACEFB: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001ACF1D; /* je: equal / zero */

loc_001ACF07: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ACF16; /* je: equal / zero */

loc_001ACF0B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACF16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACF10u); } /* indirect call */
    }

loc_001ACF16: ;
    eax = 0x80004005u;
    goto loc_001ACF4B;

loc_001ACF1D: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ACF37u); RECOMP_ABI_CALL(0x001AC24Au, sub_001AC24A); /* call 0x001AC24A */

loc_001ACF37: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001ACF48; /* je: equal / zero */

loc_001ACF3D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACF48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACF42u); } /* indirect call */
    }

loc_001ACF48: ;
    eax = edi;
    POP32(esp, edi);

loc_001ACF4B: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001ACF4F
 * Original: 0x001ACF4F - 0x001ACFA9 (90 bytes, 29 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACF4F(void)
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

loc_001ACF4F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001ACF55u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001ACF55: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001ACF77; /* je: equal / zero */

loc_001ACF61: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ACF70; /* je: equal / zero */

loc_001ACF65: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACF70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACF6Au); } /* indirect call */
    }

loc_001ACF70: ;
    eax = 0x80004005u;
    goto loc_001ACFA5;

loc_001ACF77: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ACF91u); RECOMP_ABI_CALL(0x001AC27Du, sub_001AC27D); /* call 0x001AC27D */

loc_001ACF91: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001ACFA2; /* je: equal / zero */

loc_001ACF97: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACFA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACF9Cu); } /* indirect call */
    }

loc_001ACFA2: ;
    eax = edi;
    POP32(esp, edi);

loc_001ACFA5: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001ACFA9
 * Original: 0x001ACFA9 - 0x001AD003 (90 bytes, 29 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACFA9(void)
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

loc_001ACFA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001ACFAFu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001ACFAF: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001ACFD1; /* je: equal / zero */

loc_001ACFBB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ACFCA; /* je: equal / zero */

loc_001ACFBF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACFCAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACFC4u); } /* indirect call */
    }

loc_001ACFCA: ;
    eax = 0x80004005u;
    goto loc_001ACFFF;

loc_001ACFD1: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ACFEBu); RECOMP_ABI_CALL(0x001AC2B0u, sub_001AC2B0); /* call 0x001AC2B0 */

loc_001ACFEB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001ACFFC; /* je: equal / zero */

loc_001ACFF1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ACFFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ACFF6u); } /* indirect call */
    }

loc_001ACFFC: ;
    eax = edi;
    POP32(esp, edi);

loc_001ACFFF: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AD003
 * Original: 0x001AD003 - 0x001AD05D (90 bytes, 28 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD003(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AD003: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AD009u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AD009: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AD02B; /* je: equal / zero */

loc_001AD015: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AD024; /* je: equal / zero */

loc_001AD019: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AD024u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AD01Eu); } /* indirect call */
    }

loc_001AD024: ;
    eax = 0x80004005u;
    goto loc_001AD059;

loc_001AD02B: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x18));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AD045u); RECOMP_ABI_CALL(0x001AC2E3u, sub_001AC2E3); /* call 0x001AC2E3 */

loc_001AD045: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AD056; /* je: equal / zero */

loc_001AD04B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AD056u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AD050u); } /* indirect call */
    }

loc_001AD056: ;
    eax = edi;
    POP32(esp, edi);

loc_001AD059: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}
