/**
 * DOAU1 - Recompiled code chunk 67
 * Functions: 250 (0x001D92FC - 0x001DC138)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001D92FC
 * Original: 0x001D92FC - 0x001D93B0 (180 bytes, 53 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D92FC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D92FC: ;
    edi = 0x400;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001D9309u); RECOMP_ABI_CALL(0x001E018Du, sub_001E018D); /* call 0x001E018D */

loc_001D9309: ;
    esi = ebx + 0x20C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(0x22BCE0); PUSH32(esp, 0x001D9318u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9312u); } /* indirect call */
    }

loc_001D9318: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(ebx + 0x208) = eax;
    PUSH32(esp, 0x1D922A);
    eax = ebx + 0x1EC;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BC68); PUSH32(esp, 0x001D9331u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D932Bu); } /* indirect call */
    }

loc_001D9331: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x208));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1D8B7E);
    PUSH32(esp, 0x9701C0);
    { uint32_t _icall_target = MEM32(0x22BCEC); PUSH32(esp, 0x001D9351u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D934Bu); } /* indirect call */
    }

loc_001D9351: ;
    ecx = ebx;
    PUSH32(esp, 0x001D9358u); RECOMP_ABI_CALL(0x001D885Bu, sub_001D885B); /* call 0x001D885B */

loc_001D9358: ;
    eax = ZX8(MEM8(ebx + 7));
    ecx = 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebx + 0x240) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_001D9371; /* jbe: below or equal (unsigned <=) */

loc_001D936B: ;
    MEM32(ebx + 0x240) = ecx;

loc_001D9371: ;
    eax = ZX8(MEM8(ebx + 0x10));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebx + 0x224) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_001D9386; /* jbe: below or equal (unsigned <=) */

loc_001D9380: ;
    MEM32(ebx + 0x224) = ecx;

loc_001D9386: ;
    eax = MEM32(ebx + 0x240);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0xFFFFFFFFu);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BAF8); PUSH32(esp, 0x001D93A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D939Au); } /* indirect call */
    }

loc_001D93A0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D93B0(); return; } /* jne: not equal / not zero */

loc_001D93A6: ;
    eax = 0x80072747u;
    g_seh_ebp = ebp; sub_001D960F(); return; /* tail jmp 0x001D960F */

}

/**
 * sub_001D93B0
 * Original: 0x001D93B0 - 0x001D95F2 (578 bytes, 131 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D93B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D93B0: ;
    ecx = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    { uint32_t _icall_target = MEM32(0x22BD1C); PUSH32(esp, 0x001D93BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D93B9u); } /* indirect call */
    }

loc_001D93BF: ;
    ecx = MEM32(ebx + 0x224);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esi + ecx * 8 + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebx + 0x22C) = edx;
    edx = MEM32(ebx + 0x240);
    MEM32(ebx + 0x224) = ecx;
    ecx = esi + 0x800;
    edx = ecx + edx * 8 + -8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(ebx + 0x21C) = eax;
    MEM32(ebx + 0x228) = esi;
    MEM32(ebx + 0x230) = esi;
    MEM32(ebx + 0x234) = esi;
    MEM32(ebx + 0x244) = ecx;
    MEM32(ebx + 0x24C) = ecx;
    MEM32(ebx + 0x248) = edx;
    eax = eax + esi + 0x1002;
    if (CMP_A(_fa, _fb)) goto loc_001D9436; /* ja: above (unsigned >) */

loc_001D941D: ;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = 0x800007FDu;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x800) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x248)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0x248) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D941D; /* jbe: below or equal (unsigned <=) */

loc_001D9436: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    esi = ebx + 0x1E6;
    PUSH32(esp, esi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0x101);
    PUSH32(esp, 0x001D9451u); RECOMP_ABI_CALL(0x00105694u, sub_00105694); /* call 0x00105694 */

loc_001D9451: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D945B; /* jl: less (signed <) */

loc_001D9455: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D9481; /* je: equal / zero */

loc_001D945B: ;
    PUSH32(esp, 1);
    eax = ebp + -1;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001D9468u); RECOMP_ABI_CALL(0x001D812Au, sub_001D812A); /* call 0x001D812A */

loc_001D9468: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 0x3E);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(ebx + 0x1E7) = 0x50;
    MEM8(ebx + 0x1E8) = 0xF2;
    MEM8(ebx + 0x1EB) = LO8(eax);

loc_001D9481: ;
    eax = MEM32(esi);
    MEM32(ebx + 0x210) = 0x64;
    MEM32(0xFEF000A8u) = eax;
    eax = ZX16(MEM16(ebx + 0x1EA));
    MEM32(0xFEF000ACu) = eax;
    MEM32(-17825608) = 0xFFFFFFFFu;
    eax = 0xFFFF;
    MEM32(0xFEF000BCu) = eax;
    MEM32(-17825616) = 0xFFFFFFFFu;
    MEM32(0xFEF000B4u) = eax;
    edi = ebx + 0x1E0;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    PUSH32(esp, 1);
    eax = ebp + 0xB;
    MEM32(-17825648) = 0x5EE;
    MEM32(-17825652) = 0x7F0020;
    MEM32(-17825664) = 0x3B0F3E;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001D94F5u); RECOMP_ABI_CALL(0x001D812Au, sub_001D812A); /* call 0x001D812A */

loc_001D94F5: ;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xB), 0 (8-bit) */
    esi = MEM32(0x22BCF0);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebp + 0xB) = MEM8(ebp + 0xB) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(MEM8(ebp + 0xB));
    eax = eax | 0x7F00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0xFEF0009Cu) = eax;
    MEM32(-17825632) = 0x16070F;
    MEM32(-17825628) = 0x16;
    eax = MEM32(ebx + 0x228);
    _fb = (uint32_t)(MEM32(ebx + 0x21C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebx + 0x21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x32);
    MEM32(0xFEF00100u) = eax;
    eax = MEM32(ebx + 0x21C);
    _fb = (uint32_t)(MEM32(ebx + 0x244)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebx + 0x244);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0xFEF00104u) = eax;
    eax = MEM32(ebx + 0x240);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax | MEM32(ebx + 0x224);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0xFEF00108u) = eax;
    eax = 0x300010;
    MEM32(0xFEF00140u) = eax;
    MEM32(0xFEF0013Cu) = eax;
    MEM32(-17825400) = 0x1040000;
    MEM32(-17825396) = 0x105;
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001D9589u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9587u); } /* indirect call */
    }

loc_001D9589: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x22BD64); PUSH32(esp, 0x001D9593u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D958Du); } /* indirect call */
    }

loc_001D9593: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D960F(); return; } /* jl: less (signed <) */

loc_001D9597: ;
    MEM32(-17825400) = MEM32(-17825400) | 0x100000;
    _fa = (uint32_t)(MEM32(-17825400)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x32);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001D95A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D95A3u); } /* indirect call */
    }

loc_001D95A5: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001D95AFu); RECOMP_ABI_CALL(0x001D88F2u, sub_001D88F2); /* call 0x001D88F2 */

loc_001D95AF: ;
    ecx = ebx;
    PUSH32(esp, 0x001D95B6u); RECOMP_ABI_CALL(0x001D87C0u, sub_001D87C0); /* call 0x001D87C0 */

loc_001D95B6: ;
    eax = 0xFEF00180u;
    ecx = MEM32(eax);
    MEM32(eax) = ecx;
    eax = 0xFEF00000u;
    ecx = MEM32(eax);
    MEM32(eax) = ecx;
    MEM32(-17825404) = 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x9701C0);
    MEM32(-17825788) = 0x5F;
    { uint32_t _icall_target = MEM32(0x22BCE8); PUSH32(esp, 0x001D95E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D95E1u); } /* indirect call */
    }

loc_001D95E7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D95F2(); return; } /* jne: not equal / not zero */

loc_001D95EB: ;
    eax = 0xC000016Eu;
    g_seh_ebp = ebp; sub_001D960F(); return; /* tail jmp 0x001D960F */

}

/**
 * sub_001D95F2
 * Original: 0x001D95F2 - 0x001D9606 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D95F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D95F2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = ebx + 0x250;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BCC0); PUSH32(esp, 0x001D9601u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D95FBu); } /* indirect call */
    }

loc_001D9601: ;
    PUSH32(esp, 0x800);

    g_seh_ebp = ebp; sub_001D9606(); return; /* fallthrough 0x001D9606 */

}

/**
 * sub_001D9606
 * Original: 0x001D9606 - 0x001D960D (7 bytes, 2 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9606(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9606: ;
    ecx = ebx;
    PUSH32(esp, 0x001D960Du); RECOMP_ABI_CALL(0x001E018Du, sub_001E018D); /* call 0x001E018D */

    g_seh_ebp = ebp; sub_001D960D(); return; /* fallthrough 0x001D960D */

}

/**
 * sub_001D960D
 * Original: 0x001D960D - 0x001D9611 (4 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D960D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D960D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001D9611(); return; /* fallthrough 0x001D9611 */

}

/**
 * sub_001D960F
 * Original: 0x001D960F - 0x001D9611 (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D960F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D960F: ;
    POP32(esp, edi);
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001D9611(); return; /* fallthrough 0x001D9611 */

}

/**
 * sub_001D9611
 * Original: 0x001D9611 - 0x001D9616 (5 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9611(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9611: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D961C
 * Original: 0x001D961C - 0x001D9661 (69 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D961C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D961C: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edx = ecx;
    PUSH32(esp, esi);
    ebp = edx;
    esi = eax + 1;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D962C: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D962C; /* jne: not equal / not zero */

loc_001D9633: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFF (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D968F(); return; } /* ja: above (unsigned >) */

loc_001D9640: ;
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    ecx = eax + 1;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(edx) = 0x2E;
    edi = edx + 1;
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
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), LO8(ebx) (8-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D968F(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_001D9661(); return; /* fallthrough 0x001D9661 */

}

/**
 * sub_001D9661
 * Original: 0x001D9661 - 0x001D9666 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9661(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9661: ;
    eax = ebp + 1;
    g_seh_ebp = ebp; sub_001D966C(); return; /* tail jmp 0x001D966C */

}

/**
 * sub_001D9666
 * Original: 0x001D9666 - 0x001D966C (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9666(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9666: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x2E (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9670(); return; } /* je: equal / zero */

loc_001D966B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_001D966C(); return; /* fallthrough 0x001D966C */

}

/**
 * sub_001D966C
 * Original: 0x001D966C - 0x001D9670 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D966C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D966C: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9666(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001D9670(); return; /* fallthrough 0x001D9670 */

}

/**
 * sub_001D9670
 * Original: 0x001D9670 - 0x001D968F (31 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9670: ;
    ecx = eax;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3F (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9695(); return; } /* ja: above (unsigned >) */

loc_001D967A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D9682; /* jne: not equal / not zero */

loc_001D967E: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D968F(); return; } /* jne: not equal / not zero */

loc_001D9682: ;
    MEM8(ebp) = LO8(ecx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    ebp = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9661(); return; } /* jne: not equal / not zero */

loc_001D968B: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9699(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001D968F(); return; /* fallthrough 0x001D968F */

}

/**
 * sub_001D968F
 * Original: 0x001D968F - 0x001D9695 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D968F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D968F: ;
    MEM8(edx) = LO8(ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D969C(); return; /* tail jmp 0x001D969C */

}

/**
 * sub_001D9695
 * Original: 0x001D9695 - 0x001D9699 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9695(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9695: ;
    MEM8(eax) = LO8(ebx);
    g_seh_ebp = ebp; sub_001D968F(); return; /* tail jmp 0x001D968F */

}

/**
 * sub_001D9699
 * Original: 0x001D9699 - 0x001D969C (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9699(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9699: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_001D969C(); return; /* fallthrough 0x001D969C */

}

/**
 * sub_001D969C
 * Original: 0x001D969C - 0x001D96A2 (6 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D969C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D969C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D96A2
 * Original: 0x001D96A2 - 0x001D96CF (45 bytes, 21 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D96A2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D96A2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 8) (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -4) = esi;
    MEM32(ebp + 0x10) = ecx;
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D96D2(); return; } /* jae: above or equal (unsigned >=) */

loc_001D96C0: ;
    eax = MEM32(ebp + -12);
    MEM8(eax) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D96C0
 * Original: 0x001D96C0 - 0x001D96CF (15 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D96C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D96C0: ;
    eax = MEM32(ebp + -12);
    MEM8(eax) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D96C8
 * Original: 0x001D96C8 - 0x001D96CF (7 bytes, 5 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D96C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D96C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D96CF
 * Original: 0x001D96CF - 0x001D96D2 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D96CF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D96CF: ;
    esi = MEM32(ebp + -4);

    g_seh_ebp = ebp; sub_001D96D2(); return; /* fallthrough 0x001D96D2 */

}

/**
 * sub_001D96D2
 * Original: 0x001D96D2 - 0x001D9767 (149 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D96D2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D96D2: ;
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D96C0(); return; } /* jae: above or equal (unsigned >=) */

loc_001D96D9: ;
    SET_LO8(eax, MEM8(esi));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xC0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xC0 (8-bit) */
    edx = esi + 1;
    if (CMP_EQ(_fa, _fb)) goto loc_001D9735; /* je: equal / zero */

loc_001D96E8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D96C0(); return; } /* jne: not equal / not zero */

loc_001D96EC: ;
    ecx = MEM32(ebp + -12);
    edi = MEM32(ebp + 0x10);
    _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ZX8(LO8(eax));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D96C0(); return; } /* jle: less or equal (signed <=) */

loc_001D9701: ;
    MEM8(edi) = LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(ebp + 0x10) = edi;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9767(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D970B: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + ebx;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    ecx = eax;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    SET_LO8(eax, MEM8(edx));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xC0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xC0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D96E8; /* jne: not equal / not zero */

loc_001D972F: ;
    edi = MEM32(ebp + 0xC);
    esi = MEM32(ebp + -4);

loc_001D9735: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001D96C0(); return; } /* je: equal / zero */

loc_001D9739: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(eax) & 0x3F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    SET_HI8(ecx, LO8(eax));
    SET_LO8(ecx, MEM8(edx));
    eax = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001D974D; /* jne: not equal / not zero */

loc_001D9749: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = edx;

loc_001D974D: ;
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D96CF(); return; } /* jae: above or equal (unsigned >=) */

loc_001D9762: ;
    g_seh_ebp = ebp; sub_001D96C0(); return; /* tail jmp 0x001D96C0 */

}

/**
 * sub_001D9767
 * Original: 0x001D9767 - 0x001D9779 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9767(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9767: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D96C8(); return; } /* jne: not equal / not zero */

loc_001D9772: ;
    eax = edx;
    g_seh_ebp = ebp; sub_001D96C8(); return; /* tail jmp 0x001D96C8 */

}

/**
 * sub_001D9779
 * Original: 0x001D9779 - 0x001D977E (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9779(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9779: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001D9789(); return; /* tail jmp 0x001D9789 */

}

/**
 * sub_001D977E
 * Original: 0x001D977E - 0x001D9789 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D977E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D977E: ;
    edx = ZX8(LO8(edx));
    eax = eax + edx + 1;
    ecx = ecx + edx + 1;

    g_seh_ebp = ebp; sub_001D9789(); return; /* fallthrough 0x001D9789 */

}

/**
 * sub_001D9789
 * Original: 0x001D9789 - 0x001D9790 (7 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9789(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9789: ;
    SET_LO8(edx, MEM8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D977E(); return; } /* jne: not equal / not zero */

loc_001D978F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9790
 * Original: 0x001D9790 - 0x001D979A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9790: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    g_seh_ebp = ebp; sub_001D97CC(); return; /* tail jmp 0x001D97CC */

}

/**
 * sub_001D979A
 * Original: 0x001D979A - 0x001D97CC (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D979A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D979A: ;
    SET_LO8(ecx, MEM8(edi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D97D1(); return; } /* je: equal / zero */

loc_001D97A0: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D97D9(); return; } /* jne: not equal / not zero */

loc_001D97A6: ;
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    eax = edi + 1;
    PUSH32(esp, eax);
    eax = esi + 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D97B7u); RECOMP_ABI_CALL(0x00152A27u, sub_00152A27); /* call 0x00152A27 */

loc_001D97B7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D97D9(); return; } /* jne: not equal / not zero */

loc_001D97BE: ;
    eax = ZX8(MEM8(esi));
    esi = esi + eax + 1;
    eax = ZX8(MEM8(edi));
    edi = edi + eax + 1;

    g_seh_ebp = ebp; sub_001D97CC(); return; /* fallthrough 0x001D97CC */

}

/**
 * sub_001D97CC
 * Original: 0x001D97CC - 0x001D97D1 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D97CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D97CC: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D979A(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001D97D1(); return; /* fallthrough 0x001D97D1 */

}

/**
 * sub_001D97D1
 * Original: 0x001D97D1 - 0x001D97D9 (8 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D97D1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D97D1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D97D4
 * Original: 0x001D97D4 - 0x001D97D9 (5 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D97D4(void)
{

loc_001D97D4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D97D9
 * Original: 0x001D97D9 - 0x001D97DD (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D97D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D97D9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001D97D4(); return; /* tail jmp 0x001D97D4 */

}

/**
 * sub_001D97EF
 * Original: 0x001D97EF - 0x001D9820 (49 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D97EF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D97EF: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esi + 4;
    PUSH32(esp, eax);
    MEM8(esi + 0x19) = 0;
    PUSH32(esp, 0x001D980Au); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001D980A: ;
    esi = MEM32(esi + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D981C; /* je: equal / zero */

loc_001D9811: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BC5C); PUSH32(esp, 0x001D981Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9816u); } /* indirect call */
    }

loc_001D981C: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D9825
 * Original: 0x001D9825 - 0x001D985E (57 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D9825(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9825: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D9834u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D982Eu); } /* indirect call */
    }

loc_001D9834: ;
    edi = ebx + 0xA90;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM8(ebp + -4) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_001D9857; /* je: equal / zero */

loc_001D9843: ;
    eax = esi + 0x20;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D9853; /* je: equal / zero */

loc_001D984B: ;
    edi = esi;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D9843; /* jne: not equal / not zero */

loc_001D9853: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D985E(); return; } /* jne: not equal / not zero */

loc_001D9857: ;
    esi = 0x2726;
    g_seh_ebp = ebp; sub_001D9886(); return; /* tail jmp 0x001D9886 */

}

/**
 * sub_001D985E
 * Original: 0x001D985E - 0x001D9886 (40 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D985E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D985E: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001D986Bu); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001D986B: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D9878; /* je: equal / zero */

loc_001D9872: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BB80); PUSH32(esp, 0x001D9878u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9872u); } /* indirect call */
    }

loc_001D9878: ;
    eax = MEM32(esi);
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(edi) = eax;
    PUSH32(esp, 0x001D9884u); RECOMP_ABI_CALL(0x001D8001u, sub_001D8001); /* call 0x001D8001 */

loc_001D9884: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001D9886(); return; /* fallthrough 0x001D9886 */

}

/**
 * sub_001D9886
 * Original: 0x001D9886 - 0x001D9898 (18 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9886(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9886: ;
    SET_LO8(ecx, MEM8(ebp + -4));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D988Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9889u); } /* indirect call */
    }

loc_001D988F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D9898
 * Original: 0x001D9898 - 0x001D98D4 (60 bytes, 23 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D9898(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9898: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -8) = esi;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 0x8E0;

loc_001D98AF: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D98BC; /* je: equal / zero */

loc_001D98B3: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D98AF; /* jb: below (unsigned <) */

loc_001D98BC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D98D4(); return; } /* jne: not equal / not zero */

loc_001D98C0: ;
    PUSH32(esp, 0x2AF9);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D98CFu); RECOMP_ABI_CALL(0x001D97EFu, sub_001D97EF); /* call 0x001D97EF */

loc_001D98CF: ;
    g_seh_ebp = ebp; sub_001D99A7(); return; /* tail jmp 0x001D99A7 */

}

/**
 * sub_001D98D4
 * Original: 0x001D98D4 - 0x001D99AD (217 bytes, 77 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D98D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D98D4: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = ZX8(MEM8(ebx + 0x18));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ecx = MEM32(ebx + 0x14);
    eax = MEM32(esi + edx * 4 + 0x8E0);
    MEM32(ebp + -12) = eax;
    PUSH32(esp, 0x001D98F2u); RECOMP_ABI_CALL(0x001D9779u, sub_001D9779); /* call 0x001D9779 */

loc_001D98F2: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x10040003);
    PUSH32(esp, 0x7554454E);
    ecx = esi;
    PUSH32(esp, 0x001D990Du); RECOMP_ABI_CALL(0x001D84DEu, sub_001D84DE); /* call 0x001D84DE */

loc_001D990D: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(ebp + -16) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001D99A6; /* je: equal / zero */

loc_001D991A: ;
    PUSH32(esp, 0x001D991Fu); RECOMP_ABI_CALL(0x001D819Au, sub_001D819A); /* call 0x001D819A */

loc_001D991F: ;
    MEM16(eax) = 0xE804;
    MEM16(eax + 2) = 0x3500;
    ecx = eax + 8;
    edi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    SET_LO16(eax, MEM16(ebx + 0x1A));
    MEM16(ecx) = LO16(eax);
    edx = ecx + 0xC;
    MEM32(ebp + 8) = edx;
    SET_LO16(eax, 0x100);
    SET_HI8(edx, LO8(eax));
    edi = MEM32(ebp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, HI8(eax));
    SET_LO16(eax, 1);
    MEM16(ecx + 2) = LO16(edx);
    SET_HI8(edx, LO8(eax));
    SET_LO8(edx, HI8(eax));
    SET_LO16(eax, LO16(edx));
    MEM16(ecx + 4) = LO16(eax);
    esi = MEM32(ebx + 0x10);
    ecx = MEM32(ebp + -4);
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
    ecx = MEM32(ebp + 8);
    esi = MEM32(ebp + -8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx) = LO16(eax);
    MEM16(ecx + 2) = LO16(eax);
    eax = ZX8(MEM8(esi + 0x41));
    eax = eax + eax * 4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001D9995u); RECOMP_ABI_CALL(0x001D7C5Eu, sub_001D7C5E); /* call 0x001D7C5E */

loc_001D9995: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x11);
    PUSH32(esp, MEM32(ebp + -12));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x001D99A6u); RECOMP_ABI_CALL(0x001D5C58u, sub_001D5C58); /* call 0x001D5C58 */

loc_001D99A6: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D99A7
 * Original: 0x001D99A7 - 0x001D99AD (6 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D99A7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D99A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D99AD
 * Original: 0x001D99AD - 0x001D9A61 (180 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D99AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D99AD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(eax + 0xB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xB), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(ebp + -16) = esi;
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9B84(); return; } /* jne: not equal / not zero */

loc_001D99C9: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9B84(); return; } /* je: equal / zero */

