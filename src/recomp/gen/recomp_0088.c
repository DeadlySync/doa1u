/**
 * DOAU1 - Recompiled code chunk 88
 * Functions: 250 (0x002277C6 - 0x0022AE4E)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_002277C6
 * Original: 0x002277C6 - 0x002277CC (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002277C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002277C6: ;
    MEM32(esi) = 0x48F;

    g_seh_ebp = ebp; sub_002277CC(); return; /* fallthrough 0x002277CC */

}

/**
 * sub_002277CC
 * Original: 0x002277CC - 0x002277DC (16 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002277CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002277CC: ;
    SET_LO8(ecx, MEM8(ebp + -2));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x002277D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002277CFu); } /* indirect call */
    }

loc_002277D5: ;
    eax = MEM32(esi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002277DC
 * Original: 0x002277DC - 0x002278BA (222 bytes, 55 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002277DC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002277DC: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi);
    PUSH32(esp, 0x002277E8u); RECOMP_ABI_CALL(0x0022621Fu, sub_0022621F); /* call 0x0022621F */

loc_002277E8: ;
    SET_LO8(ecx, MEM8(eax + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022788F; /* jne: not equal / not zero */

loc_002277F4: ;
    _fa = (uint32_t)(MEM8(eax + 7)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 7), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00227873; /* jne: not equal / not zero */

loc_002277FA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x96FA50) = 0x30;
    MEM8(0x96FA51) = 0x40;
    MEM32(0x96FA58) = 0x2274C9;
    MEM32(0x96FA5C) = esi;
    MEM32(0x96FA60) = eax;
    MEM32(0x96FA68) = eax;
    MEM32(0x96FA64) = eax;
    MEM8(0x96FA6C) = LO8(eax);
    MEM8(0x96FA6D) = 1;
    MEM8(0x96FA6E) = LO8(eax);
    MEM8(0x96FA78) = 0x21;
    MEM8(0x96FA79) = 0xB;
    MEM16(0x96FA7A) = LO16(eax);
    SET_LO16(ecx, ZX8(MEM8(esi + 5)));
    MEM16(0x96FA7C) = LO16(ecx);
    MEM16(0x96FA7E) = LO16(eax);
    PUSH32(esp, 0x00227865u); RECOMP_ABI_CALL(0x00226E32u, sub_00226E32); /* call 0x00226E32 */

loc_00227865: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x96FA50);
    PUSH32(esp, 0x00227871u); RECOMP_ABI_CALL(0x00226541u, sub_00226541); /* call 0x00226541 */

loc_00227871: ;
    goto loc_002278B6;

loc_00227873: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022788F; /* jne: not equal / not zero */

loc_00227878: ;
    _fa = (uint32_t)(MEM8(eax + 7)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 7), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022788F; /* jne: not equal / not zero */

loc_0022787E: ;
    PUSH32(esp, 0x00227883u); RECOMP_ABI_CALL(0x00226E32u, sub_00226E32); /* call 0x00226E32 */

loc_00227883: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x0022788Du); RECOMP_ABI_CALL(0x00227554u, sub_00227554); /* call 0x00227554 */

loc_0022788D: ;
    goto loc_002278B6;

loc_0022788F: ;
    MEM8(esi + 4) = MEM8(esi + 4) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, edi);
    edi = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = eax;
    MEM16(0x96FA32) = MEM16(0x96FA32) - 1;
    _fa = (uint32_t)(MEM16(0x96FA32)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x002278A9u); RECOMP_ABI_CALL(0x00226106u, sub_00226106); /* call 0x00226106 */

loc_002278A9: ;
    PUSH32(esp, 0x80000400u);
    ecx = edi;
    PUSH32(esp, 0x002278B5u); RECOMP_ABI_CALL(0x00224C74u, sub_00224C74); /* call 0x00224C74 */

loc_002278B5: ;
    POP32(esp, edi);

loc_002278B6: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002277DD
 * Original: 0x002277DD - 0x002278BA (221 bytes, 54 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002277DD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002277DD: ;
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi);
    PUSH32(esp, 0x002277E8u); RECOMP_ABI_CALL(0x0022621Fu, sub_0022621F); /* call 0x0022621F */

loc_002277E8: ;
    SET_LO8(ecx, MEM8(eax + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022788F; /* jne: not equal / not zero */

loc_002277F4: ;
    _fa = (uint32_t)(MEM8(eax + 7)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 7), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00227873; /* jne: not equal / not zero */

loc_002277FA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x96FA50) = 0x30;
    MEM8(0x96FA51) = 0x40;
    MEM32(0x96FA58) = 0x2274C9;
    MEM32(0x96FA5C) = esi;
    MEM32(0x96FA60) = eax;
    MEM32(0x96FA68) = eax;
    MEM32(0x96FA64) = eax;
    MEM8(0x96FA6C) = LO8(eax);
    MEM8(0x96FA6D) = 1;
    MEM8(0x96FA6E) = LO8(eax);
    MEM8(0x96FA78) = 0x21;
    MEM8(0x96FA79) = 0xB;
    MEM16(0x96FA7A) = LO16(eax);
    SET_LO16(ecx, ZX8(MEM8(esi + 5)));
    MEM16(0x96FA7C) = LO16(ecx);
    MEM16(0x96FA7E) = LO16(eax);
    PUSH32(esp, 0x00227865u); RECOMP_ABI_CALL(0x00226E32u, sub_00226E32); /* call 0x00226E32 */

loc_00227865: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x96FA50);
    PUSH32(esp, 0x00227871u); RECOMP_ABI_CALL(0x00226541u, sub_00226541); /* call 0x00226541 */

loc_00227871: ;
    goto loc_002278B6;

loc_00227873: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022788F; /* jne: not equal / not zero */

loc_00227878: ;
    _fa = (uint32_t)(MEM8(eax + 7)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 7), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022788F; /* jne: not equal / not zero */

loc_0022787E: ;
    PUSH32(esp, 0x00227883u); RECOMP_ABI_CALL(0x00226E32u, sub_00226E32); /* call 0x00226E32 */

loc_00227883: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x0022788Du); RECOMP_ABI_CALL(0x00227554u, sub_00227554); /* call 0x00227554 */

loc_0022788D: ;
    goto loc_002278B6;

loc_0022788F: ;
    MEM8(esi + 4) = MEM8(esi + 4) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, edi);
    edi = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = eax;
    MEM16(0x96FA32) = MEM16(0x96FA32) - 1;
    _fa = (uint32_t)(MEM16(0x96FA32)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x002278A9u); RECOMP_ABI_CALL(0x00226106u, sub_00226106); /* call 0x00226106 */

loc_002278A9: ;
    PUSH32(esp, 0x80000400u);
    ecx = edi;
    PUSH32(esp, 0x002278B5u); RECOMP_ABI_CALL(0x00224C74u, sub_00224C74); /* call 0x00224C74 */

loc_002278B5: ;
    POP32(esp, edi);

loc_002278B6: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002278BA
 * Original: 0x002278BA - 0x002279AE (244 bytes, 72 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002278BA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002278BA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x96FA88);
    { uint32_t _icall_target = MEM32(0x22BCA8); PUSH32(esp, 0x002278C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002278C2u); } /* indirect call */
    }

loc_002278C8: ;
    eax = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022799E; /* jl: less (signed <) */

loc_002278D7: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0022799E; /* jb: below (unsigned <) */

loc_002278E1: ;
    _fa = (uint32_t)(MEM8(0x96FA3C)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x96FA3C), 8 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0022799E; /* jb: below (unsigned <) */

loc_002278EE: ;
    _fa = (uint32_t)(MEM8(0x96FA3D)) & 0xFFu; _fb = (uint32_t)(0x42) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x96FA3D), 0x42 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022799E; /* jne: not equal / not zero */

loc_002278FB: ;
    _fa = (uint32_t)(MEM16(0x96FA3E)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x96FA3E), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022799E; /* je: equal / zero */

loc_00227908: ;
    esi = MEM32(esp + 0x14);
    SET_LO8(ecx, MEM8(0x96FA40));
    edi = esi + 0xA;
    edx = edi;
    PUSH32(esp, 0x0022791Cu); RECOMP_ABI_CALL(0x002244CAu, sub_002244CA); /* call 0x002244CA */

loc_0022791C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0xE) = eax;
    SET_LO8(ecx, MEM8(0x96FA41));
    MEM8(esi + 0xB) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x96FA42));
    MEM8(esi + 0xC) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x96FA43));
    MEM8(esi + 0xD) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00227979; /* je: equal / zero */

loc_0022793E: ;
    SET_LO8(eax, MEM8(0x96FA42));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00227979; /* jb: below (unsigned <) */

loc_00227947: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00227979; /* ja: above (unsigned >) */

loc_0022794B: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 6)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 6) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00227979; /* ja: above (unsigned >) */

loc_00227953: ;
    _fa = (uint32_t)(MEM8(esi + 9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 9), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022795F; /* je: equal / zero */

loc_00227958: ;
    SET_LO8(eax, LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 7)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 7) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00227979; /* ja: above (unsigned >) */

loc_0022795F: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edi));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022796Bu); RECOMP_ABI_CALL(0x0022612Fu, sub_0022612F); /* call 0x0022612F */

loc_0022796B: ;
    ecx = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00227973u); RECOMP_ABI_CALL(0x00224C74u, sub_00224C74); /* call 0x00224C74 */

loc_00227973: ;
    MEM8(esi + 4) = MEM8(esi + 4) | 8;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_002279A8;

loc_00227979: ;
    edi = MEM32(esi);
    MEM8(esi + 4) = MEM8(esi + 4) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(esi) = ebx;
    MEM16(0x96FA32) = MEM16(0x96FA32) - 1;
    _fa = (uint32_t)(MEM16(0x96FA32)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00227990u); RECOMP_ABI_CALL(0x00226106u, sub_00226106); /* call 0x00226106 */

loc_00227990: ;
    PUSH32(esp, 0x80000400u);
    ecx = edi;
    PUSH32(esp, 0x0022799Cu); RECOMP_ABI_CALL(0x00224C74u, sub_00224C74); /* call 0x00224C74 */

loc_0022799C: ;
    goto loc_002279A8;

loc_0022799E: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, eax);
    PUSH32(esp, 0x002279A8u); RECOMP_ABI_CALL(0x002277DCu, sub_002277DC); /* call 0x002277DC */

loc_002279A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002279AE
 * Original: 0x002279AE - 0x002279E6 (56 bytes, 23 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002279AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002279AE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    PUSH32(esp, edi);
    edi = edx;
    MEM32(ebp + -16) = esi;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -12) = ebx;
    MEM32(eax) = ebx;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x002279D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002279CBu); } /* indirect call */
    }

loc_002279D1: ;
    edx = edi;
    ecx = esi;
    MEM8(ebp + -1) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002279DDu); RECOMP_ABI_CALL(0x00226E8Du, sub_00226E8D); /* call 0x00226E8D */

loc_002279DD: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    MEM32(ebp + -20) = edx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002279F2(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_002279E6(); return; /* fallthrough 0x002279E6 */

}

/**
 * sub_002279E6
 * Original: 0x002279E6 - 0x002279F2 (12 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002279E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002279E6: ;
    MEM32(ebp + -8) = 0x48F;
    g_seh_ebp = ebp; sub_00227BDD(); return; /* tail jmp 0x00227BDD */

}

/**
 * sub_002279F2
 * Original: 0x002279F2 - 0x00227A03 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002279F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002279F2: ;
    _fa = (uint32_t)(MEM32(edx + 0x12)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x12), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00227A03(); return; } /* je: equal / zero */

loc_002279F7: ;
    MEM32(ebp + -8) = 0x20;
    g_seh_ebp = ebp; sub_00227BDD(); return; /* tail jmp 0x00227BDD */

}

/**
 * sub_00227A03
 * Original: 0x00227A03 - 0x00227A16 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227A03(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00227A03: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00227A16(); return; } /* jne: not equal / not zero */

loc_00227A0A: ;
    MEM32(ebp + -8) = 0xE;
    g_seh_ebp = ebp; sub_00227BDD(); return; /* tail jmp 0x00227BDD */

}

/**
 * sub_00227A16
 * Original: 0x00227A16 - 0x00227BD4 (446 bytes, 133 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227A16(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00227A16: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(esi + 1) = LO8(eax);
    ebx = MEM32(0x96FA38);
    eax = MEM32(ebx + 0xA7);
    MEM32(0x96FA38) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x2A);
    POP32(esp, ecx);
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    edi = MEM32(ebp + 0xC);
    SET_LO8(ecx, MEM8(ebx + 0xA2));
    MEM32(ebx) = edx;
    MEM32(ebx + 0xA3) = esi;
    SET_LO8(eax, MEM8(edi));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 0xE7);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if (3) _cf = (int)(((LO8(eax)) >> (8 - (3))) & 1);
    SET_LO8(eax, LO8(eax) << 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ebx + 0xA2) = LO8(eax);
    MEM32(edx + 0x12) = ebx;
    edx = edi;
    ecx = ebx;
    MEM32(ebp + -24) = ebx;
    MEM32(ebp + -12) = 1;
    PUSH32(esp, 0x00227A71u); RECOMP_ABI_CALL(0x00226EF7u, sub_00226EF7); /* call 0x00226EF7 */

loc_00227A71: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00227BD4(); return; } /* jl: less (signed <) */

loc_00227A79: ;
    edx = MEM32(esi + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00227A92; /* je: equal / zero */

loc_00227A80: ;
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = edx; PUSH32(esp, 0x00227A84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00227A82u); } /* indirect call */
    }

loc_00227A84: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FFFFF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x80000100u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x80000100u)) >> 32) & 1);
    eax = eax + 0x80000100u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00227A92: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00227BD4(); return; } /* jl: less (signed <) */

loc_00227A9A: ;
    esi = MEM32(esi + 8);
    ecx = ZX8(MEM8(esi));
    esi = MEM32(esi + 1);
    edx = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx + 0x34;
    edi = eax;
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
    _cf = 0; /* logical op clears CF */
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
    PUSH32(esp, 7);
    esi = eax;
    eax = MEM32(ebp + -16);
    edi = ebx + 0x14;
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
    _fa = (uint32_t)(MEM8(eax + 0x28)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x28), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = MEM32(ebp + -20);
    if (TEST_NZ(_fa, _fb)) goto loc_00227B81; /* jne: not equal / not zero */

loc_00227AD2: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -32;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -32) = eax;
    eax = ZX8(MEM8(esi + 0xC));
    _cf = 0; /* logical op clears CF */
    MEM32(ebx + 0x62) = MEM32(ebx + 0x62) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x62)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -40;
    MEM32(ebx + 0x5E) = ecx;
    ecx = ebx + 0x32;
    edi = ebx + 0x52;
    MEM8(edi) = 0x30;
    MEM8(ebx + 0x53) = 0x40;
    MEM32(ebx + 0x5A) = 0x2272A2;
    MEM32(ebx + 0x6A) = ecx;
    MEM32(ebx + 0x66) = eax;
    MEM8(ebx + 0x6E) = 2;
    MEM8(ebx + 0x6F) = 1;
    MEM8(ebx + 0x70) = 0;
    MEM8(ebx + 0x7A) = 0xA1;
    MEM8(ebx + 0x7B) = 1;
    MEM16(ebx + 0x7C) = 0x100;
    SET_LO16(ecx, ZX8(MEM8(esi + 5)));
    MEM16(ebx + 0x7E) = LO16(ecx);
    MEM16(ebx + 0x80) = LO16(eax);
    ecx = MEM32(esi);
    PUSH32(esp, edi);
    MEM8(ebp + -40) = 1;
    MEM8(ebp + -38) = 4;
    PUSH32(esp, 0x00227B41u); RECOMP_ABI_CALL(0x00226541u, sub_00226541); /* call 0x00226541 */

loc_00227B41: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x00227B4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00227B44u); } /* indirect call */
    }

loc_00227B4A: ;
    ecx = MEM32(esi);
    eax = ebp + -40;
    PUSH32(esp, eax);
    edx = edi;
    PUSH32(esp, 0x00227B57u); RECOMP_ABI_CALL(0x002272B3u, sub_002272B3); /* call 0x002272B3 */

loc_00227B57: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x00227B5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00227B57u); } /* indirect call */
    }

loc_00227B5D: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002279E6(); return; } /* je: equal / zero */

loc_00227B69: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_002279E6(); return; } /* jne: not equal / not zero */

loc_00227B73: ;
    _fa = (uint32_t)(MEM32(ebx + 0x56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x56), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00227B81; /* jl: less (signed <) */

loc_00227B79: ;
    eax = MEM32(ebp + -16);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00227B81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00227B7Eu); } /* indirect call */
    }

loc_00227B81: ;
    ecx = MEM32(ebx + 0xC);
    MEM32(ebx + 0x62) = ecx;
    ecx = ebx + 0x32;
    eax = ebx + 0x52;
    MEM8(eax) = 0x28;
    MEM8(ebx + 0x53) = 0x41;
    MEM32(ebx + 0x5A) = 0x227053;
    MEM32(ebx + 0x5E) = ebx;
    MEM32(ebx + 0x6A) = ecx;
    ecx = ZX8(MEM8(esi + 0xC));
    MEM32(ebx + 0x66) = ecx;
    MEM8(ebx + 0x6E) = 2;
    MEM8(ebx + 0x6F) = 1;
    MEM8(ebx + 0x70) = 0;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 4) = MEM8(esi + 4) & 0xF;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(ebx + 0xA2)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xA2), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00227BC9; /* je: equal / zero */

loc_00227BC1: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00227BC9u); RECOMP_ABI_CALL(0x00226541u, sub_00226541); /* call 0x00226541 */

loc_00227BC9: ;
    eax = MEM32(ebp + 8);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ebx;
    g_seh_ebp = ebp; sub_00227BDD(); return; /* tail jmp 0x00227BDD */

}

/**
 * sub_00227BD4
 * Original: 0x00227BD4 - 0x00227BDD (9 bytes, 3 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227BD4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00227BD4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00227BDAu); RECOMP_ABI_CALL(0x00226139u, sub_00226139); /* call 0x00226139 */

loc_00227BDA: ;
    MEM32(ebp + -8) = eax;

    g_seh_ebp = ebp; sub_00227BDD(); return; /* fallthrough 0x00227BDD */

}

/**
 * sub_00227BDD
 * Original: 0x00227BDD - 0x00227BFE (33 bytes, 12 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227BDD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00227BDD: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x00227BE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00227BE0u); } /* indirect call */
    }

loc_00227BE6: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00227BF7; /* je: equal / zero */

loc_00227BEF: ;
    ecx = MEM32(ebp + -24);
    PUSH32(esp, 0x00227BF7u); RECOMP_ABI_CALL(0x0022761Au, sub_0022761A); /* call 0x0022761A */

loc_00227BF7: ;
    eax = MEM32(ebp + -8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00227D5E
 * Original: 0x00227D5E - 0x00227D8A (44 bytes, 12 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227D5E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00227D5E: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00227D86; /* jge: greater or equal (signed >=) */

loc_00227D69: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x96FB38);
    { uint32_t _icall_target = MEM32(0x22BCA8); PUSH32(esp, 0x00227D74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00227D6Eu); } /* indirect call */
    }

loc_00227D74: ;
    PUSH32(esp, MEM32(0x96FB30));
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0x00227D86u); RECOMP_ABI_CALL(0x002248A3u, sub_002248A3); /* call 0x002248A3 */

loc_00227D86: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00227D8A
 * Original: 0x00227D8A - 0x00227DAE (36 bytes, 8 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227D8A(void)
{

loc_00227D8A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x96FB38);
    { uint32_t _icall_target = MEM32(0x22BCA8); PUSH32(esp, 0x00227D95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00227D8Fu); } /* indirect call */
    }

loc_00227D95: ;
    PUSH32(esp, MEM32(0x96FB30));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(eax + 4));
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x00227DABu); RECOMP_ABI_CALL(0x00224B6Fu, sub_00224B6F); /* call 0x00224B6F */

loc_00227DAB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00227DAE
 * Original: 0x00227DAE - 0x00227E0B (93 bytes, 29 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227DAE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00227DAE: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00227DBBu); RECOMP_ABI_CALL(0x00226102u, sub_00226102); /* call 0x00226102 */

loc_00227DBB: ;
    SET_LO16(edi, ZX8(MEM8(eax + 3)));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax + 8;
    MEM8(ecx) = 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(eax + 9) = 0x40;
    MEM32(eax + 0x10) = 0x228692;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x1C) = edx;
    MEM8(eax + 0x24) = LO8(edx);
    MEM8(eax + 0x25) = LO8(edx);
    MEM8(eax + 0x26) = LO8(edx);
    MEM8(eax + 0x30) = 0x23;
    MEM8(eax + 0x31) = 1;
    MEM16(eax + 0x32) = 1;
    MEM16(eax + 0x34) = LO16(edi);
    MEM16(eax + 0x36) = LO16(edx);
    PUSH32(esp, 0x00227E06u); RECOMP_ABI_CALL(0x00226541u, sub_00226541); /* call 0x00226541 */

loc_00227E06: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00227E0B
 * Original: 0x00227E0B - 0x00227E41 (54 bytes, 19 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227E0B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00227E0B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi));
    SET_LO8(eax, LO8(eax) >> 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00227E2A; /* je: equal / zero */

loc_00227E19: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00227E2A; /* jne: not equal / not zero */

loc_00227E20: ;
    PUSH32(esp, 0x00227E25u); RECOMP_ABI_CALL(0x002247FCu, sub_002247FC); /* call 0x002247FC */

loc_00227E25: ;
    MEM8(esi) = MEM8(esi) & 0xEF;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    goto loc_00227E3D;

loc_00227E2A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00227E3D; /* jne: not equal / not zero */

loc_00227E2E: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00227E3D; /* je: equal / zero */

loc_00227E35: ;
    PUSH32(esp, 0x00227E3Au); RECOMP_ABI_CALL(0x002247F5u, sub_002247F5); /* call 0x002247F5 */

loc_00227E3A: ;
    MEM8(esi) = MEM8(esi) | 0x10;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00227E3D: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00227E41
 * Original: 0x00227E41 - 0x00227EB2 (113 bytes, 37 insns)
 * Category: game_input
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227E41(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00227E41: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x00227E4Du); RECOMP_ABI_CALL(0x00226102u, sub_00226102); /* call 0x00226102 */

loc_00227E4D: ;
    ecx = MEM32(0x96FB7C);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00227EA3; /* je: equal / zero */

loc_00227E58: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00227E8F; /* je: equal / zero */

loc_00227E5B: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00227E7B; /* je: equal / zero */

loc_00227E5E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00227EAE; /* jne: not equal / not zero */

loc_00227E61: ;
    eax = MEM32(0x96FB80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00227EAE; /* je: equal / zero */

loc_00227E6A: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00227E72u); RECOMP_ABI_CALL(0x00227E0Bu, sub_00227E0B); /* call 0x00227E0B */

loc_00227E72: ;
    MEM32(0x96FB80) = MEM32(0x96FB80) & 0;
    _fa = (uint32_t)(MEM32(0x96FB80)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00227EAE;

loc_00227E7B: ;
    PUSH32(esp, MEM32(0x96FB30));
    ecx = esi;
    PUSH32(esp, 0x80000600u);
    PUSH32(esp, 0x00227E8Du); RECOMP_ABI_CALL(0x00224B6Fu, sub_00224B6F); /* call 0x00224B6F */

loc_00227E8D: ;
    goto loc_00227EAE;

loc_00227E8F: ;
    PUSH32(esp, MEM32(0x96FB30));
    ecx = esi;
    PUSH32(esp, 0x80000600u);
    PUSH32(esp, 0x00227EA1u); RECOMP_ABI_CALL(0x002248A3u, sub_002248A3); /* call 0x002248A3 */

loc_00227EA1: ;
    goto loc_00227EAE;

loc_00227EA3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00227EAEu); RECOMP_ABI_CALL(0x002260EFu, sub_002260EF); /* call 0x002260EF */

loc_00227EAE: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00227EB2
 * Original: 0x00227EB2 - 0x00227F15 (99 bytes, 28 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227EB2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00227EB2: ;
    _fa = (uint32_t)(MEM32(0x96FB80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x96FB80), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = 0x96FB38;
    if (CMP_EQ(_fa, _fb)) goto loc_00227EDC; /* je: equal / zero */

loc_00227EC1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BCA8); PUSH32(esp, 0x00227EC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00227EC2u); } /* indirect call */
    }

loc_00227EC8: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(0x96FB80));
    PUSH32(esp, 0x00227ED5u); RECOMP_ABI_CALL(0x00227E0Bu, sub_00227E0B); /* call 0x00227E0B */

loc_00227ED5: ;
    MEM32(0x96FB80) = MEM32(0x96FB80) & 0;
    _fa = (uint32_t)(MEM32(0x96FB80)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00227EDC: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00227EEB; /* jne: not equal / not zero */

loc_00227EE4: ;
    eax = 0xFA0A1F00u;
    goto loc_00227EFA;

loc_00227EEB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    eax = 0xFFF48E50u;
    if (CMP_EQ(_fa, _fb)) goto loc_00227EFA; /* je: equal / zero */

loc_00227EF5: ;
    eax = 0xFFB3B4C0u;

loc_00227EFA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x96FB60);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(0x96FB7C) = edx;
    { uint32_t _icall_target = MEM32(0x22BCA4); PUSH32(esp, 0x00227F11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00227F0Bu); } /* indirect call */
    }

loc_00227F11: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00227F15
 * Original: 0x00227F15 - 0x00228063 (334 bytes, 117 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00227F15(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00227F15: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00227F25u); RECOMP_ABI_CALL(0x00226102u, sub_00226102); /* call 0x00226102 */

loc_00227F25: ;
    esi = eax;
    SET_LO16(eax, MEM16(esi + 0x3A));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00227F8C; /* je: equal / zero */

loc_00227F31: ;
    _fa = (uint32_t)(MEM32(0x96FB7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x96FB7C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00227F84; /* jne: not equal / not zero */

loc_00227F3A: ;
    _fa = (uint32_t)(MEM32(0x96FB30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x96FB30), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00227F84; /* je: equal / zero */

loc_00227F42: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x96FB38);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_target = MEM32(0x22BCA8); PUSH32(esp, 0x00227F4Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00227F49u); } /* indirect call */
    }

loc_00227F4F: ;
    SET_LO16(eax, MEM16(esi + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00227F67; /* je: equal / zero */

loc_00227F57: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00227F67; /* jne: not equal / not zero */

loc_00227F5B: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00227F6C; /* je: equal / zero */

loc_00227F60: ;
    edi = 0x1000000;
    goto loc_00227F6C;

loc_00227F67: ;
    edi = 0x80000600u;

loc_00227F6C: ;
    eax = MEM32(0x96FB30);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(0x96FB30) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00227F81u); RECOMP_ABI_CALL(0x002248A3u, sub_002248A3); /* call 0x002248A3 */

loc_00227F81: ;
    edi = MEM32(ebp + 8);

loc_00227F84: ;
    MEM8(esi + 0x3A) = MEM8(esi + 0x3A) & 0xEF;
    _fa = (uint32_t)(MEM8(esi + 0x3A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, 0x14);
    goto loc_00228003;

loc_00227F8C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00227FDD; /* je: equal / zero */

loc_00227F90: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 3));
    MEM8(ebp + 8) = LO8(ecx);
    SET_LO8(eax, 1);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM8(esi + 0x38)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x38), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00227FBD; /* je: equal / zero */