loc_001D99D5: ;
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xC (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9B83(); return; } /* jb: below (unsigned <) */

loc_001D99E8: ;
    SET_LO16(eax, MEM16(edi + 2));
    SET_HI8(ecx, LO8(eax));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(ecx), 0 (8-bit) */
    SET_LO8(ecx, HI8(eax));
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) { g_seh_ebp = ebp; sub_001D9B83(); return; } /* jns: not sign (positive) */

loc_001D99F8: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x78) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x78 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9B83(); return; } /* jne: not equal / not zero */

loc_001D9A01: ;
    PUSH32(esp, ebx);
    SET_LO16(eax, 1);
    SET_HI8(ebx, LO8(eax));
    SET_LO8(ebx, HI8(eax));
    _fa = (uint32_t)(MEM16(edi + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 4), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9B82(); return; } /* jne: not equal / not zero */

loc_001D9A14: ;
    ebx = MEM32(esi + 0xA90);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + -8) = ebx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9B82(); return; } /* je: equal / zero */

loc_001D9A25: ;
    SET_LO16(eax, MEM16(edi));

loc_001D9A28: ;
    _fa = (uint32_t)(MEM16(ebx + 0x1A)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0x1A), LO16(eax) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D9A37; /* je: equal / zero */

loc_001D9A2E: ;
    ebx = MEM32(ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + -8) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_001D9A28; /* jne: not equal / not zero */

loc_001D9A37: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9B82(); return; } /* je: equal / zero */

loc_001D9A3F: ;
    _fa = (uint32_t)(MEM8(ebx + 0x19)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x19), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9B82(); return; } /* je: equal / zero */

loc_001D9A49: ;
    eax = ecx;
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 3 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9A61(); return; } /* jne: not equal / not zero */

loc_001D9A54: ;
    PUSH32(esp, 0x2AF9);
    PUSH32(esp, ebx);
    ecx = esi;
    g_seh_ebp = ebp; sub_001D9B7D(); return; /* tail jmp 0x001D9B7D */

}

/**
 * sub_001D9A61
 * Original: 0x001D9A61 - 0x001D9B7D (284 bytes, 93 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9A61(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9A61: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9B82(); return; } /* jne: not equal / not zero */

loc_001D9A6A: ;
    ecx = edi + edx;
    eax = edi + 0xC;
    edx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 8) = ecx;
    MEM8(ebp + -272) = 0;
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001D9B82(); return; } /* je: equal / zero */

loc_001D9A84: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = ebp + -272;
    PUSH32(esp, 0x001D9A92u); RECOMP_ABI_CALL(0x001D96A2u, sub_001D96A2); /* call 0x001D96A2 */

loc_001D9A92: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9B82(); return; } /* je: equal / zero */

loc_001D9A9C: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9B82(); return; } /* jb: below (unsigned <) */

loc_001D9AAA: ;
    PUSH32(esp, MEM32(ebx + 0x14));
    ecx = ebp + -272;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D9ABBu); RECOMP_ABI_CALL(0x001D9790u, sub_001D9790); /* call 0x001D9790 */

loc_001D9ABB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9B82(); return; } /* je: equal / zero */

loc_001D9AC3: ;
    SET_LO16(eax, MEM16(edi + 6));
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_HI8(ecx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    MEM32(ebp + 0xC) = ecx;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9B82(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D9ADB: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x28;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = ebx;

loc_001D9AE1: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebp + -272;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D9AF1u); RECOMP_ABI_CALL(0x001D96A2u, sub_001D96A2); /* call 0x001D96A2 */

loc_001D9AF1: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9B82(); return; } /* je: equal / zero */

loc_001D9AFB: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9B82(); return; } /* jb: below (unsigned <) */

loc_001D9B05: ;
    SET_LO16(eax, MEM16(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(edx, MEM16(esi));
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(ecx, MEM16(esi));
    SET_HI8(ebx, LO8(ecx));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ebx, HI8(ecx));
    ecx = ZX16(LO16(ebx));
    MEM32(ebp + -12) = ebx;
    ebx = MEM32(ebp + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001D9B82(); return; } /* jl: less (signed <) */

loc_001D9B28: ;
    SET_HI8(ebx, LO8(eax));
    SET_LO8(ebx, HI8(eax));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D9B56; /* jne: not equal / not zero */

loc_001D9B32: ;
    SET_HI8(eax, LO8(edx));
    SET_LO8(eax, HI8(edx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D9B56; /* jne: not equal / not zero */

loc_001D9B3B: ;
    _fa = (uint32_t)(MEM16(ebp + -12)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -12), 4 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D9B56; /* jne: not equal / not zero */

loc_001D9B42: ;
    edx = MEM32(ebp + -4);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 8 (32-bit) */
    MEM32(edx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001D9B6A; /* je: equal / zero */

loc_001D9B56: ;
    _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 0xFFFF;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(ebp + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0xC), 0 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001D9AE1; /* ja: above (unsigned >) */

loc_001D9B6A: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9B82(); return; } /* je: equal / zero */

loc_001D9B71: ;
    eax = MEM32(ebp + -8);
    PUSH32(esp, 0);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -16);
    PUSH32(esp, eax);

    g_seh_ebp = ebp; sub_001D9B7D(); return; /* fallthrough 0x001D9B7D */

}

/**
 * sub_001D9B7D
 * Original: 0x001D9B7D - 0x001D9B82 (5 bytes, 1 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9B7D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9B7D: ;
    PUSH32(esp, 0x001D9B82u); RECOMP_ABI_CALL(0x001D97EFu, sub_001D97EF); /* call 0x001D97EF */

    g_seh_ebp = ebp; sub_001D9B82(); return; /* fallthrough 0x001D9B82 */

}

/**
 * sub_001D9B82
 * Original: 0x001D9B82 - 0x001D9B83 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9B82(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9B82: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001D9B83(); return; /* fallthrough 0x001D9B83 */

}

/**
 * sub_001D9B83
 * Original: 0x001D9B83 - 0x001D9B84 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9B83(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9B83: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001D9B84(); return; /* fallthrough 0x001D9B84 */

}

/**
 * sub_001D9B84
 * Original: 0x001D9B84 - 0x001D9B89 (5 bytes, 3 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9B84(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9B84: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D9B89
 * Original: 0x001D9B89 - 0x001D9BB1 (40 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9B89(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9B89: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 0x18) = MEM8(eax + 0x18) + 1;
    _fa = (uint32_t)(MEM8(eax + 0x18)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(edx, MEM8(eax + 0x18));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x40)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ecx + 0x40) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D9BA8; /* jb: below (unsigned <) */

loc_001D9B9B: ;
    PUSH32(esp, 0x274C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D9BA6u); RECOMP_ABI_CALL(0x001D97EFu, sub_001D97EF); /* call 0x001D97EF */

loc_001D9BA6: ;
    goto loc_001D9BAE;

loc_001D9BA8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D9BAEu); RECOMP_ABI_CALL(0x001D9898u, sub_001D9898); /* call 0x001D9898 */

loc_001D9BAE: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D9BB1
 * Original: 0x001D9BB1 - 0x001D9BE0 (47 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D9BB1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9BB1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -4) = ecx;
    ecx = ebp + -260;
    MEM8(ebp + -260) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D9BD2u); RECOMP_ABI_CALL(0x001D961Cu, sub_001D961C); /* call 0x001D961C */

loc_001D9BD2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9BE0(); return; } /* jne: not equal / not zero */

loc_001D9BD6: ;
    eax = 0x271E;
    g_seh_ebp = ebp; sub_001D9CDA(); return; /* tail jmp 0x001D9CDA */

}

/**
 * sub_001D9BE0
 * Original: 0x001D9BE0 - 0x001D9C10 (48 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9BE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ebp + -260;
    PUSH32(esp, 0x001D9BEDu); RECOMP_ABI_CALL(0x001D9779u, sub_001D9779); /* call 0x001D9779 */

loc_001D9BED: ;
    ecx = MEM32(ebp + -4);
    esi = eax;
    PUSH32(esp, 0x7454454E);
    eax = esi + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D9C00u); RECOMP_ABI_CALL(0x001D7FCFu, sub_001D7FCF); /* call 0x001D7FCF */

loc_001D9C00: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9C10(); return; } /* jne: not equal / not zero */

loc_001D9C06: ;
    eax = 0x2747;
    g_seh_ebp = ebp; sub_001D9CD8(); return; /* tail jmp 0x001D9CD8 */

}

/**
 * sub_001D9C10
 * Original: 0x001D9C10 - 0x001D9C4A (58 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9C10: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9C4A(); return; } /* je: equal / zero */

loc_001D9C16: ;
    eax = ebp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x22BBFC));
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(0x22BB88); PUSH32(esp, 0x001D9C29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9C23u); } /* indirect call */
    }

loc_001D9C29: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax = ~eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x1C) = eax;
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001D9C4A(); return; } /* jne: not equal / not zero */

loc_001D9C37: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D9C40u); RECOMP_ABI_CALL(0x001D8001u, sub_001D8001); /* call 0x001D8001 */

loc_001D9C40: ;
    eax = 0x277B;
    g_seh_ebp = ebp; sub_001D9CD8(); return; /* tail jmp 0x001D9CD8 */

}

/**
 * sub_001D9C4A
 * Original: 0x001D9C4A - 0x001D9CD8 (142 bytes, 45 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9C4A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9C4A: ;
    ecx = esi;
    eax = ecx;
    PUSH32(esp, edi);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebx + 0x48;
    esi = ebp + -260;
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
    esi = MEM32(ebp + -4);
    eax = esi + 0x8B8;
    MEM32(ebp + 0xC) = eax;
    eax = 1;
    ecx = MEM32(ebp + 0xC);
    { uint32_t _add = eax;
      uint32_t _old = RECOMP_ATOMIC_ADD32(XBOX_PTR(ecx), _add);
      _fa = _old + _add; _fas = (int32_t)_fa; /* xadd result */
      eax = _old; }  /* xadd */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = eax;
    SET_LO16(eax, LO16(edi));
    SET_HI8(ecx, LO8(eax));
    MEM32(ebx + 0x14) = edx;
    SET_LO8(ecx, HI8(eax));
    eax = ebx + 0x20;
    MEM16(ebx + 0x1A) = LO16(ecx);
    MEM32(ebx + 4) = MEM32(ebx + 4) & 0;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(ebp + 0x10);
    MEM32(ebx + 0x10) = 0x1D9B89;
    MEM8(ebx + 0x19) = 1;
    MEM32(eax) = 0x2734;
    MEM32(ecx) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001D9CB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9CAFu); } /* indirect call */
    }

loc_001D9CB5: ;
    MEM8(ebp + 0xC) = LO8(eax);
    eax = esi + 0xA90;
    ecx = MEM32(eax);
    MEM32(ebx) = ecx;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(eax) = ebx;
    PUSH32(esp, 0x001D9CCCu); RECOMP_ABI_CALL(0x001D9898u, sub_001D9898); /* call 0x001D9898 */

loc_001D9CCC: ;
    SET_LO8(ecx, MEM8(ebp + 0xC));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001D9CD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9CCFu); } /* indirect call */
    }

loc_001D9CD5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001D9CD8(); return; /* fallthrough 0x001D9CD8 */

}

/**
 * sub_001D9CD8
 * Original: 0x001D9CD8 - 0x001D9CDA (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9CD8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9CD8: ;
    POP32(esp, esi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001D9CDA(); return; /* fallthrough 0x001D9CDA */

}

/**
 * sub_001D9CDA
 * Original: 0x001D9CDA - 0x001D9CDE (4 bytes, 2 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9CDA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9CDA: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D9CDE
 * Original: 0x001D9CDE - 0x001D9CF7 (25 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9CDE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9CDE: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D9CF4; /* je: equal / zero */

loc_001D9CE9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BC5C); PUSH32(esp, 0x001D9CF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9CEEu); } /* indirect call */
    }

loc_001D9CF4: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D9CF7
 * Original: 0x001D9CF7 - 0x001D9D30 (57 bytes, 22 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D9CF7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9CF7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D9D29; /* jbe: below or equal (unsigned <=) */

loc_001D9D00: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 3);
    PUSH32(esp, 0x4654454E);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D9D16u); RECOMP_ABI_CALL(0x001D84DEu, sub_001D84DE); /* call 0x001D84DE */

loc_001D9D16: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D9D2C; /* je: equal / zero */

loc_001D9D1A: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ebp + 0x14);
    MEM32(ecx) = eax;

loc_001D9D29: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D9D2C: ;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001D9D30
 * Original: 0x001D9D30 - 0x001D9D50 (32 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9D30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D9D3Bu); RECOMP_ABI_CALL(0x001E00F2u, sub_001E00F2); /* call 0x001E00F2 */

loc_001D9D3B: ;
    eax = MEM32(esi);
    eax = eax | MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_001D9D4C; /* jne: not equal / not zero */

loc_001D9D42: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = 1;

loc_001D9D4C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D9D50
 * Original: 0x001D9D50 - 0x001D9D78 (40 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D9D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001D9D50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    edx = MEM32(eax);
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(MEM32(ecx)));
    edx = edx - MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(eax + 4);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(ecx + 4)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -4) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D9D74u); RECOMP_ABI_CALL(0x001E0104u, sub_001E0104); /* call 0x001E0104 */

loc_001D9D74: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D9D78
 * Original: 0x001D9D78 - 0x001D9D90 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9D78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9D78: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    ecx = ecx + eax * 4;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9D90(); return; } /* je: equal / zero */

loc_001D9D8C: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; sub_001D9D97(); return; /* tail jmp 0x001D9D97 */

}

/**
 * sub_001D9D90
 * Original: 0x001D9D90 - 0x001D9D97 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9D90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9D90: ;
    eax = MEM32(ecx + -4);
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

    g_seh_ebp = ebp; sub_001D9D97(); return; /* fallthrough 0x001D9D97 */

}

/**
 * sub_001D9D97
 * Original: 0x001D9D97 - 0x001D9D9A (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9D97(void)
{

loc_001D9D97: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D9D9A
 * Original: 0x001D9D9A - 0x001D9E19 (127 bytes, 61 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D9D9A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9D9A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 9);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, esi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D9DBB; /* jl: less (signed <) */

loc_001D9DAF: ;
    ecx = ecx + ecx * 2 + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D9DAF; /* jle: less or equal (signed <=) */

loc_001D9DB7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D9E14; /* jle: less or equal (signed <=) */

loc_001D9DBB: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_001D9DC0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0xC) (32-bit) */
    MEM32(ebp + 8) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_001D9E04; /* jge: greater or equal (signed >=) */

loc_001D9DC8: ;
    MEM32(ebp + -4) = esi;

loc_001D9DCB: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    edx = MEM32(esi + eax * 4);
    if (CMP_L(_fas, _fbs)) goto loc_001D9DEE; /* jl: less (signed <) */

loc_001D9DD5: ;
    ebx = MEM32(ebp + -4);

loc_001D9DD8: ;
    edi = MEM32(ebx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D9DEE; /* jbe: below or equal (unsigned <=) */

loc_001D9DDE: ;
    MEM32(esi + eax * 4) = edi;
    edi = ecx;
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D9DD8; /* jge: greater or equal (signed >=) */

loc_001D9DEE: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + ecx;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + eax * 4) = edx;
    eax = ecx;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D9DCB; /* jl: less (signed <) */

loc_001D9E04: ;
    eax = ecx;
    PUSH32(esp, 3);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001D9DC0; /* jg: greater (signed >) */

loc_001D9E12: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001D9E14: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D9E19
 * Original: 0x001D9E19 - 0x001D9E52 (57 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D9E19(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001D9E19: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    edx = MEM32(ebx + 0x54);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x58);
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(ecx + 0xA8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    MEM32(ebp + -16) = edx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9E52(); return; } /* je: equal / zero */

loc_001D9E43: ;
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(0u - (uint32_t)(edi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edi = edi & 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x2B0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x2B0)) >> 32) & 1);
    edi = edi + 0x2B0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001D9E62(); return; /* tail jmp 0x001D9E62 */

}

/**
 * sub_001D9E52
 * Original: 0x001D9E52 - 0x001D9E62 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9E52(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9E52: ;
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(0u - (uint32_t)(edi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edi = edi & 0xFFFFFEC8u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x440) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x440)) >> 32) & 1);
    edi = edi + 0x440;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001D9E62(); return; /* fallthrough 0x001D9E62 */

}

/**
 * sub_001D9E62
 * Original: 0x001D9E62 - 0x001D9E72 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9E62(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9E62: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9ED6(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D9E6C: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = eax;

    g_seh_ebp = ebp; sub_001D9E72(); return; /* fallthrough 0x001D9E72 */

}

/**
 * sub_001D9E72
 * Original: 0x001D9E72 - 0x001D9E7D (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9E72(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9E72: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9E7D(); return; } /* je: equal / zero */

loc_001D9E78: ;
    edx = MEM32(eax + 4);
    g_seh_ebp = ebp; sub_001D9E7F(); return; /* tail jmp 0x001D9E7F */

}

/**
 * sub_001D9E7D
 * Original: 0x001D9E7D - 0x001D9E7F (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9E7D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9E7D: ;
    edx = MEM32(eax);

    g_seh_ebp = ebp; sub_001D9E7F(); return; /* fallthrough 0x001D9E7F */

}

/**
 * sub_001D9E7F
 * Original: 0x001D9E7F - 0x001D9ED6 (87 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9E7F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9E7F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D9EC5; /* jbe: below or equal (unsigned <=) */

loc_001D9E83: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    eax = edi;
    if (CMP_NE(_fa, _fb)) goto loc_001D9EA3; /* jne: not equal / not zero */

loc_001D9E8B: ;
    _fa = (uint32_t)(MEM8(ebx + 0x13)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x13), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D9EA3; /* je: equal / zero */

loc_001D9E91: ;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D9EA3; /* je: equal / zero */

loc_001D9E97: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D9EA3; /* je: equal / zero */

loc_001D9E9D: ;
    eax = edi + 0x2000;

loc_001D9EA3: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0xF4240);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D9EAFu); RECOMP_ABI_CALL(0x0015D570u, sub_0015D570); /* call 0x0015D570 */

loc_001D9EAF: ;
    ecx = 0x989680;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D9EBA; /* jb: below (unsigned <) */

loc_001D9EB8: ;
    eax = ecx;

loc_001D9EBA: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(esi) = eax;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D9EC5: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edx (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9E72(); return; } /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_001D9ED6(); return; /* fallthrough 0x001D9ED6 */

}

/**
 * sub_001D9ED6
 * Original: 0x001D9ED6 - 0x001D9EF9 (35 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9ED6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9ED6: ;
    eax = MEM32(ebx + 0x58);
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((2) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(ebp + 0x10) = eax;
    PUSH32(esp, 0x001D9EEBu); RECOMP_ABI_CALL(0x001D9D9Au, sub_001D9D9A); /* call 0x001D9D9A */

loc_001D9EEB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9EF9(); return; } /* ja: above (unsigned >) */

loc_001D9EF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    g_seh_ebp = ebp; sub_001D9FFE(); return; /* tail jmp 0x001D9FFE */

}

/**
 * sub_001D9EF9
 * Original: 0x001D9EF9 - 0x001D9F0D (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9EF9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9EF9: ;
    ecx = MEM32(ebx + 0x5C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebp + 0xC) = edi;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9F51(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D9F0A: ;
    MEM32(ebp + 0xC) = esi;

    g_seh_ebp = ebp; sub_001D9F0D(); return; /* fallthrough 0x001D9F0D */

}

/**
 * sub_001D9F0D
 * Original: 0x001D9F0D - 0x001D9F40 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9F0D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9F0D: ;
    edx = MEM32(ebp + 0x10);
    esi = MEM32(edx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9F40(); return; } /* jb: below (unsigned <) */

loc_001D9F16: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D9F23; /* jbe: below or equal (unsigned <=) */

loc_001D9F1A: ;
    eax = MEM32(ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 4)); }
    MEM32(ecx) = eax;

loc_001D9F23: ;
    MEM32(ecx + 0x18) = MEM32(ecx + 0x18) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = esi;
    MEM32(ecx + 4) = 1;
    eax = esi + 0x1388;
    g_seh_ebp = ebp; sub_001D9F45(); return; /* tail jmp 0x001D9F45 */

}

/**
 * sub_001D9F40
 * Original: 0x001D9F40 - 0x001D9F45 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9F40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9F40: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + esi;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_001D9F45(); return; /* fallthrough 0x001D9F45 */

}

/**
 * sub_001D9F45
 * Original: 0x001D9F45 - 0x001D9F51 (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9F45(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9F45: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001D9F0D(); return; } /* jne: not equal / not zero */

loc_001D9F4E: ;
    MEM32(ebp + 0xC) = edi;

    g_seh_ebp = ebp; sub_001D9F51(); return; /* fallthrough 0x001D9F51 */

}

/**
 * sub_001D9F51
 * Original: 0x001D9F51 - 0x001D9F6C (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9F51(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9F51: ;
    eax = MEM32(ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 4)); }
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    MEM32(ecx) = eax;
    esi = MEM32(ebx + 0x5C);
    MEM32(ebp + -16) = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9F6C(); return; } /* jne: not equal / not zero */

loc_001D9F65: ;
    eax = MEM32(esi);
    g_seh_ebp = ebp; sub_001DA006(); return; /* tail jmp 0x001DA006 */

}

/**
 * sub_001D9F6C
 * Original: 0x001D9F6C - 0x001D9F7E (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9F6C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9F6C: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9FCE(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D9F78: ;
    ecx = esi + 8;
    MEM32(ebp + 8) = edi;

    g_seh_ebp = ebp; sub_001D9F7E(); return; /* fallthrough 0x001D9F7E */

}

/**
 * sub_001D9F7E
 * Original: 0x001D9F7E - 0x001D9F87 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9F7E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9F7E: ;
    eax = MEM32(ebp + 0xC);
    edi = MEM32(ecx + -8);
    MEM32(ebp + 0x10) = eax;

    g_seh_ebp = ebp; sub_001D9F87(); return; /* fallthrough 0x001D9F87 */

}

/**
 * sub_001D9F87
 * Original: 0x001D9F87 - 0x001D9F93 (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9F87(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9F87: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001D9F93(); return; } /* jbe: below or equal (unsigned <=) */

loc_001D9F8D: ;
    edx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001D9F97(); return; /* tail jmp 0x001D9F97 */

}

/**
 * sub_001D9F93
 * Original: 0x001D9F93 - 0x001D9F97 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9F93(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9F93: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax;

    g_seh_ebp = ebp; sub_001D9F97(); return; /* fallthrough 0x001D9F97 */

}

/**
 * sub_001D9F97
 * Original: 0x001D9F97 - 0x001D9FCE (55 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9F97(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9F97: ;
    eax = MEM32(esi + 4);
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(ecx + 4)) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ecx + 4) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x10)) >> 32) & 1);
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001D9F87(); return; } /* jne: not equal / not zero */