loc_00227FA3: ;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 5), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00227FB2; /* je: equal / zero */

loc_00227FA8: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00227FB2u); RECOMP_ABI_CALL(0x00224A1Fu, sub_00224A1F); /* call 0x00224A1F */

loc_00227FB2: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00227FB8u); RECOMP_ABI_CALL(0x00227DAEu, sub_00227DAE); /* call 0x00227DAE */

loc_00227FB8: ;
    goto loc_0022805C;

loc_00227FBD: ;
    SET_LO8(ecx, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00227FD5; /* je: equal / zero */

loc_00227FC4: ;
    PUSH32(esp, MEM32(ebp + 8));
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(eax, LO8(eax) & LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = edi;
    MEM8(esi + 5) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00227FD5u); RECOMP_ABI_CALL(0x00224A1Fu, sub_00224A1F); /* call 0x00224A1F */

loc_00227FD5: ;
    MEM8(esi + 0x3A) = MEM8(esi + 0x3A) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 0x3A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, 0x10);
    goto loc_00228003;

loc_00227FDD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00227FE9; /* je: equal / zero */

loc_00227FE1: ;
    SET_LO16(eax, LO16(eax) & 0xFFFD);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, 0x11);
    goto loc_00227FFF;

loc_00227FE9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00227FF5; /* je: equal / zero */

loc_00227FED: ;
    SET_LO16(eax, LO16(eax) & 0xFFFB);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, 0x12);
    goto loc_00227FFF;

loc_00227FF5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022804D; /* je: equal / zero */

loc_00227FF9: ;
    SET_LO16(eax, LO16(eax) & 0xFFF7);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, 0x13);

loc_00227FFF: ;
    MEM16(esi + 0x3A) = LO16(eax);

loc_00228003: ;
    POP32(esp, ecx);
    MEM16(esi + 0x32) = LO16(ecx);
    SET_LO16(ecx, ZX8(MEM8(esi + 3)));
    eax = esi + 8;
    MEM16(esi + 0x34) = LO16(ecx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(eax) = 0x30;
    MEM8(esi + 9) = 0x40;
    MEM32(esi + 0x10) = 0x228662;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM8(esi + 0x24) = LO8(ebx);
    MEM8(esi + 0x25) = LO8(ebx);
    MEM8(esi + 0x26) = LO8(ebx);
    MEM8(esi + 0x30) = 0x23;
    MEM8(esi + 0x31) = 1;
    MEM16(esi + 0x36) = LO16(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022804Bu); RECOMP_ABI_CALL(0x00226541u, sub_00226541); /* call 0x00226541 */

loc_0022804B: ;
    goto loc_0022805C;

loc_0022804D: ;
    MEM16(esi + 0x3A) = MEM16(esi + 0x3A) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x3A)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022805Cu); RECOMP_ABI_CALL(0x00228662u, sub_00228662); /* call 0x00228662 */

loc_0022805C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00228063
 * Original: 0x00228063 - 0x002280C6 (99 bytes, 30 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228063(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228063: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = edi;
    PUSH32(esp, 0x00228070u); RECOMP_ABI_CALL(0x00226102u, sub_00226102); /* call 0x00226102 */

loc_00228070: ;
    PUSH32(esp, 0);
    ecx = edi;
    esi = eax;
    PUSH32(esp, 0x0022807Bu); RECOMP_ABI_CALL(0x00226106u, sub_00226106); /* call 0x00226106 */

loc_0022807B: ;
    MEM8(esi) = MEM8(esi) & 0xFE;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM16(0x96FB8A) = MEM16(0x96FB8A) - 1;
    _fa = (uint32_t)(MEM16(0x96FB8A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002280B5; /* je: equal / zero */

loc_0022808A: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00228092u); RECOMP_ABI_CALL(0x00227E0Bu, sub_00227E0B); /* call 0x00227E0B */

loc_00228092: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x96FB80)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x96FB80) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002280AC; /* jne: not equal / not zero */

loc_0022809A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x96FB38);
    { uint32_t _icall_target = MEM32(0x22BCA8); PUSH32(esp, 0x002280A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022809Fu); } /* indirect call */
    }

loc_002280A5: ;
    MEM32(0x96FB80) = MEM32(0x96FB80) & 0;
    _fa = (uint32_t)(MEM32(0x96FB80)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002280AC: ;
    ecx = edi;
    PUSH32(esp, 0x002280B3u); RECOMP_ABI_CALL(0x002248A8u, sub_002248A8); /* call 0x002248A8 */

loc_002280B3: ;
    goto loc_002280C1;

loc_002280B5: ;
    PUSH32(esp, 0x80000100u);
    ecx = edi;
    PUSH32(esp, 0x002280C1u); RECOMP_ABI_CALL(0x00224C74u, sub_00224C74); /* call 0x00224C74 */

loc_002280C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002280C6
 * Original: 0x002280C6 - 0x002281AD (231 bytes, 60 insns)
 * Category: game_input
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002280C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002280C6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002280D5u); RECOMP_ABI_CALL(0x00226102u, sub_00226102); /* call 0x00226102 */

loc_002280D5: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, 4);
    SET_LO8(edx, 3);
    POP32(esp, esi);
    MEM32(ebp + -4) = 1;
    edi = 0x227D5E;
    if (CMP_EQ(_fa, _fb)) goto loc_00228196; /* je: equal / zero */

loc_002280F0: ;
    SET_LO8(ebx, MEM8(ebp + 0xC));
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), LO8(ebx) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00228196; /* jb: below (unsigned <) */

loc_002280FC: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), LO8(ecx) (8-bit) */
    eax = MEM32(ebp + 0x10);
    MEM32(0x96FB30) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0022811A; /* je: equal / zero */

loc_00228109: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = edx;
    edi = 0x227D8A;
    MEM32(ebp + -4) = 2;

loc_0022811A: ;
    PUSH32(esp, MEM32(ebp + -4));
    SET_LO16(eax, ZX8(LO8(ebx)));
    MEM32(0x96FB08) = edi;
    edi = MEM32(ebp + 8);
    MEM8(0x96FB00) = 0x30;
    MEM8(0x96FB01) = 0x40;
    MEM32(0x96FB0C) = edi;
    MEM32(0x96FB10) = ecx;
    MEM32(0x96FB18) = ecx;
    MEM32(0x96FB14) = ecx;
    MEM8(0x96FB1C) = LO8(ecx);
    MEM8(0x96FB1D) = LO8(ecx);
    MEM8(0x96FB1E) = LO8(ecx);
    MEM8(0x96FB28) = 0x23;
    MEM8(0x96FB29) = LO8(edx);
    MEM16(0x96FB2A) = LO16(esi);
    MEM16(0x96FB2C) = LO16(eax);
    MEM16(0x96FB2E) = LO16(ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00228188u); RECOMP_ABI_CALL(0x00227EB2u, sub_00227EB2); /* call 0x00227EB2 */

loc_00228188: ;
    PUSH32(esp, 0x96FB00);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00228194u); RECOMP_ABI_CALL(0x00226541u, sub_00226541); /* call 0x00226541 */

loc_00228194: ;
    goto loc_002281A6;

loc_00228196: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x80000300u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002281A6u); RECOMP_ABI_CALL(0x002248A3u, sub_002248A3); /* call 0x002248A3 */

loc_002281A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002281AD
 * Original: 0x002281AD - 0x002281CF (34 bytes, 9 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002281AD(void)
{

loc_002281AD: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    MEM8(eax) = 0x1C;
    MEM8(eax + 1) = 0xC3;
    MEM32(eax + 8) = 0x228063;
    MEM32(eax + 0xC) = ecx;
    PUSH32(esp, 0x002281CCu); RECOMP_ABI_CALL(0x00226541u, sub_00226541); /* call 0x00226541 */

loc_002281CC: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002281CF
 * Original: 0x002281CF - 0x00228201 (50 bytes, 16 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002281CF(void)
{

loc_002281CF: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    PUSH32(esp, 0x002281DBu); RECOMP_ABI_CALL(0x00226102u, sub_00226102); /* call 0x00226102 */

loc_002281DB: ;
    edx = MEM32(eax + 0x3C);
    ecx = eax + 8;
    MEM8(ecx) = 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(eax + 9) = 0x43;
    MEM32(eax + 0x10) = 0x2281AD;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = edx;
    PUSH32(esp, 0x002281FDu); RECOMP_ABI_CALL(0x00226541u, sub_00226541); /* call 0x00226541 */

loc_002281FD: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00228201
 * Original: 0x00228201 - 0x00228292 (145 bytes, 49 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228201(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228201: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0022820Eu); RECOMP_ABI_CALL(0x00226102u, sub_00226102); /* call 0x00226102 */

loc_0022820E: ;
    edi = eax;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022821E; /* je: equal / zero */

loc_00228216: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0022821Cu); RECOMP_ABI_CALL(0x002281CFu, sub_002281CF); /* call 0x002281CF */

loc_0022821C: ;
    goto loc_0022828D;

loc_0022821E: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    ecx = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_00228236; /* jge: greater or equal (signed >=) */

loc_0022822B: ;
    SET_LO8(eax, LO8(eax) | 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(edi) = LO8(eax);
    PUSH32(esp, 0x00228234u); RECOMP_ABI_CALL(0x00224A96u, sub_00224A96); /* call 0x00224A96 */

loc_00228234: ;
    goto loc_0022828C;

loc_00228236: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi) = 0x18;
    MEM8(esi + 1) = 5;
    eax = MEM32(edi + 0x3C);
    PUSH32(esp, esi);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = 4;
    PUSH32(esp, 0x00228254u); RECOMP_ABI_CALL(0x00226541u, sub_00226541); /* call 0x00226541 */

loc_00228254: ;
    MEM8(esi) = 0x28;
    MEM8(esi + 1) = 0x41;
    MEM32(esi + 8) = 0x228398;
    MEM32(esi + 0xC) = ebx;
    eax = MEM32(edi + 0x3C);
    MEM32(esi + 0x10) = eax;
    eax = edi + 0x38;
    MEM32(esi + 0x18) = eax;
    eax = ZX8(MEM8(edi + 7));
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi + 0x14) = eax;
    MEM8(esi + 0x1C) = 2;
    MEM8(esi + 0x1D) = 1;
    MEM8(esi + 0x1E) = 0;
    PUSH32(esp, 0x0022828Cu); RECOMP_ABI_CALL(0x00226541u, sub_00226541); /* call 0x00226541 */

loc_0022828C: ;
    POP32(esp, esi);

loc_0022828D: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00228292
 * Original: 0x00228292 - 0x002282ED (91 bytes, 31 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228292(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228292: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x0022829Eu); RECOMP_ABI_CALL(0x00226102u, sub_00226102); /* call 0x00226102 */

loc_0022829E: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002282AD; /* je: equal / zero */

loc_002282A5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002282ABu); RECOMP_ABI_CALL(0x002281CFu, sub_002281CF); /* call 0x002281CF */

loc_002282AB: ;
    goto loc_002282E9;

loc_002282AD: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002282C3; /* jl: less (signed <) */

loc_002282B7: ;
    PUSH32(esp, esi);
    MEM8(eax + 6) = 0;
    PUSH32(esp, 0x002282C1u); RECOMP_ABI_CALL(0x00227F15u, sub_00227F15); /* call 0x00227F15 */

loc_002282C1: ;
    goto loc_002282E9;

loc_002282C3: ;
    MEM8(eax + 6) = MEM8(eax + 6) + 1;
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 6), 3 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002282DA; /* jbe: below or equal (unsigned <=) */

loc_002282CC: ;
    SET_LO8(ecx, LO8(ecx) | 8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax) = LO8(ecx);
    ecx = esi;
    PUSH32(esp, 0x002282D8u); RECOMP_ABI_CALL(0x00224A96u, sub_00224A96); /* call 0x00224A96 */

loc_002282D8: ;
    goto loc_002282E9;

loc_002282DA: ;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(edx + 0x14) = 4;
    PUSH32(esp, 0x002282E9u); RECOMP_ABI_CALL(0x00226541u, sub_00226541); /* call 0x00226541 */

loc_002282E9: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002282ED
 * Original: 0x002282ED - 0x00228348 (91 bytes, 31 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002282ED(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002282ED: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x002282F9u); RECOMP_ABI_CALL(0x00226102u, sub_00226102); /* call 0x00226102 */

loc_002282F9: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00228308; /* je: equal / zero */

loc_00228300: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00228306u); RECOMP_ABI_CALL(0x002281CFu, sub_002281CF); /* call 0x002281CF */

loc_00228306: ;
    goto loc_00228344;

loc_00228308: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0022833A; /* jge: greater or equal (signed >=) */

loc_00228312: ;
    MEM8(eax + 6) = MEM8(eax + 6) + 1;
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 6), 3 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00228329; /* jbe: below or equal (unsigned <=) */

loc_0022831B: ;
    SET_LO8(ecx, LO8(ecx) | 8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax) = LO8(ecx);
    ecx = esi;
    PUSH32(esp, 0x00228327u); RECOMP_ABI_CALL(0x00224A96u, sub_00224A96); /* call 0x00224A96 */

loc_00228327: ;
    goto loc_00228344;

loc_00228329: ;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(edx + 0x14) = 4;
    PUSH32(esp, 0x00228338u); RECOMP_ABI_CALL(0x00226541u, sub_00226541); /* call 0x00226541 */

loc_00228338: ;
    goto loc_00228344;

loc_0022833A: ;
    PUSH32(esp, esi);
    MEM8(eax + 6) = 0;
    PUSH32(esp, 0x00228344u); RECOMP_ABI_CALL(0x0022858Fu, sub_0022858F); /* call 0x0022858F */

loc_00228344: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00228348
 * Original: 0x00228348 - 0x00228398 (80 bytes, 33 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00228348(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228348: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00228356u); RECOMP_ABI_CALL(0x00226102u, sub_00226102); /* call 0x00226102 */

loc_00228356: ;
    esi = eax;
    MEM8(esi) = MEM8(esi) | 2;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebp + -4) = LO8(ebx);

loc_00228361: ;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 5), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00228378; /* je: equal / zero */

loc_00228366: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00228371u); RECOMP_ABI_CALL(0x00224A1Fu, sub_00224A1F); /* call 0x00224A1F */

loc_00228371: ;
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, ~LO8(eax));
    MEM8(esi + 5) = MEM8(esi + 5) & LO8(eax);
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_00228378: ;
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(ebp + -4) = MEM8(ebp + -4) + 1;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(ebp + -4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 2) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00228361; /* jbe: below or equal (unsigned <=) */

loc_00228385: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 8 (8-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00228394; /* je: equal / zero */

loc_0022838C: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00228394u); RECOMP_ABI_CALL(0x002281CFu, sub_002281CF); /* call 0x002281CF */

loc_00228394: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00228398
 * Original: 0x00228398 - 0x00228464 (204 bytes, 68 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228398(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228398: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = edi;
    PUSH32(esp, 0x002283A5u); RECOMP_ABI_CALL(0x00226102u, sub_00226102); /* call 0x00226102 */

loc_002283A5: ;
    esi = eax;
    SET_LO8(ecx, MEM8(esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002283B9; /* je: equal / zero */

loc_002283AE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002283B4u); RECOMP_ABI_CALL(0x002281CFu, sub_002281CF); /* call 0x002281CF */

loc_002283B4: ;
    goto loc_0022845F;

loc_002283B9: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00228403; /* jl: less (signed <) */

loc_002283C5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x96FB80)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x96FB80) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002283DE; /* jne: not equal / not zero */

loc_002283CD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x96FB38);
    { uint32_t _icall_target = MEM32(0x22BCA8); PUSH32(esp, 0x002283D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002283D2u); } /* indirect call */
    }

loc_002283D8: ;
    MEM32(0x96FB80) = ebx;

loc_002283DE: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002283E6u); RECOMP_ABI_CALL(0x00227E0Bu, sub_00227E0B); /* call 0x00227E0B */

loc_002283E6: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 2));
    SET_LO8(eax, 1);
    PUSH32(esp, edi);
    MEM8(esi + 6) = LO8(ebx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & MEM8(esi + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 4) = LO8(eax);
    PUSH32(esp, 0x00228401u); RECOMP_ABI_CALL(0x0022858Fu, sub_0022858F); /* call 0x0022858F */

loc_00228401: ;
    goto loc_0022845E;

loc_00228403: ;
    MEM8(esi + 6) = MEM8(esi + 6) + 1;
    _fa = (uint32_t)(MEM8(esi + 6)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + 6)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 6), 3 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0022841A; /* jbe: below or equal (unsigned <=) */

loc_0022840C: ;
    SET_LO8(ecx, LO8(ecx) | 8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi) = LO8(ecx);
    ecx = edi;
    PUSH32(esp, 0x00228418u); RECOMP_ABI_CALL(0x00224A96u, sub_00224A96); /* call 0x00224A96 */

loc_00228418: ;
    goto loc_0022845E;

loc_0022841A: ;
    MEM8(eax) = 0x30;
    MEM8(eax + 1) = 0x40;
    MEM32(eax + 8) = 0x228201;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM8(eax + 0x1C) = LO8(ebx);
    MEM8(eax + 0x1D) = LO8(ebx);
    MEM8(eax + 0x1E) = LO8(ebx);
    MEM8(eax + 0x28) = 2;
    MEM8(eax + 0x29) = 1;
    MEM16(eax + 0x2A) = LO16(ebx);
    SET_LO16(ecx, ZX8(MEM8(esi + 1)));
    MEM16(eax + 0x2C) = LO16(ecx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM16(eax + 0x2E) = LO16(ebx);
    PUSH32(esp, 0x0022845Eu); RECOMP_ABI_CALL(0x00226541u, sub_00226541); /* call 0x00226541 */

loc_0022845E: ;
    POP32(esp, ebx);

loc_0022845F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00228464
 * Original: 0x00228464 - 0x00228524 (192 bytes, 64 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228464(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228464: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = edi;
    PUSH32(esp, 0x00228470u); RECOMP_ABI_CALL(0x00226102u, sub_00226102); /* call 0x00226102 */

loc_00228470: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00228482; /* je: equal / zero */

loc_00228477: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0022847Du); RECOMP_ABI_CALL(0x002281CFu, sub_002281CF); /* call 0x002281CF */

loc_0022847D: ;
    goto loc_00228520;

loc_00228482: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002284B6; /* jge: greater or equal (signed >=) */

loc_0022848E: ;
    MEM8(eax + 6) = MEM8(eax + 6) + 1;
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 6), 3 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002284A5; /* jbe: below or equal (unsigned <=) */

loc_00228497: ;
    SET_LO8(ecx, LO8(ecx) | 8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax) = LO8(ecx);
    ecx = edi;
    PUSH32(esp, 0x002284A3u); RECOMP_ABI_CALL(0x00224A96u, sub_00224A96); /* call 0x00224A96 */

loc_002284A3: ;
    goto loc_0022851F;

loc_002284A5: ;
    MEM32(esi + 0x14) = 4;
    PUSH32(esp, esi);

loc_002284AD: ;
    ecx = edi;
    PUSH32(esp, 0x002284B4u); RECOMP_ABI_CALL(0x00226541u, sub_00226541); /* call 0x00226541 */

loc_002284B4: ;
    goto loc_0022851F;

loc_002284B6: ;
    SET_LO16(ecx, MEM16(eax + 0x3A));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    MEM8(eax + 6) = LO8(edx);
    if (TEST_Z(_fa, _fb)) goto loc_002284CB; /* je: equal / zero */

loc_002284C2: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, LO16(ecx) & 0xFFFE);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    goto loc_002284D8;

loc_002284CB: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00228519; /* je: equal / zero */

loc_002284D0: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(ecx, LO16(ecx) & 0xFFFD);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */

loc_002284D8: ;
    MEM16(eax + 0x3A) = LO16(ecx);
    ecx = eax + 8;
    MEM8(ecx) = 0x30;
    MEM8(eax + 9) = 0x40;
    MEM32(eax + 0x10) = 0x2282ED;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x1C) = edx;
    MEM8(eax + 0x24) = LO8(edx);
    MEM8(eax + 0x25) = LO8(edx);
    MEM8(eax + 0x26) = LO8(edx);
    MEM8(eax + 0x30) = 0x20;
    MEM8(eax + 0x31) = 1;
    MEM16(eax + 0x32) = LO16(esi);
    MEM16(eax + 0x34) = LO16(edx);
    MEM16(eax + 0x36) = LO16(edx);
    PUSH32(esp, ecx);
    goto loc_002284AD;

loc_00228519: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0022851Fu); RECOMP_ABI_CALL(0x0022858Fu, sub_0022858F); /* call 0x0022858F */

loc_0022851F: ;
    POP32(esp, esi);

loc_00228520: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00228524
 * Original: 0x00228524 - 0x0022858F (107 bytes, 33 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228524(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228524: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x00228530u); RECOMP_ABI_CALL(0x00226102u, sub_00226102); /* call 0x00226102 */

loc_00228530: ;
    SET_LO8(ecx, MEM8(eax + 3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax + 2) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022856F; /* jne: not equal / not zero */

loc_00228538: ;
    ecx = MEM32(eax + 0x3C);
    MEM32(eax + 0x18) = ecx;
    ecx = eax + 0x38;
    MEM32(eax + 0x20) = ecx;
    ecx = ZX8(MEM8(eax + 7));
    MEM8(eax + 3) = 0;
    MEM8(eax + 8) = 0x28;
    MEM8(eax + 9) = 0x41;
    MEM32(eax + 0x10) = 0x228398;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x1C) = ecx;
    MEM8(eax + 0x24) = 2;
    MEM8(eax + 0x25) = 1;
    MEM8(eax + 0x26) = 0;
    goto loc_00228580;

loc_0022856F: ;
    edx = MEM32(esp + 8);
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax + 3) = LO8(ecx);
    SET_LO16(ecx, ZX8(LO8(ecx)));
    MEM16(edx + 0x2C) = LO16(ecx);

loc_00228580: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0022858Bu); RECOMP_ABI_CALL(0x00226541u, sub_00226541); /* call 0x00226541 */

loc_0022858B: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022858F
 * Original: 0x0022858F - 0x00228662 (211 bytes, 74 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0022858F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022858F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022859Fu); RECOMP_ABI_CALL(0x00226102u, sub_00226102); /* call 0x00226102 */

loc_0022859F: ;
    SET_LO8(ebx, MEM8(eax + 4));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, 1);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(ebp + 0xB) = LO8(ebx);

loc_002285AC: ;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xB), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002285C0; /* jne: not equal / not zero */

loc_002285B1: ;
    MEM8(eax + 3) = MEM8(eax + 3) + 1;
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ebx, MEM8(eax + 3));
    SET_LO8(edx, LO8(edx) << 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(eax + 2) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002285AC; /* jbe: below or equal (unsigned <=) */

loc_002285BE: ;
    goto loc_002285C8;

loc_002285C0: ;
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(edx, LO8(edx) & MEM8(eax + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(eax + 4) = LO8(edx);

loc_002285C8: ;
    SET_LO8(ebx, MEM8(eax + 3));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(eax + 2) (8-bit) */
    MEM8(eax + 0x26) = LO8(ecx);
    MEM8(eax + 0x24) = 2;
    MEM32(eax + 0x14) = edi;
    esi = eax + 8;
    if (CMP_BE(_fa, _fb)) goto loc_0022860B; /* jbe: below or equal (unsigned <=) */

loc_002285DD: ;
    edx = MEM32(eax + 0x3C);
    MEM32(eax + 0x18) = edx;
    edx = eax + 0x38;
    MEM32(eax + 0x20) = edx;
    edx = ZX8(MEM8(eax + 7));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM8(esi) = 0x28;
    MEM8(eax + 9) = 0x41;
    MEM32(eax + 0x10) = 0x228398;
    MEM32(eax + 0x1C) = edx;
    MEM8(eax + 0x25) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00228609u); RECOMP_ABI_CALL(0x00227E0Bu, sub_00227E0B); /* call 0x00227E0B */

loc_00228609: ;
    goto loc_00228653;

loc_0022860B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(ecx) (8-bit) */
    edx = eax + 0x38;
    PUSH32(esp, 4);
    MEM32(eax + 0x20) = edx;
    POP32(esp, edx);
    MEM16(eax + 0x32) = LO16(ecx);
    MEM8(eax + 0x31) = LO8(ecx);
    MEM8(eax + 0x25) = LO8(ecx);
    MEM32(eax + 0x18) = ecx;
    MEM8(eax + 9) = 0x40;
    MEM8(esi) = 0x30;
    MEM16(eax + 0x36) = LO16(edx);
    MEM32(eax + 0x1C) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00228640; /* jne: not equal / not zero */

loc_00228633: ;
    MEM32(eax + 0x10) = 0x228464;
    MEM8(eax + 0x30) = 0xA0;
    goto loc_0022864F;

loc_00228640: ;
    MEM32(eax + 0x10) = 0x228292;
    MEM8(eax + 0x30) = 0xA3;
    SET_LO16(ecx, ZX8(LO8(ebx)));

loc_0022864F: ;
    MEM16(eax + 0x34) = LO16(ecx);

loc_00228653: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022865Bu); RECOMP_ABI_CALL(0x00226541u, sub_00226541); /* call 0x00226541 */

loc_0022865B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00228662
 * Original: 0x00228662 - 0x00228692 (48 bytes, 16 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228662(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228662: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x0022866Eu); RECOMP_ABI_CALL(0x00226102u, sub_00226102); /* call 0x00226102 */

loc_0022866E: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 2 (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0022867B; /* je: equal / zero */

loc_00228674: ;
    PUSH32(esp, 0x00228679u); RECOMP_ABI_CALL(0x002281CFu, sub_002281CF); /* call 0x002281CF */

loc_00228679: ;
    goto loc_0022868E;

loc_0022867B: ;
    _fa = (uint32_t)(MEM16(eax + 0x3A)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x3A), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00228689; /* je: equal / zero */

loc_00228682: ;
    PUSH32(esp, 0x00228687u); RECOMP_ABI_CALL(0x00227F15u, sub_00227F15); /* call 0x00227F15 */

loc_00228687: ;
    goto loc_0022868E;

loc_00228689: ;
    PUSH32(esp, 0x0022868Eu); RECOMP_ABI_CALL(0x0022858Fu, sub_0022858F); /* call 0x0022858F */

loc_0022868E: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00228692
 * Original: 0x00228692 - 0x00228712 (128 bytes, 45 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228692(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228692: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = edi;
    PUSH32(esp, 0x002286A0u); RECOMP_ABI_CALL(0x00226102u, sub_00226102); /* call 0x00226102 */

loc_002286A0: ;
    esi = eax;
    MEM8(esi + 0x3A) = MEM8(esi + 0x3A) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 0x3A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 3));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ebx, 1);
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    ecx = edi;
    PUSH32(esp, 0x002286BEu); RECOMP_ABI_CALL(0x00224622u, sub_00224622); /* call 0x00224622 */

loc_002286BE: ;
    SET_LO16(edx, ZX8(MEM8(esi + 3)));
    MEM8(esi + 5) = MEM8(esi + 5) | LO8(ebx);
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 8;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x20) = ecx;
    MEM32(esi + 0x1C) = ecx;
    MEM8(esi + 0x24) = LO8(ecx);
    MEM8(esi + 0x25) = LO8(ecx);
    MEM8(esi + 0x26) = LO8(ecx);
    MEM16(esi + 0x36) = LO16(ecx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(eax) = 0x30;
    MEM8(esi + 9) = 0x40;
    MEM32(esi + 0x10) = 0x228662;
    MEM32(esi + 0x14) = edi;
    MEM8(esi + 0x30) = 0x23;
    MEM8(esi + 0x31) = 1;
    MEM16(esi + 0x32) = 0x10;
    MEM16(esi + 0x34) = LO16(edx);
    PUSH32(esp, 0x0022870Cu); RECOMP_ABI_CALL(0x00226541u, sub_00226541); /* call 0x00226541 */

loc_0022870C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00228712
 * Original: 0x00228712 - 0x002287BD (171 bytes, 54 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228712(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228712: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = edi;
    PUSH32(esp, 0x00228720u); RECOMP_ABI_CALL(0x00226102u, sub_00226102); /* call 0x00226102 */

loc_00228720: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x96FB38);
    esi = eax;
    { uint32_t _icall_target = MEM32(0x22BCA8); PUSH32(esp, 0x0022872Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00228727u); } /* indirect call */
    }

loc_0022872D: ;
    eax = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00228740; /* jge: greater or equal (signed >=) */

loc_00228738: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0022873Eu); RECOMP_ABI_CALL(0x002281CFu, sub_002281CF); /* call 0x002281CF */

loc_0022873E: ;
    goto loc_002287B7;

loc_00228740: ;
    SET_LO8(eax, MEM8(0x96FAD2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    MEM8(esi + 2) = LO8(eax);
    if (CMP_BE(_fa, _fb)) goto loc_00228750; /* jbe: below or equal (unsigned <=) */

loc_0022874C: ;
    MEM8(esi + 2) = 7;

loc_00228750: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00228757u); RECOMP_ABI_CALL(0x00227EB2u, sub_00227EB2); /* call 0x00227EB2 */

loc_00228757: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    MEM32(0x96FB80) = esi;
    PUSH32(esp, 0x00228765u); RECOMP_ABI_CALL(0x00227E0Bu, sub_00227E0B); /* call 0x00227E0B */

loc_00228765: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0022876Du); RECOMP_ABI_CALL(0x00224C74u, sub_00224C74); /* call 0x00224C74 */

loc_0022876D: ;
    eax = esi + 8;
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(esi + 3) = 1;
    MEM8(eax) = 0x30;
    MEM8(esi + 9) = 0x40;
    MEM32(esi + 0x10) = 0x228524;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM8(esi + 0x24) = LO8(ebx);
    MEM8(esi + 0x25) = LO8(ebx);
    MEM8(esi + 0x26) = LO8(ebx);
    MEM8(esi + 0x30) = 0x23;
    MEM8(esi + 0x31) = 3;
    MEM16(esi + 0x32) = 8;
    MEM16(esi + 0x34) = 1;
    MEM16(esi + 0x36) = LO16(ebx);
    PUSH32(esp, 0x002287B7u); RECOMP_ABI_CALL(0x00226541u, sub_00226541); /* call 0x00226541 */

loc_002287B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002287BD
 * Original: 0x002287BD - 0x00228839 (124 bytes, 37 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002287BD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002287BD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x96FB38);
    { uint32_t _icall_target = MEM32(0x22BCA8); PUSH32(esp, 0x002287C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002287C3u); } /* indirect call */
    }

loc_002287C9: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002287DF; /* jge: greater or equal (signed >=) */

loc_002287D4: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x002287DDu); RECOMP_ABI_CALL(0x002281CFu, sub_002281CF); /* call 0x002281CF */

loc_002287DD: ;
    goto loc_00228835;

loc_002287DF: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 8);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    MEM8(esi) = 0x30;
    MEM8(esi + 1) = 0x40;
    MEM32(esi + 8) = 0x228712;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x18) = 0x96FAD0;
    MEM32(esi + 0x14) = ecx;
    MEM8(esi + 0x1C) = 2;
    MEM8(esi + 0x1D) = 1;
    MEM8(esi + 0x1E) = LO8(eax);
    MEM8(esi + 0x28) = 0xA0;
    MEM8(esi + 0x29) = 6;
    MEM16(esi + 0x2A) = 0x2900;
    MEM16(esi + 0x2C) = LO16(eax);
    MEM16(esi + 0x2E) = LO16(ecx);
    PUSH32(esp, 0x0022882Cu); RECOMP_ABI_CALL(0x00227EB2u, sub_00227EB2); /* call 0x00227EB2 */

loc_0022882C: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00228834u); RECOMP_ABI_CALL(0x00226541u, sub_00226541); /* call 0x00226541 */

loc_00228834: ;
    POP32(esp, edi);

loc_00228835: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00228839
 * Original: 0x00228839 - 0x0022895F (294 bytes, 90 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00228839(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228839: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00228847u); RECOMP_ABI_CALL(0x00226102u, sub_00226102); /* call 0x00226102 */

loc_00228847: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x96FB38);
    edi = eax;
    { uint32_t _icall_target = MEM32(0x22BCA8); PUSH32(esp, 0x00228854u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022884Eu); } /* indirect call */
    }

loc_00228854: ;
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022894F; /* jl: less (signed <) */

loc_00228862: ;
    SET_LO16(ecx, MEM16(0x96FAD2));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x30 (16-bit) */
    eax = 0x96FAD0;
    if (CMP_A(_fa, _fb)) goto loc_0022894F; /* ja: above (unsigned >) */

loc_0022887A: ;
    ecx = ZX16(LO16(ecx));
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ecx (32-bit) */
    MEM32(ebp + 8) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_0022894F; /* jb: below (unsigned <) */

loc_00228889: ;
    SET_LO8(eax, MEM8(eax));
    ecx = ZX8(LO8(eax));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022894F; /* je: equal / zero */

loc_00228898: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0022894F; /* jae: above or equal (unsigned >=) */

loc_002288A1: ;
    eax = edx + 0x96FAD0;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00228889; /* jne: not equal / not zero */

loc_002288AD: ;
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), 4 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002288BC; /* ja: above (unsigned >) */

loc_002288B4: ;
    SET_LO8(ecx, MEM8(eax + 4));
    MEM8(edi + 7) = LO8(ecx);
    goto loc_002288C0;

loc_002288BC: ;
    MEM8(edi + 7) = 4;

loc_002288C0: ;
    SET_LO8(ecx, MEM8(eax + 2));
    MEM8(edi + 1) = LO8(ecx);
    MEM8(esi) = 0x20;
    MEM8(esi + 1) = 2;
    MEM32(esi + 8) = ebx;
    SET_LO8(ecx, MEM8(eax + 2));
    MEM8(esi + 0x15) = LO8(ecx);
    SET_LO8(eax, MEM8(eax + 3));
    ecx = MEM32(ebp + 0xC);
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x16) = LO8(eax);
    MEM8(esi + 0x17) = 0x10;
    SET_LO16(eax, ZX8(MEM8(edi + 7)));
    PUSH32(esp, esi);
    MEM16(esi + 0x1C) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002288F4u); RECOMP_ABI_CALL(0x00226541u, sub_00226541); /* call 0x00226541 */

loc_002288F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022894F; /* jl: less (signed <) */

loc_002288F8: ;
    eax = MEM32(esi + 0x10);
    MEM32(edi + 0x3C) = eax;
    edi = MEM32(ebp + 0xC);
    MEM8(esi) = 0x30;
    MEM8(esi + 1) = 0x40;
    MEM32(esi + 8) = 0x2287BD;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM8(esi + 0x1D) = LO8(ebx);
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM8(esi + 0x28) = LO8(ebx);
    MEM8(esi + 0x29) = 9;
    SET_LO16(eax, ZX8(MEM8(0x96FAD5)));
    PUSH32(esp, ebx);
    MEM16(esi + 0x2A) = LO16(eax);
    MEM16(esi + 0x2C) = LO16(ebx);
    MEM16(esi + 0x2E) = LO16(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00228945u); RECOMP_ABI_CALL(0x00227EB2u, sub_00227EB2); /* call 0x00227EB2 */

loc_00228945: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022894Du); RECOMP_ABI_CALL(0x00226541u, sub_00226541); /* call 0x00226541 */

loc_0022894D: ;
    goto loc_00228958;

loc_0022894F: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00228958u); RECOMP_ABI_CALL(0x002281ADu, sub_002281AD); /* call 0x002281AD */

loc_00228958: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00228A41
 * Original: 0x00228A41 - 0x00228A59 (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228A41(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00228A41: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x460)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x460), 0 (8-bit) */
    ebp = edx;
    SET_LO8(ebx, 1);
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_00228ACB(); return; } /* jbe: below or equal (unsigned <=) */

loc_00228A54: ;
    MEM8(esp + 0xC) = LO8(ebx);
    PUSH32(esp, edi);

    g_seh_ebp = ebp; sub_00228A59(); return; /* fallthrough 0x00228A59 */

}

/**
 * sub_00228A59
 * Original: 0x00228A59 - 0x00228A88 (47 bytes, 16 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228A59(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00228A59: ;
    SET_LO16(eax, ZX8(LO8(ebx)));
    _fa = (uint32_t)(MEM16(ebp)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp), LO16(eax) (16-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_00228AB6(); return; } /* je: equal / zero */

loc_00228A63: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(ebp + 2));
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00228A98(); return; } /* je: equal / zero */

loc_00228A70: ;
    ecx = esi + 0x461;
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_00228A88(); return; } /* je: equal / zero */

loc_00228A7C: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0x00228A86u); RECOMP_ABI_CALL(0x00224B5Cu, sub_00224B5C); /* call 0x00224B5C */

loc_00228A86: ;
    g_seh_ebp = ebp; sub_00228A8C(); return; /* tail jmp 0x00228A8C */

}

/**
 * sub_00228A88
 * Original: 0x00228A88 - 0x00228A8C (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228A88(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00228A88: ;
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx) = LO8(eax);

    g_seh_ebp = ebp; sub_00228A8C(); return; /* fallthrough 0x00228A8C */

}

/**
 * sub_00228A8C
 * Original: 0x00228A8C - 0x00228A98 (12 bytes, 4 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228A8C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00228A8C: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0x00228A96u); RECOMP_ABI_CALL(0x0022482Cu, sub_0022482C); /* call 0x0022482C */

loc_00228A96: ;
    g_seh_ebp = ebp; sub_00228AB6(); return; /* tail jmp 0x00228AB6 */

}

/**
 * sub_00228A98
 * Original: 0x00228A98 - 0x00228AB6 (30 bytes, 11 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228A98(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00228A98: ;
    edi = esi + 0x461;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_00228AB6(); return; } /* je: equal / zero */

loc_00228AA4: ;
    PUSH32(esp, MEM32(esp + 0x10));
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, ~LO8(ecx));
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, esi);
    MEM8(edi) = LO8(ecx);
    PUSH32(esp, 0x00228AB6u); RECOMP_ABI_CALL(0x00224B5Cu, sub_00224B5C); /* call 0x00224B5C */

    g_seh_ebp = ebp; sub_00228AB6(); return; /* fallthrough 0x00228AB6 */

}

/**
 * sub_00228AB6
 * Original: 0x00228AB6 - 0x00228ACB (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228AB6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00228AB6: ;
    MEM8(esp + 0x10) = MEM8(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(esp + 0x10));
    SET_LO8(ebx, LO8(ebx) << 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x460)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x460) (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_00228A59(); return; } /* jb: below (unsigned <) */

loc_00228ACA: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_00228ACB(); return; /* fallthrough 0x00228ACB */

}

/**
 * sub_00228ACB
 * Original: 0x00228ACB - 0x00228AD0 (5 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228ACB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00228ACB: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00228AD0
 * Original: 0x00228AD0 - 0x00228B1D (77 bytes, 25 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00228AD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228AD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    MEM32(eax + 0x470) = ecx;
    ecx = MEM32(ebp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(eax + 0x474) = ecx;
    ecx = MEM32(eax);
    MEM16(ebp + 8) = 0x10;
    esi = MEM32(ebp + 8);
    MEM32(ecx + edx * 4 + 0x50) = esi;
    esi = eax + 0x4A0;
    PUSH32(esp, esi);
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edx);
    ecx = 0xFFF0BDC0u;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x478) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x478;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BCA4); PUSH32(esp, 0x00228B18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00228B12u); } /* indirect call */
    }

loc_00228B18: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00228B1D
 * Original: 0x00228B1D - 0x00228B3A (29 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00228B1D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_00228B1D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    ecx = MEM32(ebp + 0xC);
    MEM16(ebp + -4) = 1;
    edx = MEM32(ebp + -4);
    MEM32(eax + ecx * 4 + 0x50) = edx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00228B3A
 * Original: 0x00228B3A - 0x00228B65 (43 bytes, 15 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228B3A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228B3A: ;
    ecx = MEM32(esp + 8);
    eax = ecx + 0x470;
    edx = MEM32(eax);
    _fb = (uint32_t)(0x474) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x474;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00228B61; /* je: equal / zero */

loc_00228B53: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = MEM32(ecx) & 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x80000600u);
    { uint32_t _icall_target = edx; PUSH32(esp, 0x00228B61u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00228B5Fu); } /* indirect call */
    }

loc_00228B61: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00228B65
 * Original: 0x00228B65 - 0x00228C24 (191 bytes, 64 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00228B65(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228B65: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    edx = ZX8(MEM8(esi + 0x460));
    ecx = eax + 0x54;
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edi = ebp + -8;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(ebp + -12) = 1;
    if (CMP_BE(_fa, _fb)) goto loc_00228C16; /* jbe: below or equal (unsigned <=) */

loc_00228B92: ;
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -20) = edx;
    PUSH32(esp, ebx);

loc_00228B99: ;
    edi = MEM32(ecx);
    MEM32(ebp + -4) = edi;
    _fa = (uint32_t)(MEM8(ebp + -2)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -2), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00228BE3; /* je: equal / zero */

loc_00228BA4: ;
    ecx = MEM32(esi + 0x474);
    ebx = esi + 0x470;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -24) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00228BE3; /* je: equal / zero */

loc_00228BBC: ;
    eax = esi + 0x478;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BCA8); PUSH32(esp, 0x00228BC9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00228BC3u); } /* indirect call */
    }

loc_00228BC9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -24));
    MEM32(ebx) = MEM32(ebx) & 0;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x474) = MEM32(esi + 0x474) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x474)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi & 0x200;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi << 0xF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(ebp + -28); PUSH32(esp, 0x00228BE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00228BE0u); } /* indirect call */
    }

loc_00228BE3: ;
    _fa = (uint32_t)(MEM8(ebp + -2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -2), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00228BFA; /* je: equal / zero */

loc_00228BE9: ;
    eax = MEM32(ebp + -12);
    MEM16(ebp + -8) = MEM16(ebp + -8) | LO16(eax);
    _fa = (uint32_t)(MEM16(ebp + -8)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00228BFA; /* je: equal / zero */

loc_00228BF6: ;
    MEM16(ebp + -6) = MEM16(ebp + -6) | LO16(eax);
    _fa = (uint32_t)(MEM16(ebp + -6)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_00228BFA: ;
    MEM16(ebp + -4) = MEM16(ebp + -4) & 0;
    _fa = (uint32_t)(MEM16(ebp + -4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + -4);
    MEM32(ebp + -12) = MEM32(ebp + -12) << 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -20) = MEM32(ebp + -20) - 1;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -16) = ecx;
    if ((_fa != 0)) goto loc_00228B99; /* jne: not equal / not zero */

loc_00228C15: ;
    POP32(esp, ebx);

loc_00228C16: ;
    edx = ebp + -8;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00228C20u); RECOMP_ABI_CALL(0x00228A41u, sub_00228A41); /* call 0x00228A41 */

loc_00228C20: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00228C33
 * Original: 0x00228C33 - 0x00228C46 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228C33(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228C33: ;
    eax = MEM32(0x98B828);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00228C45; /* je: equal / zero */

loc_00228C3C: ;
    ecx = MEM32(eax + 0x18);
    MEM32(0x98B828) = ecx;

loc_00228C45: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00228C5D
 * Original: 0x00228C5D - 0x00228C68 (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228C5D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228C5D: ;
    SET_LO8(eax, LO8(eax) & 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(0x98B820)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x98B820);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00228C68
 * Original: 0x00228C68 - 0x00228C99 (49 bytes, 16 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00228C68(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228C68: ;
    { uint32_t _icall_esp = g_esp;
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
    ebx = edx;
    MEM32(ebp + -12) = ecx;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x00228C7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00228C79u); } /* indirect call */
    }

loc_00228C7F: ;
    MEM8(ebp + -1) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00228C87u); RECOMP_ABI_CALL(0x00228C33u, sub_00228C33); /* call 0x00228C33 */

loc_00228C87: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00228C99(); return; } /* jne: not equal / not zero */

loc_00228C8D: ;
    MEM32(ebp + -8) = 0x80000100u;
    g_seh_ebp = ebp; sub_00228DC7(); return; /* tail jmp 0x00228DC7 */

}

/**
 * sub_00228C99
 * Original: 0x00228C99 - 0x00228D05 (108 bytes, 41 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228C99(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00228C99: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = esi;
    _fb = (uint32_t)(MEM32(0x98B820)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x98B820);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x14) = eax;
    SET_LO8(eax, MEM8(ebx + 0x16));
    MEM8(esi + 0x11) = LO8(eax);
    SET_LO8(eax, MEM8(ebx + 0x17));
    MEM8(esi + 0x13) = LO8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ebx + 0x1E));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x11));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ebx + 0x1C));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00228CD2u); RECOMP_ABI_CALL(0x00225431u, sub_00225431); /* call 0x00225431 */

loc_00228CD2: ;
    MEM16(esi + 0x22) = LO16(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ebx + 0x14));
    eax = eax ^ MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = MEM32(esi) ^ eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ZX8(MEM8(ebx + 0x15));
    ecx = MEM32(esi);
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x780;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x11), 0 (8-bit) */
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00228D05(); return; } /* jne: not equal / not zero */

loc_00228CFC: ;
    eax = eax & 0xFFFFE7FFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = eax;
    g_seh_ebp = ebp; sub_00228D1F(); return; /* tail jmp 0x00228D1F */

}

/**
 * sub_00228D05
 * Original: 0x00228D05 - 0x00228D1F (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228D05(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00228D05: ;
    _fa = (uint32_t)(MEM8(ebx + 0x15)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x15), 0x80 (8-bit) */
    PUSH32(esp, 0);
    POP32(esp, ecx);
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx << 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x1800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = ecx;

    g_seh_ebp = ebp; sub_00228D1F(); return; /* fallthrough 0x00228D1F */

}

/**
 * sub_00228D1F
 * Original: 0x00228D1F - 0x00228DA0 (129 bytes, 46 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228D1F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00228D1F: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ebx + 0x1E));
    ecx = ecx & 0xFFFF5FFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 0xD;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = eax;
    ecx = ZX16(MEM16(ebx + 0x1C));
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x7FF0000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = ecx;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = eax;
    edx = MEM32(ebx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00228D85; /* je: equal / zero */

loc_00228D5E: ;
    eax = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx >> 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0x1800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00228D7A; /* jne: not equal / not zero */

loc_00228D77: ;
    edi = edi << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_00228D7A: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00228D85; /* je: equal / zero */

loc_00228D7E: ;
    MEM32(esi + 8) = 2;

loc_00228D85: ;
    SET_LO8(eax, MEM8(esi + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00228DA0(); return; } /* je: equal / zero */

loc_00228D8D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00228DA0(); return; } /* je: equal / zero */

loc_00228D91: ;
    ecx = MEM32(ebp + -12);
    edx = esi;
    PUSH32(esp, 0x00228D9Bu); RECOMP_ABI_CALL(0x0022937Au, sub_0022937A); /* call 0x0022937A */

loc_00228D9B: ;
    MEM32(ebp + -8) = eax;
    g_seh_ebp = ebp; sub_00228DAA(); return; /* tail jmp 0x00228DAA */

}

/**
 * sub_00228DA0
 * Original: 0x00228DA0 - 0x00228DAA (10 bytes, 3 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00228DA0: ;
    ecx = MEM32(ebp + -12);
    edx = esi;
    PUSH32(esp, 0x00228DAAu); RECOMP_ABI_CALL(0x00229260u, sub_00229260); /* call 0x00229260 */

    g_seh_ebp = ebp; sub_00228DAA(); return; /* fallthrough 0x00228DAA */

}

/**
 * sub_00228DAA
 * Original: 0x00228DAA - 0x00228DB5 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228DAA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00228DAA: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00228DB5(); return; } /* jl: less (signed <) */

loc_00228DB0: ;
    MEM32(ebx + 0x10) = esi;
    g_seh_ebp = ebp; sub_00228DC7(); return; /* tail jmp 0x00228DC7 */

}

/**
 * sub_00228DB5
 * Original: 0x00228DB5 - 0x00228DC7 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228DB5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00228DB5: ;
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(0x98B828);
    MEM32(esi + 0x18) = eax;
    MEM32(0x98B828) = esi;

    g_seh_ebp = ebp; sub_00228DC7(); return; /* fallthrough 0x00228DC7 */

}

/**
 * sub_00228DC7
 * Original: 0x00228DC7 - 0x00228DDC (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228DC7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00228DC7: ;
    esi = MEM32(ebp + -8);
    SET_LO8(ecx, MEM8(ebp + -1));
    MEM32(ebx + 4) = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x00228DD6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00228DD0u); } /* indirect call */
    }

loc_00228DD6: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00228DDC
 * Original: 0x00228DDC - 0x00228DFD (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00228DDC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228DDC: ;
    ecx = MEM32(edx + 0x10);
    eax = MEM32(ecx + 8);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 0x14) = eax;
    _fa = (uint32_t)(MEM8(ecx + 0x26)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x26), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00228DF4; /* jne: not equal / not zero */

loc_00228DEE: ;
    _fa = (uint32_t)(MEM8(ecx + 0x27)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x27), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00228DFA; /* je: equal / zero */

loc_00228DF4: ;
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx + 0x14) = eax;

loc_00228DFA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00228DFD
 * Original: 0x00228DFD - 0x00228E2B (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00228DFD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228DFD: ;
    eax = MEM32(edx + 0x10);
    edx = MEM32(edx + 0x14);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00228E0C; /* je: equal / zero */

loc_00228E08: ;
    MEM32(eax + 8) = MEM32(eax + 8) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00228E0C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00228E15; /* je: equal / zero */

loc_00228E11: ;
    MEM32(eax + 8) = MEM32(eax + 8) | 2;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00228E15: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00228E28; /* jne: not equal / not zero */

loc_00228E1A: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00228E28; /* je: equal / zero */

loc_00228E22: ;
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = ecx;

loc_00228E28: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00228E2B
 * Original: 0x00228E2B - 0x00228E50 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228E2B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00228E2B: ;
    eax = MEM32(ecx + 0x41C);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00228E45; /* je: equal / zero */

loc_00228E38: ;
    esi = eax;
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00228E38; /* jne: not equal / not zero */

loc_00228E41: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00228E50(); return; } /* jne: not equal / not zero */

loc_00228E45: ;
    eax = MEM32(eax + 0x24);
    MEM32(ecx + 0x41C) = eax;
    g_seh_ebp = ebp; sub_00228E56(); return; /* tail jmp 0x00228E56 */

}

/**
 * sub_00228E50
 * Original: 0x00228E50 - 0x00228E56 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228E50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00228E50: ;
    eax = MEM32(eax + 0x24);
    MEM32(esi + 0x24) = eax;

    g_seh_ebp = ebp; sub_00228E56(); return; /* fallthrough 0x00228E56 */

}

/**
 * sub_00228E56
 * Original: 0x00228E56 - 0x00228E64 (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228E56(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228E56: ;
    eax = ecx + 0x420;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00228E62; /* jne: not equal / not zero */

loc_00228E60: ;
    MEM32(eax) = esi;

loc_00228E62: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00228E64
 * Original: 0x00228E64 - 0x00228E89 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228E64(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00228E64: ;
    eax = MEM32(ecx + 0x424);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00228E7E; /* je: equal / zero */

loc_00228E71: ;
    esi = eax;
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00228E71; /* jne: not equal / not zero */

loc_00228E7A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00228E89(); return; } /* jne: not equal / not zero */

loc_00228E7E: ;
    eax = MEM32(eax + 0x24);
    MEM32(ecx + 0x424) = eax;
    g_seh_ebp = ebp; sub_00228E8F(); return; /* tail jmp 0x00228E8F */

}

/**
 * sub_00228E89
 * Original: 0x00228E89 - 0x00228E8F (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228E89(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00228E89: ;
    eax = MEM32(eax + 0x24);
    MEM32(esi + 0x24) = eax;

    g_seh_ebp = ebp; sub_00228E8F(); return; /* fallthrough 0x00228E8F */

}

/**
 * sub_00228E8F
 * Original: 0x00228E8F - 0x00228E9D (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228E8F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228E8F: ;
    eax = ecx + 0x428;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00228E9B; /* jne: not equal / not zero */

loc_00228E99: ;
    MEM32(eax) = esi;

loc_00228E9B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00228E9D
 * Original: 0x00228E9D - 0x00228EBC (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228E9D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00228E9D: ;
    eax = MEM32(ecx + 0x28);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00228EB4; /* je: equal / zero */

loc_00228EA7: ;
    esi = eax;
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00228EA7; /* jne: not equal / not zero */

loc_00228EB0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00228EBC(); return; } /* jne: not equal / not zero */

loc_00228EB4: ;
    eax = MEM32(eax + 0x24);
    MEM32(ecx + 0x28) = eax;
    g_seh_ebp = ebp; sub_00228EC2(); return; /* tail jmp 0x00228EC2 */

}

/**
 * sub_00228EBC
 * Original: 0x00228EBC - 0x00228EC2 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228EBC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00228EBC: ;
    eax = MEM32(eax + 0x24);
    MEM32(esi + 0x24) = eax;

    g_seh_ebp = ebp; sub_00228EC2(); return; /* fallthrough 0x00228EC2 */

}

/**
 * sub_00228EC2
 * Original: 0x00228EC2 - 0x00228ECC (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228EC2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228EC2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x2C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00228ECA; /* jne: not equal / not zero */

loc_00228EC7: ;
    MEM32(ecx + 0x2C) = esi;

loc_00228ECA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00228ECC
 * Original: 0x00228ECC - 0x00228EF0 (36 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228ECC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00228ECC: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = edx;
    _fa = (uint32_t)(MEM8(edi + 0x26)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x26), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00228F3F(); return; } /* je: equal / zero */

loc_00228ED6: ;
    eax = ZX8(MEM8(edi + 0x11));
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_00228EFE(); return; } /* je: equal / zero */