loc_001D9FA9: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(ecx);
    if (CMP_B(_fa, _fb)) goto loc_001D9FC0; /* jb: below (unsigned <) */

loc_001D9FB3: ;
    if (CMP_A(_fa, _fb)) goto loc_001D9FBA; /* ja: above (unsigned >) */

loc_001D9FB5: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001D9FC0; /* jbe: below or equal (unsigned <=) */

loc_001D9FBA: ;
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -8) = edx;

loc_001D9FC0: ;
    esi = MEM32(ebp + -16);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x10)) >> 32) & 1);
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001D9F7E(); return; } /* jne: not equal / not zero */

loc_001D9FCB: ;
    edi = MEM32(ebp + 0xC);

    g_seh_ebp = ebp; sub_001D9FCE(); return; /* fallthrough 0x001D9FCE */

}

/**
 * sub_001D9FCE
 * Original: 0x001D9FCE - 0x001D9FFE (48 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9FCE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9FCE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = MEM32(ebx + 0x58);
    ecx = esi;
    if (CMP_BE(_fa, _fb)) goto loc_001D9FF4; /* jbe: below or equal (unsigned <=) */

loc_001D9FD7: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + -12) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D9FEE; /* jne: not equal / not zero */

loc_001D9FDF: ;
    edx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + -8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D9FEE; /* jne: not equal / not zero */

loc_001D9FE7: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D9FEE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D9FD7; /* jne: not equal / not zero */

loc_001D9FF4: ;
    ecx = MEM32(ebx + 0x58);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);

    g_seh_ebp = ebp; sub_001D9FFE(); return; /* fallthrough 0x001D9FFE */

}

/**
 * sub_001D9FFE
 * Original: 0x001D9FFE - 0x001DA00D (15 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9FFE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9FFE: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x001DA006u); RECOMP_ABI_CALL(0x001D9D78u, sub_001D9D78); /* call 0x001D9D78 */

loc_001DA006: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001DA006
 * Original: 0x001DA006 - 0x001DA00D (7 bytes, 5 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA006(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DA006: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001DA00D
 * Original: 0x001DA00D - 0x001DA0AE (161 bytes, 54 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DA00D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DA00D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(edx + 8);
    MEM16(ecx + 0xA) = MEM16(ecx + 0xA) & 0xFBF7;
    _fa = (uint32_t)(MEM16(ecx + 0xA)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), 0 (32-bit) */
    ebx = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(edx);
    MEM32(ebp + -32) = eax;
    eax = MEM32(ecx + 8);
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -24) = edi;
    MEM32(ebp + -40) = ebx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DA0AE(); return; } /* je: equal / zero */

loc_001DA044: ;
    _fa = (uint32_t)(MEM8(esi + 0x2B)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x2B), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DA0AE(); return; } /* je: equal / zero */

loc_001DA04A: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(ebp + -16);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx & 0xFFFFFFF8u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = edx;
    _fb = (uint32_t)(0x27) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x27;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -36) = edx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + 4) = LO16(edx);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0xE0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 0xE0 (8-bit) */
    MEM32(ebp + -28) = edx;
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DA0BD(); return; } /* jne: not equal / not zero */

loc_001DA073: ;
    eax = eax | 0x4000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DA080u); RECOMP_ABI_CALL(0x001D8186u, sub_001D8186); /* call 0x001D8186 */

loc_001DA080: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x32;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    esi = MEM32(ebp + -4);
    _fb = (uint32_t)(0x1E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1E0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax + 6;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    esi = MEM32(ebp + 0xC);
    edi = MEM32(ebp + -4);
    MEM16(eax + 0xC) = 8;
    MEM16(ebx + 0x14) = 0x20C;
    g_seh_ebp = ebp; sub_001DA0CB(); return; /* tail jmp 0x001DA0CB */

}

/**
 * sub_001DA052
 * Original: 0x001DA052 - 0x001DA0AE (92 bytes, 29 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA052(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DA052: ;
    edx = MEM32(ebp + -16);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx & 0xFFFFFFF8u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = edx;
    _fb = (uint32_t)(0x27) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x27;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -36) = edx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + 4) = LO16(edx);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0xE0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 0xE0 (8-bit) */
    MEM32(ebp + -28) = edx;
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DA0BD(); return; } /* jne: not equal / not zero */

loc_001DA073: ;
    eax = eax | 0x4000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 8) = eax;
    PUSH32(esp, 0x001DA080u); RECOMP_ABI_CALL(0x001D8186u, sub_001D8186); /* call 0x001D8186 */

loc_001DA080: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x32;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    esi = MEM32(ebp + -4);
    _fb = (uint32_t)(0x1E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1E0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax + 6;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    esi = MEM32(ebp + 0xC);
    edi = MEM32(ebp + -4);
    MEM16(eax + 0xC) = 8;
    MEM16(ebx + 0x14) = 0x20C;
    g_seh_ebp = ebp; sub_001DA0CB(); return; /* tail jmp 0x001DA0CB */

}

/**
 * sub_001DA0AE
 * Original: 0x001DA0AE - 0x001DA0BD (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA0AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DA0AE: ;
    edx = MEM32(edx + 0x30);
    MEM32(ebp + -12) = 1;
    MEM32(ebp + -16) = edx;
    g_seh_ebp = ebp; sub_001DA052(); return; /* tail jmp 0x001DA052 */

}

/**
 * sub_001DA0BD
 * Original: 0x001DA0BD - 0x001DA0CB (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA0BD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DA0BD: ;
    edi = MEM32(ebp + -4);
    SET_LO16(eax, MEM16(edi + 0x8CE));
    MEM16(ebx + 0x14) = LO16(eax);

    g_seh_ebp = ebp; sub_001DA0CB(); return; /* fallthrough 0x001DA0CB */

}

/**
 * sub_001DA0CB
 * Original: 0x001DA0CB - 0x001DA2B5 (490 bytes, 178 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA0CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DA0CB: ;
    PUSH32(esp, 0x11);
    PUSH32(esp, MEM32(esi + 0x2C));
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001DA0D8u); RECOMP_ABI_CALL(0x001D2B0Eu, sub_001D2B0E); /* call 0x001D2B0E */

loc_001DA0D8: ;
    eax = 0x1000000;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DA0E8; /* je: equal / zero */

loc_001DA0E2: ;
    eax = MEM32(edi + 0x268);

loc_001DA0E8: ;
    MEM32(ebx + 0xC) = eax;
    SET_LO16(eax, MEM16(esi + 0x30));
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 8);
    MEM16(ebx + 0x16) = LO16(eax);
    MEM16(ebx + 0x24) = MEM16(ebx + 0x24) & 0;
    _fa = (uint32_t)(MEM16(ebx + 0x24)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    SET_LO16(eax, MEM16(ebp + -36));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ebx + 2) = LO16(eax);
    MEM16(ebx) = 0x5807;
    ecx = MEM32(esi + 0x20);
    eax = ebx + 6;
    MEM32(eax) = ecx;
    ecx = MEM32(esi + 0x24);
    MEM32(eax + 4) = ecx;
    SET_LO16(ecx, MEM16(esi + 0x28));
    MEM16(ebx + 0xE) = LO16(ecx);
    SET_LO8(ecx, MEM8(esi + 0x2A));
    MEM8(ebx + 0x10) = LO8(ecx);
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(edx, MEM8(ebp + -8));
    MEM8(ebx + 0x11) = LO8(ecx);
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    MEM8(ebx + 0x1A) = LO8(edx);
    if (CMP_BE(_fa, _fb)) goto loc_001DA190; /* jbe: below or equal (unsigned <=) */

loc_001DA15C: ;
    esi = MEM32(edi + 0x34);
    PUSH32(esp, MEM32(ebp + -8));
    edx = ebx + 0x27;
    edi = edx;
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
    ecx = ebx + 0x27;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    eax = MEM32(ebp + -24);
    PUSH32(esp, 0x18);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001DA18Du); RECOMP_ABI_CALL(0x001D23AEu, sub_001D23AE); /* call 0x001D23AE */

loc_001DA18D: ;
    esi = MEM32(ebp + 0xC);

loc_001DA190: ;
    ecx = MEM32(ebp + -4);
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DA19Cu); RECOMP_ABI_CALL(0x001D9D30u, sub_001D9D30); /* call 0x001D9D30 */

loc_001DA19C: ;
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = ebp + -48;
    PUSH32(esp, eax);
    MEM32(ebp + -36) = esi;
    PUSH32(esp, 0x001DA1AFu); RECOMP_ABI_CALL(0x001D9D50u, sub_001D9D50); /* call 0x001D9D50 */

loc_001DA1AF: ;
    PUSH32(esp, 0xC);
    ecx = ebx + 0x1B;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -8));
    ecx = ebx + 0x27;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1B);
    MEM32(ebx + 0x12) = eax;
    eax = MEM32(ebp + -24);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(ebx + 0x16) = edi;
    MEM32(ebp + -24) = eax;
    PUSH32(esp, 0x001DA1D8u); RECOMP_ABI_CALL(0x001D7D00u, sub_001D7D00); /* call 0x001D7D00 */

loc_001DA1D8: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), edi (32-bit) */
    ebx = MEM32(ebp + -32);
    if (CMP_NE(_fa, _fb)) goto loc_001DA289; /* jne: not equal / not zero */

loc_001DA1E4: ;
    SET_LO16(ecx, MEM16(ebp + -28));
    MEM16(ebx + 0xA) = MEM16(ebx + 0xA) & 0xFBF7;
    _fa = (uint32_t)(MEM16(ebx + 0xA)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(ebx + 8);
    MEM16(ebx + 4) = LO16(ecx);
    ecx = MEM32(ebp + -20);
    edx = 0x4000000;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + 8), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001DA21C; /* je: equal / zero */

loc_001DA202: ;
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 8) = eax;
    PUSH32(esp, 0x001DA20Cu); RECOMP_ABI_CALL(0x001D8186u, sub_001D8186); /* call 0x001D8186 */

loc_001DA20C: ;
    ecx = ebx;
    esi = eax;
    PUSH32(esp, 0x001DA215u); RECOMP_ABI_CALL(0x001D8186u, sub_001D8186); /* call 0x001D8186 */

loc_001DA215: ;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */

loc_001DA21C: ;
    ecx = MEM32(ebp + -28);
    edi = MEM32(ebx);
    esi = MEM32(ebp + -40);
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
    eax = MEM32(ebp + 8);
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
    esi = MEM32(ebx);
    edi = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x30), 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x11) = MEM8(esi + 0x11) | LO8(eax);
    _fa = (uint32_t)(MEM8(esi + 0x11)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DA25Eu); RECOMP_ABI_CALL(0x001D9D50u, sub_001D9D50); /* call 0x001D9D50 */

loc_001DA25E: ;
    PUSH32(esp, MEM32(ebp + -36));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    MEM32(esi + 0x12) = eax;
    PUSH32(esp, 0x001DA26Du); RECOMP_ABI_CALL(0x001D9D50u, sub_001D9D50); /* call 0x001D9D50 */

loc_001DA26D: ;
    PUSH32(esp, 0xC);
    MEM32(esi + 0x16) = eax;
    eax = esi + 0x1B;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1B);
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0x001DA287u); RECOMP_ABI_CALL(0x001D7D00u, sub_001D7D00); /* call 0x001D7D00 */

loc_001DA287: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001DA289: ;
    eax = MEM32(ebp + -20);
    ecx = MEM32(ebp + -4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    MEM32(eax + 0x14) = esi;
    PUSH32(esp, 0x001DA29Cu); RECOMP_ABI_CALL(0x001D390Du, sub_001D390D); /* call 0x001D390D */

loc_001DA29C: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DA2AE; /* jne: not equal / not zero */

loc_001DA2A1: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    MEM32(ebx + 0x14) = esi;
    PUSH32(esp, 0x001DA2AEu); RECOMP_ABI_CALL(0x001D390Du, sub_001D390D); /* call 0x001D390D */

loc_001DA2AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DA2B5
 * Original: 0x001DA2B5 - 0x001DA30E (89 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DA2B5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DA2B5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -12) = MEM32(ebp + -12) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = esi + 0x10;
    PUSH32(esp, edi);
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DA37B(); return; } /* je: equal / zero */

loc_001DA2D4: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DA37B(); return; } /* jne: not equal / not zero */

loc_001DA2E2: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DA37B(); return; } /* jne: not equal / not zero */

loc_001DA2EE: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DA2F9; /* je: equal / zero */

loc_001DA2F3: ;
    _fa = (uint32_t)(MEM8(edi + 0x2B)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x2B), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DA30E(); return; } /* jne: not equal / not zero */

loc_001DA2F9: ;
    eax = MEM32(esi + 0x30);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax * 8 + 0x308;
    MEM32(ebp + -8) = eax;
    g_seh_ebp = ebp; sub_001DA315(); return; /* tail jmp 0x001DA315 */

}

/**
 * sub_001DA30E
 * Original: 0x001DA30E - 0x001DA315 (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA30E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DA30E: ;
    MEM32(ebp + -8) = 0x610;

    g_seh_ebp = ebp; sub_001DA315(); return; /* fallthrough 0x001DA315 */

}

/**
 * sub_001DA315
 * Original: 0x001DA315 - 0x001DA34C (55 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA315(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DA315: ;
    eax = MEM32(0x22BAE8);
    eax = MEM32(eax);
    edx = MEM32(ebp + -4);
    ecx = MEM32(edx + 0x1DC);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x2C);
    MEM32(ebp + 8) = eax;
    eax = ebx;
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_001DA33C; /* jns: not sign (positive) */

loc_001DA339: ;
    ebx = MEM32(ebp + 8);

loc_001DA33C: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) { g_seh_ebp = ebp; sub_001DA34C(); return; } /* jns: not sign (positive) */

loc_001DA340: ;
    eax = MEM32(edx + 0x1D8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -12) = eax;
    g_seh_ebp = ebp; sub_001DA37A(); return; /* tail jmp 0x001DA37A */

}

/**
 * sub_001DA34C
 * Original: 0x001DA34C - 0x001DA37A (46 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA34C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DA34C: ;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esi + 0x28));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esi + 0x28)); }
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(edi);
    ecx = MEM32(edi + 4);
    MEM32(ecx) = eax;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -4);
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x001DA376u); RECOMP_ABI_CALL(0x001DA00Du, sub_001DA00D); /* call 0x001DA00D */

loc_001DA376: ;
    MEM8(edi + 0x2B) = 0;

    g_seh_ebp = ebp; sub_001DA37A(); return; /* fallthrough 0x001DA37A */

}

/**
 * sub_001DA37A
 * Original: 0x001DA37A - 0x001DA37B (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA37A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DA37A: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001DA37B(); return; /* fallthrough 0x001DA37B */

}

/**
 * sub_001DA37B
 * Original: 0x001DA37B - 0x001DA390 (21 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA37B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DA37B: ;
    PUSH32(esp, MEM32(ebp + -12));
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA38Au); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001DA38A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DA390
 * Original: 0x001DA390 - 0x001DA41F (143 bytes, 48 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DA390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DA390: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(eax + 0x44);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x40);
    ebx = MEM32(esi);
    MEM32(ebp + -8) = ecx;
    ecx = MEM32(esi + 8);
    ecx = ecx & 0xFBF4000Bu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 8) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x54), ecx (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    MEM32(ebp + -16) = esi;
    MEM32(ebp + -20) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_001DA3D6; /* jbe: below or equal (unsigned <=) */

loc_001DA3C9: ;
    _fa = (uint32_t)(MEM8(edi + 0xC)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0xC), 5 (8-bit) */
    MEM32(ebp + -12) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_001DA3D9; /* jne: not equal / not zero */

loc_001DA3D6: ;
    MEM32(ebp + -12) = ecx;

loc_001DA3D9: ;
    PUSH32(esp, 0x11);
    PUSH32(esp, ecx);
    eax = esp;
    MEM16(esi + 4) = 0x6E;
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DA3EFu); RECOMP_ABI_CALL(0x001D2B0Eu, sub_001D2B0E); /* call 0x001D2B0E */

loc_001DA3EF: ;
    SET_LO8(eax, MEM8(edi + 0x18));
    SET_LO8(eax, LO8(eax) & 0xE0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x80 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DA41F(); return; } /* jne: not equal / not zero */

loc_001DA3F8: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 0x268);
    MEM32(ebx + 0xC) = ecx;
    ecx = MEM32(edi + 0x10);
    MEM32(ebx + 0x10) = ecx;
    SET_LO16(eax, MEM16(eax + 0x8CE));
    MEM16(ebx + 0x14) = LO16(eax);
    SET_LO16(eax, MEM16(edi + 0xE));
    MEM16(ebx + 0x16) = LO16(eax);
    g_seh_ebp = ebp; sub_001DA45E(); return; /* tail jmp 0x001DA45E */

}

/**
 * sub_001DA41F
 * Original: 0x001DA41F - 0x001DA45E (63 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA41F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DA41F: ;
    MEM8(esi + 0xB) = MEM8(esi + 0xB) | 4;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = esi;
    PUSH32(esp, 0x001DA42Au); RECOMP_ABI_CALL(0x001D8186u, sub_001D8186); /* call 0x001D8186 */

loc_001DA42A: ;
    esi = edi + 0x52;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    esi = MEM32(ebp + -4);
    _fb = (uint32_t)(0x1E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1E0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax + 6;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM16(eax + 0xC) = 8;
    eax = 0x1000000;
    MEM32(ebx + 0xC) = eax;
    MEM32(ebx + 0x10) = eax;
    MEM16(ebx + 0x14) = 0x20C;
    MEM16(ebx + 0x16) = 0x20C;

    g_seh_ebp = ebp; sub_001DA45E(); return; /* fallthrough 0x001DA45E */

}

/**
 * sub_001DA45E
 * Original: 0x001DA45E - 0x001DA5B3 (341 bytes, 114 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA45E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DA45E: ;
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(ebx + 0x24) = MEM16(ebx + 0x24) & 0;
    _fa = (uint32_t)(MEM16(ebx + 0x24)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ebx + 2) = 0x4E;
    MEM16(ebx) = 0x5806;
    eax = MEM32(edx + 4);
    MEM32(ebx + 6) = eax;
    eax = MEM32(edx + 8);
    MEM32(ebx + 0xA) = eax;
    eax = ecx;
    _fb = (uint32_t)(MEM32(edx + 0x4C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edx + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = 0xAC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    PUSH32(esp, 9);
    esi = ecx + 0x6C;
    edi = ebx + 0x1A;
    MEM16(ebx + 0xE) = LO16(eax);
    SET_LO8(eax, MEM8(ecx + 0xA0));
    MEM8(ebx + 0x10) = LO8(eax);
    MEM32(ecx + 0xA0) = MEM32(ecx + 0xA0) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0xA0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(ebx + 0x11) = LO8(eax);
    eax = MEM32(ecx + 0x18);
    MEM32(ebx + 0x12) = eax;
    eax = MEM32(ecx + 0x1C);
    POP32(esp, ecx);
    MEM32(ebx + 0x16) = eax;
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
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ecx + 0x90);
    esi = MEM32(ebp + 8);
    MEM32(ebx + 0x3E) = eax;
    eax = ZX16(MEM16(ebx + 0xE));
    SET_LO16(edx, MEM16(ecx + 0xA0));
    PUSH32(esp, 0xC);
    eax = eax + eax * 2;
    MEM16(esi + eax * 8 + 0x6A) = LO16(edx);
    eax = ecx + 0x20;
    ecx = ebx + 0x42;
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(ebx + 2));
    _fb = (uint32_t)(0x4E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x4E;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    ecx = ebx + 0x4E;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x42);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DA50Fu); RECOMP_ABI_CALL(0x001D7D00u, sub_001D7D00); /* call 0x001D7D00 */

loc_001DA50F: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DA5B3(); return; } /* je: equal / zero */

loc_001DA519: ;
    edi = MEM32(ebp + -8);
    eax = MEM32(edi + 8);
    ecx = MEM32(ebp + -16);
    eax = eax & 0xFBF4000Bu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 0x4000000;
    MEM32(edi + 8) = eax;
    MEM16(edi + 4) = 0x6E;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + 8), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001DA55A; /* je: equal / zero */

loc_001DA53D: ;
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 8) = eax;
    PUSH32(esp, 0x001DA547u); RECOMP_ABI_CALL(0x001D8186u, sub_001D8186); /* call 0x001D8186 */

loc_001DA547: ;
    ecx = edi;
    esi = eax;
    PUSH32(esp, 0x001DA550u); RECOMP_ABI_CALL(0x001D8186u, sub_001D8186); /* call 0x001D8186 */

loc_001DA550: ;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    edi = MEM32(ebp + -8);

loc_001DA55A: ;
    edi = MEM32(edi);
    esi = MEM32(ebp + -20);
    PUSH32(esp, 0x1B);
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    esi = MEM32(ebp + -8);
    eax = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xC);
    ecx = eax + 0x42;
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(eax + 2));
    _fb = (uint32_t)(0x4E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x4E;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    ecx = eax + 0x4E;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x42);
    PUSH32(esp, eax);
    MEM8(eax + 0x11) = 1;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DA595u); RECOMP_ABI_CALL(0x001D7D00u, sub_001D7D00); /* call 0x001D7D00 */

loc_001DA595: ;
    eax = ZX8(MEM8(ebx + 0x10));
    ecx = MEM32(ebp + 0xC);
    ecx = MEM32(ecx + 0xA8);
    eax = eax + eax * 4;
    eax = ecx + eax * 8;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DA5B1u); RECOMP_ABI_CALL(0x001D9D30u, sub_001D9D30); /* call 0x001D9D30 */

loc_001DA5B1: ;
    g_seh_ebp = ebp; sub_001DA5B6(); return; /* tail jmp 0x001DA5B6 */

}

/**
 * sub_001DA5B3
 * Original: 0x001DA5B3 - 0x001DA5B6 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA5B3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DA5B3: ;
    esi = MEM32(ebp + -8);

    g_seh_ebp = ebp; sub_001DA5B6(); return; /* fallthrough 0x001DA5B6 */

}

/**
 * sub_001DA5B6
 * Original: 0x001DA5B6 - 0x001DA5E5 (47 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA5B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DA5B6: ;
    eax = MEM32(ebp + -16);
    ecx = MEM32(ebp + -4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    MEM32(eax + 0x14) = edi;
    PUSH32(esp, 0x001DA5CAu); RECOMP_ABI_CALL(0x001D390Du, sub_001D390D); /* call 0x001D390D */

loc_001DA5CA: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DA5DE; /* je: equal / zero */

loc_001DA5D0: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEM32(esi + 0x14) = edi;
    PUSH32(esp, 0x001DA5DEu); RECOMP_ABI_CALL(0x001D390Du, sub_001D390D); /* call 0x001D390D */

loc_001DA5DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DA5E5
 * Original: 0x001DA5E5 - 0x001DA703 (286 bytes, 95 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DA5E5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DA5E5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x3C);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(eax + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    ecx = ecx & 0xFBF4092Cu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x924;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 8) = ecx;
    edx = MEM32(ebx + 0xAF4);
    edx = MEM32(edx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DA627u); RECOMP_ABI_CALL(0x001D2B0Eu, sub_001D2B0E); /* call 0x001D2B0E */

loc_001DA627: ;
    eax = MEM32(ebp + 0xC);
    MEM16(edi + 0x20) = 0x5304;
    MEM16(edi + 0x22) = 0x46;
    esi = eax + 0x58;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 5);
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
    ecx = MEM32(ebp + -4);
    MEM16(ecx + 0x3C) = MEM16(ecx + 0x3C) & 0;
    _fa = (uint32_t)(MEM16(ecx + 0x3C)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    esi = MEM32(ebp + 8);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x38;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx) = 0x5804;
    MEM16(ecx + 2) = 0x2E;
    edx = MEM32(eax + 0x18);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0x1C);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esi + 4);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(esi + 8);
    MEM32(ecx + 0x14) = edx;
    _fb = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 0xAC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    MEM32(ecx + 0x18) = eax;
    eax = MEM32(ebx + 0xAF4);
    eax = MEM32(eax + 0xD8);
    MEM32(ecx + 0x1C) = eax;
    eax = ebx + 0x91E;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DA6A4; /* je: equal / zero */

loc_001DA69B: ;
    _fa = (uint32_t)(MEM8(ebx + 0x8CD)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x8CD), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001DA6AF; /* jne: not equal / not zero */

loc_001DA6A4: ;
    eax = MEM32(ebx + 0xAF4);
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xDC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DA6AF: ;
    SET_LO16(eax, MEM16(eax));
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, 0xC);
    MEM16(ecx + 0x20) = LO16(eax);
    eax = ecx + 0x22;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ecx + 0x2E;
    PUSH32(esp, eax);
    PUSH32(esp, 0x22);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x10);
    eax = edi + 0x20;
    PUSH32(esp, eax);
    MEM16(ecx + 6) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DA6D9u); RECOMP_ABI_CALL(0x001D7D00u, sub_001D7D00); /* call 0x001D7D00 */

loc_001DA6D9: ;
    eax = MEM32(ebp + -8);
    PUSH32(esp, 0);
    MEM32(eax + 0x14) = 1;
    PUSH32(esp, MEM32(ebx + 0xAF4));
    ecx = ebx;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DA6F3u); RECOMP_ABI_CALL(0x001D3CCBu, sub_001D3CCB); /* call 0x001D3CCB */

loc_001DA6F3: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DA6FCu); RECOMP_ABI_CALL(0x001DA390u, sub_001DA390); /* call 0x001DA390 */

loc_001DA6FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DA703
 * Original: 0x001DA703 - 0x001DA743 (64 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DA703(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DA703: ;
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
    _fa = (uint32_t)(MEM8(esi + 0x13)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x13), 0x80 (8-bit) */
    eax = MEM32(esi + 0x44);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(eax + 0x94);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x40);
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -20) = edx;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001DA743(); return; } /* je: equal / zero */

loc_001DA730: ;
    _fa = (uint32_t)(MEM8(eax + 0xA0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xA0), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001DA743(); return; } /* je: equal / zero */

loc_001DA739: ;
    ecx = 0x400;
    MEM32(ebp + 8) = ecx;
    g_seh_ebp = ebp; sub_001DA74A(); return; /* tail jmp 0x001DA74A */

}

/**
 * sub_001DA743
 * Original: 0x001DA743 - 0x001DA74A (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA743(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DA743: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(ebp + 8);

    g_seh_ebp = ebp; sub_001DA74A(); return; /* fallthrough 0x001DA74A */

}

/**
 * sub_001DA74A
 * Original: 0x001DA74A - 0x001DA8DB (401 bytes, 136 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA74A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DA74A: ;
    ebx = MEM32(edi + 8);
    eax = ecx + 0x10;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFFFFFF04u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx & 0xFBF4000Cu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -24) = eax;
    eax = ecx + 0x3C;
    ebx = ebx | 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(edi + 4) = LO16(eax);
    MEM32(ebp + -28) = eax;
    MEM32(edi + 8) = ebx;
    ebx = MEM32(edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x54), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DA78C; /* jbe: below or equal (unsigned <=) */

loc_001DA77C: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(ecx + 0xC)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0xC), 5 (8-bit) */
    MEM32(ebp + -4) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_001DA78F; /* jne: not equal / not zero */

loc_001DA78C: ;
    MEM32(ebp + -4) = eax;

loc_001DA78F: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 4);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DA7A1u); RECOMP_ABI_CALL(0x001D2B0Eu, sub_001D2B0E); /* call 0x001D2B0E */

loc_001DA7A1: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ebx + 0x22) = LO16(eax);
    MEM16(ebx + 0x20) = 0x5307;
    eax = MEM32(esi + 4);
    MEM32(ebx + 0x24) = eax;
    eax = MEM32(esi + 8);
    MEM32(ebx + 0x28) = eax;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0xAC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM16(ebx + 0x2C) = LO16(eax);
    eax = MEM32(ebp + 0xC);
    SET_LO8(ecx, MEM8(eax + 0xA0));
    MEM8(ebx + 0x2E) = LO8(ecx);
    MEM32(eax + 0xA0) = MEM32(eax + 0xA0) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xA0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(ebx + 0x2F) = LO8(ecx);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DA810; /* je: equal / zero */

loc_001DA7F7: ;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx + 0x30;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    edi = MEM32(ebp + -12);
    eax = MEM32(ebp + 0xC);

loc_001DA810: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    ecx = ZX16(MEM16(ebx + 0x2C));
    SET_LO16(eax, MEM16(eax + 0xA0));
    ecx = ecx + ecx * 2;
    MEM16(esi + ecx * 8 + 0x6A) = LO16(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_001DA8A6; /* je: equal / zero */

loc_001DA829: ;
    esi = MEM32(ebp + -16);
    eax = MEM32(esi + 8);
    eax = eax & 0xFBF4000Cu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = edi;
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 8) = eax;
    SET_LO16(eax, MEM16(ebp + -28));
    MEM16(esi + 4) = LO16(eax);
    PUSH32(esp, 0x001DA84Cu); RECOMP_ABI_CALL(0x001D8186u, sub_001D8186); /* call 0x001D8186 */

loc_001DA84C: ;
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001DA855u); RECOMP_ABI_CALL(0x001D8186u, sub_001D8186); /* call 0x001D8186 */

loc_001DA855: ;
    ecx = MEM32(ebp + 8);
    esi = edi;
    edi = eax;
    eax = MEM32(ebp + -12);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    esi = MEM32(eax);
    eax = MEM32(ebp + -16);
    edi = MEM32(eax);
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
    ecx = eax;
    PUSH32(esp, 0x001DA883u); RECOMP_ABI_CALL(0x001D819Au, sub_001D819A); /* call 0x001D819A */

loc_001DA883: ;
    ecx = MEM32(ebp + 0xC);
    MEM8(eax + 0x1B) = 1;
    eax = ZX8(MEM8(ebx + 0x2E));
    ecx = MEM32(ecx + 0xA8);
    eax = eax + eax * 4;
    eax = ecx + eax * 8;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DA8A3u); RECOMP_ABI_CALL(0x001D9D30u, sub_001D9D30); /* call 0x001D9D30 */

loc_001DA8A3: ;
    edi = MEM32(ebp + -12);

loc_001DA8A6: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -20));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM32(edi + 0x14) = esi;
    PUSH32(esp, 0x001DA8BAu); RECOMP_ABI_CALL(0x001D3CCBu, sub_001D3CCB); /* call 0x001D3CCB */

loc_001DA8BA: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DA8D4; /* je: equal / zero */

loc_001DA8C0: ;
    eax = MEM32(ebp + -16);
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -20));
    MEM32(eax + 0x14) = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DA8D4u); RECOMP_ABI_CALL(0x001D3CCBu, sub_001D3CCB); /* call 0x001D3CCB */

loc_001DA8D4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DA8DB
 * Original: 0x001DA8DB - 0x001DA9F3 (280 bytes, 99 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DA8DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DA8DB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = ebx;
    _fb = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xAC;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, edi);
    eax = eax + eax * 2;
    edi = esi + eax * 8 + 0x68;
    MEM16(edi + 0xC) = MEM16(edi + 0xC) | 0xFFFF;
    _fa = (uint32_t)(MEM16(edi + 0xC)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(edi + 0xE) = MEM16(edi + 0xE) | 0xFFFF;
    _fa = (uint32_t)(MEM16(edi + 0xE)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM32(ebx + 0xA4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xA4), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DA9EC; /* jbe: below or equal (unsigned <=) */

loc_001DA918: ;
    edx = MEM32(esi + 0x54);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = MEM32(esi + 0x58);
    ecx = MEM32(ebx + 0xA8);
    if (CMP_BE(_fa, _fb)) goto loc_001DA94D; /* jbe: below or equal (unsigned <=) */

loc_001DA928: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = edx;

loc_001DA92E: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DA93A; /* jbe: below or equal (unsigned <=) */

loc_001DA935: ;
    MEM32(eax) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DA93A: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DA945; /* jbe: below or equal (unsigned <=) */

loc_001DA940: ;
    MEM32(eax) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DA945: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001DA92E; /* jne: not equal / not zero */

loc_001DA94D: ;
    ecx = MEM32(esi + 0x58);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ebp + 8) = eax;
    if ((_fa == 0)) goto loc_001DA9BA; /* je: equal / zero */

loc_001DA95A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DA969; /* jbe: below or equal (unsigned <=) */

loc_001DA95F: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DA969u); RECOMP_ABI_CALL(0x001D9D9Au, sub_001D9D9A); /* call 0x001D9D9A */

loc_001DA969: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(esi + 0x58));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DA977u); RECOMP_ABI_CALL(0x001D9D78u, sub_001D9D78); /* call 0x001D9D78 */

loc_001DA977: ;
    ecx = 0x1F4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0x3E8;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DA993; /* jb: below (unsigned <) */

loc_001DA98E: ;
    eax = 0xFFFF;

loc_001DA993: ;
    MEM16(edi + 0xE) = LO16(eax);
    eax = MEM32(esi + 0x58);
    eax = MEM32(eax);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3E8;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DA9B3; /* jb: below (unsigned <) */

loc_001DA9AE: ;
    eax = 0xFFFF;

loc_001DA9B3: ;
    ebx = MEM32(ebp + 0xC);
    MEM16(edi + 0xC) = LO16(eax);

loc_001DA9BA: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DA9C6u); RECOMP_ABI_CALL(0x001D9E19u, sub_001D9E19); /* call 0x001D9E19 */

loc_001DA9C6: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + -4);
    ecx = esi;
    MEM32(edi + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DA9D7u); RECOMP_ABI_CALL(0x001D9E19u, sub_001D9E19); /* call 0x001D9E19 */

loc_001DA9D7: ;
    MEM32(edi + 0x14) = eax;
    eax = MEM32(esi + 0xD10);
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DA9EC; /* jbe: below or equal (unsigned <=) */

loc_001DA9E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DA9EC; /* jbe: below or equal (unsigned <=) */

loc_001DA9E9: ;
    MEM32(edi + 0x10) = eax;

loc_001DA9EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DA9F3
 * Original: 0x001DA9F3 - 0x001DAA37 (68 bytes, 27 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA9F3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DA9F3: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(MEM32(edi + 0x4C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xAC;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = eax + eax * 2;
    esi = edi + eax * 8 + 0x68;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001DAA26; /* jne: not equal / not zero */

loc_001DAA17: ;
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = ebx;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DAA23u); RECOMP_ABI_CALL(0x001DA8DBu, sub_001DA8DB); /* call 0x001DA8DB */

loc_001DAA23: ;
    MEM8(esi) = MEM8(esi) | 1;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_001DAA26: ;
    MEM32(edi + 0x64) = MEM32(edi + 0x64) - 1;
    _fa = (uint32_t)(MEM32(edi + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001DAA31u); RECOMP_ABI_CALL(0x001D9CDEu, sub_001D9CDE); /* call 0x001D9CDE */

loc_001DAA31: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DAA37
 * Original: 0x001DAA37 - 0x001DAA52 (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAA37(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DAA37: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DAA58(); return; } /* je: equal / zero */

loc_001DAA3F: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DAA52(); return; } /* je: equal / zero */

loc_001DAA45: ;
    MEM32(eax + 0x18) = MEM32(eax + 0x18) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x10) = 0x1D816B;
    g_seh_ebp = ebp; sub_001DAA58(); return; /* tail jmp 0x001DAA58 */

}

/**
 * sub_001DAA52
 * Original: 0x001DAA52 - 0x001DAA58 (6 bytes, 2 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAA52(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DAA52: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DAA58u); RECOMP_ABI_CALL(0x001D816Bu, sub_001D816B); /* call 0x001D816B */

    g_seh_ebp = ebp; sub_001DAA58(); return; /* fallthrough 0x001DAA58 */

}

/**
 * sub_001DAA58
 * Original: 0x001DAA58 - 0x001DAA5B (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAA58(void)
{

loc_001DAA58: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DAA5B
 * Original: 0x001DAA5B - 0x001DABA3 (328 bytes, 111 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DAA5B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DAA5B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    eax = ebp + -28;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DAA6Eu); RECOMP_ABI_CALL(0x001D9D30u, sub_001D9D30); /* call 0x001D9D30 */

loc_001DAA6E: ;
    ebx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM16(ebx + 2)) & 0xFFFFu; _fb = (uint32_t)(0x4E) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 2), 0x4E (16-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DACDE(); return; } /* jb: below (unsigned <) */

loc_001DAA7C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0x4E (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DACDE(); return; } /* jb: below (unsigned <) */

loc_001DAA86: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    eax = ebx + 0x12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DAA93u); RECOMP_ABI_CALL(0x001D22E7u, sub_001D22E7); /* call 0x001D22E7 */

loc_001DAA93: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DACDD(); return; } /* je: equal / zero */

loc_001DAA9D: ;
    eax = MEM32(esi + 0xF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -20) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DACDD(); return; } /* je: equal / zero */

loc_001DAAAE: ;
    PUSH32(esp, 0xC);
    eax = ebx + 0x42;
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebx + 2));
    _fb = (uint32_t)(0x4E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x4E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = ebx + 0x4E;
    PUSH32(esp, eax);
    PUSH32(esp, 0x42);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    eax = esi + 8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DAACEu); RECOMP_ABI_CALL(0x001D7D40u, sub_001D7D40); /* call 0x001D7D40 */

loc_001DAACE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DACDD(); return; } /* je: equal / zero */

loc_001DAAD6: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x28);
    edi = ebx + 0x1A;
    PUSH32(esp, edi);
    eax = ebx + 6;
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DAAF1u); RECOMP_ABI_CALL(0x001D23AEu, sub_001D23AE); /* call 0x001D23AE */

loc_001DAAF1: ;
    _fa = (uint32_t)(MEM32(ebx + 0x3E)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x3E), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DACDC(); return; } /* jne: not equal / not zero */

loc_001DAAFB: ;
    ecx = MEM32(ebp + -4);
    eax = ebp + -64;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DAB07u); RECOMP_ABI_CALL(0x001D32F8u, sub_001D32F8); /* call 0x001D32F8 */

loc_001DAB07: ;
    PUSH32(esp, 9);
    POP32(esp, ecx);
    esi = ebp + -64;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) goto loc_001DAB31; /* je: equal / zero */

loc_001DAB13: ;
    _fa = (uint32_t)(MEM8(ebx + 0x12)) & 0xFFu; _fb = (uint32_t)(0xE0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x12), 0xE0 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DACDC(); return; } /* jne: not equal / not zero */

loc_001DAB1D: ;
    PUSH32(esp, 3);
    POP32(esp, ecx);
    edi = ebx + 0x24;
    esi = ebp + -54;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_001DACDC(); return; } /* jne: not equal / not zero */

loc_001DAB31: ;
    ecx = MEM32(ebp + -4);
    eax = ZX8(MEM8(ecx + 0x48));
    ebx = MEM32(ebp + -20);
    ecx = MEM32(ecx + 0x1D8);
    edx = MEM32(ebx + 0x38);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x14);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x11), 1 (8-bit) */
    MEM32(ebp + 0x18) = edx;
    MEM32(ebp + -12) = ecx;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001DABDA(); return; } /* je: equal / zero */

loc_001DAB63: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DACDC(); return; } /* jbe: below or equal (unsigned <=) */

loc_001DAB6B: ;
    SET_LO8(ecx, MEM8(eax + 0x10));
    MEM8(ebp + 0x17) = LO8(ecx);

loc_001DAB71: ;
    SET_LO8(ecx, MEM8(ebp + 0x17));
    _fa = (uint32_t)(MEM8(ebx + 0x2A)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x2A), LO8(ecx) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DAB92; /* jb: below (unsigned <) */

loc_001DAB79: ;
    SET_LO16(ecx, MEM16(ebx + 0x28));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax + 0xE)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(eax + 0xE) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DAB92; /* jne: not equal / not zero */

loc_001DAB83: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edi = eax + 6;
    esi = ebx + 0x20;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) { g_seh_ebp = ebp; sub_001DABA3(); return; } /* je: equal / zero */

loc_001DAB92: ;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x38;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001DAB71; /* ja: above (unsigned >) */

loc_001DAB9E: ;
    g_seh_ebp = ebp; sub_001DACDC(); return; /* tail jmp 0x001DACDC */

}

/**
 * sub_001DABA3
 * Original: 0x001DABA3 - 0x001DABDA (55 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DABA3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DABA3: ;
    SET_LO8(eax, MEM8(ebp + 0x17));
    _fa = (uint32_t)(MEM8(ebx + 0x2A)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x2A), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DACDC(); return; } /* jne: not equal / not zero */

loc_001DABAF: ;
    _fa = (uint32_t)(MEM8(ebx + 0x2B)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x2B), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DACDC(); return; } /* jne: not equal / not zero */

loc_001DABB9: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), eax (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DACDC(); return; } /* jb: below (unsigned <) */

loc_001DABC5: ;
    eax = MEM32(ebp + -28);
    MEM32(ebx + 0x18) = eax;
    eax = MEM32(ebp + -24);
    MEM32(ebx + 0x1C) = eax;
    MEM8(ebx + 0x2B) = 2;
    g_seh_ebp = ebp; sub_001DAC8D(); return; /* tail jmp 0x001DAC8D */

}

/**
 * sub_001DABDA
 * Original: 0x001DABDA - 0x001DABE0 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DABDA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DABDA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DAC56(); return; } /* jbe: below or equal (unsigned <=) */

loc_001DABDE: ;
    g_seh_ebp = ebp; sub_001DABE3(); return; /* tail jmp 0x001DABE3 */

}

/**
 * sub_001DABE0
 * Original: 0x001DABE0 - 0x001DABE3 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DABE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DABE0: ;
    ecx = MEM32(ebp + -12);

    g_seh_ebp = ebp; sub_001DABE3(); return; /* fallthrough 0x001DABE3 */

}

/**
 * sub_001DABE3
 * Original: 0x001DABE3 - 0x001DAC56 (115 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DABE3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DABE3: ;
    _fa = (uint32_t)(MEM8(ebx + 0x2B)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x2B), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DABF2; /* jne: not equal / not zero */

loc_001DABE9: ;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DABF2; /* jae: above or equal (unsigned >=) */

loc_001DABEE: ;
    MEM8(ebx + 0x2B) = 0;

loc_001DABF2: ;
    _fa = (uint32_t)(MEM8(ebx + 0x2B)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x2B), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DAC0A; /* jne: not equal / not zero */

loc_001DABF8: ;
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DAC07; /* je: equal / zero */

loc_001DABFF: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 8) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DAC0A; /* jbe: below or equal (unsigned <=) */

loc_001DAC07: ;
    MEM32(ebp + -8) = ebx;

loc_001DAC0A: ;
    SET_LO16(ecx, MEM16(ebx + 0x28));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax + 0xE)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(eax + 0xE) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DAC43; /* jne: not equal / not zero */

loc_001DAC14: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edi = eax + 6;
    esi = ebx + 0x20;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) goto loc_001DAC43; /* jne: not equal / not zero */

loc_001DAC23: ;
    SET_LO8(ecx, MEM8(ebx + 0x2A));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 0x10)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax + 0x10) (8-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DACDC(); return; } /* jae: above or equal (unsigned >=) */

loc_001DAC2F: ;
    SET_LO8(ecx, MEM8(ebx + 0x2B));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DAC3A; /* jne: not equal / not zero */

loc_001DAC37: ;
    MEM8(ebx + 0x2B) = LO8(edx);

loc_001DAC3A: ;
    _fa = (uint32_t)(MEM8(ebx + 0x2B)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x2B), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DAC43; /* jne: not equal / not zero */

loc_001DAC40: ;
    MEM32(ebp + -16) = ebx;

loc_001DAC43: ;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x38;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001DABE0(); return; } /* ja: above (unsigned >) */

loc_001DAC4F: ;
    ebx = MEM32(ebp + -16);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DAC5D(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001DAC56(); return; /* fallthrough 0x001DAC56 */

}

/**
 * sub_001DAC56
 * Original: 0x001DAC56 - 0x001DAC5D (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAC56(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DAC56: ;
    ebx = MEM32(ebp + -8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DACDC(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_001DAC5D(); return; /* fallthrough 0x001DAC5D */

}

/**
 * sub_001DAC5D
 * Original: 0x001DAC5D - 0x001DAC8D (48 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAC5D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DAC5D: ;
    ecx = MEM32(eax + 6);
    MEM32(ebx + 0x20) = ecx;
    ecx = MEM32(eax + 0xA);
    MEM32(ebx + 0x24) = ecx;
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx + 0x1D8);
    MEM32(ebx + 8) = ecx;
    SET_LO16(ecx, MEM16(eax + 0xE));
    MEM16(ebx + 0x28) = LO16(ecx);
    SET_LO8(ecx, MEM8(eax + 0x10));
    MEM8(ebx + 0x2A) = LO8(ecx);
    _fa = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x11), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001DACCC(); return; } /* je: equal / zero */

loc_001DAC89: ;
    MEM8(ebx + 0x2B) = 3;

    g_seh_ebp = ebp; sub_001DAC8D(); return; /* fallthrough 0x001DAC8D */

}

/**
 * sub_001DAC8D
 * Original: 0x001DAC8D - 0x001DACCC (63 bytes, 22 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAC8D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DAC8D: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    MEM32(ebx + 0x2C) = eax;
    SET_LO16(eax, MEM16(ebp + 0x10));
    MEM16(ebx + 0x30) = LO16(eax);
    PUSH32(esp, 0x001DACA3u); RECOMP_ABI_CALL(0x001D8186u, sub_001D8186); /* call 0x001D8186 */