loc_00228EE1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_00228EF0(); return; } /* je: equal / zero */

loc_00228EE5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_00228F3D(); return; } /* jne: not equal / not zero */

loc_00228EE8: ;
    ebx = edi + 0x28;
    ebp = edi + 0x2C;
    g_seh_ebp = ebp; sub_00228F0A(); return; /* tail jmp 0x00228F0A */

}

/**
 * sub_00228EF0
 * Original: 0x00228EF0 - 0x00228EFE (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00228EF0: ;
    ebx = ecx + 0x424;
    ebp = ecx + 0x428;
    g_seh_ebp = ebp; sub_00228F0A(); return; /* tail jmp 0x00228F0A */

}

/**
 * sub_00228EFE
 * Original: 0x00228EFE - 0x00228F0A (12 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228EFE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00228EFE: ;
    ebx = ecx + 0x41C;
    ebp = ecx + 0x420;

    g_seh_ebp = ebp; sub_00228F0A(); return; /* fallthrough 0x00228F0A */

}

/**
 * sub_00228F0A
 * Original: 0x00228F0A - 0x00228F0B (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228F0A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00228F0A: ;
    PUSH32(esp, esi);

    g_seh_ebp = ebp; sub_00228F0B(); return; /* fallthrough 0x00228F0B */

}

/**
 * sub_00228F0B
 * Original: 0x00228F0B - 0x00228F29 (30 bytes, 10 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228F0B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00228F0B: ;
    esi = MEM32(ebx);
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00228F29(); return; } /* jne: not equal / not zero */

loc_00228F12: ;
    eax = MEM32(esi + 0x24);
    MEM32(ebx) = eax;
    MEM32(esi + 4) = 0xC000000Fu;
    MEM8(edi + 0x26) = MEM8(edi + 0x26) - 1;
    _fa = (uint32_t)(MEM8(edi + 0x26)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00228F27u); RECOMP_ABI_CALL(0x0022541Du, sub_0022541D); /* call 0x0022541D */

loc_00228F27: ;
    g_seh_ebp = ebp; sub_00228F30(); return; /* tail jmp 0x00228F30 */

}

/**
 * sub_00228F29
 * Original: 0x00228F29 - 0x00228F30 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228F29(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00228F29: ;
    MEM32(esp + 0x10) = esi;
    ebx = esi + 0x24;

    g_seh_ebp = ebp; sub_00228F30(); return; /* fallthrough 0x00228F30 */

}

/**
 * sub_00228F30
 * Original: 0x00228F30 - 0x00228F3D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228F30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00228F30: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00228F0B(); return; } /* jne: not equal / not zero */

loc_00228F35: ;
    eax = MEM32(esp + 0x10);
    MEM32(ebp) = eax;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_00228F3D(); return; /* fallthrough 0x00228F3D */

}

/**
 * sub_00228F3D
 * Original: 0x00228F3D - 0x00228F3F (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228F3D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00228F3D: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_00228F3F(); return; /* fallthrough 0x00228F3F */

}

/**
 * sub_00228F3F
 * Original: 0x00228F3F - 0x00228F42 (3 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228F3F(void)
{

loc_00228F3F: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00228F42
 * Original: 0x00228F42 - 0x00228F7F (61 bytes, 24 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228F42(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228F42: ;
    PUSH32(esp, esi);
    esi = edx;
    MEM8(esi + 0x20) = MEM8(esi + 0x20) + 1;
    _fa = (uint32_t)(MEM8(esi + 0x20)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10), 0x20 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00228F7C; /* jne: not equal / not zero */

loc_00228F51: ;
    MEM8(esi + 1) = MEM8(esi + 1) | 0x40;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, 0x00228F5Au); RECOMP_ABI_CALL(0x00229792u, sub_00229792); /* call 0x00229792 */

loc_00228F5A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1C) = eax;
    _fa = (uint32_t)(MEM32(edi + 0x438)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x438), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00228F6B; /* je: equal / zero */

loc_00228F67: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) | 0x40;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00228F6B: ;
    ecx = MEM32(edi);
    PUSH32(esp, 4);
    POP32(esp, eax);
    MEM32(ecx + 0xC) = eax;
    ecx = MEM32(edi);
    MEM32(ecx + 0x10) = eax;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) | 0x20;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00228F7C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00228F7F
 * Original: 0x00228F7F - 0x00228FBA (59 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228F7F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228F7F: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + -100);
    _fb = (uint32_t)(0xFFFFFB40u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFB40u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    SET_LO8(ecx, MEM8(eax + 0x98B8EC));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BCE4); PUSH32(esp, 0x00228F9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00228F96u); } /* indirect call */
    }

loc_00228F9C: ;
    ecx = MEM32(esi);
    MEM32(ecx + 0x14) = 0x80000033u;
    ecx = MEM32(esi);
    MEM32(ecx + 4) = 2;
    SET_LO8(ecx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x00228FB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00228FB0u); } /* indirect call */
    }

loc_00228FB6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00228FBA
 * Original: 0x00228FBA - 0x00228FCF (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228FBA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00228FBA: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM8(esi + 0x22)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x22), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_00228FCF(); return; } /* je: equal / zero */

loc_00228FC5: ;
    eax = 0x40020000;
    g_seh_ebp = ebp; sub_0022906D(); return; /* tail jmp 0x0022906D */

}

/**
 * sub_00228FCF
 * Original: 0x00228FCF - 0x00229001 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228FCF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00228FCF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x00228FD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00228FD1u); } /* indirect call */
    }

loc_00228FD7: ;
    edi = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM8(edi + 0x10)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x10), 0x10 (8-bit) */
    SET_LO8(ebx, LO8(eax));
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_0022905C(); return; } /* jne: not equal / not zero */

loc_00228FE2: ;
    SET_LO16(eax, MEM16(esi + 0x22));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0022903C(); return; } /* je: equal / zero */

loc_00228FEA: ;
    eax = ZX8(MEM8(edi + 0x11));
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_00229019(); return; } /* je: equal / zero */

loc_00228FF3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0022900C(); return; } /* je: equal / zero */

loc_00228FF7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_00229001(); return; } /* je: equal / zero */

loc_00228FFA: ;
    esi = 0x80000600u;
    g_seh_ebp = ebp; sub_00229061(); return; /* tail jmp 0x00229061 */

}

/**
 * sub_00229001
 * Original: 0x00229001 - 0x0022900C (11 bytes, 4 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229001(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00229001: ;
    edx = esi;
    ecx = edi;
    PUSH32(esp, 0x0022900Au); RECOMP_ABI_CALL(0x00228E9Du, sub_00228E9D); /* call 0x00228E9D */

loc_0022900A: ;
    g_seh_ebp = ebp; sub_00229024(); return; /* tail jmp 0x00229024 */

}

/**
 * sub_0022900C
 * Original: 0x0022900C - 0x00229019 (13 bytes, 4 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022900C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022900C: ;
    ecx = MEM32(esp + 0x10);
    edx = esi;
    PUSH32(esp, 0x00229017u); RECOMP_ABI_CALL(0x00228E64u, sub_00228E64); /* call 0x00228E64 */

loc_00229017: ;
    g_seh_ebp = ebp; sub_00229024(); return; /* tail jmp 0x00229024 */

}

/**
 * sub_00229019
 * Original: 0x00229019 - 0x0022903C (35 bytes, 10 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229019(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00229019: ;
    ecx = MEM32(esp + 0x10);
    edx = esi;
    PUSH32(esp, 0x00229024u); RECOMP_ABI_CALL(0x00228E2Bu, sub_00228E2B); /* call 0x00228E2B */

loc_00229024: ;
    MEM8(edi + 0x26) = MEM8(edi + 0x26) - 1;
    _fa = (uint32_t)(MEM8(edi + 0x26)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(esi + 0x22) = MEM8(esi + 0x22) | 1;
    _fa = (uint32_t)(MEM8(esi + 0x22)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, esi);
    MEM32(esi + 4) = 0xC000000Fu;
    PUSH32(esp, 0x00229038u); RECOMP_ABI_CALL(0x0022541Du, sub_0022541D); /* call 0x0022541D */

loc_00229038: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00229061(); return; /* tail jmp 0x00229061 */

}

/**
 * sub_00229024
 * Original: 0x00229024 - 0x0022903C (24 bytes, 7 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229024(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00229024: ;
    MEM8(edi + 0x26) = MEM8(edi + 0x26) - 1;
    _fa = (uint32_t)(MEM8(edi + 0x26)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(esi + 0x22) = MEM8(esi + 0x22) | 1;
    _fa = (uint32_t)(MEM8(esi + 0x22)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, esi);
    MEM32(esi + 4) = 0xC000000Fu;
    PUSH32(esp, 0x00229038u); RECOMP_ABI_CALL(0x0022541Du, sub_0022541D); /* call 0x0022541D */

loc_00229038: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00229061(); return; /* tail jmp 0x00229061 */

}

/**
 * sub_0022903C
 * Original: 0x0022903C - 0x0022905C (32 bytes, 9 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022903C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022903C: ;
    ecx = MEM32(esp + 0x10);
    SET_LO16(eax, LO16(eax) | 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(esi + 0x22) = LO16(eax);
    eax = ecx + 0x42C;
    edx = MEM32(eax);
    MEM32(esi + 0x24) = edx;
    edx = edi;
    MEM32(eax) = esi;
    PUSH32(esp, 0x0022905Cu); RECOMP_ABI_CALL(0x00228F42u, sub_00228F42); /* call 0x00228F42 */

    g_seh_ebp = ebp; sub_0022905C(); return; /* fallthrough 0x0022905C */

}

/**
 * sub_0022905C
 * Original: 0x0022905C - 0x00229061 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022905C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022905C: ;
    esi = 0x40020000;

    g_seh_ebp = ebp; sub_00229061(); return; /* fallthrough 0x00229061 */

}

/**
 * sub_00229061
 * Original: 0x00229061 - 0x0022906D (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229061(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00229061: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x00229069u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00229063u); } /* indirect call */
    }

loc_00229069: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_0022906D(); return; /* fallthrough 0x0022906D */

}

/**
 * sub_0022906D
 * Original: 0x0022906D - 0x00229071 (4 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022906D(void)
{

loc_0022906D: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00229071
 * Original: 0x00229071 - 0x002290A7 (54 bytes, 22 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229071(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00229071: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edx;
    esi = MEM32(edi + 0x10);
    ebp = ecx;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x00229082u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022907Cu); } /* indirect call */
    }

loc_00229082: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) | 0x10;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx = esi;
    ecx = ebp;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x00229091u); RECOMP_ABI_CALL(0x00228ECCu, sub_00228ECC); /* call 0x00228ECC */

loc_00229091: ;
    SET_LO8(eax, MEM8(esi + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002290A7(); return; } /* je: equal / zero */

loc_00229098: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002290A7(); return; } /* je: equal / zero */

loc_0022909C: ;
    edx = esi;
    ecx = ebp;
    PUSH32(esp, 0x002290A5u); RECOMP_ABI_CALL(0x00229556u, sub_00229556); /* call 0x00229556 */

loc_002290A5: ;
    g_seh_ebp = ebp; sub_002290B0(); return; /* tail jmp 0x002290B0 */

}

/**
 * sub_002290A7
 * Original: 0x002290A7 - 0x002290B0 (9 bytes, 3 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002290A7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002290A7: ;
    edx = esi;
    ecx = ebp;
    PUSH32(esp, 0x002290B0u); RECOMP_ABI_CALL(0x0022929Du, sub_0022929D); /* call 0x0022929D */

    g_seh_ebp = ebp; sub_002290B0(); return; /* fallthrough 0x002290B0 */

}

/**
 * sub_002290B0
 * Original: 0x002290B0 - 0x002290D8 (40 bytes, 15 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002290B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002290B0: ;
    edx = esi;
    ecx = ebp;
    PUSH32(esp, 0x002290B9u); RECOMP_ABI_CALL(0x00228F42u, sub_00228F42); /* call 0x00228F42 */

loc_002290B9: ;
    eax = ebp + 0x434;
    ecx = MEM32(eax);
    MEM32(edi + 0x14) = ecx;
    SET_LO8(ecx, LO8(ebx));
    MEM32(eax) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x002290CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002290C8u); } /* indirect call */
    }

loc_002290CE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x40000000;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002290D8
 * Original: 0x002290D8 - 0x0022912B (83 bytes, 33 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002290D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002290D8: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = edx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    ebp = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x002290ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002290E6u); } /* indirect call */
    }

loc_002290EC: ;
    edx = edi;
    ecx = ebp;
    MEM8(esp + 0x13) = LO8(eax);
    PUSH32(esp, 0x002290F9u); RECOMP_ABI_CALL(0x00228ECCu, sub_00228ECC); /* call 0x00228ECC */

loc_002290F9: ;
    _fa = (uint32_t)(MEM8(edi + 0x27)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x27), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00229119; /* je: equal / zero */

loc_002290FE: ;
    eax = ebp + 0x430;
    ecx = MEM32(eax);
    MEM32(esi + 0x14) = ecx;
    edx = edi;
    ecx = ebp;
    MEM32(eax) = esi;
    PUSH32(esp, 0x00229114u); RECOMP_ABI_CALL(0x00228F42u, sub_00228F42); /* call 0x00228F42 */

loc_00229114: ;
    ebx = 0x40000000;

loc_00229119: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x00229123u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022911Du); } /* indirect call */
    }

loc_00229123: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022912B
 * Original: 0x0022912B - 0x0022916F (68 bytes, 27 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0022912B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022912B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = ZX8(MEM8(edi + 1));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_002291C3(); return; } /* jg: greater (signed >) */

loc_00229140: ;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002291B7(); return; } /* je: equal / zero */

loc_00229142: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_002291AB(); return; } /* je: equal / zero */

loc_00229149: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0022919F(); return; } /* je: equal / zero */

loc_0022914D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_00229190(); return; } /* je: equal / zero */

loc_00229150: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0022917E(); return; } /* je: equal / zero */

loc_00229154: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0022916F(); return; } /* je: equal / zero */

loc_00229158: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_00229211(); return; } /* jne: not equal / not zero */

loc_00229160: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022916Au); RECOMP_ABI_CALL(0x0022A1C0u, sub_0022A1C0); /* call 0x0022A1C0 */

loc_0022916A: ;
    g_seh_ebp = ebp; sub_00229222(); return; /* tail jmp 0x00229222 */

}

/**
 * sub_0022916F
 * Original: 0x0022916F - 0x0022917E (15 bytes, 4 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022916F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022916F: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    PUSH32(esp, 0x00229179u); RECOMP_ABI_CALL(0x00229F46u, sub_00229F46); /* call 0x00229F46 */

loc_00229179: ;
    g_seh_ebp = ebp; sub_00229222(); return; /* tail jmp 0x00229222 */

}

/**
 * sub_0022917E
 * Original: 0x0022917E - 0x00229190 (18 bytes, 5 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022917E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022917E: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x00229186u); RECOMP_ABI_CALL(0x00229792u, sub_00229792); /* call 0x00229792 */

loc_00229186: ;
    MEM32(edi + 0x14) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00229224(); return; /* tail jmp 0x00229224 */

}

/**
 * sub_00229190
 * Original: 0x00229190 - 0x0022919F (15 bytes, 4 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00229190: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    PUSH32(esp, 0x0022919Au); RECOMP_ABI_CALL(0x00228DFDu, sub_00228DFD); /* call 0x00228DFD */

loc_0022919A: ;
    g_seh_ebp = ebp; sub_00229222(); return; /* tail jmp 0x00229222 */

}

/**
 * sub_0022919F
 * Original: 0x0022919F - 0x002291AB (12 bytes, 4 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022919F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022919F: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    PUSH32(esp, 0x002291A9u); RECOMP_ABI_CALL(0x00228DDCu, sub_00228DDC); /* call 0x00228DDC */

loc_002291A9: ;
    g_seh_ebp = ebp; sub_00229222(); return; /* tail jmp 0x00229222 */

}

/**
 * sub_002291AB
 * Original: 0x002291AB - 0x002291B7 (12 bytes, 4 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002291AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002291AB: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    PUSH32(esp, 0x002291B5u); RECOMP_ABI_CALL(0x00228C68u, sub_00228C68); /* call 0x00228C68 */

loc_002291B5: ;
    g_seh_ebp = ebp; sub_00229222(); return; /* tail jmp 0x00229222 */

}

/**
 * sub_002291B7
 * Original: 0x002291B7 - 0x002291C3 (12 bytes, 4 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002291B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002291B7: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    PUSH32(esp, 0x002291C1u); RECOMP_ABI_CALL(0x0022A327u, sub_0022A327); /* call 0x0022A327 */

loc_002291C1: ;
    g_seh_ebp = ebp; sub_00229222(); return; /* tail jmp 0x00229222 */

}

/**
 * sub_002291C3
 * Original: 0x002291C3 - 0x002291ED (42 bytes, 16 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002291C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002291C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00229218(); return; } /* je: equal / zero */

loc_002291C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3F (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00229211(); return; } /* jle: less or equal (signed <=) */

loc_002291CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x41 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00229205(); return; } /* jle: less or equal (signed <=) */

loc_002291D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x43) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x43 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002291F9(); return; } /* je: equal / zero */

loc_002291D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x46 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002291ED(); return; } /* je: equal / zero */

loc_002291DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4A (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00229211(); return; } /* jne: not equal / not zero */

loc_002291E1: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    PUSH32(esp, 0x002291EBu); RECOMP_ABI_CALL(0x0022A0F3u, sub_0022A0F3); /* call 0x0022A0F3 */

loc_002291EB: ;
    g_seh_ebp = ebp; sub_00229222(); return; /* tail jmp 0x00229222 */

}

/**
 * sub_002291ED
 * Original: 0x002291ED - 0x002291F9 (12 bytes, 4 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002291ED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002291ED: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    PUSH32(esp, 0x002291F7u); RECOMP_ABI_CALL(0x002290D8u, sub_002290D8); /* call 0x002290D8 */

loc_002291F7: ;
    g_seh_ebp = ebp; sub_00229222(); return; /* tail jmp 0x00229222 */

}

/**
 * sub_002291F9
 * Original: 0x002291F9 - 0x00229205 (12 bytes, 4 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002291F9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002291F9: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    PUSH32(esp, 0x00229203u); RECOMP_ABI_CALL(0x00229071u, sub_00229071); /* call 0x00229071 */

loc_00229203: ;
    g_seh_ebp = ebp; sub_00229222(); return; /* tail jmp 0x00229222 */

}

/**
 * sub_00229205
 * Original: 0x00229205 - 0x00229211 (12 bytes, 4 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229205(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00229205: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    PUSH32(esp, 0x0022920Fu); RECOMP_ABI_CALL(0x0022AAFEu, sub_0022AAFE); /* call 0x0022AAFE */

loc_0022920F: ;
    g_seh_ebp = ebp; sub_00229222(); return; /* tail jmp 0x00229222 */

}

/**
 * sub_00229211
 * Original: 0x00229211 - 0x00229218 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229211(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00229211: ;
    esi = 0x80000200u;
    g_seh_ebp = ebp; sub_00229224(); return; /* tail jmp 0x00229224 */

}

/**
 * sub_00229218
 * Original: 0x00229218 - 0x00229222 (10 bytes, 3 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229218(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00229218: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    PUSH32(esp, 0x00229222u); RECOMP_ABI_CALL(0x0022A446u, sub_0022A446); /* call 0x0022A446 */

    g_seh_ebp = ebp; sub_00229222(); return; /* fallthrough 0x00229222 */

}

/**
 * sub_00229222
 * Original: 0x00229222 - 0x00229243 (33 bytes, 13 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229222(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00229222: ;
    esi = eax;
    eax = esi;
    eax = eax & 0xC0000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022923B; /* je: equal / zero */

loc_00229232: ;
    PUSH32(esp, edi);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0x0022923Bu); RECOMP_ABI_CALL(0x0022541Du, sub_0022541D); /* call 0x0022541D */

loc_0022923B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00229224
 * Original: 0x00229224 - 0x00229243 (31 bytes, 12 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229224(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00229224: ;
    eax = esi;
    eax = eax & 0xC0000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022923B; /* je: equal / zero */

loc_00229232: ;
    PUSH32(esp, edi);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0x0022923Bu); RECOMP_ABI_CALL(0x0022541Du, sub_0022541D); /* call 0x0022541D */

loc_0022923B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00229243
 * Original: 0x00229243 - 0x00229260 (29 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229243(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229243: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 8) = MEM32(eax + 8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(eax + 0x1F) = 0xFF;
    ecx = MEM32(0x98B82C);
    MEM32(eax + 0x14) = ecx;
    MEM32(0x98B82C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00229260
 * Original: 0x00229260 - 0x00229274 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00229260: ;
    _fa = (uint32_t)(MEM8(edx + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x11), 0 (8-bit) */
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00229274(); return; } /* jne: not equal / not zero */

loc_00229269: ;
    esi = ecx + 0x40C;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0022927D(); return; /* tail jmp 0x0022927D */

}

/**
 * sub_00229274
 * Original: 0x00229274 - 0x0022927D (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229274(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00229274: ;
    esi = ecx + 0x410;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_0022927D(); return; /* fallthrough 0x0022927D */

}

/**
 * sub_0022927D
 * Original: 0x0022927D - 0x00229291 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022927D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022927D: ;
    ecx = MEM32(esi);
    MEM32(edx + 0x18) = ecx;
    MEM32(esi) = edx;
    ecx = MEM32(edx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00229291(); return; } /* jne: not equal / not zero */

loc_0022928C: ;
    MEM32(edx + 0xC) = MEM32(edx + 0xC) & ecx;
    _fa = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_00229297(); return; /* tail jmp 0x00229297 */

}

/**
 * sub_00229291
 * Original: 0x00229291 - 0x00229297 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229291(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00229291: ;
    ecx = MEM32(ecx + 0x14);
    MEM32(edx + 0xC) = ecx;

    g_seh_ebp = ebp; sub_00229297(); return; /* fallthrough 0x00229297 */

}

/**
 * sub_00229297
 * Original: 0x00229297 - 0x0022929D (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229297(void)
{

loc_00229297: ;
    ecx = MEM32(edx + 0x14);
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0022929D
 * Original: 0x0022929D - 0x002292B2 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022929D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022929D: ;
    _fa = (uint32_t)(MEM8(edx + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x11), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002292B2(); return; } /* jne: not equal / not zero */

loc_002292A5: ;
    esi = ecx + 0x40C;
    ecx = MEM32(ecx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002292BD(); return; /* tail jmp 0x002292BD */

}

/**
 * sub_002292B2
 * Original: 0x002292B2 - 0x002292BD (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002292B2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002292B2: ;
    esi = ecx + 0x410;
    ecx = MEM32(ecx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_002292BD(); return; /* fallthrough 0x002292BD */

}

/**
 * sub_002292BD
 * Original: 0x002292BD - 0x002292E0 (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002292BD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002292BD: ;
    eax = MEM32(esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002292C1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002292CE; /* je: equal / zero */

loc_002292C5: ;
    edi = eax;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002292C1; /* jne: not equal / not zero */

loc_002292CE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002292E0(); return; } /* je: equal / zero */

loc_002292D2: ;
    ecx = MEM32(eax + 0x18);
    MEM32(edi + 0x18) = ecx;
    eax = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = eax;
    g_seh_ebp = ebp; sub_002292EA(); return; /* tail jmp 0x002292EA */

}

/**
 * sub_002292E0
 * Original: 0x002292E0 - 0x002292EA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002292E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002292E0: ;
    edx = MEM32(eax + 0x18);
    MEM32(esi) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx) = eax;

    g_seh_ebp = ebp; sub_002292EA(); return; /* fallthrough 0x002292EA */

}

/**
 * sub_002292EA
 * Original: 0x002292EA - 0x002292ED (3 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002292EA(void)
{

loc_002292EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002292ED
 * Original: 0x002292ED - 0x00229303 (22 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002292ED(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002292ED: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00229302; /* jbe: below or equal (unsigned <=) */

loc_002292F3: ;
    PUSH32(esp, esi);

loc_002292F4: ;
    esi = edx;
    esi = esi & 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = esi + eax * 2;
    if ((_fa != 0)) goto loc_002292F4; /* jne: not equal / not zero */

loc_00229301: ;
    POP32(esp, esi);

loc_00229302: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00229303
 * Original: 0x00229303 - 0x0022932B (40 bytes, 18 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00229303(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229303: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(ebp + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    PUSH32(esp, edi);
    edi = edx;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0022932B(); return; } /* jb: below (unsigned <) */

loc_00229315: ;
    edx = ZX8(LO8(ecx));
    PUSH32(esp, 5);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00229323u); RECOMP_ABI_CALL(0x002292EDu, sub_002292ED); /* call 0x002292ED */

loc_00229323: ;
    ecx = MEM32(esi + 8);
    MEM32(ecx + eax * 4) = edi;
    g_seh_ebp = ebp; sub_00229374(); return; /* tail jmp 0x00229374 */

}

/**
 * sub_0022932B
 * Original: 0x0022932B - 0x0022933D (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022932B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022932B: ;
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) << 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ebx, LO8(ecx));
    MEM8(ebp + -4) = LO8(eax);
    MEM8(ebp + 0xB) = 0;
    SET_LO8(ebx, LO8(ebx) << 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */

    g_seh_ebp = ebp; sub_0022933D(); return; /* fallthrough 0x0022933D */

}

/**
 * sub_0022933D
 * Original: 0x0022933D - 0x0022935B (30 bytes, 10 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022933D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022933D: ;
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + esi + 0xC;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0022935B(); return; } /* jne: not equal / not zero */

loc_0022934D: ;
    PUSH32(esp, MEM32(ebp + -4));
    edx = edi;
    ecx = esi;
    PUSH32(esp, 0x00229359u); RECOMP_ABI_CALL(0x00229303u, sub_00229303); /* call 0x00229303 */

loc_00229359: ;
    g_seh_ebp = ebp; sub_00229361(); return; /* tail jmp 0x00229361 */

}

/**
 * sub_0022935B
 * Original: 0x0022935B - 0x00229361 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022935B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022935B: ;
    eax = MEM32(eax + 0xC);
    MEM32(eax + 0xC) = edi;

    g_seh_ebp = ebp; sub_00229361(); return; /* fallthrough 0x00229361 */

}

/**
 * sub_00229361
 * Original: 0x00229361 - 0x00229374 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229361(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00229361: ;
    SET_LO8(eax, LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(ebp + -4) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00229373; /* je: equal / zero */

loc_0022936A: ;
    MEM8(ebp + 0xB) = MEM8(ebp + 0xB) + 1;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xB), 2 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0022933D(); return; } /* jb: below (unsigned <) */

loc_00229373: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_00229374(); return; /* fallthrough 0x00229374 */

}

/**
 * sub_00229374
 * Original: 0x00229374 - 0x0022937A (6 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229374(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00229374: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022937A
 * Original: 0x0022937A - 0x002293DE (100 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0022937A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022937A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edx;
    _fa = (uint32_t)(MEM8(esi + 0x11)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x11), 3 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002293DE(); return; } /* jne: not equal / not zero */

loc_0022938B: ;
    SET_LO8(eax, 0x20);
    _fa = (uint32_t)(MEM8(esi + 0x13)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x13), LO8(eax) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0022939B; /* jae: above or equal (unsigned >=) */

loc_00229392: ;
    SET_LO8(edx, MEM8(esi + 0x13));

loc_00229395: ;
    SET_LO8(eax, LO8(eax) >> 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00229395; /* ja: above (unsigned >) */

loc_0022939B: ;
    SET_LO8(ebx, LO8(eax));
    SET_LO8(ebx, LO8(ebx) << 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(ebx, LO8(ebx) - 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    edi = 0x2EE0;
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_002293EA(); return; } /* ja: above (unsigned >) */

loc_002293AD: ;
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax + ecx + 0x10;

loc_002293B7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edx + -2));
    _fb = (uint32_t)(MEM16(edx + 2)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + MEM16(edx + 2));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + MEM16(edx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edi) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002293D1; /* jae: above or equal (unsigned >=) */

loc_002293C9: ;
    edi = eax;
    SET_LO8(eax, MEM8(ebp + -1));
    MEM8(ebp + -5) = LO8(eax);

loc_002293D1: ;
    MEM8(ebp + -1) = MEM8(ebp + -1) + 1;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), LO8(ebx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002293B7; /* jbe: below or equal (unsigned <=) */

loc_002293DC: ;
    g_seh_ebp = ebp; sub_002293EA(); return; /* tail jmp 0x002293EA */

}

/**
 * sub_002293DE
 * Original: 0x002293DE - 0x002293EA (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002293DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002293DE: ;
    SET_LO16(edi, MEM16(ecx + 0x10));
    _fb = (uint32_t)(MEM16(ecx + 0xE)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edi, LO16(edi) + MEM16(ecx + 0xE));
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM8(ebp + -5) = 0;

    g_seh_ebp = ebp; sub_002293EA(); return; /* fallthrough 0x002293EA */

}

/**
 * sub_002293EA
 * Original: 0x002293EA - 0x0022940B (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002293EA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002293EA: ;
    SET_LO16(eax, MEM16(esi + 0x22));
    edi = ZX16(LO16(edi));
    edx = ZX16(LO16(eax));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ZX16(MEM16(ecx + 0x414));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0022940B(); return; } /* jle: less or equal (signed <=) */

loc_00229401: ;
    eax = 0x80000800u;
    g_seh_ebp = ebp; sub_00229551(); return; /* tail jmp 0x00229551 */

}

/**
 * sub_0022940B
 * Original: 0x0022940B - 0x0022942A (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022940B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022940B: ;
    SET_LO8(edx, MEM8(ebp + -5));
    edi = ZX8(LO8(edx));
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi + ecx + 0xC;
    MEM8(esi + 0x12) = LO8(edx);
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(edi + 2) = MEM16(edi + 2) + LO16(eax);
    _fa = (uint32_t)(MEM16(edi + 2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0022942A(); return; } /* jne: not equal / not zero */

loc_00229423: ;
    SET_LO8(eax, 1);
    MEM8(ebp + -1) = LO8(eax);
    g_seh_ebp = ebp; sub_0022943B(); return; /* tail jmp 0x0022943B */

}

/**
 * sub_0022942A
 * Original: 0x0022942A - 0x0022943B (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022942A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022942A: ;
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) << 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MEM8(ebp + -1) = LO8(eax);
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) << 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x40 (8-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_0022947B(); return; } /* ja: above (unsigned >) */

    g_seh_ebp = ebp; sub_0022943B(); return; /* fallthrough 0x0022943B */

}

/**
 * sub_0022943B
 * Original: 0x0022943B - 0x0022947B (64 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022943B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022943B: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0022946D; /* ja: above (unsigned >) */

loc_00229440: ;
    edx = ZX8(MEM8(ebp + -1));
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx + ecx + 0x12;
    MEM32(ebp + -16) = edx;
    SET_LO8(edx, LO8(eax));
    _fb = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - MEM8(ebp + -1));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx = ZX8(LO8(edx));
    MEM32(ebp + -12) = edx;
    edx = MEM32(ebp + -16);

loc_0022945E: ;
    SET_LO16(ebx, MEM16(esi + 0x22));
    _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(edx) = MEM16(edx) + LO16(ebx);
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022945E; /* jne: not equal / not zero */

loc_0022946D: ;
    MEM8(ebp + -1) = MEM8(ebp + -1) << 1;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) << 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x40 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0022943B; /* jbe: below or equal (unsigned <=) */

loc_00229478: ;
    SET_LO8(edx, MEM8(ebp + -5));

    g_seh_ebp = ebp; sub_0022947B(); return; /* fallthrough 0x0022947B */

}

/**
 * sub_0022947B
 * Original: 0x0022947B - 0x00229504 (137 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022947B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022947B: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    MEM8(ebp + -1) = LO8(edx);
    if (CMP_BE(_fa, _fb)) goto loc_002294E4; /* jbe: below or equal (unsigned <=) */

loc_00229483: ;
    SET_LO8(eax, MEM8(ebp + -1));
    edx = ZX8(MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) ^ 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = ZX8(LO8(eax));
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx + ecx + 0xC;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ebx, MEM16(edx + 4));
    SET_LO16(edx, MEM16(edx + 2));
    eax = eax + ecx + 0xC;
    MEM16(ebp + -12) = LO16(edx);
    edx = ZX16(MEM16(eax + 4));
    eax = ZX16(MEM16(eax + 2));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX16(MEM16(ebp + -12));
    MEM32(ebp + -16) = ebx;
    ebx = ZX16(LO16(ebx));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002294E4; /* jle: less or equal (signed <=) */

loc_002294C5: ;
    SET_LO8(eax, MEM8(ebp + -1));
    ebx = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    SET_LO8(eax, LO8(eax) >> 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ZX8(LO8(eax));
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    MEM16(ebx + ecx + 0x10) = LO16(edx);
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_A(_fa, _fb)) goto loc_00229483; /* ja: above (unsigned >) */

loc_002294E4: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002294F6; /* jne: not equal / not zero */

loc_002294EA: ;
    SET_LO16(eax, MEM16(ecx + 0x20));
    _fb = (uint32_t)(MEM16(ecx + 0x1E)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + MEM16(ecx + 0x1E));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(ecx + 0x10) = LO16(eax);

loc_002294F6: ;
    eax = MEM32(edi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00229535(); return; } /* jne: not equal / not zero */

loc_002294FF: ;
    SET_LO8(eax, MEM8(ebp + -5));
    g_seh_ebp = ebp; sub_00229508(); return; /* tail jmp 0x00229508 */

}

/**
 * sub_00229504
 * Original: 0x00229504 - 0x00229508 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229504(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00229504: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00229516(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_00229508(); return; /* fallthrough 0x00229508 */

}

/**
 * sub_00229508
 * Original: 0x00229508 - 0x00229516 (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229508(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00229508: ;
    SET_LO8(eax, LO8(eax) >> 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    ebx = ZX8(LO8(eax));
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ebx + ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + ecx + 0x14), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00229504(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_00229516(); return; /* fallthrough 0x00229516 */

}

/**
 * sub_00229516
 * Original: 0x00229516 - 0x00229535 (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229516(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00229516: ;
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax + ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022952A; /* je: equal / zero */

loc_00229524: ;
    eax = MEM32(eax + 0x14);
    MEM32(esi + 0xC) = eax;

loc_0022952A: ;
    MEM32(edi + 8) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(esi + 0x18) = edx;
    g_seh_ebp = ebp; sub_00229544(); return; /* tail jmp 0x00229544 */

}

/**
 * sub_00229535
 * Original: 0x00229535 - 0x00229551 (28 bytes, 9 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00229535(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00229535: ;
    MEM32(esi + 0x18) = eax;
    MEM32(edi + 8) = esi;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 0x14);
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, MEM32(ebp + -5));
    edx = MEM32(esi + 0x14);
    PUSH32(esp, 0x0022954Fu); RECOMP_ABI_CALL(0x00229303u, sub_00229303); /* call 0x00229303 */

loc_0022954F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_00229551(); return; /* fallthrough 0x00229551 */

}

/**
 * sub_00229544
 * Original: 0x00229544 - 0x00229551 (13 bytes, 4 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00229544(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00229544: ;
    PUSH32(esp, MEM32(ebp + -5));
    edx = MEM32(esi + 0x14);
    PUSH32(esp, 0x0022954Fu); RECOMP_ABI_CALL(0x00229303u, sub_00229303); /* call 0x00229303 */

loc_0022954F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_00229551(); return; /* fallthrough 0x00229551 */

}

/**
 * sub_00229551
 * Original: 0x00229551 - 0x00229556 (5 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229551(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00229551: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00229556
 * Original: 0x00229556 - 0x002295AB (85 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00229556(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229556: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO16(eax, MEM16(edx + 0x22));
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x12));
    MEM16(ebp + -16) = LO16(eax);
    eax = ZX8(LO8(ebx));
    PUSH32(esp, esi);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ecx;
    PUSH32(esp, edi);
    edi = eax + esi + 0xC;
    eax = MEM32(edi + 8);
    MEM32(ebp + -20) = edx;
    MEM8(ebp + -12) = LO8(ebx);

loc_00229583: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00229591; /* je: equal / zero */

loc_00229587: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00229583; /* jne: not equal / not zero */

loc_00229591: ;
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002295CC(); return; } /* jne: not equal / not zero */

loc_00229598: ;
    ecx = MEM32(ebp + -4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM32(edi + 0xC) = ecx;
    MEM32(ebp + -8) = edx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002295D4(); return; } /* je: equal / zero */

loc_002295A7: ;
    SET_LO8(edx, LO8(ebx));
    g_seh_ebp = ebp; sub_002295AF(); return; /* tail jmp 0x002295AF */

}

/**
 * sub_002295AB
 * Original: 0x002295AB - 0x002295AF (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002295AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002295AB: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002295BE(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_002295AF(); return; /* fallthrough 0x002295AF */

}

/**
 * sub_002295AF
 * Original: 0x002295AF - 0x002295BE (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002295AF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002295AF: ;
    SET_LO8(edx, LO8(edx) >> 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    ecx = ZX8(LO8(edx));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ecx + esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + esi + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002295AB(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_002295BE(); return; /* fallthrough 0x002295BE */

}

/**
 * sub_002295BE
 * Original: 0x002295BE - 0x002295CC (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002295BE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002295BE: ;
    ecx = ZX8(LO8(edx));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ecx + esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002295D1(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_002295CC(); return; /* fallthrough 0x002295CC */

}

/**
 * sub_002295CC
 * Original: 0x002295CC - 0x002295D1 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002295CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002295CC: ;
    edx = MEM32(ecx + 0x14);
    g_seh_ebp = ebp; sub_002295D4(); return; /* tail jmp 0x002295D4 */

}

/**
 * sub_002295D1
 * Original: 0x002295D1 - 0x002295D4 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002295D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002295D1: ;
    edx = MEM32(ebp + -8);

    g_seh_ebp = ebp; sub_002295D4(); return; /* fallthrough 0x002295D4 */

}

/**
 * sub_002295D4
 * Original: 0x002295D4 - 0x002295ED (25 bytes, 9 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002295D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002295D4: ;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(eax + 0x18);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002295ED(); return; } /* jne: not equal / not zero */

loc_002295DE: ;
    PUSH32(esp, MEM32(ebp + -12));
    ecx = esi;
    MEM32(edi + 8) = eax;
    PUSH32(esp, 0x002295EBu); RECOMP_ABI_CALL(0x00229303u, sub_00229303); /* call 0x00229303 */

loc_002295EB: ;
    g_seh_ebp = ebp; sub_002295F3(); return; /* tail jmp 0x002295F3 */

}

/**
 * sub_002295ED
 * Original: 0x002295ED - 0x002295F3 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002295ED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002295ED: ;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0xC) = edx;

    g_seh_ebp = ebp; sub_002295F3(); return; /* fallthrough 0x002295F3 */

}

/**
 * sub_002295F3
 * Original: 0x002295F3 - 0x00229607 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002295F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002295F3: ;
    SET_LO16(eax, MEM16(ebp + -16));
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    MEM16(edi + 2) = MEM16(edi + 2) - LO16(eax);
    _fa = (uint32_t)(MEM16(edi + 2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002296C6(); return; } /* jne: not equal / not zero */

loc_00229603: ;
    SET_LO8(eax, 1);
    SET_LO8(ecx, LO8(eax));

    g_seh_ebp = ebp; sub_00229607(); return; /* fallthrough 0x00229607 */

}

/**
 * sub_00229607
 * Original: 0x00229607 - 0x002296C6 (191 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229607(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00229607: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00229633; /* ja: above (unsigned >) */

loc_0022960B: ;
    edx = ZX8(LO8(ecx));
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx + esi + 0x12;
    SET_LO8(edx, LO8(eax));
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx = ZX8(LO8(edx));
    MEM32(ebp + -4) = edx;

loc_00229621: ;
    edx = MEM32(ebp + -20);
    SET_LO16(edx, MEM16(edx + 0x22));
    _fb = (uint32_t)(LO16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    MEM16(edi) = MEM16(edi) - LO16(edx);
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00229621; /* jne: not equal / not zero */

loc_00229633: ;
    SET_LO8(eax, LO8(eax) << 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(ecx, LO8(ecx) << 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x40 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00229607; /* jbe: below or equal (unsigned <=) */

loc_0022963D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002296B3; /* jbe: below or equal (unsigned <=) */

loc_00229642: ;
    SET_LO8(edx, LO8(ebx));
    SET_LO8(edx, LO8(edx) ^ 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = ZX8(LO8(edx));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx + esi + 0xC;
    edi = ZX16(MEM16(ecx + 4));
    ecx = ZX16(MEM16(ecx + 2));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX8(LO8(ebx));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -4) = edi;
    ecx = ecx + esi + 0xC;
    edi = ZX16(MEM16(ecx + 4));
    ecx = ZX16(MEM16(ecx + 2));
    SET_LO8(eax, LO8(ebx));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) >> 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -4) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0022968D; /* jg: greater (signed >) */

loc_0022967B: ;
    ecx = ZX8(LO8(eax));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ZX16(MEM16(ecx + esi + 0x10));
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002296B0; /* je: equal / zero */

loc_0022968B: ;
    SET_LO8(ebx, LO8(edx));

loc_0022968D: ;
    ecx = ZX8(LO8(ebx));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx + esi + 0xC;
    SET_LO16(edx, MEM16(ecx + 4));
    _fb = (uint32_t)(MEM16(ecx + 2)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edx, LO16(edx) + MEM16(ecx + 2));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = ZX8(LO8(eax));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    MEM16(ecx + esi + 0x10) = LO16(edx);
    SET_LO8(ebx, LO8(eax));
    if (CMP_A(_fa, _fb)) goto loc_00229642; /* ja: above (unsigned >) */

loc_002296B0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */

loc_002296B3: ;
    if (CMP_NE(_fa, _fb)) goto loc_002296C1; /* jne: not equal / not zero */

loc_002296B5: ;
    SET_LO16(eax, MEM16(esi + 0x20));
    _fb = (uint32_t)(MEM16(esi + 0x1E)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + MEM16(esi + 0x1E));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(esi + 0x10) = LO16(eax);

loc_002296C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00229633
 * Original: 0x00229633 - 0x002296C6 (147 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229633(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00229633: ;
    SET_LO8(eax, LO8(eax) << 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(ecx, LO8(ecx) << 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x40 (8-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_00229607(); return; } /* jbe: below or equal (unsigned <=) */

loc_0022963D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002296B3; /* jbe: below or equal (unsigned <=) */

loc_00229642: ;
    SET_LO8(edx, LO8(ebx));
    SET_LO8(edx, LO8(edx) ^ 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = ZX8(LO8(edx));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx + esi + 0xC;
    edi = ZX16(MEM16(ecx + 4));
    ecx = ZX16(MEM16(ecx + 2));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX8(LO8(ebx));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -4) = edi;
    ecx = ecx + esi + 0xC;
    edi = ZX16(MEM16(ecx + 4));
    ecx = ZX16(MEM16(ecx + 2));
    SET_LO8(eax, LO8(ebx));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) >> 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -4) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0022968D; /* jg: greater (signed >) */

loc_0022967B: ;
    ecx = ZX8(LO8(eax));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ZX16(MEM16(ecx + esi + 0x10));
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002296B0; /* je: equal / zero */

loc_0022968B: ;
    SET_LO8(ebx, LO8(edx));

loc_0022968D: ;
    ecx = ZX8(LO8(ebx));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx + esi + 0xC;
    SET_LO16(edx, MEM16(ecx + 4));
    _fb = (uint32_t)(MEM16(ecx + 2)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edx, LO16(edx) + MEM16(ecx + 2));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = ZX8(LO8(eax));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    MEM16(ecx + esi + 0x10) = LO16(edx);
    SET_LO8(ebx, LO8(eax));
    if (CMP_A(_fa, _fb)) goto loc_00229642; /* ja: above (unsigned >) */

loc_002296B0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */

loc_002296B3: ;
    if (CMP_NE(_fa, _fb)) goto loc_002296C1; /* jne: not equal / not zero */

loc_002296B5: ;
    SET_LO16(eax, MEM16(esi + 0x20));
    _fb = (uint32_t)(MEM16(esi + 0x1E)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + MEM16(esi + 0x1E));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(esi + 0x10) = LO16(eax);

loc_002296C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002296C6
 * Original: 0x002296C6 - 0x002296CF (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002296C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002296C6: ;
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    g_seh_ebp = ebp; sub_00229633(); return; /* tail jmp 0x00229633 */

}

/**
 * sub_002296FC
 * Original: 0x002296FC - 0x0022977E (130 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002296FC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002296FC: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi);
    MEM32(0x96FB94) = MEM32(0x96FB94) + 1;
    _fa = (uint32_t)(MEM32(0x96FB94)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0xC);
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0022978B(); return; } /* je: equal / zero */

loc_00229714: ;
    edi = 0x80000000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0022978B(); return; } /* je: equal / zero */

loc_0022971D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(edx) (8-bit) */
    MEM32(ecx + 0x14) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_0022972D; /* je: equal / zero */

loc_00229727: ;
    MEM32(ecx + 0xC) = eax;
    edx = edx & 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0022972D: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00229761; /* je: equal / zero */

loc_00229732: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 8);
    ebx = ZX16(MEM16(ebx + 0x80));
    edi = esi + 0x418;
    eax = MEM32(edi);
    ebx = ebx ^ eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebx & 0x8000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    MEM32(ecx + 0xC) = 0x20;
    edx = edx & 0xFFFFFFDFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ebx);

loc_00229761: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0022977E(); return; } /* je: equal / zero */

loc_00229765: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(esi + 0x438) = edx;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x440) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x440;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BD24); PUSH32(esp, 0x0022977Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00229776u); } /* indirect call */
    }

loc_0022977C: ;
    g_seh_ebp = ebp; sub_00229787(); return; /* tail jmp 0x00229787 */

}

/**
 * sub_0022977E
 * Original: 0x0022977E - 0x00229787 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022977E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022977E: ;
    eax = MEM32(esi);
    MEM32(eax + 0x10) = 0x80000000u;

    g_seh_ebp = ebp; sub_00229787(); return; /* fallthrough 0x00229787 */

}

/**
 * sub_00229787
 * Original: 0x00229787 - 0x0022978B (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229787(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00229787: ;
    SET_LO8(eax, 1);
    g_seh_ebp = ebp; sub_0022978D(); return; /* tail jmp 0x0022978D */

}

/**
 * sub_0022978B
 * Original: 0x0022978B - 0x0022978D (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022978B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022978B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_0022978D(); return; /* fallthrough 0x0022978D */

}

/**
 * sub_0022978D
 * Original: 0x0022978D - 0x00229792 (5 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022978D(void)
{

loc_0022978D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00229792
 * Original: 0x00229792 - 0x002297B6 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229792(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229792: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx + 0x418);
    ecx = ZX16(MEM16(eax + 0x80));
    eax = ecx;
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x7FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002297EA
 * Original: 0x002297EA - 0x002298FD (275 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002297EA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002297EA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    edx = MEM32(ecx + 0x418);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    RECOMP_UNIMPL("cli", 0x002297F6u); /* TODO: cli */
    eax = MEM32(ecx + 8);
    eax = ZX16(MEM16(eax + 0x80));
    ebx = MEM32(-25157620);
    RECOMP_UNIMPL("sti", 0x00229807u); /* TODO: sti */
    esi = eax;
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi ^ edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi & 0x8000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    _fb = (uint32_t)(MEM32(ecx + 0x4D8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 0x4D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_B(_fa, _fb)) goto loc_002298F9; /* jb: below (unsigned <) */

loc_0022982F: ;
    edx = MEM32(ecx + 0x4D0);
    PUSH32(esp, edi);
    edi = esi + esi * 2;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022985A; /* jne: not equal / not zero */

loc_00229842: ;
    MEM32(ecx + 0x4D4) = MEM32(ecx + 0x4D4) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x4D4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x4D0) = edi;
    MEM32(ecx + 0x4D8) = esi;
    goto loc_002298F8;

loc_0022985A: ;
    eax = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_00229863; /* jns: not sign (positive) */

loc_00229860: ;
    _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00229863: ;
    PUSH32(esp, 0x30);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ebx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    ebx = MEM32(ecx + 0x4D4);
    edx = eax;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0022988A; /* jne: not equal / not zero */

loc_00229875: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002298F8; /* je: equal / zero */

loc_00229879: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x61A8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0x61A8 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002298F8; /* jbe: below or equal (unsigned <=) */

loc_00229882: ;
    MEM32(ecx + 0x4D8) = esi;
    goto loc_002298B4;

loc_0022988A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    MEM32(ecx + 0x4D4) = eax;
    MEM32(ecx + 0x4D8) = esi;
    if (CMP_G(_fas, _fbs)) goto loc_00229842; /* jg: greater (signed >) */

loc_0022989B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFDu (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00229842; /* jl: less (signed <) */

loc_002298A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002298F8; /* je: equal / zero */

loc_002298A4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002298AE; /* jle: less or equal (signed <=) */

loc_002298A8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002298B4; /* jge: greater or equal (signed >=) */

loc_002298AC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */

loc_002298AE: ;
    if (CMP_GE(_fas, _fbs)) goto loc_002298F8; /* jge: greater or equal (signed >=) */

loc_002298B0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002298F8; /* jg: greater (signed >) */

loc_002298B4: ;
    ecx = MEM32(ecx);
    edx = MEM32(ecx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edx;
    eax = 0x3FFF;
    if (CMP_LE(_fas, _fbs)) goto loc_002298D3; /* jle: less or equal (signed <=) */

loc_002298C4: ;
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2EE1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2EE1 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002298E6; /* jae: above or equal (unsigned >=) */

loc_002298CE: ;
    esi = edx + 1;
    goto loc_002298E0;

loc_002298D3: ;
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2ED1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2ED1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002298E6; /* jbe: below or equal (unsigned <=) */

loc_002298DD: ;
    esi = edx + -1;

loc_002298E0: ;
    esi = esi ^ edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002298E6: ;
    eax = edx;
    eax = ~eax;
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ~edx;
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x34) = eax;

loc_002298F8: ;
    POP32(esp, edi);

loc_002298F9: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002298FD
 * Original: 0x002298FD - 0x00229979 (124 bytes, 48 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002298FD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002298FD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = edx;
    MEM8(esi + 0x27) = MEM8(esi + 0x27) - 1;
    _fa = (uint32_t)(MEM8(esi + 0x27)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00229920; /* je: equal / zero */

loc_00229912: ;
    ecx = ZX16(MEM16(edi + 0x20));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD20); PUSH32(esp, 0x00229920u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022991Au); } /* indirect call */
    }

loc_00229920: ;
    _fa = (uint32_t)(MEM8(edi + 0x22)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x22), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00229969; /* je: equal / zero */

loc_00229926: ;
    eax = MEM32(ebx + 0x42C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00229969; /* je: equal / zero */

loc_00229932: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022993F; /* je: equal / zero */

loc_00229936: ;
    ecx = eax;
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00229932; /* jne: not equal / not zero */

loc_0022993F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00229969; /* je: equal / zero */

loc_00229943: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00229952; /* jne: not equal / not zero */

loc_00229947: ;
    ecx = MEM32(eax + 0x24);
    MEM32(ebx + 0x42C) = ecx;
    goto loc_00229958;

loc_00229952: ;
    edx = MEM32(eax + 0x24);
    MEM32(ecx + 0x24) = edx;

loc_00229958: ;
    MEM32(eax + 0x24) = MEM32(eax + 0x24) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 0x20) = MEM8(esi + 0x20) - 1;
    _fa = (uint32_t)(MEM8(esi + 0x20)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00229969; /* jne: not equal / not zero */

loc_00229961: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) & 0xDF;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 1) = MEM8(esi + 1) & 0xBF;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_00229969: ;
    MEM8(edi + 0x22) = MEM8(edi + 0x22) | 8;
    _fa = (uint32_t)(MEM8(edi + 0x22)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00229973u); RECOMP_ABI_CALL(0x0022541Du, sub_0022541D); /* call 0x0022541D */