loc_001DACA3: ;
    edx = MEM32(ebp + -20);
    esi = eax;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebx + 0x32;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    eax = edx + 0x10;
    ecx = MEM32(eax + 4);
    MEM32(ebx + 4) = ecx;
    MEM32(ebx) = eax;
    MEM32(ecx) = ebx;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edx);
    MEM32(eax + 4) = ebx;
    PUSH32(esp, 0x001DACCAu); RECOMP_ABI_CALL(0x001DA2B5u, sub_001DA2B5); /* call 0x001DA2B5 */

loc_001DACCA: ;
    g_seh_ebp = ebp; sub_001DACDC(); return; /* tail jmp 0x001DACDC */

}

/**
 * sub_001DACCC
 * Original: 0x001DACCC - 0x001DACDC (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DACCC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DACCC: ;
    MEM8(ebx + 0x2B) = 1;
    eax = MEM32(ebp + -28);
    MEM32(ebx + 0x10) = eax;
    eax = MEM32(ebp + -24);
    MEM32(ebx + 0x14) = eax;

    g_seh_ebp = ebp; sub_001DACDC(); return; /* fallthrough 0x001DACDC */

}

/**
 * sub_001DACDC
 * Original: 0x001DACDC - 0x001DACDD (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DACDC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DACDC: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001DACDD(); return; /* fallthrough 0x001DACDD */

}

/**
 * sub_001DACDD
 * Original: 0x001DACDD - 0x001DACDE (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DACDD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DACDD: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001DACDE(); return; /* fallthrough 0x001DACDE */

}

/**
 * sub_001DACDE
 * Original: 0x001DACDE - 0x001DACE3 (5 bytes, 3 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DACDE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DACDE: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001DACE3
 * Original: 0x001DACE3 - 0x001DACF3 (16 bytes, 5 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DACE3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DACE3: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xFFFFFFE8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFE8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DACF0u); RECOMP_ABI_CALL(0x001DA2B5u, sub_001DA2B5); /* call 0x001DA2B5 */

loc_001DACF0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DACF3
 * Original: 0x001DACF3 - 0x001DAD06 (19 bytes, 5 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DACF3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DACF3: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(eax + 0x18));
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x001DAD03u); RECOMP_ABI_CALL(0x001DA2B5u, sub_001DA2B5); /* call 0x001DA2B5 */

loc_001DAD03: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DAD06
 * Original: 0x001DAD06 - 0x001DAD3D (55 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAD06(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DAD06: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001DAD38; /* je: equal / zero */

loc_001DAD12: ;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x001DAD1Au); RECOMP_ABI_CALL(0x001DAA37u, sub_001DAA37); /* call 0x001DAA37 */

loc_001DAD1A: ;
    PUSH32(esp, MEM32(esi + 0xC));
    ecx = edi;
    PUSH32(esp, 0x001DAD24u); RECOMP_ABI_CALL(0x001DAA37u, sub_001DAA37); /* call 0x001DAA37 */

loc_001DAD24: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001DAD31u); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001DAD31: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BCD0); PUSH32(esp, 0x001DAD38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DAD32u); } /* indirect call */
    }

loc_001DAD38: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DAD3D
 * Original: 0x001DAD3D - 0x001DADC9 (140 bytes, 53 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAD3D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DAD3D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001DADC4; /* je: equal / zero */

loc_001DAD49: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DAD56; /* je: equal / zero */

loc_001DAD50: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BB80); PUSH32(esp, 0x001DAD56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DAD50u); } /* indirect call */
    }

loc_001DAD56: ;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esi + 0x4C);
    if (CMP_BE(_fa, _fb)) goto loc_001DAD92; /* jbe: below or equal (unsigned <=) */

loc_001DAD60: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = eax + 0x94;
    ebp = ecx;

loc_001DAD6A: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DAD87; /* je: equal / zero */

loc_001DAD70: ;
    MEM32(eax + 0x128) = MEM32(eax + 0x128) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x128)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001DAD87; /* jne: not equal / not zero */

loc_001DAD78: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001DAD87; /* jne: not equal / not zero */

loc_001DAD7D: ;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001DAD87u); RECOMP_ABI_CALL(0x001D4751u, sub_001D4751); /* call 0x001D4751 */

loc_001DAD87: ;
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xAC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001DAD6A; /* jne: not equal / not zero */

loc_001DAD90: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_001DAD92: ;
    PUSH32(esp, MEM32(esi + 0x3C));
    ecx = ebx;
    PUSH32(esp, 0x001DAD9Cu); RECOMP_ABI_CALL(0x001DAA37u, sub_001DAA37); /* call 0x001DAA37 */

loc_001DAD9C: ;
    PUSH32(esp, MEM32(esi + 0x40));
    ecx = ebx;
    PUSH32(esp, 0x001DADA6u); RECOMP_ABI_CALL(0x001DAA37u, sub_001DAA37); /* call 0x001DAA37 */

loc_001DADA6: ;
    PUSH32(esp, MEM32(esi + 0x44));
    ecx = ebx;
    PUSH32(esp, 0x001DADB0u); RECOMP_ABI_CALL(0x001DAA37u, sub_001DAA37); /* call 0x001DAA37 */

loc_001DADB0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001DADBDu); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001DADBD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BCD0); PUSH32(esp, 0x001DADC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DADBEu); } /* indirect call */
    }

loc_001DADC4: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DADC9
 * Original: 0x001DADC9 - 0x001DAE2A (97 bytes, 40 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DADC9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DADC9: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(esi + 0xD));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(ecx, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(esi + 0xC) = LO8(ebx);
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 0xD) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_001DAE00; /* je: equal / zero */

loc_001DADF5: ;
    edx = MEM32(esi + 4);
    MEM32(edx) = eax;
    MEM32(eax + 4) = edx;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001DAE00: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DAE3E(); return; } /* jbe: below or equal (unsigned <=) */

loc_001DAE04: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 2 (8-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DAE2A(); return; } /* jbe: below or equal (unsigned <=) */

loc_001DAE09: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 3 (8-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DAE3E(); return; } /* jbe: below or equal (unsigned <=) */

loc_001DAE0E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 5 (8-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DAE2A(); return; } /* jbe: below or equal (unsigned <=) */

loc_001DAE13: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DAE3E(); return; } /* jne: not equal / not zero */

loc_001DAE18: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DAE3E(); return; } /* je: equal / zero */

loc_001DAE1C: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = edi;
    PUSH32(esp, 0x001DAE28u); RECOMP_ABI_CALL(0x001DA9F3u, sub_001DA9F3); /* call 0x001DA9F3 */

loc_001DAE28: ;
    g_seh_ebp = ebp; sub_001DAE3E(); return; /* tail jmp 0x001DAE3E */

}

/**
 * sub_001DAE2A
 * Original: 0x001DAE2A - 0x001DAE3E (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAE2A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DAE2A: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0x18);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    MEM32(ecx) = esi;
    MEM32(eax + 4) = esi;

    g_seh_ebp = ebp; sub_001DAE3E(); return; /* fallthrough 0x001DAE3E */

}

/**
 * sub_001DAE3E
 * Original: 0x001DAE3E - 0x001DAE44 (6 bytes, 4 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAE3E(void)
{

loc_001DAE3E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001DAE44
 * Original: 0x001DAE44 - 0x001DAE73 (47 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DAE44(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DAE44: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001DAE53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DAE4Du); } /* indirect call */
    }

loc_001DAE53: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    MEM8(ebp + -8) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DAE60u); RECOMP_ABI_CALL(0x001D22E7u, sub_001D22E7); /* call 0x001D22E7 */

loc_001DAE60: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebp + -4) = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DAE73(); return; } /* jne: not equal / not zero */

loc_001DAE69: ;
    esi = 0x2726;
    g_seh_ebp = ebp; sub_001DAFF3(); return; /* tail jmp 0x001DAFF3 */

}

/**
 * sub_001DAE73
 * Original: 0x001DAE73 - 0x001DAE98 (37 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAE73(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DAE73: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xF0);
    MEM32(ebp + 8) = edi;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001DAE98(); return; } /* je: equal / zero */

loc_001DAE84: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001DAE8Cu); RECOMP_ABI_CALL(0x001DAD06u, sub_001DAD06); /* call 0x001DAD06 */

loc_001DAE8C: ;
    MEM32(esi + 0xF0) = MEM32(esi + 0xF0) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xF0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001DAFF0(); return; /* tail jmp 0x001DAFF0 */

}

/**
 * sub_001DAE98
 * Original: 0x001DAE98 - 0x001DAEEB (83 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAE98(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DAE98: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DAF7C(); return; } /* jne: not equal / not zero */

loc_001DAEA0: ;
    edi = ZX8(MEM8(ebx + 0x45));
    eax = ZX8(MEM8(ebx + 0xF));
    edi = (uint32_t)((int32_t)edi * (int32_t)0xE);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4754454E);
    edi = edi * 4 + 0x40;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x22BCD4); PUSH32(esp, 0x001DAEC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DAEBAu); } /* indirect call */
    }

loc_001DAEC0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DAEDA; /* je: equal / zero */

loc_001DAEC6: ;
    ecx = edi;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_001DAEDA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebp + 8) = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DAEEB(); return; } /* jne: not equal / not zero */

loc_001DAEE1: ;
    esi = 0x2747;
    g_seh_ebp = ebp; sub_001DAFF2(); return; /* tail jmp 0x001DAFF2 */

}

/**
 * sub_001DAEE1
 * Original: 0x001DAEE1 - 0x001DAEEB (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAEE1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DAEE1: ;
    esi = 0x2747;
    g_seh_ebp = ebp; sub_001DAFF2(); return; /* tail jmp 0x001DAFF2 */

}

/**
 * sub_001DAEEB
 * Original: 0x001DAEEB - 0x001DAF7C (145 bytes, 45 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAEEB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DAEEB: ;
    eax = esi + 0x10;
    MEM32(esi + 0x14) = eax;
    MEM32(eax) = eax;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x20) = MEM32(esi + 0x20) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x24) = 0x1DACE3;
    eax = ZX8(MEM8(ebx + 0x47));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8);
    MEM32(esi + 0x28) = eax;
    eax = MEM32(0x22BAE8);
    eax = MEM32(eax);
    MEM32(esi + 0x2C) = eax;
    eax = ZX8(MEM8(ebx + 0x45));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = eax + esi + 0x40;
    MEM32(esi + 0x34) = eax;
    eax = ZX8(MEM8(ebx + 0x45));
    MEM32(esi + 0x38) = eax;
    edi = ZX8(MEM8(ebx + 0xF));
    eax = esi + 8;
    PUSH32(esp, eax);
    edi = edi * 4 + 7;
    PUSH32(esp, esi);
    edi = edi & 0xFFFFFFF8u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x1DACF3);
    _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2B;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001DAF51u); RECOMP_ABI_CALL(0x001D9CF7u, sub_001D9CF7); /* call 0x001D9CF7 */

loc_001DAF51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DAFA1(); return; } /* je: equal / zero */

loc_001DAF55: ;
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1DACF3);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001DAF67u); RECOMP_ABI_CALL(0x001D9CF7u, sub_001D9CF7); /* call 0x001D9CF7 */

loc_001DAF67: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DAFA1(); return; } /* je: equal / zero */

loc_001DAF6B: ;
    eax = MEM32(ebp + -4);
    edi = MEM32(ebp + 8);
    MEM32(eax + 0xF0) = esi;
    MEM32(esi) = eax;
    eax = MEM32(ebp + 0x18);

    g_seh_ebp = ebp; sub_001DAF7C(); return; /* fallthrough 0x001DAF7C */

}

/**
 * sub_001DAF7C
 * Original: 0x001DAF7C - 0x001DAFA1 (37 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAF7C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DAF7C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001DAFB6(); return; } /* je: equal / zero */

loc_001DAF80: ;
    edx = MEM32(ebp + 0x14);
    eax = 0xFA0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    esi = edx;
    if (CMP_A(_fa, _fb)) goto loc_001DAF90; /* ja: above (unsigned >) */

loc_001DAF8E: ;
    esi = eax;

loc_001DAF90: ;
    ecx = 0x5F5E100;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DAFAE(); return; } /* jae: above or equal (unsigned >=) */

loc_001DAF99: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DAFB0(); return; } /* jbe: below or equal (unsigned <=) */

loc_001DAF9D: ;
    eax = edx;
    g_seh_ebp = ebp; sub_001DAFB0(); return; /* tail jmp 0x001DAFB0 */

}

/**
 * sub_001DAFA1
 * Original: 0x001DAFA1 - 0x001DAFAE (13 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAFA1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DAFA1: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001DAFA9u); RECOMP_ABI_CALL(0x001DAD06u, sub_001DAD06); /* call 0x001DAD06 */

loc_001DAFA9: ;
    g_seh_ebp = ebp; sub_001DAEE1(); return; /* tail jmp 0x001DAEE1 */

}

/**
 * sub_001DAFAE
 * Original: 0x001DAFAE - 0x001DAFB0 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAFAE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DAFAE: ;
    eax = ecx;

    g_seh_ebp = ebp; sub_001DAFB0(); return; /* fallthrough 0x001DAFB0 */

}

/**
 * sub_001DAFB0
 * Original: 0x001DAFB0 - 0x001DAFB6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAFB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DAFB0: ;
    MEM32(edi + 0x28) = eax;
    eax = MEM32(ebp + 0x18);

    g_seh_ebp = ebp; sub_001DAFB6(); return; /* fallthrough 0x001DAFB6 */

}

/**
 * sub_001DAFB6
 * Original: 0x001DAFB6 - 0x001DAFF0 (58 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAFB6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DAFB6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001DAFE6; /* je: equal / zero */

loc_001DAFBA: ;
    eax = ZX8(MEM8(ebx + 0xF));
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DAFC9; /* jae: above or equal (unsigned >=) */

loc_001DAFC6: ;
    eax = MEM32(ebp + 0x10);

loc_001DAFC9: ;
    esi = MEM32(ebp + 0xC);
    MEM32(edi + 0x30) = eax;
    edi = MEM32(edi + 0x34);
    ecx = eax;
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
    eax = MEM32(ebp + 0x18);
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
    edi = MEM32(ebp + 8);

loc_001DAFE6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001DAFF0(); return; } /* je: equal / zero */

loc_001DAFEA: ;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi + 4) = eax;

    g_seh_ebp = ebp; sub_001DAFF0(); return; /* fallthrough 0x001DAFF0 */

}

/**
 * sub_001DAFF0
 * Original: 0x001DAFF0 - 0x001DAFF3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAFF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DAFF0: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001DAFF3(); return; /* fallthrough 0x001DAFF3 */

}

/**
 * sub_001DAFF2
 * Original: 0x001DAFF2 - 0x001DAFF3 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAFF2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DAFF2: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001DAFF3(); return; /* fallthrough 0x001DAFF3 */

}

/**
 * sub_001DAFF3
 * Original: 0x001DAFF3 - 0x001DB004 (17 bytes, 7 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAFF3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DAFF3: ;
    SET_LO8(ecx, MEM8(ebp + -8));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001DAFFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DAFF6u); } /* indirect call */
    }

loc_001DAFFC: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001DB004
 * Original: 0x001DB004 - 0x001DB038 (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB004(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB004: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001DB00Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DB008u); } /* indirect call */
    }

loc_001DB00E: ;
    ecx = esi + 0xA94;
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DB031; /* je: equal / zero */

loc_001DB01C: ;
    edx = eax + 0x60;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DB02D; /* je: equal / zero */

loc_001DB025: ;
    ecx = eax;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DB01C; /* jne: not equal / not zero */

loc_001DB02D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB038(); return; } /* jne: not equal / not zero */

loc_001DB031: ;
    esi = 0x2726;
    g_seh_ebp = ebp; sub_001DB046(); return; /* tail jmp 0x001DB046 */

}

/**
 * sub_001DB038
 * Original: 0x001DB038 - 0x001DB046 (14 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB038(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB038: ;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001DB044u); RECOMP_ABI_CALL(0x001DAD3Du, sub_001DAD3D); /* call 0x001DAD3D */

loc_001DB044: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001DB046(); return; /* fallthrough 0x001DB046 */

}

/**
 * sub_001DB046
 * Original: 0x001DB046 - 0x001DB055 (15 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB046(void)
{

loc_001DB046: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001DB04Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DB048u); } /* indirect call */
    }

loc_001DB04E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DB055
 * Original: 0x001DB055 - 0x001DB071 (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DB055(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB055: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x1D8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    g_seh_ebp = ebp; sub_001DB0E8(); return; /* tail jmp 0x001DB0E8 */

}

/**
 * sub_001DB071
 * Original: 0x001DB071 - 0x001DB0A7 (54 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB071(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB071: ;
    eax = MEM32(eax);
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 8) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB0EF(); return; } /* jb: below (unsigned <) */

loc_001DB07B: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;
    ecx = ZX8(MEM8(eax + 0xC));
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001DB0DD(); return; } /* je: equal / zero */

loc_001DB08F: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001DB0CB(); return; } /* je: equal / zero */

loc_001DB092: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001DB0A7(); return; } /* je: equal / zero */

loc_001DB096: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001DB0E8(); return; } /* jne: not equal / not zero */

loc_001DB099: ;
    SET_LO8(ecx, MEM8(eax + 0xD));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(ebx + 0x4F)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(ebx + 0x4F) (8-bit) */
    ecx = ebx;
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB0D9(); return; } /* jae: above or equal (unsigned >=) */

loc_001DB0A3: ;
    PUSH32(esp, 5);
    g_seh_ebp = ebp; sub_001DB0E1(); return; /* tail jmp 0x001DB0E1 */

}

/**
 * sub_001DB0A7
 * Original: 0x001DB0A7 - 0x001DB0C7 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB0A7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB0A7: ;
    ecx = MEM32(eax + 0xA0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x54) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB0C7(); return; } /* jae: above or equal (unsigned >=) */

loc_001DB0B2: ;
    _fa = (uint32_t)(MEM32(eax + 0xA4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xA4), 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001DB0C3; /* ja: above (unsigned >) */

loc_001DB0BB: ;
    SET_LO8(ecx, MEM8(eax + 0xD));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(ebx + 0x4D)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(ebx + 0x4D) (8-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB0C7(); return; } /* jae: above or equal (unsigned >=) */

loc_001DB0C3: ;
    PUSH32(esp, 4);
    g_seh_ebp = ebp; sub_001DB0DF(); return; /* tail jmp 0x001DB0DF */

}

/**
 * sub_001DB0C7
 * Original: 0x001DB0C7 - 0x001DB0CB (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB0C7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB0C7: ;
    PUSH32(esp, 6);
    g_seh_ebp = ebp; sub_001DB0DF(); return; /* tail jmp 0x001DB0DF */

}

/**
 * sub_001DB0CB
 * Original: 0x001DB0CB - 0x001DB0D9 (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB0CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB0CB: ;
    SET_LO8(ecx, MEM8(eax + 0xD));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(ebx + 0x4B)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(ebx + 0x4B) (8-bit) */
    ecx = ebx;
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB0D9(); return; } /* jae: above or equal (unsigned >=) */

loc_001DB0D5: ;
    PUSH32(esp, 2);
    g_seh_ebp = ebp; sub_001DB0E1(); return; /* tail jmp 0x001DB0E1 */

}

/**
 * sub_001DB0D9
 * Original: 0x001DB0D9 - 0x001DB0DD (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB0D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB0D9: ;
    PUSH32(esp, 6);
    g_seh_ebp = ebp; sub_001DB0E1(); return; /* tail jmp 0x001DB0E1 */

}

/**
 * sub_001DB0DD
 * Original: 0x001DB0DD - 0x001DB0E1 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB0DD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB0DD: ;
    PUSH32(esp, 2);
    ecx = ebx;

    g_seh_ebp = ebp; sub_001DB0E1(); return; /* fallthrough 0x001DB0E1 */

}

/**
 * sub_001DB0DF
 * Original: 0x001DB0DF - 0x001DB0E1 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB0DF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB0DF: ;
    ecx = ebx;

    g_seh_ebp = ebp; sub_001DB0E1(); return; /* fallthrough 0x001DB0E1 */

}

/**
 * sub_001DB0E1
 * Original: 0x001DB0E1 - 0x001DB0E8 (7 bytes, 3 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB0E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB0E1: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DB0E8u); RECOMP_ABI_CALL(0x001DADC9u, sub_001DADC9); /* call 0x001DADC9 */

    g_seh_ebp = ebp; sub_001DB0E8(); return; /* fallthrough 0x001DB0E8 */

}

/**
 * sub_001DB0E8
 * Original: 0x001DB0E8 - 0x001DB0EF (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB0E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB0E8: ;
    eax = edi + 0x1C;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB071(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001DB0EF(); return; /* fallthrough 0x001DB0EF */

}

/**
 * sub_001DB0EF
 * Original: 0x001DB0EF - 0x001DB127 (56 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB0EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB0EF: ;
    eax = edi + 0x14;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB25B(); return; } /* je: equal / zero */

loc_001DB0FA: ;
    PUSH32(esp, esi);

loc_001DB0FB: ;
    esi = MEM32(edi + 0x14);
    SET_LO8(eax, MEM8(esi + 0x18));
    SET_LO8(eax, LO8(eax) & 0xE0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x80 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB127(); return; } /* jne: not equal / not zero */

loc_001DB107: ;
    _fa = (uint32_t)(MEM32(ebx + 0xAF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xAF0), 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB127(); return; } /* je: equal / zero */

loc_001DB110: ;
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001DB11Bu); RECOMP_ABI_CALL(0x001DADC9u, sub_001DADC9); /* call 0x001DADC9 */

loc_001DB11B: ;
    eax = edi + 0x14;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DB0FB; /* jne: not equal / not zero */

loc_001DB122: ;
    g_seh_ebp = ebp; sub_001DB25A(); return; /* tail jmp 0x001DB25A */

}

/**
 * sub_001DB127
 * Original: 0x001DB127 - 0x001DB161 (58 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB127(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB127: ;
    eax = MEM32(edi + 0x3C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DB139; /* je: equal / zero */

loc_001DB130: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB25A(); return; } /* jne: not equal / not zero */

loc_001DB139: ;
    eax = MEM32(edi + 0x40);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB25A(); return; } /* jne: not equal / not zero */

loc_001DB145: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB25A(); return; } /* jne: not equal / not zero */

loc_001DB151: ;
    _fa = (uint32_t)(MEM32(edi + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x54), ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB161(); return; } /* jbe: below or equal (unsigned <=) */

loc_001DB156: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xC), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB161(); return; } /* je: equal / zero */