loc_00229973: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00229979
 * Original: 0x00229979 - 0x002299AB (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229979(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00229979: ;
    eax = ZX8(MEM8(edx + 0x11));
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0022999E; /* je: equal / zero */

loc_00229982: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00229992; /* je: equal / zero */

loc_00229986: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002299AA; /* jne: not equal / not zero */

loc_00229989: ;
    MEM16(edx + 0x24) = MEM16(edx + 0x24) - 1;
    _fa = (uint32_t)(MEM16(edx + 0x24)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_0022A966(); return; /* tail jmp 0x0022A966 */

loc_00229992: ;
    MEM16(0x98B846) = MEM16(0x98B846) + 1;
    _fa = (uint32_t)(MEM16(0x98B846)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_0022A9B9(); return; /* tail jmp 0x0022A9B9 */

loc_0022999E: ;
    MEM16(0x98B842) = MEM16(0x98B842) + 1;
    _fa = (uint32_t)(MEM16(0x98B842)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_0022AA06(); return; /* tail jmp 0x0022AA06 */

loc_002299AA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002299AA
 * Original: 0x002299AA - 0x002299AB (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002299AA(void)
{

loc_002299AA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002299AB
 * Original: 0x002299AB - 0x00229A9F (244 bytes, 87 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002299AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002299AB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edx);
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 0x18);
    PUSH32(esp, esi);
    eax = eax >> 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x14);
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -16) = ebx;
    MEM8(ebp + -1) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00229A1A; /* jne: not equal / not zero */

loc_002299CE: ;
    _fa = (uint32_t)(MEM8(ebx + 0x1D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x1D), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00229A1A; /* je: equal / zero */

loc_002299D4: ;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00229A09; /* je: equal / zero */

loc_002299DB: ;
    ecx = MEM32(edx + 0xC);
    esi = 0xFFF;
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002299F9; /* jl: less (signed <) */

loc_002299EE: ;
    eax = ZX8(MEM8(edx + 0x1D));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00229A06;

loc_002299F9: ;
    esi = ZX8(MEM8(edx + 0x1D));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi + eax + -4096;

loc_00229A06: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00229A0D;

loc_00229A09: ;
    eax = ZX8(MEM8(edx + 0x1D));

loc_00229A0D: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) + eax;
    _fa = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 4) = MEM32(ebx + 4) & 0;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(ebp + -1) = 0;
    goto loc_00229A33;

loc_00229A1A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00229A26; /* jne: not equal / not zero */

loc_00229A1F: ;
    MEM32(ebx + 4) = 0xC000000Fu;

loc_00229A26: ;
    eax = MEM32(edx);
    eax = eax >> 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | 0xC0000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 4) = eax;

loc_00229A33: ;
    esi = MEM32(edi + 8);
    esi = esi & 0xFFFFFFF0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00229A39: ;
    SET_LO8(ebx, MEM8(edx + 0x1C));
    PUSH32(esp, edx);
    SET_LO8(ebx, LO8(ebx) & 2);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00229A45u); RECOMP_ABI_CALL(0x00229243u, sub_00229243); /* call 0x00229243 */

loc_00229A45: ;
    ecx = MEM32(ebp + -8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00229A4Fu); RECOMP_ABI_CALL(0x00229979u, sub_00229979); /* call 0x00229979 */

loc_00229A4F: ;
    eax = MEM32(0x98B820);
    edx = eax + esi;
    _fa = (uint32_t)(MEM8(edx + 0x1E)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x1E), 2 (8-bit) */
    esi = MEM32(edx + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00229A66; /* jne: not equal / not zero */

loc_00229A60: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00229A6A; /* je: equal / zero */

loc_00229A66: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00229A39; /* je: equal / zero */

loc_00229A6A: ;
    eax = MEM32(edx + 0x10);
    eax = eax ^ MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM32(edi + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00229A8A; /* je: equal / zero */

loc_00229A7D: ;
    PUSH32(esp, MEM32(ebp + -16));
    ecx = MEM32(ebp + -8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00229A8Au); RECOMP_ABI_CALL(0x002298FDu, sub_002298FD); /* call 0x002298FD */

loc_00229A8A: ;
    _fa = (uint32_t)(MEM8(edi + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x11), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00229A96; /* je: equal / zero */

loc_00229A90: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00229A9A; /* jne: not equal / not zero */

loc_00229A96: ;
    MEM32(edi + 8) = MEM32(edi + 8) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00229A9A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00229A9F
 * Original: 0x00229A9F - 0x00229B4B (172 bytes, 64 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00229A9F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229A9F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = edx;
    _fa = (uint32_t)(MEM8(esi + 0x1E)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1E), 1 (8-bit) */
    eax = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x18);
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00229AD4; /* jne: not equal / not zero */

loc_00229ABA: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(0x98B820);
    eax = eax + ecx + -7;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00229ACDu); RECOMP_ABI_CALL(0x00229243u, sub_00229243); /* call 0x00229243 */

loc_00229ACD: ;
    MEM16(0x98B842) = MEM16(0x98B842) + 1;
    _fa = (uint32_t)(MEM16(0x98B842)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_00229AD4: ;
    _fa = (uint32_t)(MEM8(esi + 3)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 3), 0xF0 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00229AE6; /* je: equal / zero */

loc_00229ADA: ;
    ecx = MEM32(ebp + -4);
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00229AE4u); RECOMP_ABI_CALL(0x002299ABu, sub_002299AB); /* call 0x002299AB */

loc_00229AE4: ;
    goto loc_00229B47;

loc_00229AE6: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00229B14; /* je: equal / zero */

loc_00229AEE: ;
    ecx = MEM32(esi + 0xC);
    edx = 0xFFF;
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = eax;
    eax = ZX8(MEM8(esi + 0x1D));
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00229B0A; /* jl: less (signed <) */

loc_00229B06: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00229B11;

loc_00229B0A: ;
    eax = eax + ebx + -4096;

loc_00229B11: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00229B18;

loc_00229B14: ;
    eax = ZX8(MEM8(esi + 0x1D));

loc_00229B18: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi + 0x14) = MEM32(edi + 0x14) + eax;
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, MEM8(esi + 0x1C));
    PUSH32(esp, esi);
    SET_LO8(ebx, LO8(ebx) & 2);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00229B27u); RECOMP_ABI_CALL(0x00229243u, sub_00229243); /* call 0x00229243 */

loc_00229B27: ;
    edx = MEM32(ebp + -8);
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00229B32u); RECOMP_ABI_CALL(0x00229979u, sub_00229979); /* call 0x00229979 */

loc_00229B32: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00229B47; /* je: equal / zero */

loc_00229B37: ;
    edx = MEM32(ebp + -8);
    ecx = MEM32(ebp + -4);
    MEM32(edi + 4) = MEM32(edi + 4) & 0;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00229B47u); RECOMP_ABI_CALL(0x002298FDu, sub_002298FD); /* call 0x002298FD */

loc_00229B47: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00229B4B
 * Original: 0x00229B4B - 0x00229C4D (258 bytes, 87 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00229B4B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229B4B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = edx;
    ebx = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebx + 0x42C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x42C), edx (32-bit) */
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00229C3C; /* je: equal / zero */

loc_00229B6E: ;
    PUSH32(esp, esi);
    goto loc_00229B74;

loc_00229B71: ;
    edi = MEM32(ebp + -20);

loc_00229B74: ;
    ecx = MEM32(ebx + 0x42C);
    eax = MEM32(ecx + 0x24);
    MEM32(ebx + 0x42C) = eax;
    esi = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x1C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00229B96; /* jae: above or equal (unsigned >=) */

loc_00229B8B: ;
    MEM32(ecx + 0x24) = edx;
    MEM32(ebp + -4) = ecx;
    goto loc_00229C2B;

loc_00229B96: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00229BA8; /* je: equal / zero */

loc_00229B9D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & 0xBF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(esi + 0x1C) = edi;
    MEM8(esi + 0x10) = LO8(eax);
    goto loc_00229B8B;

loc_00229BA8: ;
    eax = MEM32(esi + 8);
    edi = MEM32(0x98B820);
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -24) = eax;
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edi + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 0x18) (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00229BDE; /* je: equal / zero */

loc_00229BC6: ;
    ebx = MEM32(esi + 4);

loc_00229BC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00229BDB; /* je: equal / zero */

loc_00229BCD: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(edx + 8);
    edx = edi + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00229BC9; /* jne: not equal / not zero */

loc_00229BDB: ;
    ebx = MEM32(ebp + -8);

loc_00229BDE: ;
    eax = MEM32(edx + 8);
    eax = eax ^ MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    MEM8(edx + 3) = MEM8(edx + 3) | 0xF0;
    _fa = (uint32_t)(MEM8(edx + 3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00229BF8u); RECOMP_ABI_CALL(0x00229A9Fu, sub_00229A9F); /* call 0x00229A9F */

loc_00229BF8: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00229C1E; /* je: equal / zero */

loc_00229BFF: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(0x98B820);
    ecx = ecx & 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + eax + 8) = ecx;
    eax = MEM32(esi + 8);
    eax = eax ^ MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;

loc_00229C1E: ;
    MEM8(esi + 0x20) = MEM8(esi + 0x20) - 1;
    _fa = (uint32_t)(MEM8(esi + 0x20)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00229C2B; /* jne: not equal / not zero */

loc_00229C23: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) & 0xDF;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 1) = MEM8(esi + 1) & 0xBF;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_00229C2B: ;
    _fa = (uint32_t)(MEM32(ebx + 0x42C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x42C), 0 (32-bit) */
    edx = MEM32(ebp + -4);
    if (CMP_NE(_fa, _fb)) goto loc_00229B71; /* jne: not equal / not zero */

loc_00229C3B: ;
    POP32(esp, esi);

loc_00229C3C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, edi);
    MEM32(ebx + 0x42C) = edx;
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00229C4D
 * Original: 0x00229C4D - 0x00229CA3 (86 bytes, 35 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229C4D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229C4D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = edx;
    edi = ecx;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00229C56: ;
    eax = MEM32(esi + 8);
    ecx = eax;
    ecx = ecx & 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00229C9F; /* je: equal / zero */

loc_00229C60: ;
    edx = MEM32(0x98B820);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00229C89; /* je: equal / zero */

loc_00229C6D: ;
    eax = MEM32(edx + 8);
    MEM8(edx + 3) = MEM8(edx + 3) | 0xF0;
    _fa = (uint32_t)(MEM8(edx + 3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = eax ^ MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi;
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x00229C87u); RECOMP_ABI_CALL(0x00229A9Fu, sub_00229A9F); /* call 0x00229A9F */

loc_00229C87: ;
    goto loc_00229C9B;

loc_00229C89: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x00229C99u); RECOMP_ABI_CALL(0x00229243u, sub_00229243); /* call 0x00229243 */

loc_00229C99: ;
    SET_LO8(ebx, 1);

loc_00229C9B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00229C56; /* je: equal / zero */

loc_00229C9F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00229CA3
 * Original: 0x00229CA3 - 0x00229D2A (135 bytes, 50 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229CA3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00229CA3: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebx + 0x430)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x430), ebp (32-bit) */
    MEM32(esp + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00229D19; /* je: equal / zero */

loc_00229CB6: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00229CB8: ;
    edi = MEM32(ebx + 0x430);
    eax = MEM32(edi + 0x24);
    MEM32(ebx + 0x430) = eax;
    esi = MEM32(edi + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x1C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00229CD6; /* jae: above or equal (unsigned >=) */

loc_00229CCF: ;
    MEM32(edi + 0x14) = ebp;
    ebp = edi;
    goto loc_00229D0E;

loc_00229CD6: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00229CEA; /* je: equal / zero */

loc_00229CDD: ;
    ecx = edx + 1;
    SET_LO8(eax, LO8(eax) & 0xBF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(esi + 0x1C) = ecx;
    MEM8(esi + 0x10) = LO8(eax);
    goto loc_00229CCF;

loc_00229CEA: ;
    edx = esi;
    ecx = ebx;
    PUSH32(esp, 0x00229CF3u); RECOMP_ABI_CALL(0x00229C4Du, sub_00229C4D); /* call 0x00229C4D */

loc_00229CF3: ;
    MEM8(esi + 0x20) = MEM8(esi + 0x20) - 1;
    _fa = (uint32_t)(MEM8(esi + 0x20)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00229D00; /* jne: not equal / not zero */

loc_00229CF8: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) & 0xDF;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 1) = MEM8(esi + 1) & 0xBF;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_00229D00: ;
    MEM32(edi + 4) = MEM32(edi + 4) & 0;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00229D0Au); RECOMP_ABI_CALL(0x0022541Du, sub_0022541D); /* call 0x0022541D */

loc_00229D0A: ;
    edx = MEM32(esp + 0x10);

loc_00229D0E: ;
    _fa = (uint32_t)(MEM32(ebx + 0x430)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x430), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00229CB8; /* jne: not equal / not zero */

loc_00229D17: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00229D19: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x430) = ebp;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    POP32(esp, ebp);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00229D2A
 * Original: 0x00229D2A - 0x00229E04 (218 bytes, 75 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00229D2A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229D2A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebx + 0x434)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x434), ecx (32-bit) */
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00229DF4; /* je: equal / zero */

loc_00229D47: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00229D49: ;
    esi = MEM32(ebx + 0x434);
    eax = MEM32(esi + 0x14);
    MEM32(ebx + 0x434) = eax;
    edi = MEM32(esi + 0x10);
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x1C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00229D6B; /* jae: above or equal (unsigned >=) */

loc_00229D63: ;
    MEM32(esi + 0x14) = ecx;
    MEM32(ebp + -4) = esi;
    goto loc_00229DE2;

loc_00229D6B: ;
    SET_LO8(eax, MEM8(edi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00229D79; /* je: equal / zero */

loc_00229D72: ;
    SET_LO8(eax, LO8(eax) & 0xBF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(edi + 0x10) = LO8(eax);
    goto loc_00229D63;

loc_00229D79: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x4A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0x4A (8-bit) */
    ecx = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00229D8A; /* jne: not equal / not zero */

loc_00229D81: ;
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00229D88u); RECOMP_ABI_CALL(0x0022A137u, sub_0022A137); /* call 0x0022A137 */

loc_00229D88: ;
    goto loc_00229DE2;

loc_00229D8A: ;
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00229D91u); RECOMP_ABI_CALL(0x00229C4Du, sub_00229C4D); /* call 0x00229C4D */

loc_00229D91: ;
    edx = MEM32(esi + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00229DCA; /* je: equal / zero */

loc_00229D98: ;
    ecx = MEM32(edi);
    MEM32(ebp + -12) = ecx;
    ecx = ecx >> 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ebp + -12);
    ecx = ecx & 0x1800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00229DBC; /* jne: not equal / not zero */

loc_00229DB9: ;
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_00229DBC: ;
    _fa = (uint32_t)(MEM8(edi + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 8), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00229DC6; /* je: equal / zero */

loc_00229DC2: ;
    MEM32(edx) = MEM32(edx) | eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00229DCA;

loc_00229DC6: ;
    eax = ~eax;
    MEM32(edx) = MEM32(edx) & eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00229DCA: ;
    eax = MEM32(0x98B828);
    MEM32(edi + 0x18) = eax;
    MEM32(0x98B828) = edi;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00229DE2u); RECOMP_ABI_CALL(0x0022541Du, sub_0022541D); /* call 0x0022541D */

loc_00229DE2: ;
    _fa = (uint32_t)(MEM32(ebx + 0x434)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x434), 0 (32-bit) */
    ecx = MEM32(ebp + -4);
    if (CMP_NE(_fa, _fb)) goto loc_00229D49; /* jne: not equal / not zero */

loc_00229DF2: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00229DF4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebx + 0x434) = ecx;
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00229E04
 * Original: 0x00229E04 - 0x00229F1A (278 bytes, 96 insns)
 * Category: game_input
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00229E04(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229E04: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    ebx = MEM32(esi);
    eax = esi + 0x438;
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM8(ebp + 0xF) = 0;
    MEM32(eax) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00229E2Bu); RECOMP_ABI_CALL(0x002297EAu, sub_002297EA); /* call 0x002297EA */

loc_00229E2B: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00229E88; /* je: equal / zero */

loc_00229E31: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x84;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = edi;
    if ((_fa == 0)) goto loc_00229E74; /* je: equal / zero */

loc_00229E43: ;
    ecx = MEM32(0x98B820);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 8) = edi;
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00229E43; /* jne: not equal / not zero */

loc_00229E57: ;
    edx = edi;
    _fa = (uint32_t)(MEM8(edx + 2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 2), 1 (8-bit) */
    edi = MEM32(edi + 8);
    ecx = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00229E6B; /* je: equal / zero */

loc_00229E64: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00229E69u); RECOMP_ABI_CALL(0x0022A4A0u, sub_0022A4A0); /* call 0x0022A4A0 */

loc_00229E69: ;
    goto loc_00229E70;

loc_00229E6B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00229E70u); RECOMP_ABI_CALL(0x00229A9Fu, sub_00229A9F); /* call 0x00229A9F */

loc_00229E70: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00229E57; /* jne: not equal / not zero */

loc_00229E74: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0xC) = 2;
    eax = MEM32(esi);
    MEM32(eax + 8) = 6;

loc_00229E88: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 4 (8-bit) */
    PUSH32(esp, 4);
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00229E9B; /* je: equal / zero */

loc_00229E91: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0xFFFFFFFBu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0xC) = edi;
    MEM32(ebx + 0x14) = edi;

loc_00229E9B: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00229EA2u); RECOMP_ABI_CALL(0x00229792u, sub_00229792); /* call 0x00229792 */

loc_00229EA2: ;
    edx = eax;
    ecx = esi;
    MEM32(ebp + -8) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00229EAEu); RECOMP_ABI_CALL(0x00229B4Bu, sub_00229B4B); /* call 0x00229B4B */

loc_00229EAE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00229EB6; /* je: equal / zero */

loc_00229EB2: ;
    MEM8(ebp + 0xF) = 1;

loc_00229EB6: ;
    edx = MEM32(ebp + -8);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00229EC0u); RECOMP_ABI_CALL(0x00229CA3u, sub_00229CA3); /* call 0x00229CA3 */

loc_00229EC0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00229EC8; /* je: equal / zero */

loc_00229EC4: ;
    MEM8(ebp + 0xF) = 1;

loc_00229EC8: ;
    edx = MEM32(ebp + -8);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00229ED2u); RECOMP_ABI_CALL(0x00229D2Au, sub_00229D2A); /* call 0x00229D2A */

loc_00229ED2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00229EDA; /* je: equal / zero */

loc_00229ED6: ;
    MEM8(ebp + 0xF) = 1;

loc_00229EDA: ;
    _fa = (uint32_t)(MEM8(ebp + 0xF)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xF), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00229EEA; /* je: equal / zero */

loc_00229EE0: ;
    eax = MEM32(esi);
    MEM32(eax + 0xC) = edi;
    eax = MEM32(esi);
    MEM32(eax + 0x10) = edi;

loc_00229EEA: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00229F02; /* je: equal / zero */

loc_00229EF0: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00229EF7u); RECOMP_ABI_CALL(0x00228B65u, sub_00228B65); /* call 0x00228B65 */

loc_00229EF7: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0xFFFFFFBFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0xC) = 0x40;

loc_00229F02: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00229F0C; /* je: equal / zero */

loc_00229F09: ;
    MEM32(ebx + 0xC) = eax;

loc_00229F0C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x10) = 0x80000000u;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00229F1A
 * Original: 0x00229F1A - 0x00229F2C (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229F1A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229F1A: ;
    eax = MEM32(0x98B848);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00229F2B; /* je: equal / zero */

loc_00229F23: ;
    ecx = MEM32(eax);
    MEM32(0x98B848) = ecx;

loc_00229F2B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00229F46
 * Original: 0x00229F46 - 0x00229F7C (54 bytes, 18 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00229F46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229F46: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x98B84C);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = edx;
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -8) = eax;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x00229F61u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00229F5Bu); } /* indirect call */
    }

loc_00229F61: ;
    MEM8(ebp + -2) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00229F69u); RECOMP_ABI_CALL(0x00229F1Au, sub_00229F1A); /* call 0x00229F1A */

loc_00229F69: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -12) = edi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00229F7C(); return; } /* jne: not equal / not zero */

loc_00229F72: ;
    edi = 0x80000100u;
    g_seh_ebp = ebp; sub_0022A0E1(); return; /* tail jmp 0x0022A0E1 */

}

/**
 * sub_00229F7C
 * Original: 0x00229F7C - 0x0022A0CC (336 bytes, 116 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229F7C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00229F7C: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + -8);
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x30;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2C) = eax;
    eax = esi;
    _fb = (uint32_t)(MEM32(0x98B820)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x98B820);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(esi + 0x11) = 1;
    MEM32(esi + 0x14) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0x13) = 1;
    SET_LO16(eax, MEM16(ebx + 0x16));
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00229FC1u); RECOMP_ABI_CALL(0x00225431u, sub_00225431); /* call 0x00225431 */

loc_00229FC1: ;
    edx = MEM32(ebp + -8);
    MEM16(esi + 0x22) = LO16(eax);
    MEM8(esi + 0x24) = LO8(edx);
    SET_LO8(eax, MEM8(ebx + 0x18));
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x10) = LO8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ebx + 0x14));
    PUSH32(esp, 0);
    eax = eax ^ MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = MEM32(esi) ^ eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ZX8(MEM8(ebx + 0x15));
    ecx = MEM32(esi);
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x780;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = eax;
    _fa = (uint32_t)(MEM8(ebx + 0x15)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x15), 0x80 (8-bit) */
    POP32(esp, ecx);
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    eax = eax & 0xFFFFC7FFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = ecx;
    eax = ZX16(MEM16(ebx + 0x16));
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x7FF0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esi + 8);
    MEM32(esi) = eax;
    eax = MEM32(esi + 0x2C);
    _fb = (uint32_t)(MEM32(0x98B820)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x98B820);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = ecx;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    MEM8(ebp + -1) = LO8(ecx);
    if (CMP_BE(_fa, _fb)) goto loc_0022A0A1; /* jbe: below or equal (unsigned <=) */

loc_0022A044: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0022A046: ;
    edx = MEM32(esi + 0x2C);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax + edx;
    MEM32(ebp + -16) = edi;
    _fb = (uint32_t)(MEM32(0x98B820)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(0x98B820);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(edx + 0x2D) = LO8(ecx);
    edx = MEM32(esi + 0x2C);
    SET_LO8(ecx, MEM8(ebp + -1));
    MEM8(eax + edx + 0x2C) = LO8(ecx);
    edx = MEM32(esi + 0x2C);
    MEM32(eax + edx + 0x20) = esi;
    edx = MEM32(esi + 0x2C);
    MEM32(eax + edx + 0x28) = MEM32(eax + edx + 0x28) & 0;
    _fa = (uint32_t)(MEM32(eax + edx + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(esi + 0x2C);
    MEM32(eax + edx + 0x24) = MEM32(eax + edx + 0x24) & 0;
    _fa = (uint32_t)(MEM32(eax + edx + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(esi + 0x2C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edx + 2) = MEM8(edx + 2) | 1;
    _fa = (uint32_t)(MEM8(edx + 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx = MEM32(esi + 0x2C);
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + edx + 8) = edi;
    eax = ZX8(LO8(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    MEM8(ebp + -1) = LO8(ecx);
    if (CMP_B(_fa, _fb)) goto loc_0022A046; /* jb: below (unsigned <) */

loc_0022A0A1: ;
    edx = MEM32(esi + 0x2C);
    eax = ZX8(LO8(ecx));
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + edx + -56) = MEM32(eax + edx + -56) & 0;
    _fa = (uint32_t)(MEM32(eax + edx + -56)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0x2C);
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(eax + 0x2D) = LO8(ecx);
    ecx = MEM32(ebp + -20);
    edx = esi;
    PUSH32(esp, 0x0022A0C1u); RECOMP_ABI_CALL(0x0022937Au, sub_0022937A); /* call 0x0022937A */

loc_0022A0C1: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0022A0CC(); return; } /* jl: less (signed <) */

loc_0022A0C7: ;
    MEM32(ebx + 0x10) = esi;
    g_seh_ebp = ebp; sub_0022A0E0(); return; /* tail jmp 0x0022A0E0 */

}

/**
 * sub_0022A0CC
 * Original: 0x0022A0CC - 0x0022A0E0 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A0CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A0CC: ;
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(0x98B848);
    eax = MEM32(ebp + -12);
    MEM32(eax) = ecx;
    MEM32(0x98B848) = eax;

    g_seh_ebp = ebp; sub_0022A0E0(); return; /* fallthrough 0x0022A0E0 */

}

/**
 * sub_0022A0E0
 * Original: 0x0022A0E0 - 0x0022A0E1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A0E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A0E0: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_0022A0E1(); return; /* fallthrough 0x0022A0E1 */

}

/**
 * sub_0022A0E1
 * Original: 0x0022A0E1 - 0x0022A0F3 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A0E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A0E1: ;
    SET_LO8(ecx, MEM8(ebp + -2));
    MEM32(ebx + 4) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x0022A0EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022A0E7u); } /* indirect call */
    }

loc_0022A0ED: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0022A0F3
 * Original: 0x0022A0F3 - 0x0022A137 (68 bytes, 27 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A0F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A0F3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = edx;
    ebp = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x0022A104u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022A0FEu); } /* indirect call */
    }

loc_0022A104: ;
    edx = ebp;
    ecx = edi;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x0022A10Fu); RECOMP_ABI_CALL(0x00229556u, sub_00229556); /* call 0x00229556 */

loc_0022A10F: ;
    edx = ebp;
    ecx = edi;
    PUSH32(esp, 0x0022A118u); RECOMP_ABI_CALL(0x00228F42u, sub_00228F42); /* call 0x00228F42 */

loc_0022A118: ;
    eax = edi + 0x434;
    ecx = MEM32(eax);
    MEM32(esi + 0x14) = ecx;
    SET_LO8(ecx, LO8(ebx));
    MEM32(eax) = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x0022A12Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022A127u); } /* indirect call */
    }

loc_0022A12D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x40000000;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022A137
 * Original: 0x0022A137 - 0x0022A1C0 (137 bytes, 52 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A137(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A137: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = edx;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    SET_LO8(eax, MEM8(esi + 0x25));
    ebx = ZX8(MEM8(esi + 0x26));
    ecx = ZX8(LO8(eax));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ZX8(MEM8(esi + 0x24));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022A199; /* je: equal / zero */

loc_0022A155: ;
    PUSH32(esp, edi);

loc_0022A156: ;
    ecx = ZX8(MEM8(esi + 0x24));
    eax = ebx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM8(esi + 0x25) = MEM8(esi + 0x25) - 1;
    _fa = (uint32_t)(MEM8(esi + 0x25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ebx = edx;
    edi = ebx;
    edi = edi << 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esi + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, MEM32(edi + 4));
    { uint32_t _icall_target = MEM32(0x22BD28); PUSH32(esp, 0x0022A179u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022A173u); } /* indirect call */
    }

loc_0022A179: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(edi + 4);
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFFFFF000u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022A192; /* je: equal / zero */

loc_0022A189: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD28); PUSH32(esp, 0x0022A192u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022A18Cu); } /* indirect call */
    }

loc_0022A192: ;
    _fa = (uint32_t)(MEM8(esi + 0x25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x25), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022A156; /* jne: not equal / not zero */

loc_0022A198: ;
    POP32(esp, edi);

loc_0022A199: ;
    eax = ZX8(MEM8(esi + 0x24));
    MEM8(esi + 0x25) = MEM8(esi + 0x25) - 1;
    _fa = (uint32_t)(MEM8(esi + 0x25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x98B848);
    MEM32(esi) = eax;
    MEM32(0x98B848) = esi;
    MEM32(ebp + 4) = MEM32(ebp + 4) & 0;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0022A1BCu); RECOMP_ABI_CALL(0x0022541Du, sub_0022541D); /* call 0x0022541D */

loc_0022A1BC: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022A1C0
 * Original: 0x0022A1C0 - 0x0022A1F7 (55 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0022A1C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022A1C0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = edx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    MEM32(ebp + -16) = esi;
    MEM32(ebp + -36) = ecx;
    MEM32(ebp + -32) = edi;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x0022A1E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022A1DAu); } /* indirect call */
    }

loc_0022A1E0: ;
    SET_LO8(ecx, MEM8(edi + 0x24));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 0x25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(edi + 0x25) (8-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0022A1F7(); return; } /* jne: not equal / not zero */

loc_0022A1EB: ;
    MEM32(ebp + -20) = 0xC0000D00u;
    g_seh_ebp = ebp; sub_0022A30C(); return; /* tail jmp 0x0022A30C */

}