loc_001DB15C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001DB163(); return; /* tail jmp 0x001DB163 */

}

/**
 * sub_001DB161
 * Original: 0x001DB161 - 0x001DB163 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001DB161(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB161: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001DB163(); return; /* fallthrough 0x001DB163 */

}

/**
 * sub_001DB163
 * Original: 0x001DB163 - 0x001DB180 (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB163(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB163: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xC), 2 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB180(); return; } /* jne: not equal / not zero */

loc_001DB169: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x440;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8B0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x8B0)) >> 32) & 1);
    eax = eax + 0x8B0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = eax;
    eax = ZX8(MEM8(ebx + 0x4A));
    g_seh_ebp = ebp; sub_001DB19E(); return; /* tail jmp 0x001DB19E */

}

/**
 * sub_001DB180
 * Original: 0x001DB180 - 0x001DB19E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB180: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = 0x2B0;
    if (CMP_NE(_fa, _fb)) goto loc_001DB18F; /* jne: not equal / not zero */

loc_001DB18A: ;
    ecx = 0x440;

loc_001DB18F: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = eax;
    eax = ZX8(MEM8(ebx + 0x4C));

    g_seh_ebp = ebp; sub_001DB19E(); return; /* fallthrough 0x001DB19E */

}

/**
 * sub_001DB19E
 * Original: 0x001DB19E - 0x001DB1D4 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB19E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB19E: ;
    ecx = MEM32(edi + 0x38);
    edx = MEM32(ebx + 0x1DC);
    MEM32(ebp + -12) = eax;
    eax = MEM32(0x22BAE8);
    eax = MEM32(eax);
    MEM32(ebp + -16) = eax;
    eax = ecx;
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_001DB1C4; /* jns: not sign (positive) */

loc_001DB1C1: ;
    ecx = MEM32(ebp + -16);

loc_001DB1C4: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) { g_seh_ebp = ebp; sub_001DB1D4(); return; } /* jns: not sign (positive) */

loc_001DB1C8: ;
    eax = MEM32(ebp + -8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = eax;
    g_seh_ebp = ebp; sub_001DB25A(); return; /* tail jmp 0x001DB25A */

}

/**
 * sub_001DB1D4
 * Original: 0x001DB1D4 - 0x001DB1F8 (36 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB1D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB1D4: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(edi + 0x34));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(edi + 0x34)); }
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x38) = eax;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xC), 2 (8-bit) */
    ecx = ebx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB1F8(); return; } /* jne: not equal / not zero */

loc_001DB1F1: ;
    PUSH32(esp, 0x001DB1F6u); RECOMP_ABI_CALL(0x001DA5E5u, sub_001DA5E5); /* call 0x001DA5E5 */

loc_001DB1F6: ;
    g_seh_ebp = ebp; sub_001DB20A(); return; /* tail jmp 0x001DB20A */

}

/**
 * sub_001DB1F8
 * Original: 0x001DB1F8 - 0x001DB205 (13 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB1F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB1F8: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB205(); return; } /* je: equal / zero */

loc_001DB1FE: ;
    PUSH32(esp, 0x001DB203u); RECOMP_ABI_CALL(0x001DA703u, sub_001DA703); /* call 0x001DA703 */

loc_001DB203: ;
    g_seh_ebp = ebp; sub_001DB20A(); return; /* tail jmp 0x001DB20A */

}

/**
 * sub_001DB205
 * Original: 0x001DB205 - 0x001DB20A (5 bytes, 1 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB205(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB205: ;
    PUSH32(esp, 0x001DB20Au); RECOMP_ABI_CALL(0x001DA390u, sub_001DA390); /* call 0x001DA390 */

    g_seh_ebp = ebp; sub_001DB20A(); return; /* fallthrough 0x001DB20A */

}

/**
 * sub_001DB20A
 * Original: 0x001DB20A - 0x001DB24E (68 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB20A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB20A: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    MEM32(ecx) = eax;
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -8);
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx + eax * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi + 0x1C;
    MEM32(esi + 8) = ecx;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB24E(); return; } /* je: equal / zero */

loc_001DB22E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 8) (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB24E(); return; } /* jbe: below or equal (unsigned <=) */

loc_001DB233: ;
    eax = MEM32(edi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DB243; /* jae: above or equal (unsigned >=) */

loc_001DB23B: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DB23B; /* jb: below (unsigned <) */

loc_001DB243: ;
    ecx = MEM32(eax);
    MEM32(esi) = ecx;
    MEM32(esi + 4) = eax;
    ecx = MEM32(eax);
    g_seh_ebp = ebp; sub_001DB255(); return; /* tail jmp 0x001DB255 */

}

/**
 * sub_001DB24E
 * Original: 0x001DB24E - 0x001DB255 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB24E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB24E: ;
    ecx = MEM32(eax);
    MEM32(esi) = ecx;
    MEM32(esi + 4) = eax;

    g_seh_ebp = ebp; sub_001DB255(); return; /* fallthrough 0x001DB255 */

}

/**
 * sub_001DB255
 * Original: 0x001DB255 - 0x001DB25A (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB255(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB255: ;
    MEM32(ecx + 4) = esi;
    MEM32(eax) = esi;

    g_seh_ebp = ebp; sub_001DB25A(); return; /* fallthrough 0x001DB25A */

}

/**
 * sub_001DB25A
 * Original: 0x001DB25A - 0x001DB25B (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB25A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB25A: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001DB25B(); return; /* fallthrough 0x001DB25B */

}

/**
 * sub_001DB25B
 * Original: 0x001DB25B - 0x001DB283 (40 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB25B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB25B: ;
    eax = edi + 0x1C;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DB26F; /* je: equal / zero */

loc_001DB264: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DB26F; /* jbe: below or equal (unsigned <=) */

loc_001DB26C: ;
    MEM32(ebp + -4) = ecx;

loc_001DB26F: ;
    PUSH32(esp, MEM32(ebp + -4));
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001DB27Du); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001DB27D: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DB283
 * Original: 0x001DB283 - 0x001DB354 (209 bytes, 68 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DB283(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001DB283: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x20));
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = ebp + -32;
    esi = ecx;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DB298u); RECOMP_ABI_CALL(0x001D9D30u, sub_001D9D30); /* call 0x001D9D30 */

loc_001DB298: ;
    edx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM16(edx + 2)) & 0xFFFFu; _fb = (uint32_t)(0x27) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 2), 0x27 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB589(); return; } /* jb: below (unsigned <) */

loc_001DB2A6: ;
    eax = MEM32(esi + 0xA94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB589(); return; } /* je: equal / zero */

loc_001DB2B7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_001DB2B9: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edi = edx + 6;
    esi = eax + 4;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        _cf = (MEM32(esi) < MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) goto loc_001DB2D1; /* je: equal / zero */

loc_001DB2C8: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001DB2B9; /* jne: not equal / not zero */

loc_001DB2D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB587(); return; } /* je: equal / zero */

loc_001DB2D9: ;
    edi = ZX16(MEM16(edx + 0xE));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0x48) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB587(); return; } /* jae: above or equal (unsigned >=) */

loc_001DB2E6: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0xAC);
    _fb = (uint32_t)(MEM32(eax + 0x4C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(MEM32(eax + 0x4C))) >> 32) & 1);
    edi = edi + MEM32(eax + 0x4C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(edi + 0xC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -20) = edi;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB587(); return; } /* je: equal / zero */

loc_001DB2FD: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 6 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB587(); return; } /* je: equal / zero */

loc_001DB306: ;
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB587(); return; } /* jne: not equal / not zero */

loc_001DB310: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edx + 0x11));
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(eax + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x54), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -16) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001DB329; /* jne: not equal / not zero */

loc_001DB321: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB587(); return; } /* je: equal / zero */

loc_001DB329: ;
    eax = ZX8(MEM8(edx + 0x1A));
    esi = ecx;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_001DB587(); return; } /* jg: greater (signed >) */

loc_001DB33E: ;
    ebx = ZX16(MEM16(edx + 2));
    _fb = (uint32_t)(0x27) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(0x27));
    ebx = ebx - 0x27;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ebx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -24) = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB354(); return; } /* jne: not equal / not zero */

loc_001DB350: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    g_seh_ebp = ebp; sub_001DB371(); return; /* tail jmp 0x001DB371 */

}

/**
 * sub_001DB354
 * Original: 0x001DB354 - 0x001DB371 (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB354(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB354: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB587(); return; } /* ja: above (unsigned >) */

loc_001DB35C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 7 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB587(); return; } /* jne: not equal / not zero */

loc_001DB365: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax + 0xF));
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */

    g_seh_ebp = ebp; sub_001DB371(); return; /* fallthrough 0x001DB371 */

}

/**
 * sub_001DB371
 * Original: 0x001DB371 - 0x001DB434 (195 bytes, 69 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB371(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB371: ;
    if (_flags /* ja: above (unsigned >) */) { g_seh_ebp = ebp; sub_001DB587(); return; }

loc_001DB377: ;
    PUSH32(esp, 0xC);
    ecx = edx + 0x1B;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    eax = edx + 0x27;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B);
    PUSH32(esp, edx);
    MEM32(ebp + -12) = eax;
    PUSH32(esp, 0x10);
    eax = edi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DB393u); RECOMP_ABI_CALL(0x001D7D40u, sub_001D7D40); /* call 0x001D7D40 */

loc_001DB393: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB587(); return; } /* je: equal / zero */

loc_001DB39B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DB3BA; /* jbe: below or equal (unsigned <=) */

loc_001DB39F: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -12));
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    eax = edi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001DB3BAu); RECOMP_ABI_CALL(0x001D23AEu, sub_001D23AE); /* call 0x001D23AE */

loc_001DB3BA: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    eax = MEM32(ebp + 0x14);
    eax = ZX16(MEM16(eax + 0xE));
    ecx = MEM32(ebp + -8);
    eax = eax + eax * 2;
    ebx = ecx + eax * 8 + 0x68;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB434(); return; } /* je: equal / zero */

loc_001DB3D1: ;
    MEM8(ebx) = MEM8(ebx) | 2;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM8(ecx + 0x11)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x11), 0x10 (8-bit) */
    SET_LO8(eax, MEM8(ebx));
    if (TEST_Z(_fa, _fb)) goto loc_001DB3E3; /* je: equal / zero */

loc_001DB3DF: ;
    SET_LO8(eax, LO8(eax) | 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ebx) = LO8(eax);

loc_001DB3E3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DB409; /* jbe: below or equal (unsigned <=) */

loc_001DB3E7: ;
    edi = MEM32(edi + 0x9C);
    ecx = esi;
    esi = MEM32(ebp + -12);
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
    MEM8(ebx) = MEM8(ebx) | 8;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edi = MEM32(ebp + -20);
    esi = MEM32(ebp + -24);

loc_001DB409: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x001DB414u); RECOMP_ABI_CALL(0x001D9CDEu, sub_001D9CDE); /* call 0x001D9CDE */

loc_001DB414: ;
    eax = MEM32(edi + 0x9C);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 6);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -8));
    MEM32(ebx + 8) = eax;
    MEM16(ebx + 6) = LO16(esi);
    PUSH32(esp, 0x001DB42Fu); RECOMP_ABI_CALL(0x001DADC9u, sub_001DADC9); /* call 0x001DADC9 */

loc_001DB42F: ;
    g_seh_ebp = ebp; sub_001DB587(); return; /* tail jmp 0x001DB587 */

}

/**
 * sub_001DB434
 * Original: 0x001DB434 - 0x001DB528 (244 bytes, 80 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB434(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB434: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x54);
    ecx = MEM32(edi + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    edx = eax;
    if (CMP_B(_fa, _fb)) goto loc_001DB448; /* jb: below (unsigned <) */

loc_001DB446: ;
    edx = ecx;

loc_001DB448: ;
    ecx = MEM32(ebp + 0x14);
    eax = ZX8(MEM8(ecx + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB587(); return; } /* jae: above or equal (unsigned >=) */

loc_001DB457: ;
    _fa = (uint32_t)(MEM8(ecx + 0x11)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x11), 1 (8-bit) */
    edx = MEM32(edi + 0xA8);
    eax = eax + eax * 4;
    esi = edx + eax * 8;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB54A(); return; } /* je: equal / zero */

loc_001DB46D: ;
    eax = MEM32(esi + 0x10);
    eax = eax | MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001DB587(); return; } /* jne: not equal / not zero */

loc_001DB479: ;
    eax = MEM32(ebp + -32);
    ecx = MEM32(ebp + -4);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ebp + -28);
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, esi);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DB492u); RECOMP_ABI_CALL(0x001D9D50u, sub_001D9D50); /* call 0x001D9D50 */

loc_001DB492: ;
    ecx = MEM32(ebp + 0x14);
    MEM32(esi + 0x1C) = eax;
    edx = MEM32(ecx + 0x12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DB4A1; /* jae: above or equal (unsigned >=) */

loc_001DB49F: ;
    edx = eax;

loc_001DB4A1: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x1C) = eax;
    ecx = MEM32(ecx + 0x16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0x20) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_001DB4B2; /* jae: above or equal (unsigned >=) */

loc_001DB4B0: ;
    ecx = eax;

loc_001DB4B2: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x1C) = eax;
    eax = esi + 8;
    ecx = MEM32(eax);
    ecx = ecx | MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001DB587(); return; } /* je: equal / zero */

loc_001DB4C5: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DB4D2u); RECOMP_ABI_CALL(0x001D9D50u, sub_001D9D50); /* call 0x001D9D50 */

loc_001DB4D2: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esi + 0x24) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_001DB4DE; /* jae: above or equal (unsigned >=) */

loc_001DB4DC: ;
    eax = ecx;

loc_001DB4DE: ;
    PUSH32(esp, MEM32(ebp + -8));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x1C) = ecx;
    ecx = MEM32(ebp + -4);
    MEM32(edi + 0x10) = eax;
    SET_LO16(eax, MEM16(ebp + 0x10));
    esi = edi + 0xA4;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(edi + 0xE) = LO16(eax);
    MEM8(ebx) = MEM8(ebx) | 2;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, 0x001DB507u); RECOMP_ABI_CALL(0x001D9CDEu, sub_001D9CDE); /* call 0x001D9CDE */

loc_001DB507: ;
    SET_LO16(eax, ZX8(MEM8(esi)));
    MEM16(ebx + 4) = LO16(eax);
    eax = MEM32(esi);
    esi = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x50) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB528(); return; } /* jae: above or equal (unsigned >=) */

loc_001DB519: ;
    eax = MEM32(edi + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x54) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB528(); return; } /* jae: above or equal (unsigned >=) */

loc_001DB524: ;
    PUSH32(esp, 4);
    g_seh_ebp = ebp; sub_001DB535(); return; /* tail jmp 0x001DB535 */

}

/**
 * sub_001DB528
 * Original: 0x001DB528 - 0x001DB535 (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB528(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB528: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x11), 8 (8-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(5) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 5);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, eax);

    g_seh_ebp = ebp; sub_001DB535(); return; /* fallthrough 0x001DB535 */

}

/**
 * sub_001DB535
 * Original: 0x001DB535 - 0x001DB54A (21 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB535(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB535: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB53Fu); RECOMP_ABI_CALL(0x001DADC9u, sub_001DADC9); /* call 0x001DADC9 */

loc_001DB53F: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB548u); RECOMP_ABI_CALL(0x001DB055u, sub_001DB055); /* call 0x001DB055 */

loc_001DB548: ;
    g_seh_ebp = ebp; sub_001DB587(); return; /* tail jmp 0x001DB587 */

}

/**
 * sub_001DB54A
 * Original: 0x001DB54A - 0x001DB589 (63 bytes, 25 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB54A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB54A: ;
    eax = MEM32(esi + 8);
    eax = eax | MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_001DB587; /* jne: not equal / not zero */

loc_001DB552: ;
    eax = MEM32(esi + 0x10);
    eax = eax | MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_001DB587; /* jne: not equal / not zero */

loc_001DB55A: ;
    eax = MEM32(ebp + -32);
    ecx = MEM32(ebp + -4);
    MEM32(esi + 8) = eax;
    eax = MEM32(ebp + -28);
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, esi);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DB573u); RECOMP_ABI_CALL(0x001D9D50u, sub_001D9D50); /* call 0x001D9D50 */

loc_001DB573: ;
    ecx = MEM32(ebp + 0x14);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(ecx + 0x12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DB582; /* jae: above or equal (unsigned >=) */

loc_001DB580: ;
    ecx = eax;

loc_001DB582: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x18) = eax;

loc_001DB587: ;
    POP32(esp, edi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001DB589(); return; /* fallthrough 0x001DB589 */

}

/**
 * sub_001DB587
 * Original: 0x001DB587 - 0x001DB589 (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB587(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB587: ;
    POP32(esp, edi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001DB589(); return; /* fallthrough 0x001DB589 */

}

/**
 * sub_001DB589
 * Original: 0x001DB589 - 0x001DB58E (5 bytes, 3 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB589(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB589: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001DB58E
 * Original: 0x001DB58E - 0x001DB644 (182 bytes, 69 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DB58E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB58E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0xA94);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB658(); return; } /* je: equal / zero */

loc_001DB5A5: ;
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_001DB5AA: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edi = edx + 0x10;
    esi = ebx + 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) goto loc_001DB5BF; /* je: equal / zero */

loc_001DB5B9: ;
    ebx = MEM32(ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DB5AA; /* jne: not equal / not zero */

loc_001DB5BF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB656(); return; } /* je: equal / zero */

loc_001DB5C7: ;
    eax = MEM32(edx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x48) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB656(); return; } /* jae: above or equal (unsigned >=) */

loc_001DB5D3: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xAC);
    _fb = (uint32_t)(MEM32(ebx + 0x4C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebx + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xC), 2 (8-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB656(); return; } /* jne: not equal / not zero */

loc_001DB5E5: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB656(); return; } /* jne: not equal / not zero */

loc_001DB5EB: ;
    PUSH32(esp, 2);
    edi = edx + 8;
    POP32(esp, ecx);
    esi = eax + 0x18;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_001DB656(); return; } /* jne: not equal / not zero */

loc_001DB5FA: ;
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, 0xC);
    edx = ecx + 0x22;
    PUSH32(esp, edx);
    edx = ZX16(MEM16(ecx + 2));
    _fb = (uint32_t)(0x2E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x2E;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    edx = ecx + 0x2E;
    PUSH32(esp, edx);
    PUSH32(esp, 0x22);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DB61Du); RECOMP_ABI_CALL(0x001D7D40u, sub_001D7D40); /* call 0x001D7D40 */

loc_001DB61D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB656(); return; } /* je: equal / zero */

loc_001DB621: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x10) = ecx;
    SET_LO16(ecx, MEM16(ebp + 0x10));
    MEM16(eax + 0xE) = LO16(ecx);
    ecx = MEM32(eax + 0xA0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0x54) (32-bit) */
    ecx = MEM32(ebp + -4);
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB644(); return; } /* jae: above or equal (unsigned >=) */

loc_001DB640: ;
    PUSH32(esp, 4);
    g_seh_ebp = ebp; sub_001DB646(); return; /* tail jmp 0x001DB646 */

}

/**
 * sub_001DB644
 * Original: 0x001DB644 - 0x001DB646 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB644(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB644: ;
    PUSH32(esp, 5);

    g_seh_ebp = ebp; sub_001DB646(); return; /* fallthrough 0x001DB646 */

}

/**
 * sub_001DB646
 * Original: 0x001DB646 - 0x001DB656 (16 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB646(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB646: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DB64Du); RECOMP_ABI_CALL(0x001DADC9u, sub_001DADC9); /* call 0x001DADC9 */

loc_001DB64D: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DB656u); RECOMP_ABI_CALL(0x001DB055u, sub_001DB055); /* call 0x001DB055 */

    g_seh_ebp = ebp; sub_001DB656(); return; /* fallthrough 0x001DB656 */

}

/**
 * sub_001DB656
 * Original: 0x001DB656 - 0x001DB658 (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB656(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB656: ;
    POP32(esp, edi);
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001DB658(); return; /* fallthrough 0x001DB658 */

}

/**
 * sub_001DB658
 * Original: 0x001DB658 - 0x001DB65D (5 bytes, 3 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB658(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB658: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001DB65D
 * Original: 0x001DB65D - 0x001DB735 (216 bytes, 68 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DB65D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB65D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = ebp + -28;
    esi = ecx;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DB672u); RECOMP_ABI_CALL(0x001D9D30u, sub_001D9D30); /* call 0x001D9D30 */

loc_001DB672: ;
    edx = MEM32(ebp + 0x10);
    eax = ZX16(MEM16(edx + 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB937(); return; } /* jne: not equal / not zero */

loc_001DB682: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0x18 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB937(); return; } /* jb: below (unsigned <) */

loc_001DB68C: ;
    eax = MEM32(esi + 0xA94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB937(); return; } /* je: equal / zero */

loc_001DB69D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_001DB69F: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edi = edx + 4;
    esi = eax + 4;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) goto loc_001DB6B7; /* je: equal / zero */

loc_001DB6AE: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001DB69F; /* jne: not equal / not zero */

loc_001DB6B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB935(); return; } /* je: equal / zero */

loc_001DB6BF: ;
    edi = ZX16(MEM16(edx + 0xC));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0x48) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB935(); return; } /* jae: above or equal (unsigned >=) */

loc_001DB6CC: ;
    ebx = edi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xAC);
    _fb = (uint32_t)(MEM32(eax + 0x4C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(eax + 0x4C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB935(); return; } /* je: equal / zero */

loc_001DB6E1: ;
    ecx = MEM32(ebx + 0x94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB935(); return; } /* jne: not equal / not zero */

loc_001DB6F0: ;
    SET_LO8(ecx, MEM8(ebx + 0xC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DB701; /* je: equal / zero */

loc_001DB6F8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB935(); return; } /* jne: not equal / not zero */

loc_001DB701: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edx + 0xF));
    MEM8(ebp + 0xF) = LO8(ecx);
    ecx = ecx & 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(eax + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -20) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001DB722; /* jne: not equal / not zero */

loc_001DB719: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB935(); return; } /* je: equal / zero */

loc_001DB722: ;
    esi = MEM32(ebp + 0x14);
    _fb = (uint32_t)(0xFFFFFFE8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFE8u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    MEM32(ebp + -16) = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB735(); return; } /* jne: not equal / not zero */

loc_001DB731: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    g_seh_ebp = ebp; sub_001DB741(); return; /* tail jmp 0x001DB741 */

}

/**
 * sub_001DB735
 * Original: 0x001DB735 - 0x001DB741 (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB735(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB735: ;
    ecx = MEM32(ebp + -4);
    ecx = ZX8(MEM8(ecx + 0xF));
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */

    g_seh_ebp = ebp; sub_001DB741(); return; /* fallthrough 0x001DB741 */

}

/**
 * sub_001DB741
 * Original: 0x001DB741 - 0x001DB7C4 (131 bytes, 44 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB741(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB741: ;
    if (_flags /* ja: above (unsigned >) */) { g_seh_ebp = ebp; sub_001DB935(); return; }

loc_001DB747: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    ecx = edi + edi * 2;
    edi = eax + ecx * 8 + 0x68;
    MEM32(ebp + 0x14) = edi;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB7C4(); return; } /* je: equal / zero */

loc_001DB757: ;
    SET_LO8(ecx, MEM8(edi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001DB772; /* jne: not equal / not zero */

loc_001DB75E: ;
    SET_LO8(ecx, LO8(ecx) | 2);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(edi) = LO8(ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DB76Cu); RECOMP_ABI_CALL(0x001D9CDEu, sub_001D9CDE); /* call 0x001D9CDE */

loc_001DB76C: ;
    eax = MEM32(ebp + -8);
    edx = MEM32(ebp + 0x10);

loc_001DB772: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DB79D; /* jbe: below or equal (unsigned <=) */

loc_001DB776: ;
    edi = MEM32(ebx + 0x9C);
    ecx = esi;
    esi = edx + 0x18;
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
    edx = MEM32(ebp + 0x10);
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
    MEM8(ecx) = MEM8(ecx) | 8;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esi = MEM32(ebp + -16);
    edi = ecx;

loc_001DB79D: ;
    _fa = (uint32_t)(MEM8(edx + 0xF)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0xF), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001DB7A6; /* je: equal / zero */

loc_001DB7A3: ;
    MEM8(edi) = MEM8(edi) | 4;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_001DB7A6: ;
    ecx = MEM32(ebx + 0x9C);
    PUSH32(esp, 6);
    PUSH32(esp, ebx);
    MEM32(edi + 8) = ecx;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    MEM16(edi + 6) = LO16(esi);
    PUSH32(esp, 0x001DB7BFu); RECOMP_ABI_CALL(0x001DADC9u, sub_001DADC9); /* call 0x001DADC9 */

loc_001DB7BF: ;
    g_seh_ebp = ebp; sub_001DB935(); return; /* tail jmp 0x001DB935 */

}

/**
 * sub_001DB7C4
 * Original: 0x001DB7C4 - 0x001DB8D6 (274 bytes, 90 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB7C4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB7C4: ;
    eax = MEM32(ebx + 0xA0);
    ecx = MEM32(ebp + -20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DB7D3; /* jb: below (unsigned <) */

loc_001DB7D1: ;
    ecx = eax;

loc_001DB7D3: ;
    eax = ZX8(MEM8(edx + 0xE));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB935(); return; } /* jae: above or equal (unsigned >=) */

loc_001DB7DF: ;
    _fa = (uint32_t)(MEM8(ebp + 0xF)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xF), 1 (8-bit) */
    ecx = MEM32(ebx + 0xA8);
    eax = eax + eax * 4;
    esi = ecx + eax * 8;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB8F8(); return; } /* je: equal / zero */

loc_001DB7F5: ;
    eax = MEM32(esi + 0x10);
    eax = eax | MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001DB935(); return; } /* jne: not equal / not zero */

loc_001DB801: ;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -4);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ebp + -24);
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, esi);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DB81Au); RECOMP_ABI_CALL(0x001D9D50u, sub_001D9D50); /* call 0x001D9D50 */

loc_001DB81A: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(esi + 0x1C) = eax;
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DB829; /* jae: above or equal (unsigned >=) */

loc_001DB827: ;
    edx = eax;

loc_001DB829: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x1C) = eax;
    ecx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0x20) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_001DB83A; /* jae: above or equal (unsigned >=) */

loc_001DB838: ;
    ecx = eax;

loc_001DB83A: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x1C) = eax;
    eax = esi + 8;
    ecx = MEM32(eax);
    ecx = ecx | MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001DB935(); return; } /* je: equal / zero */

loc_001DB84D: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DB85Au); RECOMP_ABI_CALL(0x001D9D50u, sub_001D9D50); /* call 0x001D9D50 */

loc_001DB85A: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esi + 0x24) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_001DB866; /* jae: above or equal (unsigned >=) */

loc_001DB864: ;
    eax = ecx;

loc_001DB866: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x1C) = ecx;
    MEM32(ebx + 0xA4) = MEM32(ebx + 0xA4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0xA4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    esi = MEM32(ebp + -8);
    if (TEST_NZ(_fa, _fb)) goto loc_001DB887; /* jne: not equal / not zero */

loc_001DB87A: ;
    ecx = MEM32(ebp + -4);
    SET_LO8(eax, LO8(eax) | 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, esi);
    MEM8(edi) = LO8(eax);
    PUSH32(esp, 0x001DB887u); RECOMP_ABI_CALL(0x001D9CDEu, sub_001D9CDE); /* call 0x001D9CDE */

loc_001DB887: ;
    SET_LO16(eax, ZX8(MEM8(ebx + 0xA4)));
    MEM16(edi + 4) = LO16(eax);
    _fa = (uint32_t)(MEM8(esi + 0x13)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x13), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001DB8BC; /* je: equal / zero */

loc_001DB899: ;
    eax = MEM32(esi + 0x50);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ebx + 0xA4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xA4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DB8BC; /* jne: not equal / not zero */

loc_001DB8A6: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB8B0u); RECOMP_ABI_CALL(0x001DA8DBu, sub_001DA8DB); /* call 0x001DA8DB */

loc_001DB8B0: ;
    ecx = MEM32(ebp + -4);
    MEM8(edi) = MEM8(edi) | 0x10;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB8BCu); RECOMP_ABI_CALL(0x001D9CDEu, sub_001D9CDE); /* call 0x001D9CDE */

loc_001DB8BC: ;
    eax = MEM32(ebx + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x50) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB8D6(); return; } /* jae: above or equal (unsigned >=) */

loc_001DB8C7: ;
    eax = MEM32(ebx + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x54) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB8D6(); return; } /* jae: above or equal (unsigned >=) */

loc_001DB8D2: ;
    PUSH32(esp, 4);
    g_seh_ebp = ebp; sub_001DB8E3(); return; /* tail jmp 0x001DB8E3 */

}

/**
 * sub_001DB8D6
 * Original: 0x001DB8D6 - 0x001DB8E3 (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB8D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB8D6: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM8(eax + 0xF)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xF), 8 (8-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(5) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 5);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, eax);

    g_seh_ebp = ebp; sub_001DB8E3(); return; /* fallthrough 0x001DB8E3 */

}

/**
 * sub_001DB8E3
 * Original: 0x001DB8E3 - 0x001DB8F8 (21 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB8E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB8E3: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB8EDu); RECOMP_ABI_CALL(0x001DADC9u, sub_001DADC9); /* call 0x001DADC9 */

loc_001DB8ED: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB8F6u); RECOMP_ABI_CALL(0x001DB055u, sub_001DB055); /* call 0x001DB055 */

loc_001DB8F6: ;
    g_seh_ebp = ebp; sub_001DB935(); return; /* tail jmp 0x001DB935 */

}

/**
 * sub_001DB8F8
 * Original: 0x001DB8F8 - 0x001DB935 (61 bytes, 23 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB8F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB8F8: ;
    eax = MEM32(esi + 8);
    eax = eax | MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001DB935(); return; } /* jne: not equal / not zero */

loc_001DB900: ;
    eax = MEM32(esi + 0x10);
    eax = eax | MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001DB935(); return; } /* jne: not equal / not zero */

loc_001DB908: ;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -4);
    MEM32(esi + 8) = eax;
    eax = MEM32(ebp + -24);
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, esi);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DB921u); RECOMP_ABI_CALL(0x001D9D50u, sub_001D9D50); /* call 0x001D9D50 */

loc_001DB921: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DB930; /* jae: above or equal (unsigned >=) */

loc_001DB92E: ;
    ecx = eax;

loc_001DB930: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x18) = eax;

    g_seh_ebp = ebp; sub_001DB935(); return; /* fallthrough 0x001DB935 */

}

/**
 * sub_001DB935
 * Original: 0x001DB935 - 0x001DB937 (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB935(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB935: ;
    POP32(esp, edi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001DB937(); return; /* fallthrough 0x001DB937 */

}

/**
 * sub_001DB937
 * Original: 0x001DB937 - 0x001DB93C (5 bytes, 3 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB937(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB937: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001DB93C
 * Original: 0x001DB93C - 0x001DB957 (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DB93C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB93C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xA94);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB9D6(); return; } /* je: equal / zero */

loc_001DB952: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, edi);

    g_seh_ebp = ebp; sub_001DB957(); return; /* fallthrough 0x001DB957 */

}

/**
 * sub_001DB957
 * Original: 0x001DB957 - 0x001DB966 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB957(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB957: ;
    eax = MEM32(esi + 0x48);
    edi = MEM32(esi + 0x4C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB9CE(); return; } /* jbe: below or equal (unsigned <=) */

loc_001DB963: ;
    MEM32(ebp + 8) = eax;

    g_seh_ebp = ebp; sub_001DB966(); return; /* fallthrough 0x001DB966 */

}

/**
 * sub_001DB966
 * Original: 0x001DB966 - 0x001DB998 (50 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB966(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB966: ;
    _fa = (uint32_t)(MEM32(edi + 0x94)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x94), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB9B6(); return; } /* jne: not equal / not zero */

loc_001DB96E: ;
    _fa = (uint32_t)(MEM8(ebx + 2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 2), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB998(); return; } /* jne: not equal / not zero */

loc_001DB974: ;
    _fa = (uint32_t)(MEM8(edi + 0xC)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0xC), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DB989; /* je: equal / zero */

loc_001DB97A: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 6);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB986u); RECOMP_ABI_CALL(0x001DADC9u, sub_001DADC9); /* call 0x001DADC9 */

loc_001DB986: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001DB989: ;
    MEM32(ebx + 0x128) = MEM32(ebx + 0x128) - 1;
    _fa = (uint32_t)(MEM32(ebx + 0x128)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 0x94) = MEM32(edi + 0x94) & 0;
    _fa = (uint32_t)(MEM32(edi + 0x94)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001DB9B6(); return; /* tail jmp 0x001DB9B6 */

}

/**
 * sub_001DB998
 * Original: 0x001DB998 - 0x001DB9B6 (30 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB998(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB998: ;
    _fa = (uint32_t)(MEM8(edi + 0xC)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0xC), 3 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB9B6(); return; } /* jne: not equal / not zero */

loc_001DB99E: ;
    ecx = MEM32(ebp + -4);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x54) (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(5)) >> 32) & 1);
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB9B3u); RECOMP_ABI_CALL(0x001DADC9u, sub_001DADC9); /* call 0x001DADC9 */

loc_001DB9B3: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_001DB9B6(); return; /* fallthrough 0x001DB9B6 */

}

/**
 * sub_001DB9B6
 * Original: 0x001DB9B6 - 0x001DB9CE (24 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB9B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB9B6: ;
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xAC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001DB966(); return; } /* jne: not equal / not zero */

loc_001DB9C1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB9CE(); return; } /* je: equal / zero */

loc_001DB9C5: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB9CEu); RECOMP_ABI_CALL(0x001DB055u, sub_001DB055); /* call 0x001DB055 */

    g_seh_ebp = ebp; sub_001DB9CE(); return; /* fallthrough 0x001DB9CE */

}

/**
 * sub_001DB9CE
 * Original: 0x001DB9CE - 0x001DB9D6 (8 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB9CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB9CE: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DB957(); return; } /* jne: not equal / not zero */

loc_001DB9D4: ;
    POP32(esp, edi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001DB9D6(); return; /* fallthrough 0x001DB9D6 */

}

/**
 * sub_001DB9D6
 * Original: 0x001DB9D6 - 0x001DB9DB (5 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB9D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB9D6: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DB9DB
 * Original: 0x001DB9DB - 0x001DB9EB (16 bytes, 5 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB9DB(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB9DB: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xFFFFFFDCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFDCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DB9E8u); RECOMP_ABI_CALL(0x001DB055u, sub_001DB055); /* call 0x001DB055 */

loc_001DB9E8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DB9EB
 * Original: 0x001DB9EB - 0x001DB9FE (19 bytes, 5 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB9EB(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB9EB: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(eax + 0x18));
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x001DB9FBu); RECOMP_ABI_CALL(0x001DB055u, sub_001DB055); /* call 0x001DB055 */

loc_001DB9FB: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DB9FE
 * Original: 0x001DB9FE - 0x001DBA18 (26 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DB9FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB9FE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DBA18(); return; } /* jne: not equal / not zero */

loc_001DBA13: ;
    MEM32(ebp + 0xC) = ebx;
    g_seh_ebp = ebp; sub_001DBA30(); return; /* tail jmp 0x001DBA30 */

}

/**
 * sub_001DBA18
 * Original: 0x001DBA18 - 0x001DBA30 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBA18(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBA18: ;
    PUSH32(esp, 0x40);
    POP32(esp, eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(ebp + 0xC) = edx;
    if (CMP_B(_fa, _fb)) goto loc_001DBA25; /* jb: below (unsigned <) */

loc_001DBA22: ;
    MEM32(ebp + 0xC) = eax;

loc_001DBA25: ;
    eax = ZX8(MEM8(ecx + 0x4B));
    edx = MEM32(ebp + 0xC);
    ebx = eax + edx + 2;

    g_seh_ebp = ebp; sub_001DBA30(); return; /* fallthrough 0x001DBA30 */

}

/**
 * sub_001DBA30
 * Original: 0x001DBA30 - 0x001DBADE (174 bytes, 57 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBA30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBA30: ;
    ecx = ZX8(MEM8(ecx + 0xF));
    if (2) _cf = (int)(((ecx) >> (32 - (2))) & 1);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebx + ebx * 4;
    if (3) _cf = (int)(((edx) >> (32 - (3))) & 1);
    edx = edx << 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ebx + ebx * 2;
    MEM32(ebp + -12) = ecx;
    eax = ebx;
    if (3) _cf = (int)(((esi) >> (32 - (3))) & 1);
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx = ecx + edx + 0xC4;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 8));
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = ecx + eax + 0x68;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4854454E);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = edx;
    MEM32(ebp + -8) = eax;
    { uint32_t _icall_target = MEM32(0x22BCD4); PUSH32(esp, 0x001DBA6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DBA69u); } /* indirect call */
    }

loc_001DBA6F: ;
    esi = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DBBF2(); return; } /* je: equal / zero */

loc_001DBA7B: ;
    ecx = edi;
    edx = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    edi = MEM32(ebp + -4);
    PUSH32(esp, 8);
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001DBA9Du); RECOMP_ABI_CALL(0x001D812Au, sub_001D812A); /* call 0x001D812A */

loc_001DBA9D: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0x30) = 0x1DB9DB;
    eax = esi + 0x14;
    MEM32(esi + 0x18) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x1C;
    MEM32(esi + 0x20) = eax;
    MEM32(eax) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DBADE(); return; } /* je: equal / zero */

loc_001DBAC2: ;
    eax = ebp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x22BBFC));
    PUSH32(esp, MEM32(ebp + 0x18));
    { uint32_t _icall_target = MEM32(0x22BB88); PUSH32(esp, 0x001DBAD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DBACFu); } /* indirect call */
    }

loc_001DBAD5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DBADE(); return; } /* jne: not equal / not zero */

loc_001DBAD9: ;
    eax = MEM32(ebp + 0x18);
    g_seh_ebp = ebp; sub_001DBAE0(); return; /* tail jmp 0x001DBAE0 */

}

/**
 * sub_001DBADE
 * Original: 0x001DBADE - 0x001DBAE0 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001DBADE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBADE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001DBAE0(); return; /* fallthrough 0x001DBAE0 */

}

/**
 * sub_001DBAE0
 * Original: 0x001DBAE0 - 0x001DBB0E (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBAE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBAE0: ;
    edx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esi + 0xC) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(esi + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DBB12(); return; } /* je: equal / zero */

loc_001DBAF0: ;
    ecx = 0xFA0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    edi = edx;
    if (CMP_A(_fa, _fb)) goto loc_001DBAFD; /* ja: above (unsigned >) */

loc_001DBAFB: ;
    edi = ecx;

loc_001DBAFD: ;
    eax = 0x5F5E100;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DBB1C(); return; } /* jae: above or equal (unsigned >=) */

loc_001DBB06: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DBB0E(); return; } /* jbe: below or equal (unsigned <=) */

loc_001DBB0A: ;
    eax = edx;
    g_seh_ebp = ebp; sub_001DBB1C(); return; /* tail jmp 0x001DBB1C */

}

/**
 * sub_001DBB0E
 * Original: 0x001DBB0E - 0x001DBB12 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBB0E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBB0E: ;
    eax = ecx;
    g_seh_ebp = ebp; sub_001DBB1C(); return; /* tail jmp 0x001DBB1C */

}

/**
 * sub_001DBB12
 * Original: 0x001DBB12 - 0x001DBB1C (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBB12(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBB12: ;
    eax = ZX8(MEM8(edi + 0x49));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8);

    g_seh_ebp = ebp; sub_001DBB1C(); return; /* fallthrough 0x001DBB1C */

}

/**
 * sub_001DBB1C
 * Original: 0x001DBB1C - 0x001DBBE7 (203 bytes, 70 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBB1C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBB1C: ;
    _fa = (uint32_t)(MEM8(ebp + 0x17)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x17), 0x80 (8-bit) */
    MEM32(esi + 0x34) = eax;
    eax = MEM32(0x22BAE8);
    eax = MEM32(eax);
    MEM32(esi + 0x38) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x54) = ebx;
    MEM32(esi + 0x50) = eax;
    MEM32(ebp + 0x18) = 0x52;
    if (TEST_Z(_fa, _fb)) goto loc_001DBB46; /* je: equal / zero */

loc_001DBB3F: ;
    MEM32(ebp + 0x18) = 0x452;

loc_001DBB46: ;
    ecx = MEM32(ebp + -4);
    eax = esi + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    edi = 0x1DB9EB;
    PUSH32(esp, edi);
    PUSH32(esp, 0x58);
    PUSH32(esp, 0x001DBB5Bu); RECOMP_ABI_CALL(0x001D9CF7u, sub_001D9CF7); /* call 0x001D9CF7 */

loc_001DBB5B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DBBE7(); return; } /* je: equal / zero */

loc_001DBB63: ;
    ecx = MEM32(ebp + -4);
    eax = esi + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, 0x001DBB74u); RECOMP_ABI_CALL(0x001D9CF7u, sub_001D9CF7); /* call 0x001D9CF7 */

loc_001DBB74: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DBBE7(); return; } /* je: equal / zero */

loc_001DBB78: ;
    ecx = MEM32(ebp + -4);
    eax = esi + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, 0x001DBB89u); RECOMP_ABI_CALL(0x001D9CF7u, sub_001D9CF7); /* call 0x001D9CF7 */

loc_001DBB89: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DBBE7(); return; } /* je: equal / zero */

loc_001DBB8D: ;
    ecx = MEM32(ebp + 8);
    edi = ecx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0xAC);
    eax = ecx + ecx * 2;
    eax = esi + eax * 8 + 0x68;
    MEM32(esi + 0x4C) = eax;
    edx = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    MEM32(esi + 0x48) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_001DBBBD; /* jbe: below or equal (unsigned <=) */

loc_001DBBAF: ;
    MEM32(esi + 0x58) = eax;
    eax = eax + ebx * 8;
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x5C) = eax;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DBBBD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DBBDD; /* jbe: below or equal (unsigned <=) */

loc_001DBBC1: ;
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xA8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ecx;

loc_001DBBC9: ;
    MEM32(edx + -12) = eax;
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = eax;
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xAC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001DBBC9; /* jne: not equal / not zero */

loc_001DBBDD: ;
    MEM32(esi + 0x60) = ecx;
    MEM32(esi + 0x64) = ecx;
    eax = esi;
    g_seh_ebp = ebp; sub_001DBBF2(); return; /* tail jmp 0x001DBBF2 */

}

/**
 * sub_001DBBE7
 * Original: 0x001DBBE7 - 0x001DBBF2 (11 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001DBBE7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBBE7: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBBF0u); RECOMP_ABI_CALL(0x001DAD3Du, sub_001DAD3D); /* call 0x001DAD3D */

loc_001DBBF0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001DBBF2(); return; /* fallthrough 0x001DBBF2 */

}

/**
 * sub_001DBBF2
 * Original: 0x001DBBF2 - 0x001DBBF9 (7 bytes, 5 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBBF2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBBF2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001DBBF9
 * Original: 0x001DBBF9 - 0x001DBC2F (54 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DBBF9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DBBF9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x30));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + 0x2C));
    MEM32(ebp + -4) = ecx;
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DBC1Cu); RECOMP_ABI_CALL(0x001DB9FEu, sub_001DB9FE); /* call 0x001DB9FE */

loc_001DBC1C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + 0x2C) = edi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DBC2F(); return; } /* jne: not equal / not zero */

loc_001DBC25: ;
    eax = 0x2747;
    g_seh_ebp = ebp; sub_001DBFAA(); return; /* tail jmp 0x001DBFAA */

}

/**
 * sub_001DBC2F
 * Original: 0x001DBC2F - 0x001DBC64 (53 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBC2F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBC2F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edi + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x54), eax (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x4C);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebp + 0x24) = eax;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DBCD2(); return; } /* jbe: below or equal (unsigned <=) */

loc_001DBC46: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x30) = eax;
    MEM32(ebp + 0x18) = ecx;
    MEM32(ebp + 0xC) = edx;
    MEM32(ebp + 0x28) = esi;
    g_seh_ebp = ebp; sub_001DBC6A(); return; /* tail jmp 0x001DBC6A */

}

/**
 * sub_001DBC64
 * Original: 0x001DBC64 - 0x001DBC6A (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBC64(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBC64: ;
    eax = MEM32(ebp + 0x30);
    ecx = MEM32(ebp + 0x18);

    g_seh_ebp = ebp; sub_001DBC6A(); return; /* fallthrough 0x001DBC6A */

}

/**
 * sub_001DBC6A
 * Original: 0x001DBC6A - 0x001DBCD2 (104 bytes, 42 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBC6A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBC6A: ;
    ecx = MEM32(ecx + eax);
    edx = MEM32(ecx);
    MEM32(ebx) = edx;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 9);
    MEM32(ebx + 4) = ecx;
    esi = MEM32(eax);
    POP32(esp, ecx);
    PUSH32(esp, 9);
    edx = ebx + 8;
    edi = edx + 0x28;
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
    esi = MEM32(eax);
    POP32(esp, ecx);
    PUSH32(esp, 0x18);
    edi = ebx + 0x54;
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
    ecx = MEM32(ebp + 0xC);
    esi = ebx + 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ecx + eax));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DBCA6u); RECOMP_ABI_CALL(0x001D231Au, sub_001D231A); /* call 0x001D231A */