/**
 * sub_0022A1F7
 * Original: 0x0022A1F7 - 0x0022A30C (277 bytes, 101 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A1F7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A1F7: ;
    eax = ZX8(MEM8(edi + 0x26));
    PUSH32(esp, ebx);
    ebx = eax;
    ebx = ebx << 6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(edi + 0x2C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(edi + 0x2C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ZX8(LO8(ecx));
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = MEM32(esi + 0x18);
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -28) = esi;
    MEM8(edi + 0x26) = LO8(edx);
    eax = MEM32(esi + 0x18);
    MEM32(ebx + 0x24) = eax;
    eax = MEM32(esi + 0x1C);
    MEM32(ebx + 0x28) = eax;
    eax = MEM32(ebp + -16);
    MEM32(ebx + 0x20) = edi;
    eax = ZX8(MEM8(eax + 0x14));
    eax = eax << 0x15;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0xE00000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx) = MEM32(ebx) ^ eax;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esi);
    eax = MEM32(ebx);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx << 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x7000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx) = ecx;
    eax = MEM32(esi + 4);
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    MEM32(ebp + -24) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0022A289; /* jbe: below or equal (unsigned <=) */

loc_0022A25E: ;
    ecx = esi + 8;
    MEM32(ebp + -8) = ecx;
    ecx = ebx + 0x10;

loc_0022A267: ;
    edx = eax;
    SET_LO16(edx, LO16(edx) | 0xE000);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(ecx) = LO16(edx);
    edx = MEM32(ebp + -8);
    edx = ZX16(MEM16(edx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 2;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + -12);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0022A267; /* jb: below (unsigned <) */

loc_0022A289: ;
    _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 4));
    MEM32(ebp + -24) = eax;
    { uint32_t _icall_target = MEM32(0x22BD20); PUSH32(esp, 0x0022A29Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022A295u); } /* indirect call */
    }

loc_0022A29B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 4));
    { uint32_t _icall_target = MEM32(0x22BD1C); PUSH32(esp, 0x0022A2A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022A29Eu); } /* indirect call */
    }

loc_0022A2A4: ;
    ecx = MEM32(ebp + -24);
    MEM32(ebx + 4) = eax;
    eax = MEM32(esi + 4);
    eax = eax + ecx + -1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD1C); PUSH32(esp, 0x0022A2B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022A2B2u); } /* indirect call */
    }

loc_0022A2B8: ;
    MEM32(ebx + 0xC) = eax;
    _fa = (uint32_t)(MEM8(edi + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022A2D1; /* je: equal / zero */

loc_0022A2C1: ;
    esi = ebx + 0x10;
    edi = ebx + 0x30;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    esi = MEM32(ebp + -28);
    edi = MEM32(ebp + -32);

loc_0022A2D1: ;
    _fa = (uint32_t)(MEM8(edi + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x10), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022A2F7; /* je: equal / zero */

loc_0022A2D7: ;
    ecx = MEM32(ebp + -36);
    PUSH32(esp, 0x0022A2DFu); RECOMP_ABI_CALL(0x00229792u, sub_00229792); /* call 0x00229792 */

loc_0022A2DF: ;
    ecx = MEM32(edi + 0x28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022A2ED; /* jle: less or equal (signed <=) */

loc_0022A2EB: ;
    eax = ecx;

loc_0022A2ED: ;
    MEM16(ebx) = LO16(eax);
    ecx = MEM32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x28) = ecx;

loc_0022A2F7: ;
    MEM8(edi + 0x25) = MEM8(edi + 0x25) + 1;
    _fa = (uint32_t)(MEM8(edi + 0x25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(edi + 0x25));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 0x24)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edi + 0x24) (8-bit) */
    esi = MEM32(ebp + -16);
    if (CMP_EQ(_fa, _fb)) goto loc_0022A30B; /* je: equal / zero */

loc_0022A305: ;
    eax = MEM32(ebx + 8);
    MEM32(edi + 4) = eax;

loc_0022A30B: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_0022A30C(); return; /* fallthrough 0x0022A30C */

}

/**
 * sub_0022A30C
 * Original: 0x0022A30C - 0x0022A327 (27 bytes, 11 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A30C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A30C: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x0022A315u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022A30Fu); } /* indirect call */
    }

loc_0022A315: ;
    edi = MEM32(ebp + -20);
    PUSH32(esp, esi);
    MEM32(esi + 4) = edi;
    PUSH32(esp, 0x0022A321u); RECOMP_ABI_CALL(0x0022541Du, sub_0022541D); /* call 0x0022541D */

loc_0022A321: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0022A327
 * Original: 0x0022A327 - 0x0022A35A (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0022A327(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022A327: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x22BC54);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edx;
    esi = MEM32(edi + 0x10);
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -8) = ecx;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x0022A347u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022A345u); } /* indirect call */
    }

loc_0022A347: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10), 2 (8-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0022A35A(); return; } /* je: equal / zero */

loc_0022A350: ;
    esi = 0xC0000E00u;
    g_seh_ebp = ebp; sub_0022A426(); return; /* tail jmp 0x0022A426 */

}

/**
 * sub_0022A35A
 * Original: 0x0022A35A - 0x0022A3B9 (95 bytes, 29 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A35A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A35A: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0x0022A362u); RECOMP_ABI_CALL(0x00229792u, sub_00229792); /* call 0x00229792 */

loc_0022A362: ;
    SET_LO8(edx, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022A3A4; /* je: equal / zero */

loc_0022A36A: ;
    SET_LO8(edx, LO8(edx) & 0xFB);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), eax (32-bit) */
    MEM8(esi + 0x10) = LO8(edx);
    if (CMP_NE(_fa, _fb)) goto loc_0022A39C; /* jne: not equal / not zero */

loc_0022A375: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x0022A37Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022A378u); } /* indirect call */
    }

loc_0022A37E: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(ebp + -24) = 0xFFFFD8F0u;
    { uint32_t _icall_target = MEM32(0x22BC30); PUSH32(esp, 0x0022A397u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022A391u); } /* indirect call */
    }

loc_0022A397: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x0022A399u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022A397u); } /* indirect call */
    }

loc_0022A399: ;
    MEM8(ebp + -1) = LO8(eax);

loc_0022A39C: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0x0022A3A4u); RECOMP_ABI_CALL(0x00229792u, sub_00229792); /* call 0x00229792 */

loc_0022A3A4: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0022A3B9(); return; } /* je: equal / zero */

loc_0022A3AA: ;
    SET_LO8(ecx, MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(esi + 0x25) (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0022A3B9(); return; } /* je: equal / zero */

loc_0022A3B2: ;
    esi = 0xC0001000u;
    g_seh_ebp = ebp; sub_0022A426(); return; /* tail jmp 0x0022A426 */

}

/**
 * sub_0022A3B9
 * Original: 0x0022A3B9 - 0x0022A426 (109 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A3B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A3B9: ;
    _fa = (uint32_t)(MEM8(edi + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x18), 1 (8-bit) */
    ecx = eax + 1;
    if (TEST_NZ(_fa, _fb)) goto loc_0022A3D4; /* jne: not equal / not zero */

loc_0022A3C2: ;
    edx = MEM32(edi + 0x14);
    eax = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_0022A43F(); return; } /* js: sign (negative) */

loc_0022A3CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_0022A43F(); return; } /* jg: greater (signed >) */

loc_0022A3D2: ;
    ecx = edx;

loc_0022A3D4: ;
    SET_LO8(edx, MEM8(esi + 0x24));
    SET_LO8(eax, LO8(edx));
    _fb = (uint32_t)(MEM8(esi + 0x25)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - MEM8(esi + 0x25));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    edi = ZX8(LO8(edx));
    _fb = (uint32_t)(MEM8(esi + 0x26)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(esi + 0x26));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    edi = MEM32(esi + 0x2C);

loc_0022A3EB: ;
    edx = ZX8(LO8(edx));
    eax = edx;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(edi + eax) = LO16(ecx);
    edi = MEM32(esi + 0x2C);
    eax = ZX8(MEM8(edi + eax + 3));
    ebx = ZX8(MEM8(esi + 0x24));
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx + eax + 1;
    eax = edx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x26)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 0x26) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022A3EB; /* jne: not equal / not zero */

loc_0022A415: ;
    MEM8(esi + 1) = MEM8(esi + 1) & 0xBF;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x10) = MEM8(esi + 0x10) | 2;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edi = MEM32(ebp + -12);
    MEM32(esi + 0x28) = ecx;
    esi = MEM32(ebp + -16);

    g_seh_ebp = ebp; sub_0022A426(); return; /* fallthrough 0x0022A426 */

}

/**
 * sub_0022A426
 * Original: 0x0022A426 - 0x0022A43F (25 bytes, 11 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A426(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A426: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x0022A42Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022A429u); } /* indirect call */
    }

loc_0022A42F: ;
    PUSH32(esp, edi);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0x0022A438u); RECOMP_ABI_CALL(0x0022541Du, sub_0022541D); /* call 0x0022541D */

loc_0022A438: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0022A43F
 * Original: 0x0022A43F - 0x0022A446 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A43F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A43F: ;
    esi = 0xC0000B00u;
    g_seh_ebp = ebp; sub_0022A426(); return; /* tail jmp 0x0022A426 */

}

/**
 * sub_0022A446
 * Original: 0x0022A446 - 0x0022A480 (58 bytes, 24 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A446(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A446: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edx;
    esi = MEM32(edi + 0x10);
    ebx = ecx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x0022A45Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022A454u); } /* indirect call */
    }

loc_0022A45A: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10), 2 (8-bit) */
    MEM8(esp + 0x13) = LO8(eax);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0022A480(); return; } /* je: equal / zero */

loc_0022A464: ;
    MEM8(esi + 1) = MEM8(esi + 1) | 0x40;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = ebx;
    PUSH32(esp, 0x0022A46Fu); RECOMP_ABI_CALL(0x00229792u, sub_00229792); /* call 0x00229792 */

loc_0022A46F: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1C) = eax;
    SET_LO8(eax, MEM8(esi + 0x10));
    SET_LO8(eax, LO8(eax) & 0xFD);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x10) = LO8(eax);
    g_seh_ebp = ebp; sub_0022A485(); return; /* tail jmp 0x0022A485 */

}

/**
 * sub_0022A480
 * Original: 0x0022A480 - 0x0022A485 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A480: ;
    ebp = 0xC0000F00u;

    g_seh_ebp = ebp; sub_0022A485(); return; /* fallthrough 0x0022A485 */

}

/**
 * sub_0022A485
 * Original: 0x0022A485 - 0x0022A4A0 (27 bytes, 12 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A485(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A485: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x0022A48Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022A489u); } /* indirect call */
    }

loc_0022A48F: ;
    PUSH32(esp, edi);
    MEM32(edi + 4) = ebp;
    PUSH32(esp, 0x0022A498u); RECOMP_ABI_CALL(0x0022541Du, sub_0022541D); /* call 0x0022541D */

loc_0022A498: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022A4A0
 * Original: 0x0022A4A0 - 0x0022A590 (240 bytes, 97 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0022A4A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022A4A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = edx;
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    edx = MEM32(ebx + 0x20);
    MEM32(ebx + 8) = MEM32(ebx + 8) & 0;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax;
    esi = esi >> 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -44) = esi;
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -40) = eax;
    eax = MEM32(ebx + 0x28);
    esi = ebx + 0x10;
    MEM32(ebp + -8) = esi;
    edi = ebp + -36;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebx + 0x24);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    edi = MEM32(edx + 0x2C);
    MEM32(ebp + -20) = eax;
    eax = ZX8(MEM8(ebx + 0x2D));
    esi = ebx;
    _fb = (uint32_t)(MEM32(0x98B820)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(0x98B820);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + edi + 8) = esi;
    _fa = (uint32_t)(MEM8(edx + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x10), 1 (8-bit) */
    MEM32(ebp + -4) = edx;
    MEM32(ebp + -12) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0022A547; /* je: equal / zero */

loc_0022A501: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022A506u); RECOMP_ABI_CALL(0x00229792u, sub_00229792); /* call 0x00229792 */

loc_0022A506: ;
    ecx = MEM32(ebp + -4);
    esi = eax;
    eax = MEM32(ecx + 0x28);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas < 0)) goto loc_0022A517; /* js: sign (negative) */

loc_0022A515: ;
    esi = eax;

loc_0022A517: ;
    edi = MEM32(ebp + -8);
    MEM16(ebx) = LO16(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ebx + 3));
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + esi + 1;
    MEM32(ecx + 0x28) = eax;
    esi = ebx + 0x30;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax = ZX8(MEM8(ecx + 0x26));
    esi = ZX8(MEM8(ecx + 0x24));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    esi = MEM32(ebp + -12);
    MEM8(ecx + 0x26) = LO8(edx);
    goto loc_0022A57E;

loc_0022A547: ;
    edi = MEM32(0x22BD28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebx + 4));
    { uint32_t _icall_target = edi; PUSH32(esp, 0x0022A554u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022A552u); } /* indirect call */
    }

loc_0022A554: ;
    eax = MEM32(ebx + 0xC);
    ecx = MEM32(ebx + 4);
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFFFFF000u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022A569; /* je: equal / zero */

loc_0022A564: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x0022A569u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022A567u); } /* indirect call */
    }

loc_0022A569: ;
    ecx = MEM32(ebp + -4);
    SET_LO8(eax, MEM8(ecx + 0x25));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x24)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x24) (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MEM8(ecx + 0x25) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0022A581; /* je: equal / zero */

loc_0022A57E: ;
    MEM32(ecx + 4) = esi;

loc_0022A581: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -16));
    eax = ebp + -44;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + -20); PUSH32(esp, 0x0022A58Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022A588u); } /* indirect call */
    }

loc_0022A58B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0022A590
 * Original: 0x0022A590 - 0x0022A5B0 (32 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022A590: ;
    eax = MEM32(0x98B82C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022A5A2; /* je: equal / zero */

loc_0022A599: ;
    ecx = MEM32(eax + 0x14);
    MEM32(0x98B82C) = ecx;

loc_0022A5A2: ;
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 2) = MEM8(eax + 2) & 0xFE;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(eax + 0x1F) = LO8(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022A5B7
 * Original: 0x0022A5B7 - 0x0022A5C9 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A5B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A5B7: ;
    SET_LO16(eax, MEM16(esp + 4));
    _fa = (uint32_t)(MEM16(0x98B842)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x98B842), LO16(eax) (16-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0022A5C9(); return; } /* jae: above or equal (unsigned >=) */

loc_0022A5C5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_0022A5D3(); return; /* tail jmp 0x0022A5D3 */

}

/**
 * sub_0022A5C9
 * Original: 0x0022A5C9 - 0x0022A5D3 (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A5C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A5C9: ;
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    MEM16(0x98B842) = MEM16(0x98B842) - LO16(eax);
    _fa = (uint32_t)(MEM16(0x98B842)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_0022A5D3(); return; /* fallthrough 0x0022A5D3 */

}

/**
 * sub_0022A5D3
 * Original: 0x0022A5D3 - 0x0022A5D6 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A5D3(void)
{

loc_0022A5D3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022A5DD
 * Original: 0x0022A5DD - 0x0022A5EF (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A5DD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A5DD: ;
    SET_LO16(eax, MEM16(esp + 4));
    _fa = (uint32_t)(MEM16(0x98B846)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x98B846), LO16(eax) (16-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0022A5EF(); return; } /* jae: above or equal (unsigned >=) */

loc_0022A5EB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_0022A5F9(); return; /* tail jmp 0x0022A5F9 */

}

/**
 * sub_0022A5EF
 * Original: 0x0022A5EF - 0x0022A5F9 (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A5EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A5EF: ;
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    MEM16(0x98B846) = MEM16(0x98B846) - LO16(eax);
    _fa = (uint32_t)(MEM16(0x98B846)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_0022A5F9(); return; /* fallthrough 0x0022A5F9 */

}

/**
 * sub_0022A5F9
 * Original: 0x0022A5F9 - 0x0022A5FC (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A5F9(void)
{

loc_0022A5F9: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022A5FC
 * Original: 0x0022A5FC - 0x0022A62E (50 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A5FC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022A5FC: ;
    PUSH32(esp, edi);
    edi = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(edi + 2));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022A623; /* je: equal / zero */

loc_0022A612: ;
    eax = MEM32(ecx + 0x14);
    PUSH32(esp, esi);
    esi = ZX16(LO16(edx));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    POP32(esp, esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022A623; /* je: equal / zero */

loc_0022A622: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0022A623: ;
    _fa = (uint32_t)(MEM8(edi + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x11), 0 (8-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0022A62D; /* jne: not equal / not zero */

loc_0022A62A: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0022A62D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022A62E
 * Original: 0x0022A62E - 0x0022A668 (58 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A62E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022A62E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    edi = edx;
    { uint32_t _icall_target = MEM32(0x22BD1C); PUSH32(esp, 0x0022A63Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022A637u); } /* indirect call */
    }

loc_0022A63D: ;
    ecx = MEM32(esi);
    ecx = ecx & 0xFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 0x1000;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = edx;
    ebx = MEM32(edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0022A65A; /* jbe: below or equal (unsigned <=) */

loc_0022A658: ;
    MEM32(ecx) = ebx;

loc_0022A65A: ;
    edx = MEM32(ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(edi) = MEM32(edi) - edx;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022A668
 * Original: 0x0022A668 - 0x0022A6CE (102 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0022A668(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022A668: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ebx = edx;
    SET_LO16(eax, MEM16(ebx + 2));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    MEM32(ebp + -32) = ecx;
    SET_LO8(ecx, MEM8(ecx + 0x45C));
    MEM8(ebp + -24) = LO8(ecx);
    eax = eax & 0x7FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -40) = eax;
    eax = MEM32(edi + 0x14);
    MEM32(ebp + -16) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ebx + 0x26) = MEM8(ebx + 0x26) - 1;
    _fa = (uint32_t)(MEM8(ebx + 0x26)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(ebx + 0x27) = MEM8(ebx + 0x27) + 1;
    _fa = (uint32_t)(MEM8(ebx + 0x27)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(ecx, MEM16(edi + 0x22));
    SET_LO16(ecx, LO16(ecx) & 0xFFFD);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    SET_LO16(ecx, LO16(ecx) | 4);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(edi + 0x22) = LO16(ecx);
    esi = MEM32(ebx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(ebp + -20) = eax;
    MEM8(ebp + 0xB) = LO8(eax);
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0022A6CE(); return; } /* je: equal / zero */

loc_0022A6C5: ;
    eax = MEM32(0x98B820);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0022A6E7(); return; /* tail jmp 0x0022A6E7 */

}

/**
 * sub_0022A6CE
 * Original: 0x0022A6CE - 0x0022A6E7 (25 bytes, 8 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A6CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A6CE: ;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0x0022A6D6u); RECOMP_ABI_CALL(0x0022A590u, sub_0022A590); /* call 0x0022A590 */

loc_0022A6D6: ;
    esi = eax;
    eax = MEM32(esi + 0x10);
    eax = eax ^ MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 8) = eax;

    g_seh_ebp = ebp; sub_0022A6E7(); return; /* fallthrough 0x0022A6E7 */

}

/**
 * sub_0022A6E7
 * Original: 0x0022A6E7 - 0x0022A772 (139 bytes, 44 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A6E7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A6E7: ;
    _fa = (uint32_t)(MEM8(ebx + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x11), 0 (8-bit) */
    MEM32(ebp + -4) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0022A756; /* jne: not equal / not zero */

loc_0022A6F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, 0xFE);
    _fb = (uint32_t)(MEM8(ebp + -24)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - MEM8(ebp + -24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022A6FDu); RECOMP_ABI_CALL(0x0022A590u, sub_0022A590); /* call 0x0022A590 */

loc_0022A6FD: ;
    ecx = MEM32(edi + 0x28);
    PUSH32(esp, MEM32(ebp + -24));
    MEM32(eax) = ecx;
    ecx = MEM32(edi + 0x2C);
    MEM32(ebp + -36) = eax;
    MEM32(eax + 4) = ecx;
    PUSH32(esp, 0x0022A713u); RECOMP_ABI_CALL(0x0022A590u, sub_0022A590); /* call 0x0022A590 */

loc_0022A713: ;
    esi = eax;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    ecx = ecx & 0x3FFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0xE2E00000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -36);
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 4) = edx;
    edx = MEM32(esi + 0x10);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0x10);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ebp + 0xB) = 2;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = ebx;
    MEM8(eax + 0x1C) = 0;
    MEM8(eax + 0x1E) = 1;
    MEM8(eax + 0x1D) = 0;
    MEM32(eax + 0x18) = edi;

loc_0022A756: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0022A772(); return; } /* je: equal / zero */

loc_0022A75C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(edi + 0x18));
    { uint32_t _icall_target = MEM32(0x22BD20); PUSH32(esp, 0x0022A76Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022A764u); } /* indirect call */
    }

loc_0022A76A: ;
    eax = MEM32(edi + 0x18);
    MEM32(ebp + -36) = eax;
    g_seh_ebp = ebp; sub_0022A776(); return; /* tail jmp 0x0022A776 */

}

/**
 * sub_0022A772
 * Original: 0x0022A772 - 0x0022A776 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A772(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A772: ;
    MEM8(edi + 0x1C) = 1;

    g_seh_ebp = ebp; sub_0022A776(); return; /* fallthrough 0x0022A776 */

}

/**
 * sub_0022A776
 * Original: 0x0022A776 - 0x0022A780 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A776(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A776: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0022A891(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_0022A780(); return; /* fallthrough 0x0022A780 */

}

/**
 * sub_0022A780
 * Original: 0x0022A780 - 0x0022A7DB (91 bytes, 31 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A780: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    edx = ebp + -16;
    ecx = ebp + -36;
    PUSH32(esp, 0x0022A78Fu); RECOMP_ABI_CALL(0x0022A62Eu, sub_0022A62E); /* call 0x0022A62E */

loc_0022A78F: ;
    MEM32(ebp + -4) = eax;
    edx = MEM32(ebp + -20);
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -40);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0022A7B3; /* jae: above or equal (unsigned >=) */

loc_0022A7A1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0022A86B(); return; } /* je: equal / zero */

loc_0022A7A9: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0022A86B(); return; } /* jne: not equal / not zero */

loc_0022A7B3: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0022A7DB(); return; } /* je: equal / zero */

loc_0022A7B9: ;
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + -12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_0022A7C8; /* jae: above or equal (unsigned >=) */

loc_0022A7C6: ;
    ecx = edx;

loc_0022A7C8: ;
    SET_LO8(eax, MEM8(ebp + -12));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + ecx;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 0x1D) = LO8(eax);
    g_seh_ebp = ebp; sub_0022A7F9(); return; /* tail jmp 0x0022A7F9 */

}

/**
 * sub_0022A792
 * Original: 0x0022A792 - 0x0022A7DB (73 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A792(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A792: ;
    edx = MEM32(ebp + -20);
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -40);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0022A7B3; /* jae: above or equal (unsigned >=) */

loc_0022A7A1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0022A86B(); return; } /* je: equal / zero */

loc_0022A7A9: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0022A86B(); return; } /* jne: not equal / not zero */

loc_0022A7B3: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0022A7DB(); return; } /* je: equal / zero */

loc_0022A7B9: ;
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + -12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_0022A7C8; /* jae: above or equal (unsigned >=) */

loc_0022A7C6: ;
    ecx = edx;

loc_0022A7C8: ;
    SET_LO8(eax, MEM8(ebp + -12));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + ecx;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 0x1D) = LO8(eax);
    g_seh_ebp = ebp; sub_0022A7F9(); return; /* tail jmp 0x0022A7F9 */

}

/**
 * sub_0022A7DB
 * Original: 0x0022A7DB - 0x0022A7F1 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A7DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A7DB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    eax = MEM32(ebp + -4);
    MEM32(esi + 4) = eax;
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0022A7F1(); return; } /* jae: above or equal (unsigned >=) */

loc_0022A7E5: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + edx;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 0x1D) = LO8(edx);
    g_seh_ebp = ebp; sub_0022A7FC(); return; /* tail jmp 0x0022A7FC */

}

/**
 * sub_0022A7F1
 * Original: 0x0022A7F1 - 0x0022A7F9 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A7F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A7F1: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + ecx;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x1D) = LO8(ecx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

    g_seh_ebp = ebp; sub_0022A7F9(); return; /* fallthrough 0x0022A7F9 */

}

/**
 * sub_0022A7F9
 * Original: 0x0022A7F9 - 0x0022A86B (114 bytes, 35 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A7F9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A7F9: ;
    MEM32(ebp + -20) = edx;
    eax = MEM32(ebp + -4);
    ecx = MEM32(esi);
    MEM8(ebp + 0xB) = MEM8(ebp + 0xB) ^ 1;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;
    eax = ZX8(MEM8(ebp + 0xB));
    PUSH32(esp, MEM32(ebp + -24));
    ecx = ecx & 0xFFBFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0xE0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x3000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = ecx;
    eax = eax | 0xE00000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = eax;
    MEM32(esi + 0x14) = ebx;
    MEM8(esi + 0x1C) = 0;
    MEM8(esi + 0x1E) = 0;
    SET_LO8(ecx, MEM8(edi + 0x1C));
    eax = eax & 0xF3E7FFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x18) = edi;
    MEM32(ebp + -8) = esi;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 0x13;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = ecx;
    PUSH32(esp, 0x0022A85Bu); RECOMP_ABI_CALL(0x0022A590u, sub_0022A590); /* call 0x0022A590 */

loc_0022A85B: ;
    ecx = MEM32(ebp + -8);
    esi = eax;
    eax = MEM32(esi + 0x10);
    MEM32(ecx + 8) = eax;
    g_seh_ebp = ebp; sub_0022A792(); return; /* tail jmp 0x0022A792 */

}

/**
 * sub_0022A7FC
 * Original: 0x0022A7FC - 0x0022A86B (111 bytes, 34 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A7FC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A7FC: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(esi);
    MEM8(ebp + 0xB) = MEM8(ebp + 0xB) ^ 1;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;
    eax = ZX8(MEM8(ebp + 0xB));
    PUSH32(esp, MEM32(ebp + -24));
    ecx = ecx & 0xFFBFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0xE0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x3000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = ecx;
    eax = eax | 0xE00000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = eax;
    MEM32(esi + 0x14) = ebx;
    MEM8(esi + 0x1C) = 0;
    MEM8(esi + 0x1E) = 0;
    SET_LO8(ecx, MEM8(edi + 0x1C));
    eax = eax & 0xF3E7FFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x18) = edi;
    MEM32(ebp + -8) = esi;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 0x13;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = ecx;
    PUSH32(esp, 0x0022A85Bu); RECOMP_ABI_CALL(0x0022A590u, sub_0022A590); /* call 0x0022A590 */

loc_0022A85B: ;
    ecx = MEM32(ebp + -8);
    esi = eax;
    eax = MEM32(esi + 0x10);
    MEM32(ecx + 8) = eax;
    g_seh_ebp = ebp; sub_0022A792(); return; /* tail jmp 0x0022A792 */

}

/**
 * sub_0022A86B
 * Original: 0x0022A86B - 0x0022A891 (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A86B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A86B: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    eax = MEM32(ebp + -4);
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -12) = edx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0022A780(); return; } /* jne: not equal / not zero */

loc_0022A87E: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0022A891(); return; } /* je: equal / zero */

loc_0022A884: ;
    _fa = (uint32_t)(MEM8(edi + 0x1D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x1D), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0022A891(); return; } /* je: equal / zero */