loc_001DBCA6: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x28);
    eax = ebx + 0x54;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x2C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001DBCC0u); RECOMP_ABI_CALL(0x001D23AEu, sub_001D23AE); /* call 0x001D23AE */

loc_001DBCC0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x30) = MEM32(ebp + 0x30) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xAC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001DBC64(); return; } /* jne: not equal / not zero */

loc_001DBCCF: ;
    edi = MEM32(ebp + 0x2C);

    g_seh_ebp = ebp; sub_001DBCD2(); return; /* fallthrough 0x001DBCD2 */

}

/**
 * sub_001DBCD2
 * Original: 0x001DBCD2 - 0x001DBD08 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBCD2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBCD2: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001DBCD8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DBCD2u); } /* indirect call */
    }

loc_001DBCD8: ;
    esi = MEM32(ebp + -4);
    MEM8(ebp + 0x10) = LO8(eax);
    eax = esi + 0xA94;
    ecx = MEM32(eax);
    MEM32(edi) = ecx;
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax) = edi;
    ebx = MEM32(edi + 0x4C);
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DBE67(); return; } /* jbe: below or equal (unsigned <=) */

loc_001DBCFA: ;
    eax = edi + 0x68;
    MEM32(ebp + 0x28) = eax;
    MEM32(ebp + 0x18) = ecx;
    MEM32(ebp + 0xC) = ecx;
    g_seh_ebp = ebp; sub_001DBD0B(); return; /* tail jmp 0x001DBD0B */

}

/**
 * sub_001DBD08
 * Original: 0x001DBD08 - 0x001DBD0B (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBD08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBD08: ;
    esi = MEM32(ebp + -4);

    g_seh_ebp = ebp; sub_001DBD0B(); return; /* fallthrough 0x001DBD0B */

}

/**
 * sub_001DBD0B
 * Original: 0x001DBD0B - 0x001DBD2D (34 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBD0B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBD0B: ;
    eax = ebx + 0x18;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xE0);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(ebp + 0x33) = LO8(ecx);
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001DBD2D(); return; } /* je: equal / zero */

loc_001DBD18: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x80 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DBD2D(); return; } /* je: equal / zero */

loc_001DBD1D: ;
    PUSH32(esp, 6);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001DBD28u); RECOMP_ABI_CALL(0x001DADC9u, sub_001DADC9); /* call 0x001DADC9 */

loc_001DBD28: ;
    g_seh_ebp = ebp; sub_001DBE4E(); return; /* tail jmp 0x001DBE4E */

}

/**
 * sub_001DBD2D
 * Original: 0x001DBD2D - 0x001DBDCB (158 bytes, 50 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBD2D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBD2D: ;
    PUSH32(esp, 3);
    _fb = (uint32_t)(0x1E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1E0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    edi = ebx + 0x52;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_001DBDD4(); return; } /* jne: not equal / not zero */

loc_001DBD44: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DBD4Du); RECOMP_ABI_CALL(0x001D22E7u, sub_001D22E7); /* call 0x001D22E7 */

loc_001DBD4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DBDCB(); return; } /* je: equal / zero */

loc_001DBD51: ;
    edx = MEM32(eax + 0xF0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ebp + 0x30) = edx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DBDCB(); return; } /* je: equal / zero */

loc_001DBD5E: ;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), 0 (32-bit) */
    eax = MEM32(ebp + 0x28);
    if (CMP_NE(_fa, _fb)) goto loc_001DBD6A; /* jne: not equal / not zero */

loc_001DBD67: ;
    MEM8(eax) = MEM8(eax) | 4;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_001DBD6A: ;
    ecx = MEM32(edx + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DBD9F; /* jbe: below or equal (unsigned <=) */

loc_001DBD71: ;
    esi = MEM32(edx + 0x34);
    edi = MEM32(ebx + 0x9C);
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
    ecx = MEM32(ebx + 0x9C);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + 0x30);
    SET_LO16(ecx, MEM16(ecx + 0x30));
    MEM8(eax) = MEM8(eax) | 8;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM16(eax + 6) = LO16(ecx);

loc_001DBD9F: ;
    esi = MEM32(ebp + 0x2C);
    SET_LO16(ecx, MEM16(esi + 0x50));
    MEM16(eax + 2) = LO16(ecx);
    SET_LO16(ecx, MEM16(esi + 0x50));
    MEM8(eax) = MEM8(eax) | 3;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM16(eax + 4) = LO16(ecx);
    ecx = 0x5F5E100;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBDC9u); RECOMP_ABI_CALL(0x001D9CDEu, sub_001D9CDE); /* call 0x001D9CDE */

loc_001DBDC9: ;
    g_seh_ebp = ebp; sub_001DBDCE(); return; /* tail jmp 0x001DBDCE */

}

/**
 * sub_001DBDCB
 * Original: 0x001DBDCB - 0x001DBDCE (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBDCB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBDCB: ;
    esi = MEM32(ebp + 0x2C);

    g_seh_ebp = ebp; sub_001DBDCE(); return; /* fallthrough 0x001DBDCE */

}

/**
 * sub_001DBDCE
 * Original: 0x001DBDCE - 0x001DBDD4 (6 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBDCE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBDCE: ;
    PUSH32(esp, 6);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_seh_ebp = ebp; sub_001DBE43(); return; /* tail jmp 0x001DBE43 */

}

/**
 * sub_001DBDD4
 * Original: 0x001DBDD4 - 0x001DBE1E (74 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBDD4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBDD4: ;
    _fa = (uint32_t)(MEM8(ebp + 0x33)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x33), 0x80 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DBE35(); return; } /* jne: not equal / not zero */

loc_001DBDDA: ;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(ecx + 0xAF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xAF0), 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DBE2D(); return; } /* jne: not equal / not zero */

loc_001DBDE6: ;
    edx = MEM32(ebx + 0x48);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DBE2D(); return; } /* je: equal / zero */

loc_001DBDED: ;
    eax = MEM32(ebx + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DBE2D(); return; } /* je: equal / zero */

loc_001DBDF4: ;
    _fa = (uint32_t)(MEM16(ebx + 0x50)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0x50), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DBE2D(); return; } /* je: equal / zero */

loc_001DBDFB: ;
    esi = MEM32(ecx + 0xAF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xD8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xD8) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DBE1E(); return; } /* jne: not equal / not zero */

loc_001DBE09: ;
    _fa = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x24), 0 (32-bit) */
    MEM32(ebx + 0x10) = edx;
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM16(ebx + 0xE) = 0x20C;
    PUSH32(esp, eax);
    g_seh_ebp = ebp; sub_001DBE2F(); return; /* tail jmp 0x001DBE2F */

}

/**
 * sub_001DBE1E
 * Original: 0x001DBE1E - 0x001DBE2D (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBE1E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBE1E: ;
    MEM32(ebx + 0x10) = eax;
    SET_LO16(eax, MEM16(ebx + 0x50));
    MEM16(ebx + 0xE) = LO16(eax);
    PUSH32(esp, 1);
    g_seh_ebp = ebp; sub_001DBE2F(); return; /* tail jmp 0x001DBE2F */

}

/**
 * sub_001DBE2D
 * Original: 0x001DBE2D - 0x001DBE2F (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBE2D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBE2D: ;
    PUSH32(esp, 6);

    g_seh_ebp = ebp; sub_001DBE2F(); return; /* fallthrough 0x001DBE2F */

}

/**
 * sub_001DBE2F
 * Original: 0x001DBE2F - 0x001DBE35 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBE2F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBE2F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x2C));
    g_seh_ebp = ebp; sub_001DBE46(); return; /* tail jmp 0x001DBE46 */

}

/**
 * sub_001DBE35
 * Original: 0x001DBE35 - 0x001DBE43 (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBE35(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBE35: ;
    _fa = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x24), 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x2C));

    g_seh_ebp = ebp; sub_001DBE43(); return; /* fallthrough 0x001DBE43 */

}

/**
 * sub_001DBE43
 * Original: 0x001DBE43 - 0x001DBE4E (11 bytes, 3 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBE43(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBE43: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x001DBE4Bu); RECOMP_ABI_CALL(0x001DADC9u, sub_001DADC9); /* call 0x001DADC9 */

loc_001DBE4B: ;
    edi = MEM32(ebp + 0x2C);

    g_seh_ebp = ebp; sub_001DBE4E(); return; /* fallthrough 0x001DBE4E */

}

/**
 * sub_001DBE46
 * Original: 0x001DBE46 - 0x001DBE4E (8 bytes, 2 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBE46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBE46: ;
    PUSH32(esp, 0x001DBE4Bu); RECOMP_ABI_CALL(0x001DADC9u, sub_001DADC9); /* call 0x001DADC9 */

loc_001DBE4B: ;
    edi = MEM32(ebp + 0x2C);

    g_seh_ebp = ebp; sub_001DBE4E(); return; /* fallthrough 0x001DBE4E */

}

/**
 * sub_001DBE4E
 * Original: 0x001DBE4E - 0x001DBE67 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBE4E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBE4E: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) + 0x18;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xAC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001DBD08(); return; } /* jne: not equal / not zero */

loc_001DBE61: ;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);

    g_seh_ebp = ebp; sub_001DBE67(); return; /* fallthrough 0x001DBE67 */

}

/**
 * sub_001DBE67
 * Original: 0x001DBE67 - 0x001DBE8E (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBE67(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBE67: ;
    eax = MEM32(edi + 0x48);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DBF8D(); return; } /* jae: above or equal (unsigned >=) */

loc_001DBE72: ;
    esi = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0x20);
    esi = ecx + esi * 4;
    MEM32(ebp + 0x30) = esi;
    esi = MEM32(ebp + 0x1C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x28) = esi;
    MEM32(ebp + 0x2C) = eax;
    g_seh_ebp = ebp; sub_001DBE91(); return; /* tail jmp 0x001DBE91 */

}

/**
 * sub_001DBE8E
 * Original: 0x001DBE8E - 0x001DBE91 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBE8E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBE8E: ;
    esi = MEM32(ebp + 0x28);

    g_seh_ebp = ebp; sub_001DBE91(); return; /* fallthrough 0x001DBE91 */

}

/**
 * sub_001DBE91
 * Original: 0x001DBE91 - 0x001DBF02 (113 bytes, 35 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBE91(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBE91: ;
    eax = MEM32(ebp + 0x30);
    MEM32(ebx + 0x14) = 1;
    eax = MEM32(esi + eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001DBEC4; /* je: equal / zero */

loc_001DBEA5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DBEC4; /* jne: not equal / not zero */

loc_001DBEA9: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DBEB2u); RECOMP_ABI_CALL(0x001D2FEFu, sub_001D2FEF); /* call 0x001D2FEF */

loc_001DBEB2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DBEC4; /* je: equal / zero */

loc_001DBEB6: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001DBEC4; /* je: equal / zero */

loc_001DBEBB: ;
    eax = MEM32(eax + 0xB8);
    MEM32(ebp + 8) = eax;

loc_001DBEC4: ;
    ecx = ebp + 8;
    PUSH32(esp, 0x001DBECCu); RECOMP_ABI_CALL(0x001D85F2u, sub_001D85F2); /* call 0x001D85F2 */

loc_001DBECC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DBF6E(); return; } /* je: equal / zero */

loc_001DBED4: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x268)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x268) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DBF6E(); return; } /* je: equal / zero */

loc_001DBEE6: ;
    eax = MEM32(ebp + 0x30);
    esi = MEM32(eax);
    eax = ecx;
    ecx = MEM32(eax + 0xAEC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + 0x18) = esi;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DBF02(); return; } /* je: equal / zero */

loc_001DBEFA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBF00u); RECOMP_ABI_CALL(0x001EF7F3u, sub_001EF7F3); /* call 0x001EF7F3 */

loc_001DBF00: ;
    g_seh_ebp = ebp; sub_001DBF04(); return; /* tail jmp 0x001DBF04 */

}

/**
 * sub_001DBF02
 * Original: 0x001DBF02 - 0x001DBF04 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001DBF02(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBF02: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001DBF04(); return; /* fallthrough 0x001DBF04 */

}

/**
 * sub_001DBF04
 * Original: 0x001DBF04 - 0x001DBF5F (91 bytes, 33 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBF04(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBF04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(ebp + -4);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DBF71(); return; } /* je: equal / zero */

loc_001DBF0B: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001DBF15u); RECOMP_ABI_CALL(0x001D2F02u, sub_001D2F02); /* call 0x001D2F02 */

loc_001DBF15: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DBF2F; /* jne: not equal / not zero */

loc_001DBF1B: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001DBF29u); RECOMP_ABI_CALL(0x001D5DBBu, sub_001D5DBB); /* call 0x001D5DBB */

loc_001DBF29: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DBF6E(); return; } /* je: equal / zero */

loc_001DBF2F: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DBF6E(); return; } /* je: equal / zero */

loc_001DBF35: ;
    MEM32(esi + 0x128) = MEM32(esi + 0x128) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x128)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 0x94) = esi;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DBF50; /* jne: not equal / not zero */

loc_001DBF47: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBF50u); RECOMP_ABI_CALL(0x001D5548u, sub_001D5548); /* call 0x001D5548 */

loc_001DBF50: ;
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DBF5F(); return; } /* jb: below (unsigned <) */

loc_001DBF57: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001DBF5F(); return; } /* ja: above (unsigned >) */

loc_001DBF5B: ;
    PUSH32(esp, 3);
    g_seh_ebp = ebp; sub_001DBF69(); return; /* tail jmp 0x001DBF69 */

}

/**
 * sub_001DBF5F
 * Original: 0x001DBF5F - 0x001DBF69 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBF5F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBF5F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x24), 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, eax);

    g_seh_ebp = ebp; sub_001DBF69(); return; /* fallthrough 0x001DBF69 */

}

/**
 * sub_001DBF69
 * Original: 0x001DBF69 - 0x001DBF6E (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBF69(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBF69: ;
    ecx = MEM32(ebp + -4);
    g_seh_ebp = ebp; sub_001DBF73(); return; /* tail jmp 0x001DBF73 */

}

/**
 * sub_001DBF6E
 * Original: 0x001DBF6E - 0x001DBF71 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBF6E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBF6E: ;
    ecx = MEM32(ebp + -4);

    g_seh_ebp = ebp; sub_001DBF71(); return; /* fallthrough 0x001DBF71 */

}

/**
 * sub_001DBF71
 * Original: 0x001DBF71 - 0x001DBF8D (28 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBF71(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBF71: ;
    PUSH32(esp, 6);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DBF7Au); RECOMP_ABI_CALL(0x001DADC9u, sub_001DADC9); /* call 0x001DADC9 */

loc_001DBF7A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x30) = MEM32(ebp + 0x30) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xAC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x2C) = MEM32(ebp + 0x2C) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001DBE8E(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001DBF8D(); return; /* fallthrough 0x001DBF8D */

}

/**
 * sub_001DBF73
 * Original: 0x001DBF73 - 0x001DBF8D (26 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBF73(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBF73: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DBF7Au); RECOMP_ABI_CALL(0x001DADC9u, sub_001DADC9); /* call 0x001DADC9 */

loc_001DBF7A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x30) = MEM32(ebp + 0x30) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xAC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x2C) = MEM32(ebp + 0x2C) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001DBE8E(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001DBF8D(); return; /* fallthrough 0x001DBF8D */

}

/**
 * sub_001DBF8D
 * Original: 0x001DBF8D - 0x001DBFAA (29 bytes, 10 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBF8D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBF8D: ;
    ecx = MEM32(ebp + 0x34);
    eax = edi + 0x60;
    MEM32(ecx) = eax;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DBF9Eu); RECOMP_ABI_CALL(0x001DB055u, sub_001DB055); /* call 0x001DB055 */

loc_001DBF9E: ;
    SET_LO8(ecx, MEM8(ebp + 0x10));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001DBFA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DBFA1u); } /* indirect call */
    }

loc_001DBFA7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001DBFAA(); return; /* fallthrough 0x001DBFAA */

}

/**
 * sub_001DBFAA
 * Original: 0x001DBFAA - 0x001DBFB0 (6 bytes, 4 insns)
 * CC: cdecl, 12 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBFAA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBFAA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 52; return; /* ret 48 */

}

/**
 * sub_001DBFB0
 * Original: 0x001DBFB0 - 0x001DBFD7 (39 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBFB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DBFB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esi + 0xA68;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DBFC2u); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001DBFC2: ;
    edi = esi + 0xA34;
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    PUSH32(esp, 0x001DBFD1u); RECOMP_ABI_CALL(0x001D8001u, sub_001D8001); /* call 0x001D8001 */

loc_001DBFD1: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DBFD7
 * Original: 0x001DBFD7 - 0x001DC02A (83 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DBFD7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DBFD7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = edi;
    if (CMP_BE(_fa, _fb)) goto loc_001DC005; /* jbe: below or equal (unsigned <=) */

loc_001DBFEC: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DC005; /* jbe: below or equal (unsigned <=) */

loc_001DBFF2: ;
    SET_LO8(ecx, MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC005; /* je: equal / zero */

loc_001DBFF8: ;
    MEM8(eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001DBFEC; /* ja: above (unsigned >) */

loc_001DC005: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    MEM8(eax) = 0;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DC02A(); return; } /* jbe: below or equal (unsigned <=) */

loc_001DC00E: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DC02A(); return; } /* je: equal / zero */

loc_001DC013: ;
    ecx = MEM32(ebp + 0xC);
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
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001DC02D(); return; /* tail jmp 0x001DC02D */

}

/**
 * sub_001DC02A
 * Original: 0x001DC02A - 0x001DC02D (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC02A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DC02A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_001DC02D(); return; /* fallthrough 0x001DC02D */

}

/**
 * sub_001DC02D
 * Original: 0x001DC02D - 0x001DC033 (6 bytes, 4 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC02D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DC02D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001DC033
 * Original: 0x001DC033 - 0x001DC0A4 (113 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DC033(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC033: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DC0AA(); return; } /* je: equal / zero */

loc_001DC046: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DC0AA(); return; } /* je: equal / zero */

loc_001DC04A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    eax = ebp + -256;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    edi = 0xFDE9;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DC068u); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_001DC068: ;
    PUSH32(esp, 0x40);
    esi = eax;
    eax = ebp + -128;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    esi = esi >> 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DC07Eu); RECOMP_ABI_CALL(0x000AE8FEu, sub_000AE8FE); /* call 0x000AE8FE */

loc_001DC07E: ;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DC0A4(); return; } /* jne: not equal / not zero */

loc_001DC084: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001DC0A4(); return; } /* ja: above (unsigned >) */

loc_001DC089: ;
    PUSH32(esp, esi);
    eax = ebp + -128;
    PUSH32(esp, eax);
    eax = ebp + -256;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DC09Au); RECOMP_ABI_CALL(0x00153DE6u, sub_00153DE6); /* call 0x00153DE6 */

loc_001DC09A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DC0A4(); return; } /* jne: not equal / not zero */

loc_001DC0A1: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001DC0A6(); return; /* tail jmp 0x001DC0A6 */

}

/**
 * sub_001DC0A4
 * Original: 0x001DC0A4 - 0x001DC0A6 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001DC0A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DC0A4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001DC0A6(); return; /* fallthrough 0x001DC0A6 */

}

/**
 * sub_001DC0A6
 * Original: 0x001DC0A6 - 0x001DC0AA (4 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC0A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DC0A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001DC0B2(); return; /* tail jmp 0x001DC0B2 */

}

/**
 * sub_001DC0AA
 * Original: 0x001DC0AA - 0x001DC0B7 (13 bytes, 6 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC0AA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DC0AA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001DC0B2
 * Original: 0x001DC0B2 - 0x001DC0B7 (5 bytes, 3 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC0B2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DC0B2: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001DC0B7
 * Original: 0x001DC0B7 - 0x001DC113 (92 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DC0B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC0B7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DC113(); return; } /* jbe: below or equal (unsigned <=) */

loc_001DC0C4: ;
    ebx = MEM32(ebp + 0x24);
    esi = MEM32(ebp + 8);

loc_001DC0CA: ;
    SET_LO8(edx, MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xFF (8-bit) */
    MEM8(ebp + 0xF) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DC113(); return; } /* je: equal / zero */

loc_001DC0D6: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC10F; /* je: equal / zero */

loc_001DC0DA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DC113(); return; } /* je: equal / zero */

loc_001DC0DE: ;
    SET_LO8(eax, MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DC113(); return; } /* je: equal / zero */

loc_001DC0E6: ;
    ecx = ZX8(LO8(eax));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001DC113(); return; } /* ja: above (unsigned >) */

loc_001DC0ED: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x34) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x34 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC106; /* jne: not equal / not zero */

loc_001DC0F2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC106; /* je: equal / zero */

loc_001DC0F6: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC106; /* jne: not equal / not zero */

loc_001DC0FB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC106; /* jne: not equal / not zero */

loc_001DC0FF: ;
    SET_LO8(edx, MEM8(esi));
    MEM8(ebx) = LO8(edx);
    SET_LO8(edx, MEM8(ebp + 0xF));

loc_001DC106: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ebp + 0x10) (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DC11C(); return; } /* je: equal / zero */

loc_001DC10B: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001DC10F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001DC0CA; /* ja: above (unsigned >) */

    g_seh_ebp = ebp; sub_001DC113(); return; /* fallthrough 0x001DC113 */

}

/**
 * sub_001DC113
 * Original: 0x001DC113 - 0x001DC11C (9 bytes, 6 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC113(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DC113: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001DC115
 * Original: 0x001DC115 - 0x001DC11C (7 bytes, 5 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC115(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DC115: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001DC11C
 * Original: 0x001DC11C - 0x001DC12A (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC11C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DC11C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    ecx = ZX8(LO8(eax));
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DC12A(); return; } /* jne: not equal / not zero */

loc_001DC125: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x14) (32-bit) */
    g_seh_ebp = ebp; sub_001DC138(); return; /* tail jmp 0x001DC138 */

}

/**
 * sub_001DC12A
 * Original: 0x001DC12A - 0x001DC138 (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC12A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DC12A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DC113(); return; } /* jb: below (unsigned <) */

loc_001DC12F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + 0x14));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + 0x14)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */

    g_seh_ebp = ebp; sub_001DC138(); return; /* fallthrough 0x001DC138 */

}

/**
 * sub_001DC138
 * Original: 0x001DC138 - 0x001DC14D (21 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC138(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DC138: ;
    if (_flags /* jne: not equal / not zero */) { g_seh_ebp = ebp; sub_001DC113(); return; }

loc_001DC13A: ;
    eax = MEM32(ebp + 0x1C);
    MEM32(eax) = esi;
    eax = MEM32(ebp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC148; /* je: equal / zero */

loc_001DC146: ;
    MEM32(eax) = ecx;

loc_001DC148: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001DC115(); return; /* tail jmp 0x001DC115 */

}