loc_0022A88A: ;
    eax = MEM32(ebp + -8);
    MEM8(eax + 2) = MEM8(eax + 2) | 4;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_0022A891(); return; /* fallthrough 0x0022A891 */

}

/**
 * sub_0022A891
 * Original: 0x0022A891 - 0x0022A901 (112 bytes, 36 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A891(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A891: ;
    _fa = (uint32_t)(MEM8(ebx + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x11), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0022A901(); return; } /* jne: not equal / not zero */

loc_0022A897: ;
    MEM8(esi + 2) = MEM8(esi + 2) & 0xFB;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(edi + 0x1C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x1C), 2 (8-bit) */
    PUSH32(esp, MEM32(ebp + -24));
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(ebp + -8) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << 0x13;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x180000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = eax;
    SET_LO8(ecx, MEM8(edi + 0x1E));
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0x1FFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x14) = ebx;
    MEM8(esi + 0x1C) = 2;
    MEM8(esi + 0x1E) = 2;
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0xFFFFFF18u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 0x15;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = ecx;
    MEM32(esi + 0x18) = edi;
    MEM8(esi + 0x1D) = 0;
    PUSH32(esp, 0x0022A8F4u); RECOMP_ABI_CALL(0x0022A590u, sub_0022A590); /* call 0x0022A590 */

loc_0022A8F4: ;
    ecx = MEM32(ebp + -8);
    esi = eax;
    eax = MEM32(esi + 0x10);
    MEM32(ecx + 8) = eax;
    g_seh_ebp = ebp; sub_0022A919(); return; /* tail jmp 0x0022A919 */

}

/**
 * sub_0022A901
 * Original: 0x0022A901 - 0x0022A919 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A901(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A901: ;
    ecx = ZX8(MEM8(edi + 0x1E));
    eax = MEM32(ebp + -8);
    ecx = ecx << 0x15;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax + 0x1C) = 2;
    ecx = ecx & 0xE00000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = MEM32(eax) ^ ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_0022A919(); return; /* fallthrough 0x0022A919 */

}

/**
 * sub_0022A919
 * Original: 0x0022A919 - 0x0022A94E (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A919(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A919: ;
    MEM8(esi + 0x1E) = 3;
    SET_LO16(eax, MEM16(edi + 0x14));
    MEM32(edi + 0x14) = MEM32(edi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(edi + 0x20) = LO16(eax);
    _fa = (uint32_t)(MEM8(ebx + 0x20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x20), 0 (8-bit) */
    eax = MEM32(esi + 0x10);
    MEM32(ebx + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0022A939; /* jne: not equal / not zero */

loc_0022A935: ;
    MEM8(ebx + 1) = MEM8(ebx + 1) & 0xBF;
    _fa = (uint32_t)(MEM8(ebx + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0022A939: ;
    SET_LO8(ebx, MEM8(ebx + 0x11));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0022A94E(); return; } /* jne: not equal / not zero */

loc_0022A940: ;
    eax = MEM32(ebp + -32);
    eax = MEM32(eax);
    MEM32(eax + 8) = 2;
    g_seh_ebp = ebp; sub_0022A95F(); return; /* tail jmp 0x0022A95F */

}

/**
 * sub_0022A94E
 * Original: 0x0022A94E - 0x0022A95F (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A94E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A94E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0022A95F(); return; } /* jne: not equal / not zero */

loc_0022A953: ;
    eax = MEM32(ebp + -32);
    eax = MEM32(eax);
    MEM32(eax + 8) = 4;

    g_seh_ebp = ebp; sub_0022A95F(); return; /* fallthrough 0x0022A95F */

}

/**
 * sub_0022A95F
 * Original: 0x0022A95F - 0x0022A966 (7 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A95F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A95F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022A966
 * Original: 0x0022A966 - 0x0022A9B9 (83 bytes, 34 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0022A966(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022A966: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = edx;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 0 (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0022A9B6; /* je: equal / zero */

loc_0022A976: ;
    PUSH32(esp, ebx);

loc_0022A977: ;
    eax = MEM32(esi + 0x28);
    SET_LO16(edx, MEM16(esi + 0x24));
    ebx = ZX16(MEM16(eax + 0x20));
    ecx = ZX16(LO16(edx));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0022A9B5; /* jg: greater (signed >) */

loc_0022A98C: ;
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x28) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0022A999; /* jne: not equal / not zero */

loc_0022A996: ;
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) & ecx;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0022A999: ;
    SET_LO16(ecx, MEM16(eax + 0x20));
    _fb = (uint32_t)(LO16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + LO16(edx));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(esi + 0x24) = LO16(ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022A9AFu); RECOMP_ABI_CALL(0x0022A668u, sub_0022A668); /* call 0x0022A668 */

loc_0022A9AF: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022A977; /* jne: not equal / not zero */

loc_0022A9B5: ;
    POP32(esp, ebx);

loc_0022A9B6: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0022A9B9
 * Original: 0x0022A9B9 - 0x0022AA06 (77 bytes, 26 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A9B9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022A9B9: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x424), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022AA04; /* je: equal / zero */

loc_0022A9C5: ;
    PUSH32(esp, edi);

loc_0022A9C6: ;
    edi = MEM32(esi + 0x424);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi + 0x20));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022A9D8u); RECOMP_ABI_CALL(0x0022A5DDu, sub_0022A5DD); /* call 0x0022A5DD */

loc_0022A9D8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022AA03; /* je: equal / zero */

loc_0022A9DC: ;
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x424) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0022A9EF; /* jne: not equal / not zero */

loc_0022A9E9: ;
    MEM32(esi + 0x428) = MEM32(esi + 0x428) & eax;
    _fa = (uint32_t)(MEM32(esi + 0x428)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0022A9EF: ;
    edx = MEM32(edi + 0x10);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0022A9FAu); RECOMP_ABI_CALL(0x0022A668u, sub_0022A668); /* call 0x0022A668 */

loc_0022A9FA: ;
    _fa = (uint32_t)(MEM32(esi + 0x424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x424), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022A9C6; /* jne: not equal / not zero */

loc_0022AA03: ;
    POP32(esp, edi);

loc_0022AA04: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0022AA06
 * Original: 0x0022AA06 - 0x0022AA53 (77 bytes, 26 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AA06(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022AA06: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x41C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x41C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022AA51; /* je: equal / zero */

loc_0022AA12: ;
    PUSH32(esp, edi);

loc_0022AA13: ;
    edi = MEM32(esi + 0x41C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi + 0x20));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022AA25u); RECOMP_ABI_CALL(0x0022A5B7u, sub_0022A5B7); /* call 0x0022A5B7 */

loc_0022AA25: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022AA50; /* je: equal / zero */

loc_0022AA29: ;
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x41C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0022AA3C; /* jne: not equal / not zero */

loc_0022AA36: ;
    MEM32(esi + 0x420) = MEM32(esi + 0x420) & eax;
    _fa = (uint32_t)(MEM32(esi + 0x420)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0022AA3C: ;
    edx = MEM32(edi + 0x10);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0022AA47u); RECOMP_ABI_CALL(0x0022A668u, sub_0022A668); /* call 0x0022A668 */

loc_0022AA47: ;
    _fa = (uint32_t)(MEM32(esi + 0x41C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x41C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022AA13; /* jne: not equal / not zero */

loc_0022AA50: ;
    POP32(esp, edi);

loc_0022AA51: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0022AA53
 * Original: 0x0022AA53 - 0x0022AA65 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AA53(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022AA53: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM16(eax + 0x20)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x20), 3 (16-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_0022AA65(); return; } /* jbe: below or equal (unsigned <=) */

loc_0022AA5E: ;
    eax = 0x80000500u;
    g_seh_ebp = ebp; sub_0022AA83(); return; /* tail jmp 0x0022AA83 */

}

/**
 * sub_0022AA65
 * Original: 0x0022AA65 - 0x0022AA72 (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AA65(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022AA65: ;
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0022AA72(); return; } /* je: equal / zero */

loc_0022AA6D: ;
    MEM32(esi + 0x24) = eax;
    g_seh_ebp = ebp; sub_0022AA75(); return; /* tail jmp 0x0022AA75 */

}

/**
 * sub_0022AA72
 * Original: 0x0022AA72 - 0x0022AA75 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AA72(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022AA72: ;
    MEM32(edx + 0x28) = eax;

    g_seh_ebp = ebp; sub_0022AA75(); return; /* fallthrough 0x0022AA75 */

}

/**
 * sub_0022AA75
 * Original: 0x0022AA75 - 0x0022AA83 (14 bytes, 4 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AA75(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022AA75: ;
    MEM32(edx + 0x2C) = eax;
    PUSH32(esp, 0x0022AA7Du); RECOMP_ABI_CALL(0x0022A966u, sub_0022A966); /* call 0x0022A966 */

loc_0022AA7D: ;
    eax = 0x40000000;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_0022AA83(); return; /* fallthrough 0x0022AA83 */

}

/**
 * sub_0022AA83
 * Original: 0x0022AA83 - 0x0022AA86 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AA83(void)
{

loc_0022AA83: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022AA86
 * Original: 0x0022AA86 - 0x0022AA99 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AA86(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022AA86: ;
    SET_LO16(eax, MEM16(edx + 0x20));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(0x98B844)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(0x98B844) (16-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_0022AA99(); return; } /* jbe: below or equal (unsigned <=) */

loc_0022AA93: ;
    eax = 0x80000500u;
    esp += 4; return; /* ret */

}

/**
 * sub_0022AA99
 * Original: 0x0022AA99 - 0x0022AAAF (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AA99(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022AA99: ;
    eax = ecx + 0x424;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0022AAAF(); return; } /* je: equal / zero */

loc_0022AAA4: ;
    eax = MEM32(ecx + 0x428);
    MEM32(eax + 0x24) = edx;
    g_seh_ebp = ebp; sub_0022AAB1(); return; /* tail jmp 0x0022AAB1 */

}

/**
 * sub_0022AAAA
 * Original: 0x0022AAAA - 0x0022AAAF (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AAAA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022AAAA: ;
    MEM32(eax + 0x24) = edx;
    g_seh_ebp = ebp; sub_0022AAB1(); return; /* tail jmp 0x0022AAB1 */

}

/**
 * sub_0022AAAF
 * Original: 0x0022AAAF - 0x0022AAB1 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AAAF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022AAAF: ;
    MEM32(eax) = edx;

    g_seh_ebp = ebp; sub_0022AAB1(); return; /* fallthrough 0x0022AAB1 */

}

/**
 * sub_0022AAB1
 * Original: 0x0022AAB1 - 0x0022AAC2 (17 bytes, 4 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AAB1(void)
{

loc_0022AAB1: ;
    MEM32(ecx + 0x428) = edx;
    PUSH32(esp, 0x0022AABCu); RECOMP_ABI_CALL(0x0022A9B9u, sub_0022A9B9); /* call 0x0022A9B9 */

loc_0022AABC: ;
    eax = 0x40000000;
    esp += 4; return; /* ret */

}

/**
 * sub_0022AAC2
 * Original: 0x0022AAC2 - 0x0022AAD5 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AAC2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022AAC2: ;
    SET_LO16(eax, MEM16(edx + 0x20));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(0x98B840)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(0x98B840) (16-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_0022AAD5(); return; } /* jbe: below or equal (unsigned <=) */

loc_0022AACF: ;
    eax = 0x80000500u;
    esp += 4; return; /* ret */

}

/**
 * sub_0022AAD5
 * Original: 0x0022AAD5 - 0x0022AAEB (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AAD5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022AAD5: ;
    eax = ecx + 0x41C;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0022AAEB(); return; } /* je: equal / zero */

loc_0022AAE0: ;
    eax = MEM32(ecx + 0x420);
    MEM32(eax + 0x24) = edx;
    g_seh_ebp = ebp; sub_0022AAED(); return; /* tail jmp 0x0022AAED */

}

/**
 * sub_0022AAEB
 * Original: 0x0022AAEB - 0x0022AAED (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AAEB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022AAEB: ;
    MEM32(eax) = edx;

    g_seh_ebp = ebp; sub_0022AAED(); return; /* fallthrough 0x0022AAED */

}

/**
 * sub_0022AAED
 * Original: 0x0022AAED - 0x0022AAFE (17 bytes, 4 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AAED(void)
{

loc_0022AAED: ;
    MEM32(ecx + 0x420) = edx;
    PUSH32(esp, 0x0022AAF8u); RECOMP_ABI_CALL(0x0022AA06u, sub_0022AA06); /* call 0x0022AA06 */

loc_0022AAF8: ;
    eax = 0x40000000;
    esp += 4; return; /* ret */

}

/**
 * sub_0022AAFE
 * Original: 0x0022AAFE - 0x0022AB46 (72 bytes, 28 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0022AAFE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022AAFE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    ebx = ecx;
    edx = edi;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022AB15u); RECOMP_ABI_CALL(0x0022A5FCu, sub_0022A5FC); /* call 0x0022A5FC */

loc_0022AB15: ;
    MEM16(esi + 0x20) = LO16(eax);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x0022AB1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022AB19u); } /* indirect call */
    }

loc_0022AB1F: ;
    MEM8(edi + 0x26) = MEM8(edi + 0x26) + 1;
    _fa = (uint32_t)(MEM8(edi + 0x26)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(ebp + -1) = LO8(eax);
    MEM16(esi + 0x22) = 2;
    eax = ZX8(MEM8(edi + 0x11));
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0022AB5D(); return; } /* je: equal / zero */

loc_0022AB38: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0022AB52(); return; } /* je: equal / zero */

loc_0022AB3C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0022AB46(); return; } /* je: equal / zero */

loc_0022AB3F: ;
    ebx = 0x80000600u;
    g_seh_ebp = ebp; sub_0022AB6C(); return; /* tail jmp 0x0022AB6C */

}

/**
 * sub_0022AB46
 * Original: 0x0022AB46 - 0x0022AB52 (12 bytes, 5 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AB46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022AB46: ;
    PUSH32(esp, esi);
    edx = edi;
    ecx = ebx;
    PUSH32(esp, 0x0022AB50u); RECOMP_ABI_CALL(0x0022AA53u, sub_0022AA53); /* call 0x0022AA53 */

loc_0022AB50: ;
    g_seh_ebp = ebp; sub_0022AB66(); return; /* tail jmp 0x0022AB66 */

}

/**
 * sub_0022AB52
 * Original: 0x0022AB52 - 0x0022AB5D (11 bytes, 4 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AB52(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022AB52: ;
    edx = esi;
    ecx = ebx;
    PUSH32(esp, 0x0022AB5Bu); RECOMP_ABI_CALL(0x0022AA86u, sub_0022AA86); /* call 0x0022AA86 */

loc_0022AB5B: ;
    g_seh_ebp = ebp; sub_0022AB66(); return; /* tail jmp 0x0022AB66 */

}

/**
 * sub_0022AB5D
 * Original: 0x0022AB5D - 0x0022AB6C (15 bytes, 6 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AB5D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022AB5D: ;
    edx = esi;
    ecx = ebx;
    PUSH32(esp, 0x0022AB66u); RECOMP_ABI_CALL(0x0022AAC2u, sub_0022AAC2); /* call 0x0022AAC2 */

loc_0022AB66: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0022AB74(); return; } /* jge: greater or equal (signed >=) */

    g_seh_ebp = ebp; sub_0022AB6C(); return; /* fallthrough 0x0022AB6C */

}

/**
 * sub_0022AB66
 * Original: 0x0022AB66 - 0x0022AB6C (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AB66(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022AB66: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0022AB74(); return; } /* jge: greater or equal (signed >=) */

    g_seh_ebp = ebp; sub_0022AB6C(); return; /* fallthrough 0x0022AB6C */

}

/**
 * sub_0022AB6C
 * Original: 0x0022AB6C - 0x0022AB74 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AB6C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022AB6C: ;
    MEM16(esi + 0x22) = MEM16(esi + 0x22) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x22)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM8(edi + 0x26) = MEM8(edi + 0x26) - 1;
    _fa = (uint32_t)(MEM8(edi + 0x26)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_0022AB74(); return; /* fallthrough 0x0022AB74 */

}

/**
 * sub_0022AB74
 * Original: 0x0022AB74 - 0x0022AB84 (16 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AB74(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022AB74: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x0022AB7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022AB77u); } /* indirect call */
    }

loc_0022AB7D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0022AB87
 * Original: 0x0022AB87 - 0x0022AC6E (231 bytes, 84 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0022AB87(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0022AB87: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022AB97u); RECOMP_ABI_CALL(0x0022629Bu, sub_0022629B); /* call 0x0022629B */

loc_0022AB97: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = ebx;
    if (CMP_AE(_fa, _fb)) goto loc_0022AC5D; /* jae: above or equal (unsigned >=) */

loc_0022ABA4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022ABA9u); RECOMP_ABI_CALL(0x0022621Fu, sub_0022621F); /* call 0x0022621F */

loc_0022ABA9: ;
    SET_LO8(eax, MEM8(eax + 6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0022ABB6; /* jne: not equal / not zero */

loc_0022ABB0: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0022ABC5;

loc_0022ABB6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0022AC5B; /* jne: not equal / not zero */

loc_0022ABBE: ;
    MEM32(ebp + 8) = 1;

loc_0022ABC5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022ABD2u); RECOMP_ABI_CALL(0x00226225u, sub_00226225); /* call 0x00226225 */

loc_0022ABD2: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0022ABF5; /* je: equal / zero */

loc_0022ABD8: ;
    SET_LO8(ecx, MEM8(ebp + 8));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    _fb = (uint32_t)(0x96FBE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x96FBE0)) >> 32) & 1);
    esi = esi + 0x96FBE0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(esi + 0xB));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0x6F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if (7) _cf = (int)(((LO8(ecx)) >> (8 - (7))) & 1);
    SET_LO8(ecx, LO8(ecx) << 7);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x10);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0xB) = LO8(eax);
    goto loc_0022AC1B;

loc_0022ABF5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022AC02u); RECOMP_ABI_CALL(0x00226225u, sub_00226225); /* call 0x00226225 */

loc_0022AC02: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0022AC5B; /* je: equal / zero */

loc_0022AC08: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0022AC5B; /* jne: not equal / not zero */

loc_0022AC0E: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    _fb = (uint32_t)(0x96FC50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x96FC50)) >> 32) & 1);
    esi = esi + 0x96FC50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0xB) = MEM8(esi + 0xB) & 0xEF;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0022AC1B: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0xB) = MEM8(esi + 0xB) | 1;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022AC27u); RECOMP_ABI_CALL(0x00226106u, sub_00226106); /* call 0x00226106 */

loc_0022AC27: ;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 4) = ebx;
    SET_LO8(eax, MEM8(edi + 2));
    MEM8(esi + 0xA) = LO8(eax);
    SET_LO16(eax, MEM16(edi + 4));
    MEM16(esi + 8) = LO16(eax);
    if (TEST_Z(_fa, _fb)) goto loc_0022AC4A; /* je: equal / zero */

loc_0022AC3E: ;
    eax = MEM32(ebp + 8);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0022AC4D;

loc_0022AC4A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0022AC4D: ;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022AC55u); RECOMP_ABI_CALL(0x0022612Fu, sub_0022612F); /* call 0x0022612F */

loc_0022AC55: ;
    PUSH32(esp, 0);
    ecx = ebx;
    goto loc_0022AC62;

loc_0022AC5B: ;
    ecx = ebx;

loc_0022AC5D: ;
    PUSH32(esp, 0x80000400u);

loc_0022AC62: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022AC67u); RECOMP_ABI_CALL(0x00224C74u, sub_00224C74); /* call 0x00224C74 */

loc_0022AC67: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022AC89
 * Original: 0x0022AC89 - 0x0022ACA5 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0022AC89(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022AC89: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = eax;
    eax = 1;
    ecx = MEM32(ebp + 8);
    { uint32_t _add = eax;
      uint32_t _old = RECOMP_ATOMIC_ADD32(XBOX_PTR(ecx), _add);
      _fa = _old + _add; _fas = (int32_t)_fa; /* xadd result */
      eax = _old; }  /* xadd */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022ACA5
 * Original: 0x0022ACA5 - 0x0022ACF0 (75 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0022ACA5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022ACA5: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(ecx + 0xB)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0xB), 0x10 (8-bit) */
    eax = MEM32(esp + 8);
    if (TEST_Z(_fa, _fb)) goto loc_0022ACCE; /* je: equal / zero */

loc_0022ACB3: ;
    MEM32(eax) = 9;
    ecx = MEM32(ecx + 0x18);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x14);
    ecx = ecx + ecx * 4;
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = ecx;
    goto loc_0022ACE7;

loc_0022ACCE: ;
    MEM32(eax) = 5;
    ecx = MEM32(ecx + 0x18);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x14);
    ecx = ecx + ecx * 4;
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ecx;

loc_0022ACE7: ;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022ACF0
 * Original: 0x0022ACF0 - 0x0022ACF8 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022ACF0(void)
{

loc_0022ACF0: ;
    eax = 0x80004001u;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022ACF8
 * Original: 0x0022ACF8 - 0x0022ACFD (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0022ACF8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022ACF8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022ACFD
 * Original: 0x0022ACFD - 0x0022AD40 (67 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022ACFD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022ACFD: ;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x0022AD04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022ACFEu); } /* indirect call */
    }

loc_0022AD04: ;
    edx = MEM32(esp + 8);
    SET_LO8(ebx, MEM8(edx + 0xB));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022AD2B; /* je: equal / zero */

loc_0022AD10: ;
    ecx = MEM32(edx + 0x18);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022AD2B; /* je: equal / zero */

loc_0022AD19: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    POP32(esp, ecx);
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx) = ecx;
    goto loc_0022AD32;

loc_0022AD2B: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = MEM32(ecx) & 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0022AD32: ;
    SET_LO8(ecx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x0022AD3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022AD34u); } /* indirect call */
    }

loc_0022AD3A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022AD46
 * Original: 0x0022AD46 - 0x0022AD5F (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0022AD46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022AD46: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_0022AD5F(); return; } /* jne: not equal / not zero */

loc_0022AD55: ;
    eax = 0x8007048Fu;
    g_seh_ebp = ebp; sub_0022AE50(); return; /* tail jmp 0x0022AE50 */

}

/**
 * sub_0022AD5F
 * Original: 0x0022AD5F - 0x0022AE25 (198 bytes, 59 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AD5F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022AD5F: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = ebp + -48;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM8(ebp + -48) = 0x20;
    MEM8(ebp + -47) = 0x82;
    MEM32(ebp + -40) = ebx;
    PUSH32(esp, 0x0022AD7Au); RECOMP_ABI_CALL(0x00226541u, sub_00226541); /* call 0x00226541 */

loc_0022AD7A: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0022AE2D(); return; } /* jl: less (signed <) */

loc_0022AD84: ;
    SET_LO8(ecx, MEM8(ebp + 0xC));
    MEM8(esi + 0xB) = MEM8(esi + 0xB) | 4;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x0022AD91u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022AD8Bu); } /* indirect call */
    }

loc_0022AD91: ;
    SET_LO16(eax, ZX8(MEM8(ebp + 8)));
    ecx = MEM32(esi + 4);
    SET_LO16(eax, LO16(eax) | 0x100);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(ebp + -6) = LO16(eax);
    eax = ebp + -48;
    PUSH32(esp, eax);
    MEM8(ebp + -48) = 0x30;
    MEM8(ebp + -47) = 0x40;
    MEM32(ebp + -40) = ebx;
    MEM32(ebp + -36) = ebx;
    MEM32(ebp + -32) = ebx;
    MEM32(ebp + -24) = ebx;
    MEM32(ebp + -28) = ebx;
    MEM8(ebp + -20) = LO8(ebx);
    MEM8(ebp + -19) = LO8(ebx);
    MEM8(ebp + -18) = LO8(ebx);
    MEM8(ebp + -8) = 0x41;
    MEM8(ebp + -7) = 3;
    MEM16(ebp + -4) = LO16(ebx);
    MEM16(ebp + -2) = LO16(ebx);
    PUSH32(esp, 0x0022ADDAu); RECOMP_ABI_CALL(0x00226541u, sub_00226541); /* call 0x00226541 */

loc_0022ADDA: ;
    ecx = MEM32(esi + 4);
    edi = eax;
    eax = ebp + -48;
    PUSH32(esp, eax);
    MEM8(ebp + -48) = 0x1C;
    MEM8(ebp + -47) = 0xC3;
    MEM32(ebp + -40) = ebx;
    MEM32(ebp + -36) = ebx;
    PUSH32(esp, 0x0022ADF6u); RECOMP_ABI_CALL(0x00226541u, sub_00226541); /* call 0x00226541 */

loc_0022ADF6: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x0022ADFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022ADF6u); } /* indirect call */
    }

loc_0022ADFC: ;
    MEM8(esi + 0xB) = MEM8(esi + 0xB) & 0xF9;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0022AE25(); return; } /* je: equal / zero */

loc_0022AE06: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0022AE0Fu); RECOMP_ABI_CALL(0x00226106u, sub_00226106); /* call 0x00226106 */

loc_0022AE0F: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x0022AE17u); RECOMP_ABI_CALL(0x002248A8u, sub_002248A8); /* call 0x002248A8 */

loc_0022AE17: ;
    MEM8(esi + 0xB) = MEM8(esi + 0xB) & 0xF7;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(esi + 4) = ebx;
    eax = 0x8007048Fu;
    g_seh_ebp = ebp; sub_0022AE4E(); return; /* tail jmp 0x0022AE4E */

}

/**
 * sub_0022AE25
 * Original: 0x0022AE25 - 0x0022AE2D (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AE25(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022AE25: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0022AE2D(); return; } /* jne: not equal / not zero */

loc_0022AE2B: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_0022AE2D(); return; /* fallthrough 0x0022AE2D */

}

/**
 * sub_0022AE2D
 * Original: 0x0022AE2D - 0x0022AE3F (18 bytes, 7 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AE2D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022AE2D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0022AE33u); RECOMP_ABI_CALL(0x00226139u, sub_00226139); /* call 0x00226139 */

loc_0022AE33: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_0022AE3F(); return; } /* jg: greater (signed >) */

loc_0022AE38: ;
    PUSH32(esp, 0x0022AE3Du); RECOMP_ABI_CALL(0x00226139u, sub_00226139); /* call 0x00226139 */

loc_0022AE3D: ;
    g_seh_ebp = ebp; sub_0022AE4E(); return; /* tail jmp 0x0022AE4E */

}

/**
 * sub_0022AE3F
 * Original: 0x0022AE3F - 0x0022AE4E (15 bytes, 3 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AE3F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022AE3F: ;
    PUSH32(esp, 0x0022AE44u); RECOMP_ABI_CALL(0x00226139u, sub_00226139); /* call 0x00226139 */

loc_0022AE44: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_0022AE4E(); return; /* fallthrough 0x0022AE4E */

}

/**
 * sub_0022AE4E
 * Original: 0x0022AE4E - 0x0022AE50 (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AE4E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022AE4E: ;
    POP32(esp, edi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_0022AE50(); return; /* fallthrough 0x0022AE50 */

}
