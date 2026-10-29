/**
 * DOAU1 - Recompiled code chunk 68
 * Functions: 250 (0x001DC14D - 0x001DFCA4)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001DC14D
 * Original: 0x001DC14D - 0x001DC21E (209 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC14D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DC14D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0xE);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001DC168u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DC162u); } /* indirect call */
    }

loc_001DC168: ;
    MEM8(esp + 0x14) = LO8(eax);
    eax = MEM32(ebx + 0xA78);
    MEM32(ebp) = eax;
    eax = MEM32(ebx + 0x268);
    MEM32(ebp + 4) = eax;
    eax = MEM32(ebx + 0x26C);
    MEM32(ebp + 8) = eax;
    esi = ebx + 0x8D0;
    edi = ebp + 0xC;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    esi = ebx + 0x8E0;
    edi = ebp + 0x1C;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    _fa = (uint32_t)(MEM8(ebx + 0x8CC)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x8CC), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001DC1BF; /* je: equal / zero */

loc_001DC1AA: ;
    ecx = ebx + 0xA34;
    eax = MEM32(ecx);
    eax = MEM32(eax);
    MEM32(ebp + 0x2C) = eax;
    eax = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x30) = eax;

loc_001DC1BF: ;
    SET_LO8(ecx, MEM8(ebx + 0x8C8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xC (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DC22A(); return; } /* jb: below (unsigned <) */

loc_001DC1CA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xE (8-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001DC22A(); return; } /* ja: above (unsigned >) */

loc_001DC1CF: ;
    esi = ebx + 0x934;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC1E1; /* jne: not equal / not zero */

loc_001DC1DB: ;
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 4), LO16(edx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DC22A(); return; } /* je: equal / zero */

loc_001DC1E1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 3);
    POP32(esp, ecx);
    edi = ebx + 0x918;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    SET_LO8(eax, ((_flags != 0)) ? 1 : 0); /* sete */
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC20A; /* je: equal / zero */

loc_001DC1F8: ;
    _fa = (uint32_t)(MEM16(ebx + 0x91E)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0x91E), LO16(edx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DC22A(); return; } /* je: equal / zero */

loc_001DC201: ;
    _fa = (uint32_t)(MEM8(ebx + 0x8CD)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x8CD), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DC22A(); return; } /* jne: not equal / not zero */

loc_001DC20A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(ebp + 0x34) = 1;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DC21E(); return; } /* je: equal / zero */

loc_001DC215: ;
    SET_LO16(eax, MEM16(ebx + 0x91E));
    g_seh_ebp = ebp; sub_001DC222(); return; /* tail jmp 0x001DC222 */

}

/**
 * sub_001DC21E
 * Original: 0x001DC21E - 0x001DC222 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC21E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DC21E: ;
    SET_LO16(eax, 0x20C);

    g_seh_ebp = ebp; sub_001DC222(); return; /* fallthrough 0x001DC222 */

}

/**
 * sub_001DC222
 * Original: 0x001DC222 - 0x001DC22A (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC222(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DC222: ;
    SET_HI8(ecx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    MEM16(ebp + 0x38) = LO16(ecx);

    g_seh_ebp = ebp; sub_001DC22A(); return; /* fallthrough 0x001DC22A */

}

/**
 * sub_001DC22A
 * Original: 0x001DC22A - 0x001DC23D (19 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC22A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DC22A: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001DC234u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DC22Eu); } /* indirect call */
    }

loc_001DC234: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DC23D
 * Original: 0x001DC23D - 0x001DC310 (211 bytes, 80 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC23D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC23D: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = ebx + 0xA78;
    eax = MEM32(ecx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001DC30C; /* jne: not equal / not zero */

loc_001DC252: ;
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = eax;
    SET_LO8(eax, MEM8(ebx + 0x8C8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC299; /* je: equal / zero */

loc_001DC261: ;
    ecx = MEM32(ebx + 0x8F0);
    esi = ebx + 0x908;
    edi = ebx + 0x8D0;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    esi = ebx + 0x8F8;
    edi = ebx + 0x8E0;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(ebx + 0x268) = ecx;
    ecx = MEM32(ebx + 0x8F4);
    MEM32(ebx + 0x26C) = ecx;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */

loc_001DC299: ;
    edx = ebx + 0x268;
    esi = MEM32(edx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC30C; /* je: equal / zero */

loc_001DC2A5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x16) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x16 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC30C; /* je: equal / zero */

loc_001DC2A9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 8);
    ecx = ebx + 0x26C;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp;
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = eax;
    ecx = ebx;
    PUSH32(esp, 0x001DC2C5u); RECOMP_ABI_CALL(0x001D2C45u, sub_001D2C45); /* call 0x001D2C45 */

loc_001DC2C5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ebx + 0x8D0;

loc_001DC2CD: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC2F7; /* je: equal / zero */

loc_001DC2D2: ;
    edi = eax + 1;
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebx;
    PUSH32(esp, 0x001DC2EDu); RECOMP_ABI_CALL(0x001D2C45u, sub_001D2C45); /* call 0x001D2C45 */

loc_001DC2ED: ;
    eax = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DC2CD; /* jb: below (unsigned <) */

loc_001DC2F7: ;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ebx;
    PUSH32(esp, 0x001DC30Cu); RECOMP_ABI_CALL(0x001DF90Bu, sub_001DF90B); /* call 0x001DF90B */

loc_001DC30C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DC310
 * Original: 0x001DC310 - 0x001DC33D (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DC310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC310: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001DC320u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DC31Au); } /* indirect call */
    }

loc_001DC320: ;
    MEM8(ebp + -4) = LO8(eax);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DC33D(); return; } /* jne: not equal / not zero */

loc_001DC32A: ;
    SET_LO8(eax, MEM8(ebx + 0x8CC));
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax;
    g_seh_ebp = ebp; sub_001DC44A(); return; /* tail jmp 0x001DC44A */

}

/**
 * sub_001DC33D
 * Original: 0x001DC33D - 0x001DC44A (269 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC33D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DC33D: ;
    MEM8(ebx + 0x8CC) = MEM8(ebx + 0x8CC) & 0xF7;
    _fa = (uint32_t)(MEM8(ebx + 0x8CC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, edi);
    edi = eax + 0x194;
    esi = ebx + 0xA54;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    SET_LO16(ecx, MEM16(ebx + 0xA5A));
    MEM32(eax + 0x154) = MEM32(eax + 0x154) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x154)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x158) = MEM32(eax + 0x158) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x158)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(eax + 0x19A) = LO16(ecx);
    SET_LO8(eax, MEM8(ebx + 0x8C8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xC (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC386; /* je: equal / zero */

loc_001DC37A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xD (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC386; /* je: equal / zero */

loc_001DC37E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xE (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC446; /* jne: not equal / not zero */

loc_001DC386: ;
    eax = ebp + -12;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BAE4); PUSH32(esp, 0x001DC390u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DC38Au); } /* indirect call */
    }

loc_001DC390: ;
    edi = MEM32(ebp + -8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x1E39C4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x1E39C4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DC446; /* jl: less (signed <) */

loc_001DC39F: ;
    esi = MEM32(ebp + -12);
    if (CMP_G(_fas, _fbs)) goto loc_001DC3B0; /* jg: greater (signed >) */

loc_001DC3A4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x1E39C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x1E39C0) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DC446; /* jb: below (unsigned <) */

loc_001DC3B0: ;
    eax = MEM32(ebx + 0x1D8);
    _fb = (uint32_t)(MEM32(ebx + 0x920)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebx + 0x920);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 5);
    POP32(esp, ecx);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = MEM32(ebx + 0x92C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001DC446; /* ja: above (unsigned >) */

loc_001DC3CD: ;
    ecx = ZX8(MEM8(ebx + 0x23));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x15180);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DC3DF; /* jae: above or equal (unsigned >=) */

loc_001DC3DD: ;
    ecx = edx;

loc_001DC3DF: ;
    eax = ZX8(MEM8(ebx + 0x22));
    eax = (uint32_t)((int32_t)eax * (int32_t)0xE10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DC446; /* jb: below (unsigned <) */

loc_001DC3ED: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x154) = esi;
    MEM32(eax + 0x158) = edi;
    MEM32(eax + 0x15C) = ecx;
    ecx = MEM32(ebx + 0x8F0);
    MEM32(eax + 0x160) = ecx;
    ecx = MEM32(ebx + 0x8F4);
    MEM32(eax + 0x164) = ecx;
    ecx = MEM32(ebx + 0x930);
    MEM32(eax + 0x168) = ecx;
    esi = ebx + 0x908;
    edi = eax + 0x16C;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    esi = ebx + 0x8F8;
    edi = eax + 0x17C;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */

loc_001DC446: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001DC44A(); return; /* fallthrough 0x001DC44A */

}

/**
 * sub_001DC44A
 * Original: 0x001DC44A - 0x001DC45B (17 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC44A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DC44A: ;
    SET_LO8(ecx, MEM8(ebp + -4));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001DC453u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DC44Du); } /* indirect call */
    }

loc_001DC453: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DC45B
 * Original: 0x001DC45B - 0x001DC47E (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DC45B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC45B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001DC469u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DC463u); } /* indirect call */
    }

loc_001DC469: ;
    SET_LO16(ecx, MEM16(ebp + 0xC));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(esi) (16-bit) */
    MEM8(ebp + -4) = LO8(eax);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DC47E(); return; } /* jne: not equal / not zero */

loc_001DC477: ;
    eax = 0x20C;
    g_seh_ebp = ebp; sub_001DC487(); return; /* tail jmp 0x001DC487 */

}

/**
 * sub_001DC47E
 * Original: 0x001DC47E - 0x001DC487 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC47E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DC47E: ;
    SET_LO16(eax, LO16(ecx));
    SET_HI8(edx, LO8(eax));
    SET_LO8(edx, HI8(eax));
    eax = edx;

    g_seh_ebp = ebp; sub_001DC487(); return; /* fallthrough 0x001DC487 */

}

/**
 * sub_001DC487
 * Original: 0x001DC487 - 0x001DC4F4 (109 bytes, 36 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC487(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DC487: ;
    MEM16(ebx + 0x8CE) = LO16(eax);
    SET_LO8(eax, MEM8(ebx + 0x8C8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xC (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DC4E3; /* jb: below (unsigned <) */

loc_001DC498: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xE (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001DC4E3; /* ja: above (unsigned >) */

loc_001DC49C: ;
    edx = ebx + 0x934;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC4AC; /* jne: not equal / not zero */

loc_001DC4A6: ;
    _fa = (uint32_t)(MEM16(edx + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 4), LO16(esi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC4E3; /* je: equal / zero */

loc_001DC4AC: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = eax + 0x18C;
    esi = edx;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM16(eax + 0x192) = LO16(ecx);
    MEM8(ebx + 0x8CD) = MEM8(ebx + 0x8CD) | 1;
    _fa = (uint32_t)(MEM8(ebx + 0x8CD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_HI8(eax, LO8(ecx));
    edi = ebx + 0x918;
    esi = edx;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    SET_LO8(eax, HI8(ecx));
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(ebx + 0x91E) = LO16(eax);
    POP32(esp, edi);

loc_001DC4E3: ;
    SET_LO8(ecx, MEM8(ebp + -4));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001DC4ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DC4E6u); } /* indirect call */
    }

loc_001DC4EC: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DC4F4
 * Original: 0x001DC4F4 - 0x001DC726 (562 bytes, 197 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DC4F4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC4F4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1EC);
    PUSH32(esp, 0x10040003);
    PUSH32(esp, 0x6A54454E);
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DC517u); RECOMP_ABI_CALL(0x001D84DEu, sub_001D84DE); /* call 0x001D84DE */

loc_001DC517: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(ebp + -12) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001DC722; /* je: equal / zero */

loc_001DC524: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DC52Au); RECOMP_ABI_CALL(0x001D819Au, sub_001D819A); /* call 0x001D819A */

loc_001DC52A: ;
    edx = eax + 8;
    MEM32(ebp + -16) = eax;
    eax = edx + 0xF0;
    MEM32(ebp + -4) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x7B);
    POP32(esp, ecx);
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM8(edx) = 1;
    MEM8(edx + 1) = 1;
    MEM8(edx + 2) = 6;
    eax = MEM32(ebx + 0xA7C);
    eax = BSWAP32(eax); /* bswap */
    MEM32(edx + 4) = eax;
    esi = ebx + 0x1E0;
    edi = edx + 0x1C;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM32(edx + 0xEC) = 0x63538263;
    SET_LO8(eax, MEM8(ebx + 0x8C8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC580; /* je: equal / zero */

loc_001DC578: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xD (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC580; /* je: equal / zero */

loc_001DC57C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xE (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC589; /* jne: not equal / not zero */

loc_001DC580: ;
    eax = MEM32(ebx + 0x8F0);
    MEM32(edx + 0xC) = eax;

loc_001DC589: ;
    edx = MEM32(ebp + -4);
    eax = edx + 1;
    MEM8(edx) = 0x35;
    MEM8(eax) = 1;
    SET_LO8(ecx, MEM8(ebx + 0x8C8));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC5AE; /* jne: not equal / not zero */

loc_001DC5A1: ;
    MEM8(ebx + 0xA7A) = MEM8(ebx + 0xA7A) | 1;
    _fa = (uint32_t)(MEM8(ebx + 0xA7A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax) = 8;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001DC615;

loc_001DC5AE: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC5BF; /* jne: not equal / not zero */

loc_001DC5B3: ;
    MEM8(ebx + 0xA79) = MEM8(ebx + 0xA79) | 0x10;
    _fa = (uint32_t)(MEM8(ebx + 0xA79)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax) = 1;
    goto loc_001DC5DA;

loc_001DC5BF: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC5D0; /* jne: not equal / not zero */

loc_001DC5C4: ;
    MEM8(ebx + 0xA7A) = MEM8(ebx + 0xA7A) | 4;
    _fa = (uint32_t)(MEM8(ebx + 0xA7A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax) = 4;
    goto loc_001DC5DA;

loc_001DC5D0: ;
    MEM8(ebx + 0xA79) = MEM8(ebx + 0xA79) | 0x40;
    _fa = (uint32_t)(MEM8(ebx + 0xA79)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax) = 3;

loc_001DC5DA: ;
    esi = ebx + 0x93A;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC615; /* je: equal / zero */

loc_001DC5E6: ;
    edi = esi;
    MEM8(eax) = 0xC;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edi + 1;

loc_001DC5EF: ;
    SET_LO8(edx, MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC5EF; /* jne: not equal / not zero */

loc_001DC5F6: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edi;
    MEM8(eax) = LO8(ecx);
    MEM32(ebp + -8) = ecx;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
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
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebp + -4);
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

loc_001DC615: ;
    MEM8(eax) = 0x3D;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = 7;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = eax;
    esi = ebx + 0x1E0;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebx + 0x8C8)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x8C8), 0xF (8-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001DC677; /* je: equal / zero */

loc_001DC639: ;
    MEM8(eax) = 0x3C;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = 8;
    ecx = MEM32(0x1E39C8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    ecx = MEM32(0x1E39CC);
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = 0x37;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebx + 0x8C8)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x8C8), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC667; /* jne: not equal / not zero */

loc_001DC662: ;
    MEM8(eax) = 1;
    goto loc_001DC672;

loc_001DC667: ;
    MEM8(eax) = 3;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = 3;

loc_001DC672: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = 6;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001DC677: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebx + 0x8F0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x8F0), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC6AE; /* je: equal / zero */

loc_001DC681: ;
    SET_LO8(ecx, MEM8(ebx + 0x8C8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC69B; /* je: equal / zero */

loc_001DC68C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 9 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC69B; /* je: equal / zero */

loc_001DC691: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC69B; /* je: equal / zero */

loc_001DC696: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC6AE; /* jne: not equal / not zero */

loc_001DC69B: ;
    MEM8(eax) = 0x32;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = 4;
    ecx = MEM32(ebx + 0x8F0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DC6AE: ;
    _fa = (uint32_t)(MEM32(ebx + 0x930)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x930), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC6D9; /* je: equal / zero */

loc_001DC6B6: ;
    SET_LO8(ecx, MEM8(ebx + 0x8C8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC6C6; /* je: equal / zero */

loc_001DC6C1: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC6D9; /* jne: not equal / not zero */

loc_001DC6C6: ;
    MEM8(eax) = 0x36;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = 4;
    ecx = MEM32(ebx + 0x930);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DC6D9: ;
    MEM8(eax) = 0xFF;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edx + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DC6E6; /* jae: above or equal (unsigned >=) */

loc_001DC6E4: ;
    eax = ecx;

loc_001DC6E6: ;
    ecx = MEM32(ebp + -12);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + 4) = LO16(eax);
    eax = MEM32(ebp + -16);
    MEM16(eax) = 0x4400;
    MEM16(eax + 2) = 0x4300;
    _fa = (uint32_t)(MEM8(ebx + 0x8C8)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x8C8), 0xD (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC713; /* jne: not equal / not zero */

loc_001DC70B: ;
    eax = MEM32(ebx + 0x930);
    goto loc_001DC716;

loc_001DC713: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001DC716: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x11);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DC722u); RECOMP_ABI_CALL(0x001D5C58u, sub_001D5C58); /* call 0x001D5C58 */

loc_001DC722: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001DC726
 * Original: 0x001DC726 - 0x001DC7B0 (138 bytes, 52 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DC726(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC726: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = ebp + -1;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x1C));
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x18));
    _fb = (uint32_t)(0xFFFFFF10u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFF10u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + 0x14));
    esi = ecx;
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM8(ebp + -1) = 0;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    eax = esi + 0xF0;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DC759u); RECOMP_ABI_CALL(0x001DC0B7u, sub_001DC0B7); /* call 0x001DC0B7 */

loc_001DC759: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC7AB; /* jne: not equal / not zero */

loc_001DC75D: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -1), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001DC785; /* je: equal / zero */

loc_001DC763: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x1C));
    eax = esi + 0x6C;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DC781u); RECOMP_ABI_CALL(0x001DC0B7u, sub_001DC0B7); /* call 0x001DC0B7 */

loc_001DC781: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC7AB; /* jne: not equal / not zero */

loc_001DC785: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -1), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001DC7B0(); return; } /* je: equal / zero */

loc_001DC78B: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x1C));
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DC7A7u); RECOMP_ABI_CALL(0x001DC0B7u, sub_001DC0B7); /* call 0x001DC0B7 */

loc_001DC7A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DC7B0(); return; } /* je: equal / zero */

loc_001DC7AB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001DC7B2(); return; /* tail jmp 0x001DC7B2 */

}

/**
 * sub_001DC7B0
 * Original: 0x001DC7B0 - 0x001DC7B2 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001DC7B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DC7B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001DC7B2(); return; /* fallthrough 0x001DC7B2 */

}

/**
 * sub_001DC7B2
 * Original: 0x001DC7B2 - 0x001DC7B7 (5 bytes, 3 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC7B2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DC7B2: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001DC7B7
 * Original: 0x001DC7B7 - 0x001DC96C (437 bytes, 143 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DC7B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001DC7B7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ecx;
    _fa = (uint32_t)(MEM8(ebx + 0x8C8)) & 0xFFu; _fb = (uint32_t)(0x11) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x8C8), 0x11 (8-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = eax;
    eax = ebx + 0xA0A;
    esi = eax + 1;

loc_001DC7DA: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001DC7DA; /* jne: not equal / not zero */

loc_001DC7E1: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -12) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001DC7F2; /* je: equal / zero */

loc_001DC7ED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001DC7FA;

loc_001DC7F2: ;
    eax = MEM32(ebx + 0xA34);
    eax = MEM32(eax);

loc_001DC7FA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -16) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001DC817; /* je: equal / zero */

loc_001DC805: ;
    _fa = (uint32_t)(MEM8(ebx + 0x8C9)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x8C9), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_001DC817; /* jbe: below or equal (unsigned <=) */

loc_001DC80E: ;
    MEM32(ebp + -8) = 2;
    goto loc_001DC822;

loc_001DC817: ;
    MEM32(ebp + -8) = 1;
    goto loc_001DC822;

loc_001DC820: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001DC822: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(6)) >> 32) & 1);
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x4040000);
    PUSH32(esp, 0x4954454E);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DC83Du); RECOMP_ABI_CALL(0x001D84DEu, sub_001D84DE); /* call 0x001D84DE */

loc_001DC83D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -24) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001DC967; /* je: equal / zero */

loc_001DC848: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DC84Fu); RECOMP_ABI_CALL(0x001D8186u, sub_001D8186); /* call 0x001D8186 */

loc_001DC84F: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -20) = eax;
    edx = eax + 0x14;
    if (CMP_EQ(_fa, _fb)) goto loc_001DC865; /* je: equal / zero */

loc_001DC85A: ;
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    MEM16(eax + 4) = MEM16(eax + 4) | 0xFFFF;
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    goto loc_001DC870;

loc_001DC865: ;
    esi = ebx + 0xA54;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */

loc_001DC870: ;
    esi = ebx + 0x1E0;
    edi = eax + 6;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    _fa = (uint32_t)(MEM8(ebx + 0x8CC)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x8CC), 0x80 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001DC890; /* jne: not equal / not zero */

loc_001DC885: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = 0x6388;
    if (CMP_NE(_fa, _fb)) goto loc_001DC895; /* jne: not equal / not zero */

loc_001DC890: ;
    ecx = 0x123C;

loc_001DC895: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM16(eax + 0xC) = LO16(ecx);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _cf = 0; /* logical op clears CF */
    MEM16(eax + 0x10) = MEM16(eax + 0x10) & 0;
    _fa = (uint32_t)(MEM16(eax + 0x10)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 0xF0);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x19) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(0x19)) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + 0x19);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(eax + 0xF) = LO8(ecx);
    MEM8(eax + 0xE) = 0x11;
    SET_LO16(eax, MEM16(ebp + -16));
    SET_HI8(ecx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    eax = MEM32(ebp + -20);
    MEM16(eax + 0x12) = LO16(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001DC8FA; /* je: equal / zero */

loc_001DC8C9: ;
    SET_LO16(eax, MEM16(ebp + -12));
    SET_HI8(ecx, LO8(eax));
    MEM16(edx) = 0x101;
    edi = edx + 4;
    esi = ebx + 0xA0A;
    SET_LO8(ecx, HI8(eax));
    MEM16(edx + 2) = LO16(ecx);
    ecx = MEM32(ebp + -12);
    eax = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
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
    edx = edx + eax + 4;
    goto loc_001DC91D;

loc_001DC8FA: ;
    eax = MEM32(ebx + 0xA34);
    ecx = MEM32(eax);
    esi = eax + 4;
    eax = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    eax = MEM32(ebx + 0xA34);
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(MEM32(eax))) >> 32) & 1);
    edx = edx + MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DC91D: ;
    SET_LO16(eax, 4);
    SET_HI8(ecx, LO8(eax));
    MEM16(edx) = 0x301;
    SET_LO8(ecx, HI8(eax));
    MEM16(edx + 2) = LO16(ecx);
    eax = MEM32(ebx + 0xA7C);
    PUSH32(esp, ecx);
    MEM32(edx + 4) = eax;
    eax = esp;
    PUSH32(esp, MEM32(ebp + -24));
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DC947u); RECOMP_ABI_CALL(0x001DF3D8u, sub_001DF3D8); /* call 0x001DF3D8 */

loc_001DC947: ;
    eax = MEM32(ebp + -4);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFF4000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10000)) >> 32) & 1);
    eax = eax + 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebx + 0xA78) = MEM32(ebx + 0xA78) | eax;
    _fa = (uint32_t)(MEM32(ebx + 0xA78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001DC820; /* jne: not equal / not zero */

loc_001DC967: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001DC96C
 * Original: 0x001DC96C - 0x001DC9E1 (117 bytes, 46 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DC96C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC96C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 6);
    PUSH32(esp, 0x4040000);
    PUSH32(esp, 0x4954454E);
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DC98Bu); RECOMP_ABI_CALL(0x001D84DEu, sub_001D84DE); /* call 0x001D84DE */

loc_001DC98B: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001DC9DA; /* je: equal / zero */

loc_001DC994: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DC999u); RECOMP_ABI_CALL(0x001D8186u, sub_001D8186); /* call 0x001D8186 */

loc_001DC999: ;
    esi = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(ebp + 0xC));
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    edi = eax + 6;
    esi = ebx + 0x1E0;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM16(eax + 0xC) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + 0x10));
    MEM16(eax + 0x12) = MEM16(eax + 0x12) & 0;
    _fa = (uint32_t)(MEM16(eax + 0x12)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(eax + 0x10) = LO16(ecx);
    MEM8(eax + 0xE) = 0x11;
    MEM8(eax + 0xF) = 0xA7;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, MEM32(ebp + -4));
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DC9DAu); RECOMP_ABI_CALL(0x001DF3D8u, sub_001DF3D8); /* call 0x001DF3D8 */

loc_001DC9DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001DC9E1
 * Original: 0x001DC9E1 - 0x001DCC4A (617 bytes, 191 insns)
 * Category: game_network
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DC9E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC9E1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(edx + 1));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx));
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ebp + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x21C0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0xC), 0x21C0 (16-bit) */
    PUSH32(esp, edi);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edi = ecx;
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCA09; /* je: equal / zero */

loc_001DCA05: ;
    ecx = MEM32(ecx);
    goto loc_001DCA0B;

loc_001DCA09: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001DCA0B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCBBB; /* je: equal / zero */

loc_001DCA13: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DCA84; /* jne: not equal / not zero */

loc_001DCA18: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DCBFC; /* jne: not equal / not zero */

loc_001DCA20: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), LO8(ebx) (8-bit) */
    SET_LO16(eax, MEM16(edx + 2));
    SET_HI8(edx, LO8(eax));
    SET_LO8(edx, HI8(eax));
    if (CMP_NE(_fa, _fb)) goto loc_001DCA4B; /* jne: not equal / not zero */

loc_001DCA2D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCC3B; /* je: equal / zero */

loc_001DCA37: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DCC3B; /* jne: not equal / not zero */

loc_001DCA3F: ;
    MEM16(esi + 0xA40) = LO16(edx);
    goto loc_001DCC3B;

loc_001DCA4B: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCC3B; /* je: equal / zero */

loc_001DCA55: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCC3B; /* je: equal / zero */

loc_001DCA5F: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCA78; /* je: equal / zero */

loc_001DCA65: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x5D4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x5D4 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001DCA78; /* ja: above (unsigned >) */

loc_001DCA6C: ;
    MEM16(esi + 0xA3E) = LO16(edx);
    goto loc_001DCC3B;

loc_001DCA78: ;
    MEM8(esi + 0xA39) = MEM8(esi + 0xA39) | 2;
    _fa = (uint32_t)(MEM8(esi + 0xA39)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_001DCC3B;

loc_001DCA84: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DCB1A; /* jne: not equal / not zero */

loc_001DCA8D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DCBFC; /* jne: not equal / not zero */

loc_001DCA95: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), 1 (8-bit) */
    edx = MEM32(edx + 2);
    if (CMP_NE(_fa, _fb)) goto loc_001DCAE2; /* jne: not equal / not zero */

loc_001DCA9E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xA44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0xA44) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCAC3; /* je: equal / zero */

loc_001DCAA6: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCC3B; /* je: equal / zero */

loc_001DCAB0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DCC3B; /* jne: not equal / not zero */

loc_001DCAB8: ;
    MEM32(esi + 0xA48) = edx;
    goto loc_001DCC3B;

loc_001DCAC3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCADB; /* je: equal / zero */

loc_001DCAC7: ;
    edx = ~edx;
    MEM8(ecx) = 5;
    MEM8(ecx + 1) = 6;
    MEM32(ecx + 2) = edx;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DCAD6: ;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = ecx;

loc_001DCADB: ;
    PUSH32(esp, 2);
    goto loc_001DCC3D;

loc_001DCAE2: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCC3B; /* je: equal / zero */

loc_001DCAEC: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCC3B; /* je: equal / zero */

loc_001DCAF6: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DCB08; /* jne: not equal / not zero */

loc_001DCAFC: ;
    MEM8(esi + 0xA39) = MEM8(esi + 0xA39) | 1;
    _fa = (uint32_t)(MEM8(esi + 0xA39)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_001DCC3B;

loc_001DCB08: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DCB0Fu); RECOMP_ABI_CALL(0x001D8157u, sub_001D8157); /* call 0x001D8157 */

loc_001DCB0F: ;
    MEM32(esi + 0xA44) = eax;
    goto loc_001DCC3B;

loc_001DCB1A: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DCC40; /* jne: not equal / not zero */

loc_001DCB24: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DCC40; /* jne: not equal / not zero */

loc_001DCB2D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DCBFC; /* jb: below (unsigned <) */

loc_001DCB35: ;
    SET_LO16(edi, MEM16(edx + 2));
    if (CMP_NE(_fa, _fb)) goto loc_001DCB68; /* jne: not equal / not zero */

loc_001DCB3B: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0x23C0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0x23C0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DCB68; /* jne: not equal / not zero */

loc_001DCB42: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001DCB45: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DCB7D; /* jne: not equal / not zero */

loc_001DCB4B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCADB; /* je: equal / zero */

loc_001DCB4F: ;
    MEM8(ecx) = 3;
    MEM8(ecx + 1) = 5;
    MEM16(ecx + 2) = 0x23C2;
    MEM8(ecx + 4) = 5;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001DCAD6;

loc_001DCB68: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DCB45; /* jne: not equal / not zero */

loc_001DCB6E: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0x23C2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0x23C2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DCB45; /* jne: not equal / not zero */

loc_001DCB75: ;
    _fa = (uint32_t)(MEM8(edx + 4)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 4), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DCB45; /* jne: not equal / not zero */

loc_001DCB7A: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001DCB7D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCC3B; /* je: equal / zero */

loc_001DCB87: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DCC3B; /* jne: not equal / not zero */

loc_001DCB8F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(ecx, MEM8(esi + 0xA39));
    SET_LO8(ecx, LO8(ecx) & 0xC);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0xA39) = LO8(eax);
    goto loc_001DCC3B;

loc_001DCBBB: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DCBCC; /* jne: not equal / not zero */

loc_001DCBC1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DCC40; /* jne: not equal / not zero */

loc_001DCBC6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DCBFC; /* jne: not equal / not zero */

loc_001DCBCA: ;
    goto loc_001DCC3B;

loc_001DCBCC: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCC00; /* je: equal / zero */

loc_001DCBD1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x81) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x81 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCBDB; /* je: equal / zero */

loc_001DCBD6: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x83) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x83 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DCC40; /* jne: not equal / not zero */

loc_001DCBDB: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x81) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x81 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x81) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x81 (8-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ebx, LO8(ebx) - 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(ebx, LO8(ebx) & 0xE0);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x40) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + 0x40);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edi = esi + ecx * 4 + 0x8F8;

loc_001DCBF8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCC0A; /* je: equal / zero */

loc_001DCBFC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001DCC43;

loc_001DCC00: ;
    edi = esi + 0x8F0;
    SET_LO8(ebx, 0x10);
    goto loc_001DCBF8;

loc_001DCC0A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCC3B; /* je: equal / zero */

loc_001DCC10: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), 2 (8-bit) */
    eax = MEM32(edx + 2);
    MEM32(ebp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001DCC3B; /* je: equal / zero */

loc_001DCC1C: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCC35; /* je: equal / zero */

loc_001DCC22: ;
    ecx = ebp + 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DCC2Au); RECOMP_ABI_CALL(0x001D85F2u, sub_001D85F2); /* call 0x001D85F2 */

loc_001DCC2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCC35; /* je: equal / zero */

loc_001DCC2E: ;
    eax = MEM32(ebp + 0xC);
    MEM32(edi) = eax;
    goto loc_001DCC3B;

loc_001DCC35: ;
    MEM8(esi + 0xA39) = MEM8(esi + 0xA39) | LO8(ebx);
    _fa = (uint32_t)(MEM8(esi + 0xA39)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_001DCC3B: ;
    PUSH32(esp, 3);

loc_001DCC3D: ;
    POP32(esp, eax);
    goto loc_001DCC43;

loc_001DCC40: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001DCC43: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001DCC4A
 * Original: 0x001DCC4A - 0x001DCD92 (328 bytes, 122 insns)
 * Category: game_network
 * CC: cdecl, 14 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DCC4A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DCC4A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x34);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001DCC79; /* jne: not equal / not zero */

loc_001DCC5D: ;
    SET_LO16(eax, MEM16(ecx + 0xA5C));
    MEM16(ebp + 0x38) = LO16(eax);
    SET_LO16(eax, MEM16(ecx + 0xA5A));
    esi = ecx + 0xA54;
    MEM16(ebp + 0x3C) = LO16(eax);

loc_001DCC79: ;
    edx = MEM32(ebp + 0x20);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebp + 0x30);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    eax = eax + edx + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC0000);
    PUSH32(esp, 0x4B54454E);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DCC9Eu); RECOMP_ABI_CALL(0x001D84DEu, sub_001D84DE); /* call 0x001D84DE */

loc_001DCC9E: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCD8B; /* je: equal / zero */

loc_001DCCA8: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DCCAFu); RECOMP_ABI_CALL(0x001D8186u, sub_001D8186); /* call 0x001D8186 */

loc_001DCCAF: ;
    SET_LO16(ecx, MEM16(ebp + 0x38));
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
    MEM16(eax + 0xC) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + 0x3C));
    MEM16(eax + 0x10) = LO16(ecx);
    MEM8(eax + 0xE) = 0x11;
    MEM8(eax + 0xF) = 0;
    SET_LO16(ecx, MEM16(ebx + 4));
    _fb = (uint32_t)(2) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 2);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    SET_HI8(edx, LO8(ecx));
    _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1A;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, HI8(ecx));
    SET_LO16(ecx, MEM16(ebp + 8));
    MEM16(eax + -6) = LO16(ecx);
    SET_LO8(ecx, MEM8(ebp + 0xC));
    MEM16(eax + -8) = LO16(edx);
    MEM8(eax + -4) = LO8(ecx);
    SET_LO8(ecx, MEM8(ebp + 0x10));
    MEM8(eax + -3) = LO8(ecx);
    SET_LO16(ecx, MEM16(ebx + 4));
    SET_HI8(edx, LO8(ecx));
    SET_LO8(edx, HI8(ecx));
    ecx = MEM32(ebp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM16(eax + -2) = LO16(edx);
    if (CMP_BE(_fa, _fb)) goto loc_001DCD2A; /* jbe: below or equal (unsigned <=) */

loc_001DCD15: ;
    esi = MEM32(ebp + 0x14);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DCD2A: ;
    ecx = MEM32(ebp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DCD46; /* jbe: below or equal (unsigned <=) */

loc_001DCD31: ;
    esi = MEM32(ebp + 0x1C);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DCD46: ;
    ecx = MEM32(ebp + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DCD62; /* jbe: below or equal (unsigned <=) */

loc_001DCD4D: ;
    esi = MEM32(ebp + 0x24);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DCD62: ;
    ecx = MEM32(ebp + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DCD7C; /* jbe: below or equal (unsigned <=) */

loc_001DCD69: ;
    esi = MEM32(ebp + 0x2C);
    edi = eax;
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

loc_001DCD7C: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    eax = esp;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DCD8Bu); RECOMP_ABI_CALL(0x001DF3D8u, sub_001DF3D8); /* call 0x001DF3D8 */

loc_001DCD8B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 60; return; /* ret 56 */

}

/**
 * sub_001DCD92
 * Original: 0x001DCD92 - 0x001DCE1C (138 bytes, 58 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DCD92(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DCD92: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(ecx + 0xA39)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0xA39), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001DCE1A; /* jne: not equal / not zero */

loc_001DCD9F: ;
    edx = ecx + 0xA3B;
    SET_LO8(eax, MEM8(edx));
    MEM8(ecx + 0xA3A) = LO8(eax);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    MEM8(edx) = LO8(eax);
    PUSH32(esp, esi);
    eax = ecx + 0x962;
    PUSH32(esp, edi);
    esi = eax + 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001DCDBF: ;
    SET_LO8(ebx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DCDBF; /* jne: not equal / not zero */

loc_001DCDC6: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ecx + 0x9A2;
    MEM8(ebp + -1) = LO8(eax);
    eax = esi;
    edi = eax + 1;

loc_001DCDD6: ;
    SET_LO8(ebx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DCDD6; /* jne: not equal / not zero */

loc_001DCDDD: ;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    MEM8(ebp + -2) = LO8(eax);
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    eax = ebp + -2;
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebp + -1));
    PUSH32(esp, eax);
    eax = ecx + 0x962;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    eax = ebp + -1;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0xA3A));
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x23C0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DCE17u); RECOMP_ABI_CALL(0x001DCC4Au, sub_001DCC4A); /* call 0x001DCC4A */

loc_001DCE17: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001DCE1A: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001DCE1C
 * Original: 0x001DCE1C - 0x001DCE4C (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DCE1C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DCE1C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DCE4C(); return; } /* jne: not equal / not zero */

loc_001DCE2A: ;
    eax = esi + 0xA54;
    MEM32(ebp + 8) = eax;
    SET_LO16(eax, MEM16(esi + 0xA5C));
    MEM16(ebp + 0xC) = LO16(eax);
    eax = esi + 0xA5A;
    SET_LO16(edi, MEM16(eax));
    MEM16(eax) = LO16(ecx);
    g_seh_ebp = ebp; sub_001DCE4F(); return; /* tail jmp 0x001DCE4F */

}

/**
 * sub_001DCE4C
 * Original: 0x001DCE4C - 0x001DCE4F (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCE4C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DCE4C: ;
    edi = MEM32(ebp + 0x10);

    g_seh_ebp = ebp; sub_001DCE4F(); return; /* fallthrough 0x001DCE4F */

}

/**
 * sub_001DCE4F
 * Original: 0x001DCE4F - 0x001DCEA1 (82 bytes, 40 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCE4F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DCE4F: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), LO16(ecx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCE9B; /* je: equal / zero */

loc_001DCE54: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = esi + 0xA3B;
    PUSH32(esp, MEM32(ebp + 8));
    SET_LO8(edx, MEM8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    SET_LO8(ebx, LO8(edx));
    PUSH32(esp, 5);
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x21C0);
    ecx = esi;
    MEM8(eax) = LO8(ebx);
    PUSH32(esp, 0x001DCE81u); RECOMP_ABI_CALL(0x001DCC4Au, sub_001DCC4A); /* call 0x001DCC4A */

loc_001DCE81: ;
    SET_LO16(eax, MEM16(ebp + 0xC));
    SET_HI8(ecx, LO8(eax));
    PUSH32(esp, edi);
    SET_LO8(ecx, HI8(eax));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_HI8(eax, LO8(ecx));
    SET_LO8(eax, HI8(ecx));
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001DCE9Au); RECOMP_ABI_CALL(0x001DC96Cu, sub_001DC96C); /* call 0x001DC96C */

loc_001DCE9A: ;
    POP32(esp, ebx);

loc_001DCE9B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001DCEA1
 * Original: 0x001DCEA1 - 0x001DCF7B (218 bytes, 75 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DCEA1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DCEA1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(ecx + 0x8C8)) & 0xFFu; _fb = (uint32_t)(0x13) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x8C8), 0x13 (8-bit) */
    SET_LO8(edx, MEM8(ecx + 0xA39));
    PUSH32(esp, esi);
    eax = ebp + -28;
    if (CMP_NE(_fa, _fb)) goto loc_001DCEFA; /* jne: not equal / not zero */

loc_001DCEBA: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001DCEDB; /* jne: not equal / not zero */

loc_001DCEBF: ;
    SET_LO16(eax, MEM16(ecx + 0xA3E));
    PUSH32(esp, ebx);
    SET_HI8(ebx, LO8(eax));
    MEM8(ebp + -28) = 1;
    MEM8(ebp + -27) = 4;
    SET_LO8(ebx, HI8(eax));
    eax = ebp + -24;
    MEM16(ebp + -26) = LO16(ebx);
    POP32(esp, ebx);

loc_001DCEDB: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001DCEF3; /* jne: not equal / not zero */

loc_001DCEE0: ;
    MEM8(eax) = 5;
    MEM8(eax + 1) = 6;
    edx = MEM32(ecx + 0xA44);
    MEM32(eax + 2) = edx;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DCEF3: ;
    esi = 0x21C0;
    goto loc_001DCF4C;

loc_001DCEFA: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001DCF13; /* jne: not equal / not zero */

loc_001DCEFF: ;
    eax = MEM32(ecx + 0x8F0);
    MEM32(ebp + -26) = eax;
    MEM8(ebp + -28) = 3;
    MEM8(ebp + -27) = 6;
    eax = ebp + -22;

loc_001DCF13: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001DCF2B; /* jne: not equal / not zero */

loc_001DCF18: ;
    MEM8(eax) = 0x81;
    MEM8(eax + 1) = 6;
    edx = MEM32(ecx + 0x8F8);
    MEM32(eax + 2) = edx;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DCF2B: ;
    _fa = (uint32_t)(MEM8(ecx + 0xA39)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0xA39), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001DCF47; /* jne: not equal / not zero */

loc_001DCF34: ;
    MEM8(eax) = 0x83;
    MEM8(eax + 1) = 6;
    edx = MEM32(ecx + 0x8FC);
    MEM32(eax + 2) = edx;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DCF47: ;
    esi = 0x2180;

loc_001DCF4C: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    MEM8(ecx + 0xA79) = MEM8(ecx + 0xA79) | 0x40;
    _fa = (uint32_t)(MEM8(ecx + 0xA79)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    edx = ebp + -28;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = edx;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0xA3A));
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DCF78u); RECOMP_ABI_CALL(0x001DCC4Au, sub_001DCC4A); /* call 0x001DCC4A */

loc_001DCF78: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001DCF7B
 * Original: 0x001DCF7B - 0x001DCFB3 (56 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCF7B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DCF7B: ;
    SET_LO8(eax, MEM8(esp + 4));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    ebx = 0xC0000000u;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x8C8)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x8C8) (8-bit) */
    MEM8(esi + 0x8C8) = LO8(eax);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0xA7C) = MEM32(esi + 0xA7C) + edx;
    _fa = (uint32_t)(MEM32(esi + 0xA7C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DCFB3(); return; } /* jne: not equal / not zero */

loc_001DCFAA: ;
    MEM8(esi + 0x8C9) = 0;
    g_seh_ebp = ebp; sub_001DCFC5(); return; /* tail jmp 0x001DCFC5 */

}

/**
 * sub_001DCF8D
 * Original: 0x001DCF8D - 0x001DCFB3 (38 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCF8D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DCF8D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x8C8)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x8C8) (8-bit) */
    MEM8(esi + 0x8C8) = LO8(eax);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0xA7C) = MEM32(esi + 0xA7C) + edx;
    _fa = (uint32_t)(MEM32(esi + 0xA7C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DCFB3(); return; } /* jne: not equal / not zero */

loc_001DCFAA: ;
    MEM8(esi + 0x8C9) = 0;
    g_seh_ebp = ebp; sub_001DCFC5(); return; /* tail jmp 0x001DCFC5 */

}

/**
 * sub_001DCFB3
 * Original: 0x001DCFB3 - 0x001DCFC5 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCFB3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DCFB3: ;
    SET_LO8(eax, MEM8(esi + 0x8C9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DCFC5(); return; } /* jae: above or equal (unsigned >=) */

loc_001DCFBD: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0x8C9) = LO8(eax);

    g_seh_ebp = ebp; sub_001DCFC5(); return; /* fallthrough 0x001DCFC5 */

}

/**
 * sub_001DCFC5
 * Original: 0x001DCFC5 - 0x001DD1BF (506 bytes, 143 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCFC5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DCFC5: ;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    MEM32(eax) = edi;
    eax = esp;
    ecx = esi;
    MEM32(eax) = edi;
    PUSH32(esp, 0x001DCFD7u); RECOMP_ABI_CALL(0x001DF90Bu, sub_001DF90B); /* call 0x001DF90B */

loc_001DCFD7: ;
    eax = ZX8(MEM8(esi + 0x8C8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001DD19B; /* ja: above (unsigned >) */

loc_001DCFE7: ;
    eax = ZX8(MEM8(eax + 0x1DD2A9));
    { uint32_t _jt = MEM32(eax * 4 + 0x1DD275); /* switch: 13 entries, 13 targets */
    if (_jt == 0x001DCFF5u) goto loc_001DCFF5;
    if (_jt == 0x001DD022u) goto loc_001DD022;
    if (_jt == 0x001DD064u) goto loc_001DD064;
    if (_jt == 0x001DD088u) goto loc_001DD088;
    if (_jt == 0x001DD094u) goto loc_001DD094;
    if (_jt == 0x001DD0A4u) goto loc_001DD0A4;
    if (_jt == 0x001DD13Au) goto loc_001DD13A;
    if (_jt == 0x001DD150u) goto loc_001DD150;
    if (_jt == 0x001DD159u) goto loc_001DD159;
    if (_jt == 0x001DD182u) goto loc_001DD182;
    if (_jt == 0x001DD18Bu) goto loc_001DD18B;
    if (_jt == 0x001DD194u) goto loc_001DD194;
    if (_jt == 0x001DD19Bu) goto loc_001DD19B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001DCFF5: ;
    _fa = (uint32_t)(MEM8(esi + 0x8C9)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x8C9), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DD12B; /* jne: not equal / not zero */

loc_001DD002: ;
    eax = esi + 0x8CA;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x2D)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(esi + 0x2D) (8-bit) */
    MEM8(eax) = LO8(edx);
    if (CMP_B(_fa, _fb)) goto loc_001DD0A8; /* jb: below (unsigned <) */

loc_001DD019: ;
    MEM8(esi + 0xA7B) = MEM8(esi + 0xA7B) | 0x80;
    _fa = (uint32_t)(MEM8(esi + 0xA7B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_001DD05B;

loc_001DD022: ;
    _fa = (uint32_t)(MEM8(esi + 0x8C9)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x8C9), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DD150; /* jne: not equal / not zero */

loc_001DD02F: ;
    eax = esi + 0x8CA;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x18)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(esi + 0x18) (8-bit) */
    MEM8(eax) = LO8(edx);
    if (CMP_B(_fa, _fb)) goto loc_001DD150; /* jb: below (unsigned <) */

loc_001DD046: ;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 5), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001DD055; /* je: equal / zero */

loc_001DD04C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, 0x17);
    g_seh_ebp = ebp; sub_001DCF8D(); return; /* tail jmp 0x001DCF8D */

loc_001DD055: ;
    MEM32(esi + 0xA78) = MEM32(esi + 0xA78) | ebx;
    _fa = (uint32_t)(MEM32(esi + 0xA78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001DD05B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001DCF8D(); return; /* tail jmp 0x001DCF8D */

loc_001DD064: ;
    _fa = (uint32_t)(MEM8(esi + 0xA79)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xA79), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001DD088; /* jne: not equal / not zero */

loc_001DD06D: ;
    eax = MEM32(esi + 0xAF8);
    MEM8(esi + 0x8CC) = MEM8(esi + 0x8CC) | 8;
    _fa = (uint32_t)(MEM8(esi + 0x8CC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DD088; /* je: equal / zero */

loc_001DD07E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BC5C); PUSH32(esp, 0x001DD088u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DD082u); } /* indirect call */
    }

loc_001DD088: ;
    ecx = esi;
    PUSH32(esp, 0x001DD08Fu); RECOMP_ABI_CALL(0x001DC23Du, sub_001DC23D); /* call 0x001DC23D */

loc_001DD08F: ;
    goto loc_001DD19B;

loc_001DD094: ;
    PUSH32(esp, edi);

loc_001DD095: ;
    eax = esi + 0x8F0;
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, MEM32(eax));
    goto loc_001DD147;

loc_001DD0A4: ;
    PUSH32(esp, 1);
    goto loc_001DD095;

loc_001DD0A8: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    ebx = 0xFE;
    MEM8(esi + 0x8F0) = 0xA9;
    MEM8(esi + 0x8F1) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_001DD103; /* jne: not equal / not zero */

loc_001DD0BF: ;
    ecx = ZX8(MEM8(esi + 0x1E2));
    eax = ZX8(MEM8(esi + 0x1E4));
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ZX8(MEM8(esi + 0x1E0));
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ebx;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = ZX8(MEM8(esi + 0x1E3));
    eax = ZX8(MEM8(esi + 0x1E5));
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ZX8(MEM8(esi + 0x1E1));
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0x8F2) = LO8(edx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    goto loc_001DD123;

loc_001DD103: ;
    ecx = esi;
    PUSH32(esp, 0x001DD10Au); RECOMP_ABI_CALL(0x001D8157u, sub_001D8157); /* call 0x001D8157 */

loc_001DD10A: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ecx = esi;
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0x8F2) = LO8(edx);
    PUSH32(esp, 0x001DD11Fu); RECOMP_ABI_CALL(0x001D8157u, sub_001D8157); /* call 0x001D8157 */

loc_001DD11F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }

loc_001DD123: ;
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0x8F3) = LO8(edx);

loc_001DD12B: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esi + 0x8F0));
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edi;
    goto loc_001DD147;

loc_001DD13A: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x908));
    PUSH32(esp, MEM32(esi + 0x8F0));

loc_001DD147: ;
    ecx = esi;
    PUSH32(esp, 0x001DD14Eu); RECOMP_ABI_CALL(0x001DF90Bu, sub_001DF90B); /* call 0x001DF90B */

loc_001DD14E: ;
    goto loc_001DD19B;

loc_001DD150: ;
    ecx = esi;
    PUSH32(esp, 0x001DD157u); RECOMP_ABI_CALL(0x001DC4F4u, sub_001DC4F4); /* call 0x001DC4F4 */

loc_001DD157: ;
    goto loc_001DD19B;

loc_001DD159: ;
    _fa = (uint32_t)(MEM8(esi + 0x8C9)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x8C9), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DD182; /* jne: not equal / not zero */

loc_001DD162: ;
    eax = esi + 0x8CA;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(esi + 0x25) (8-bit) */
    MEM8(eax) = LO8(edx);
    if (CMP_B(_fa, _fb)) goto loc_001DD182; /* jb: below (unsigned <) */

loc_001DD175: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001DD17Du); RECOMP_ABI_CALL(0x001DDB3Eu, sub_001DDB3E); /* call 0x001DDB3E */

loc_001DD17D: ;
    g_seh_ebp = ebp; sub_001DD26F(); return; /* tail jmp 0x001DD26F */

loc_001DD182: ;
    ecx = esi;
    PUSH32(esp, 0x001DD189u); RECOMP_ABI_CALL(0x001DC7B7u, sub_001DC7B7); /* call 0x001DC7B7 */

loc_001DD189: ;
    goto loc_001DD19B;

loc_001DD18B: ;
    ecx = esi;
    PUSH32(esp, 0x001DD192u); RECOMP_ABI_CALL(0x001DCEA1u, sub_001DCEA1); /* call 0x001DCEA1 */

loc_001DD192: ;
    goto loc_001DD19B;

loc_001DD194: ;
    ecx = esi;
    PUSH32(esp, 0x001DD19Bu); RECOMP_ABI_CALL(0x001DCD92u, sub_001DCD92); /* call 0x001DCD92 */

loc_001DD19B: ;
    SET_LO8(edx, MEM8(esi + 0x8C8));
    ecx = ZX8(LO8(edx));
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x19 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD254(); return; } /* ja: above (unsigned >) */

loc_001DD1B1: ;
    ecx = ZX8(MEM8(ecx + 0x1DD2ED));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x1DD2C5)); return; /* indirect tail jmp */

}

/**
 * sub_001DD1BF
 * Original: 0x001DD1BF - 0x001DD1CA (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD1BF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD1BF: ;
    eax = MEM32(esi + 0x1D8);
    g_seh_ebp = ebp; sub_001DD254(); return; /* tail jmp 0x001DD254 */

}

/**
 * sub_001DD1CA
 * Original: 0x001DD1CA - 0x001DD275 (171 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD1CA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD1CA: ;
    eax = ZX8(MEM8(esi + 0x12));
    goto loc_001DD24B;

loc_001DD24B: ;
    eax = eax + eax * 4;
    _fb = (uint32_t)(MEM32(esi + 0x1D8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x1D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x1D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DD260; /* jae: above or equal (unsigned >=) */

loc_001DD25E: ;
    eax = ecx;

loc_001DD260: ;
    PUSH32(esp, eax);
    eax = esi + 0xA68;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001DD26Fu); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001DD26F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DD1D0
 * Original: 0x001DD1D0 - 0x001DD275 (165 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD1D0: ;
    eax = ZX8(MEM8(esi + 0x30));
    goto loc_001DD1DA;

loc_001DD1DA: ;
    eax = eax + eax * 4;
    PUSH32(esp, 5);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    goto loc_001DD24E;

loc_001DD24E: ;
    _fb = (uint32_t)(MEM32(esi + 0x1D8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x1D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x1D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DD260; /* jae: above or equal (unsigned >=) */

loc_001DD25E: ;
    eax = ecx;

loc_001DD260: ;
    PUSH32(esp, eax);
    eax = esi + 0xA68;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001DD26Fu); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001DD26F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DD1D6
 * Original: 0x001DD1D6 - 0x001DD275 (159 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD1D6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD1D6: ;
    eax = ZX8(MEM8(esi + 0x2F));
    eax = eax + eax * 4;
    PUSH32(esp, 5);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    goto loc_001DD24E;

loc_001DD24E: ;
    _fb = (uint32_t)(MEM32(esi + 0x1D8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x1D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x1D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DD260; /* jae: above or equal (unsigned >=) */

loc_001DD25E: ;
    eax = ecx;

loc_001DD260: ;
    PUSH32(esp, eax);
    eax = esi + 0xA68;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001DD26Fu); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001DD26F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DD1E5
 * Original: 0x001DD1E5 - 0x001DD275 (144 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD1E5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD1E5: ;
    eax = ZX8(MEM8(esi + 0x1D));
    goto loc_001DD24B;

loc_001DD24B: ;
    eax = eax + eax * 4;
    _fb = (uint32_t)(MEM32(esi + 0x1D8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x1D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x1D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DD260; /* jae: above or equal (unsigned >=) */

loc_001DD25E: ;
    eax = ecx;

loc_001DD260: ;
    PUSH32(esp, eax);
    eax = esi + 0xA68;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001DD26Fu); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001DD26F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DD1EB
 * Original: 0x001DD1EB - 0x001DD275 (138 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD1EB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD1EB: ;
    eax = MEM32(esi + 0x924);
    eax = eax + eax * 4;
    _fb = (uint32_t)(MEM32(esi + 0x920)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x920);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001DD254;

loc_001DD254: ;
    ecx = MEM32(esi + 0x1D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DD260; /* jae: above or equal (unsigned >=) */

loc_001DD25E: ;
    eax = ecx;

loc_001DD260: ;
    PUSH32(esp, eax);
    eax = esi + 0xA68;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001DD26Fu); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001DD26F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DD1FC
 * Original: 0x001DD1FC - 0x001DD275 (121 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD1FC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD1FC: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xD (8-bit) */
    eax = MEM32(esi + 0x1D8);
    if (CMP_NE(_fa, _fb)) goto loc_001DD20F; /* jne: not equal / not zero */

loc_001DD207: ;
    ecx = MEM32(esi + 0x928);
    goto loc_001DD215;

loc_001DD20F: ;
    ecx = MEM32(esi + 0x92C);

loc_001DD215: ;
    edi = ecx + ecx * 4;
    _fb = (uint32_t)(MEM32(esi + 0x920)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esi + 0x920);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DD254; /* jae: above or equal (unsigned >=) */

loc_001DD222: ;
    edx = ZX8(MEM8(esi + 0x1F));
    ecx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx + edx * 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DD237; /* jb: below (unsigned <) */

loc_001DD233: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001DD239;

loc_001DD237: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DD239: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DD254; /* jbe: below or equal (unsigned <=) */

loc_001DD23D: ;
    eax = edi;
    goto loc_001DD254;

loc_001DD254: ;
    ecx = MEM32(esi + 0x1D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DD260; /* jae: above or equal (unsigned >=) */

loc_001DD25E: ;
    eax = ecx;

loc_001DD260: ;
    PUSH32(esp, eax);
    eax = esi + 0xA68;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001DD26Fu); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001DD26F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DD241
 * Original: 0x001DD241 - 0x001DD275 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD241(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD241: ;
    eax = ZX8(MEM8(esi + 0x24));
    goto loc_001DD24B;

loc_001DD24B: ;
    eax = eax + eax * 4;
    _fb = (uint32_t)(MEM32(esi + 0x1D8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x1D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x1D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DD260; /* jae: above or equal (unsigned >=) */

loc_001DD25E: ;
    eax = ecx;

loc_001DD260: ;
    PUSH32(esp, eax);
    eax = esi + 0xA68;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001DD26Fu); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001DD26F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DD247
 * Original: 0x001DD247 - 0x001DD275 (46 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD247(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD247: ;
    eax = ZX8(MEM8(esi + 0x2A));
    eax = eax + eax * 4;
    _fb = (uint32_t)(MEM32(esi + 0x1D8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x1D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x1D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DD260; /* jae: above or equal (unsigned >=) */

loc_001DD25E: ;
    eax = ecx;

loc_001DD260: ;
    PUSH32(esp, eax);
    eax = esi + 0xA68;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001DD26Fu); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001DD26F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DD254
 * Original: 0x001DD254 - 0x001DD275 (33 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD254(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD254: ;
    ecx = MEM32(esi + 0x1D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DD260; /* jae: above or equal (unsigned >=) */

loc_001DD25E: ;
    eax = ecx;

loc_001DD260: ;
    PUSH32(esp, eax);
    eax = esi + 0xA68;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001DD26Fu); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001DD26F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DD26F
 * Original: 0x001DD26F - 0x001DD275 (6 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD26F(void)
{

loc_001DD26F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DD307
 * Original: 0x001DD307 - 0x001DD38F (136 bytes, 39 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DD307(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD307: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0x13) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0x13 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001DD372; /* jne: not equal / not zero */

loc_001DD316: ;
    ecx = esi + 0xA3B;
    SET_LO8(eax, MEM8(ecx));
    MEM8(esi + 0xA3A) = LO8(eax);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = esi + 0xA44;
    MEM8(ecx) = LO8(eax);
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esi + 0xA38) = 1;
    MEM16(esi + 0xA3E) = 0x5D4;
    if (CMP_NE(_fa, _fb)) goto loc_001DD34C; /* jne: not equal / not zero */

loc_001DD345: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DD34Cu); RECOMP_ABI_CALL(0x001D8157u, sub_001D8157); /* call 0x001D8157 */

loc_001DD34C: ;
    MEM8(esi + 0xA39) = MEM8(esi + 0xA39) & 0xF0;
    _fa = (uint32_t)(MEM8(esi + 0xA39)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(edi) = eax;
    eax = esi + 0xA78;
    ecx = MEM32(eax);
    ecx = ecx & 0xF0001FFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x1000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(esi + 0xA3C) = LO8(ebx);
    MEM32(eax) = ecx;
    POP32(esp, edi);

loc_001DD372: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0x14) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0x14 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD3C1(); return; } /* jne: not equal / not zero */

loc_001DD378: ;
    SET_LO8(eax, MEM8(esi + 0xA39));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xC (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD38F(); return; } /* jne: not equal / not zero */

loc_001DD382: ;
    MEM8(esi + 0xA3C) = 3;
    MEM8(ebp + 8) = 0x15;
    g_seh_ebp = ebp; sub_001DD3C7(); return; /* tail jmp 0x001DD3C7 */

}

/**
 * sub_001DD38F
 * Original: 0x001DD38F - 0x001DD3C1 (50 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD38F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD38F: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, ((_fa == 0)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    MEM8(esi + 0xA3C) = LO8(ecx);
    ecx = esi + 0xA78;
    edx = MEM32(ecx);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFC000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x8000)) >> 32) & 1);
    eax = eax + 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xF0002FFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x2000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = eax;

    g_seh_ebp = ebp; sub_001DD3C1(); return; /* fallthrough 0x001DD3C1 */

}

/**
 * sub_001DD3C1
 * Original: 0x001DD3C1 - 0x001DD3C7 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD3C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD3C1: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0x15) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0x15 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD406(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001DD3C7(); return; /* fallthrough 0x001DD3C7 */

}

/**
 * sub_001DD3C7
 * Original: 0x001DD3C7 - 0x001DD406 (63 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD3C7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD3C7: ;
    ecx = esi + 0xA3B;
    SET_LO8(eax, MEM8(ecx));
    MEM8(esi + 0xA3A) = LO8(eax);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx) = LO8(eax);
    eax = esi + 0xA78;
    ecx = MEM32(eax);
    ecx = ecx & 0xF0003FFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x3000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(esi + 0x8CC)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x8CC), 0x40 (8-bit) */
    MEM8(esi + 0xA3D) = 1;
    MEM32(eax) = ecx;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD441(); return; } /* je: equal / zero */

loc_001DD3FF: ;
    MEM8(esi + 0xA39) = MEM8(esi + 0xA39) | 0x60;
    _fa = (uint32_t)(MEM8(esi + 0xA39)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001DD406(); return; /* fallthrough 0x001DD406 */

}

/**
 * sub_001DD406
 * Original: 0x001DD406 - 0x001DD441 (59 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD406(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD406: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0x16) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0x16 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD441(); return; } /* jne: not equal / not zero */

loc_001DD40C: ;
    _fa = (uint32_t)(MEM32(esi + 0x8F0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x8F0), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DD420; /* jne: not equal / not zero */

loc_001DD414: ;
    MEM16(esi + 0xA7A) = MEM16(esi + 0xA7A) | 0x8080;
    _fa = (uint32_t)(MEM16(esi + 0xA7A)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM8(ebp + 8) = LO8(ebx);

loc_001DD420: ;
    ecx = esi + 0x8F8;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD441(); return; } /* jne: not equal / not zero */

loc_001DD42A: ;
    eax = esi + 0x8FC;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    MEM32(ecx) = edx;
    MEM32(eax) = ebx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD441(); return; } /* jne: not equal / not zero */

loc_001DD43A: ;
    MEM8(esi + 0xA7B) = MEM8(esi + 0xA7B) | 1;
    _fa = (uint32_t)(MEM8(esi + 0xA7B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001DD441(); return; /* fallthrough 0x001DD441 */

}

/**
 * sub_001DD441
 * Original: 0x001DD441 - 0x001DD452 (17 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD441(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD441: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    PUSH32(esp, 0x001DD44Cu); RECOMP_ABI_CALL(0x001DCF7Bu, sub_001DCF7B); /* call 0x001DCF7B */

loc_001DD44C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DD452
 * Original: 0x001DD452 - 0x001DD47D (43 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD452(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD452: ;
    SET_LO8(eax, MEM8(ecx + 0x8C8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD4C1(); return; } /* je: equal / zero */

loc_001DD45C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD4AA(); return; } /* je: equal / zero */

loc_001DD460: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD490(); return; } /* je: equal / zero */

loc_001DD464: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD47D(); return; } /* je: equal / zero */

loc_001DD468: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x17) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x17 (8-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD4D4(); return; } /* jbe: below or equal (unsigned <=) */

loc_001DD46C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x19) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x19 (8-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD4D4(); return; } /* ja: above (unsigned >) */

loc_001DD470: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(ecx + 0x8F0) = eax;
    PUSH32(esp, 0x1A);
    g_seh_ebp = ebp; sub_001DD4CF(); return; /* tail jmp 0x001DD4CF */

}

/**
 * sub_001DD47D
 * Original: 0x001DD47D - 0x001DD490 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD47D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD47D: ;
    MEM32(ecx + 0xA7C) = MEM32(ecx + 0xA7C) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0xA7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(ecx + 0xA7B) = MEM8(ecx + 0xA7B) | 0x20;
    _fa = (uint32_t)(MEM8(ecx + 0xA7B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, 0);
    PUSH32(esp, 0xF);
    g_seh_ebp = ebp; sub_001DD4CF(); return; /* tail jmp 0x001DD4CF */

}

/**
 * sub_001DD490
 * Original: 0x001DD490 - 0x001DD4AA (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD490: ;
    MEM8(ecx + 0x8CC) = MEM8(ecx + 0x8CC) & 0xEF;
    _fa = (uint32_t)(MEM8(ecx + 0x8CC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(ecx + 0x8F0) = eax;
    MEM32(ecx + 0x930) = eax;
    PUSH32(esp, 9);
    g_seh_ebp = ebp; sub_001DD4CF(); return; /* tail jmp 0x001DD4CF */

}

/**
 * sub_001DD4AA
 * Original: 0x001DD4AA - 0x001DD4C1 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD4AA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD4AA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0x8CC));
    SET_LO8(eax, LO8(eax) >> 6);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    PUSH32(esp, 0);
    eax = eax & 0xFFFFFF01u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001DD4CE(); return; /* tail jmp 0x001DD4CE */

}

/**
 * sub_001DD4C1
 * Original: 0x001DD4C1 - 0x001DD4CF (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD4C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD4C1: ;
    MEM32(ecx + 0xA78) = MEM32(ecx + 0xA78) | 0x80000800u;
    _fa = (uint32_t)(MEM32(ecx + 0xA78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);

    g_seh_ebp = ebp; sub_001DD4CF(); return; /* fallthrough 0x001DD4CF */

}

/**
 * sub_001DD4CE
 * Original: 0x001DD4CE - 0x001DD4CF (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD4CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD4CE: ;
    PUSH32(esp, eax);

    g_seh_ebp = ebp; sub_001DD4CF(); return; /* fallthrough 0x001DD4CF */

}

/**
 * sub_001DD4CF
 * Original: 0x001DD4CF - 0x001DD4D4 (5 bytes, 1 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD4CF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD4CF: ;
    PUSH32(esp, 0x001DD4D4u); RECOMP_ABI_CALL(0x001DCF7Bu, sub_001DCF7B); /* call 0x001DCF7B */

    g_seh_ebp = ebp; sub_001DD4D4(); return; /* fallthrough 0x001DD4D4 */

}

/**
 * sub_001DD4D4
 * Original: 0x001DD4D4 - 0x001DD4D7 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD4D4(void)
{

loc_001DD4D4: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DD4D7
 * Original: 0x001DD4D7 - 0x001DD51E (71 bytes, 27 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD4D7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD4D7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x001DD4E7u); RECOMP_ABI_CALL(0x001DCE1Cu, sub_001DCE1C); /* call 0x001DCE1C */

loc_001DD4E7: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esi + 0xA68;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001DD4F7u); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001DD4F7: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001DD4FFu); RECOMP_ABI_CALL(0x001DF1B1u, sub_001DF1B1); /* call 0x001DF1B1 */

loc_001DD4FF: ;
    ecx = esi;
    PUSH32(esp, 0x001DD506u); RECOMP_ABI_CALL(0x001D3B41u, sub_001D3B41); /* call 0x001D3B41 */

loc_001DD506: ;
    ebp = MEM32(esi + 0xACC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD53C(); return; } /* je: equal / zero */

loc_001DD510: ;
    edi = ZX8(MEM8(esi + 0xE));
    edi = (uint32_t)((int32_t)edi * (int32_t)0x130);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001DD538(); return; /* tail jmp 0x001DD538 */

}

/**
 * sub_001DD51E
 * Original: 0x001DD51E - 0x001DD538 (26 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD51E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD51E: ;
    _fa = (uint32_t)(MEM8(ebp + 2)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 2), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DD532; /* je: equal / zero */

loc_001DD523: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001DD532; /* jne: not equal / not zero */

loc_001DD529: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x001DD532u); RECOMP_ABI_CALL(0x001D466Bu, sub_001D466B); /* call 0x001D466B */

loc_001DD532: ;
    _fb = (uint32_t)(0x130) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x130;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001DD538(); return; /* fallthrough 0x001DD538 */

}

/**
 * sub_001DD538
 * Original: 0x001DD538 - 0x001DD53C (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD538(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD538: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD51E(); return; } /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_001DD53C(); return; /* fallthrough 0x001DD53C */

}

/**
 * sub_001DD53C
 * Original: 0x001DD53C - 0x001DD59C (96 bytes, 36 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD53C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD53C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001DD546u); RECOMP_ABI_CALL(0x001D0A64u, sub_001D0A64); /* call 0x001D0A64 */

loc_001DD546: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001DD54Eu); RECOMP_ABI_CALL(0x001D8F0Bu, sub_001D8F0B); /* call 0x001D8F0B */

loc_001DD54E: ;
    PUSH32(esp, MEM32(esi + 0xA34));
    ecx = esi;
    PUSH32(esp, 0x001DD55Bu); RECOMP_ABI_CALL(0x001D8001u, sub_001D8001); /* call 0x001D8001 */

loc_001DD55B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x68);
    edx = esi + 0x8C8;
    POP32(esp, ecx);
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0x268) = ebx;
    MEM32(esi + 0x26C) = ebx;
    MEM8(edx) = LO8(ebx);
    edi = esi + 0x8D0;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x8E0;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    POP32(esp, edi);
    MEM16(esi + 0x8CE) = 0x20C;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD59C
 * Original: 0x001DD59C - 0x001DD5C5 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DD59C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD59C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001DD5ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DD5A7u); } /* indirect call */
    }

loc_001DD5AD: ;
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM8(ebp + -4) = LO8(eax);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD5C5(); return; } /* jne: not equal / not zero */

loc_001DD5B7: ;
    MEM8(ebx + 0x8CC) = MEM8(ebx + 0x8CC) & 0xFD;
    _fa = (uint32_t)(MEM8(ebx + 0x8CC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001DD682(); return; /* tail jmp 0x001DD682 */

}

/**
 * sub_001DD5C5
 * Original: 0x001DD5C5 - 0x001DD629 (100 bytes, 25 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD5C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD5C5: ;
    ecx = ebx;
    PUSH32(esp, 0x001DD5CCu); RECOMP_ABI_CALL(0x001DD4D7u, sub_001DD4D7); /* call 0x001DD4D7 */

loc_001DD5CC: ;
    MEM32(ebx + 0xA78) = MEM32(ebx + 0xA78) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0xA78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD630(); return; } /* je: equal / zero */

loc_001DD5D9: ;
    MEM8(ebx + 0x8CC) = MEM8(ebx + 0x8CC) | 1;
    _fa = (uint32_t)(MEM8(ebx + 0x8CC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 2 (8-bit) */
    SET_LO16(eax, MEM16(ebx + 0x8CC));
    if (TEST_Z(_fa, _fb)) goto loc_001DD5F8; /* je: equal / zero */

loc_001DD5ED: ;
    SET_LO16(eax, LO16(eax) | 2);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(ebx + 0x8CC) = LO16(eax);

loc_001DD5F8: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD630(); return; } /* je: equal / zero */

loc_001DD5FE: ;
    eax = ZX8(MEM8(ebx + 0x26));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x18C);
    PUSH32(esp, 0x4A54454E);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001DD618u); RECOMP_ABI_CALL(0x001D7FCFu, sub_001D7FCF); /* call 0x001D7FCF */

loc_001DD618: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0xA34) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD629(); return; } /* jne: not equal / not zero */

loc_001DD622: ;
    esi = 0x2747;
    g_seh_ebp = ebp; sub_001DD677(); return; /* tail jmp 0x001DD677 */

}

/**
 * sub_001DD629
 * Original: 0x001DD629 - 0x001DD630 (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD629(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD629: ;
    MEM8(ebx + 0x8CC) = MEM8(ebx + 0x8CC) | 4;
    _fa = (uint32_t)(MEM8(ebx + 0x8CC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001DD630(); return; /* fallthrough 0x001DD630 */

}

/**
 * sub_001DD630
 * Original: 0x001DD630 - 0x001DD677 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD630: ;
    _fa = (uint32_t)(MEM8(ebx + 0x8CC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x8CC), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001DD660; /* jne: not equal / not zero */

loc_001DD639: ;
    eax = MEM32(ebp + 8);
    esi = edi + 0x18C;
    edi = ebx + 0x918;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    SET_LO16(eax, MEM16(eax + 0x192));
    edi = MEM32(ebp + 8);
    SET_HI8(ecx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    MEM16(ebx + 0x91E) = LO16(ecx);

loc_001DD660: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BD60); PUSH32(esp, 0x001DD669u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DD663u); } /* indirect call */
    }

loc_001DD669: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD692(); return; } /* jne: not equal / not zero */

loc_001DD66D: ;
    MEM32(ebx + 0xA78) = MEM32(ebx + 0xA78) | 0x80000010u;
    _fa = (uint32_t)(MEM32(ebx + 0xA78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001DD677(); return; /* fallthrough 0x001DD677 */

}

/**
 * sub_001DD677
 * Original: 0x001DD677 - 0x001DD682 (11 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD677(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD677: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x001DD682u); RECOMP_ABI_CALL(0x001DCF7Bu, sub_001DCF7B); /* call 0x001DCF7B */

    g_seh_ebp = ebp; sub_001DD682(); return; /* fallthrough 0x001DD682 */

}

/**
 * sub_001DD682
 * Original: 0x001DD682 - 0x001DD692 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD682(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD682: ;
    SET_LO8(ecx, MEM8(ebp + -4));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001DD68Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DD685u); } /* indirect call */
    }

loc_001DD68B: ;
    eax = esi;
    g_seh_ebp = ebp; sub_001DD947(); return; /* tail jmp 0x001DD947 */

}

/**
 * sub_001DD692
 * Original: 0x001DD692 - 0x001DD6BB (41 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD692(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD692: ;
    _fa = (uint32_t)(MEM8(edi + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x40), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD6C5(); return; } /* je: equal / zero */

loc_001DD698: ;
    eax = edi + 0x42;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DD6A5; /* jne: not equal / not zero */

loc_001DD69F: ;
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), LO16(esi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD6BB(); return; } /* je: equal / zero */

loc_001DD6A5: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD6BB(); return; } /* jne: not equal / not zero */

loc_001DD6AA: ;
    MEM32(ebx + 0xA78) = MEM32(ebx + 0xA78) | 0x20;
    _fa = (uint32_t)(MEM32(ebx + 0xA78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001DD6B9u); RECOMP_ABI_CALL(0x001D8F0Bu, sub_001D8F0B); /* call 0x001D8F0B */

loc_001DD6B9: ;
    g_seh_ebp = ebp; sub_001DD6C5(); return; /* tail jmp 0x001DD6C5 */

}

/**
 * sub_001DD6BB
 * Original: 0x001DD6BB - 0x001DD6C5 (10 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD6BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD6BB: ;
    MEM32(ebx + 0xA78) = MEM32(ebx + 0xA78) | 0x80000040u;
    _fa = (uint32_t)(MEM32(ebx + 0xA78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001DD6C5(); return; /* fallthrough 0x001DD6C5 */

}

/**
 * sub_001DD6C5
 * Original: 0x001DD6C5 - 0x001DD6EC (39 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD6C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD6C5: ;
    _fa = (uint32_t)(MEM8(edi + 0x40)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x40), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD721(); return; } /* je: equal / zero */

loc_001DD6CB: ;
    MEM32(ebx + 0xA78) = MEM32(ebx + 0xA78) | 8;
    _fa = (uint32_t)(MEM32(ebx + 0xA78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(ebx + 0x8CC) = MEM8(ebx + 0x8CC) | 0x40;
    _fa = (uint32_t)(MEM8(ebx + 0x8CC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = ebx + 0x8F8;
    MEM32(ebp + 0xC) = eax;
    esi = edi + 0x54;
    MEM32(ebp + -16) = 2;

    g_seh_ebp = ebp; sub_001DD6EC(); return; /* fallthrough 0x001DD6EC */

}

/**
 * sub_001DD6EC
 * Original: 0x001DD6EC - 0x001DD70D (33 bytes, 10 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD6EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD6EC: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD719(); return; } /* je: equal / zero */

loc_001DD6F5: ;
    ecx = ebp + -8;
    PUSH32(esp, 0x001DD6FDu); RECOMP_ABI_CALL(0x001D85F2u, sub_001D85F2); /* call 0x001D85F2 */

loc_001DD6FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD70D(); return; } /* jne: not equal / not zero */

loc_001DD701: ;
    MEM32(ebx + 0xA78) = MEM32(ebx + 0xA78) | 0x80000080u;
    _fa = (uint32_t)(MEM32(ebx + 0xA78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001DD719(); return; /* tail jmp 0x001DD719 */

}

/**
 * sub_001DD70D
 * Original: 0x001DD70D - 0x001DD719 (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD70D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD70D: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;

    g_seh_ebp = ebp; sub_001DD719(); return; /* fallthrough 0x001DD719 */

}

/**
 * sub_001DD719
 * Original: 0x001DD719 - 0x001DD721 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD719(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD719: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001DD6EC(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001DD721(); return; /* fallthrough 0x001DD721 */

}

/**
 * sub_001DD721
 * Original: 0x001DD721 - 0x001DD81E (253 bytes, 64 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD721(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD721: ;
    SET_LO16(eax, MEM16(edi + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD81E(); return; } /* je: equal / zero */

loc_001DD72D: ;
    MEM32(ebx + 0xA78) = MEM32(ebx + 0xA78) | 2;
    _fa = (uint32_t)(MEM32(ebx + 0xA78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(ebx + 0x8CC)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x8CC), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001DD7DD; /* jne: not equal / not zero */

loc_001DD741: ;
    PUSH32(esp, 0x40);
    eax = edi + 0x84;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40);
    eax = ebx + 0x962;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001DD75Au); RECOMP_ABI_CALL(0x001DBFD7u, sub_001DBFD7); /* call 0x001DBFD7 */

loc_001DD75A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DD768; /* jne: not equal / not zero */

loc_001DD75E: ;
    MEM32(ebx + 0xA78) = MEM32(ebx + 0xA78) | 0x80000100u;
    _fa = (uint32_t)(MEM32(ebx + 0xA78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001DD768: ;
    PUSH32(esp, 0x40);
    eax = edi + 0xC4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40);
    eax = ebx + 0x9A2;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001DD781u); RECOMP_ABI_CALL(0x001DBFD7u, sub_001DBFD7); /* call 0x001DBFD7 */

loc_001DD781: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DD78F; /* jne: not equal / not zero */

loc_001DD785: ;
    MEM32(ebx + 0xA78) = MEM32(ebx + 0xA78) | 0x80000200u;
    _fa = (uint32_t)(MEM32(ebx + 0xA78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001DD78F: ;
    PUSH32(esp, 0x28);
    eax = edi + 0x104;
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    eax = ebx + 0x9E2;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001DD7A8u); RECOMP_ABI_CALL(0x001DBFD7u, sub_001DBFD7); /* call 0x001DBFD7 */

loc_001DD7A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DD7B6; /* jne: not equal / not zero */

loc_001DD7AC: ;
    MEM32(ebx + 0xA78) = MEM32(ebx + 0xA78) | 0x80000400u;
    _fa = (uint32_t)(MEM32(ebx + 0xA78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001DD7B6: ;
    PUSH32(esp, 0x28);
    eax = edi + 0x12C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    eax = ebx + 0xA0A;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001DD7CFu); RECOMP_ABI_CALL(0x001DBFD7u, sub_001DBFD7); /* call 0x001DBFD7 */

loc_001DD7CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DD7DD; /* jne: not equal / not zero */

loc_001DD7D3: ;
    MEM32(ebx + 0xA78) = MEM32(ebx + 0xA78) | 0x80000800u;
    _fa = (uint32_t)(MEM32(ebx + 0xA78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001DD7DD: ;
    eax = MEM32(ebp + 8);
    esi = edi + 0x194;
    edi = ebx + 0xA4C;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    SET_LO16(eax, MEM16(eax + 0x19A));
    MEM16(ebx + 0xA52) = LO16(eax);
    eax = MEM32(ebx + 0x1D8);
    MEM32(ebx + 0xA60) = eax;
    eax = MEM32(ebx + 0xA78);
    eax = eax >> 0x1B;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, ~LO8(eax));
    eax = eax & 0xFFFFFF10u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001DD8CD(); return; /* tail jmp 0x001DD8CD */

}

/**
 * sub_001DD81E
 * Original: 0x001DD81E - 0x001DD8CD (175 bytes, 49 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD81E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD81E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD8D2(); return; } /* je: equal / zero */

loc_001DD826: ;
    MEM32(ebx + 0xA78) = MEM32(ebx + 0xA78) | 4;
    _fa = (uint32_t)(MEM32(ebx + 0xA78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(edi + 0x48);
    esi = ebx + 0x8F0;
    MEM32(esi) = eax;
    eax = MEM32(edi + 0x4C);
    MEM32(ebx + 0x8F4) = eax;
    eax = MEM32(edi + 0x50);
    ecx = esi;
    MEM32(ebx + 0x908) = eax;
    PUSH32(esp, 0x001DD851u); RECOMP_ABI_CALL(0x001D85F2u, sub_001D85F2); /* call 0x001D85F2 */

loc_001DD851: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DD861; /* jne: not equal / not zero */

loc_001DD855: ;
    MEM32(esi) = MEM32(esi) & eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0xA78) = MEM32(ebx + 0xA78) | 0x80000100u;
    _fa = (uint32_t)(MEM32(ebx + 0xA78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001DD861: ;
    eax = MEM32(ebx + 0x8F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DD876; /* je: equal / zero */

loc_001DD86B: ;
    eax = BSWAP32(eax); /* bswap */
    eax = ~eax;
    ecx = eax + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001DD893; /* je: equal / zero */

loc_001DD876: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001DD881u); RECOMP_ABI_CALL(0x001D837Fu, sub_001D837F); /* call 0x001D837F */

loc_001DD881: ;
    eax = MEM32(eax);
    MEM32(ebx + 0xA78) = MEM32(ebx + 0xA78) | 0x80000200u;
    _fa = (uint32_t)(MEM32(ebx + 0xA78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0x8F4) = eax;

loc_001DD893: ;
    edi = ebx + 0x908;
    ecx = edi;
    PUSH32(esp, 0x001DD8A0u); RECOMP_ABI_CALL(0x001D85F2u, sub_001D85F2); /* call 0x001D85F2 */

loc_001DD8A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DD8BA; /* je: equal / zero */

loc_001DD8A4: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DD8C7; /* je: equal / zero */

loc_001DD8AA: ;
    ecx = MEM32(ebx + 0x8F4);
    edx = ecx;
    edx = edx & MEM32(edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DD8C7; /* je: equal / zero */

loc_001DD8BA: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0xA78) = MEM32(ebx + 0xA78) | 0x80000400u;
    _fa = (uint32_t)(MEM32(ebx + 0xA78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001DD8C7: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */

    g_seh_ebp = ebp; sub_001DD8CD(); return; /* fallthrough 0x001DD8CD */

}

/**
 * sub_001DD8CD
 * Original: 0x001DD8CD - 0x001DD8D2 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD8CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD8CD: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_seh_ebp = ebp; sub_001DD935(); return; /* tail jmp 0x001DD935 */

}

/**
 * sub_001DD8D2
 * Original: 0x001DD8D2 - 0x001DD8E0 (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD8D2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD8D2: ;
    _fa = (uint32_t)(MEM8(ebx + 5)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 5), 2 (8-bit) */
    ecx = ebx;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD8E0(); return; } /* je: equal / zero */

loc_001DD8DA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x17);
    g_seh_ebp = ebp; sub_001DD937(); return; /* tail jmp 0x001DD937 */

}

/**
 * sub_001DD8E0
 * Original: 0x001DD8E0 - 0x001DD92A (74 bytes, 22 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD8E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD8E0: ;
    PUSH32(esp, 0x28);
    eax = edi + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    eax = ebx + 0x93A;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DD8F4u); RECOMP_ABI_CALL(0x001DBFD7u, sub_001DBFD7); /* call 0x001DBFD7 */

loc_001DD8F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DD902; /* jne: not equal / not zero */

loc_001DD8F8: ;
    MEM32(ebx + 0xA78) = MEM32(ebx + 0xA78) | 0x80000100u;
    _fa = (uint32_t)(MEM32(ebx + 0xA78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001DD902: ;
    _fa = (uint32_t)(MEM8(ebx + 0x8CC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x8CC), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD931(); return; } /* jne: not equal / not zero */

loc_001DD90B: ;
    eax = MEM32(edi + 0x160);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = ebx + 0x8F0;
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD94E(); return; } /* je: equal / zero */

loc_001DD91D: ;
    ecx = esi;
    PUSH32(esp, 0x001DD924u); RECOMP_ABI_CALL(0x001D85F2u, sub_001D85F2); /* call 0x001D85F2 */

loc_001DD924: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD94E(); return; } /* jne: not equal / not zero */

loc_001DD928: ;
    MEM32(esi) = MEM32(esi) & eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001DD92A(); return; /* fallthrough 0x001DD92A */

}

/**
 * sub_001DD92A
 * Original: 0x001DD92A - 0x001DD931 (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD92A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD92A: ;
    MEM8(ebx + 0xA79) = MEM8(ebx + 0xA79) | 4;
    _fa = (uint32_t)(MEM8(ebx + 0xA79)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001DD931(); return; /* fallthrough 0x001DD931 */

}

/**
 * sub_001DD931
 * Original: 0x001DD931 - 0x001DD935 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD931(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD931: ;
    PUSH32(esp, 0);
    PUSH32(esp, 6);

    g_seh_ebp = ebp; sub_001DD935(); return; /* fallthrough 0x001DD935 */

}

/**
 * sub_001DD935
 * Original: 0x001DD935 - 0x001DD947 (18 bytes, 5 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001DD935(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD935: ;
    ecx = ebx;
    PUSH32(esp, 0x001DD93Cu); RECOMP_ABI_CALL(0x001DCF7Bu, sub_001DCF7B); /* call 0x001DCF7B */

loc_001DD93C: ;
    SET_LO8(ecx, MEM8(ebp + -4));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001DD945u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DD93Fu); } /* indirect call */
    }

loc_001DD945: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001DD947(); return; /* fallthrough 0x001DD947 */

}

/**
 * sub_001DD937
 * Original: 0x001DD937 - 0x001DD947 (16 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001DD937(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD937: ;
    PUSH32(esp, 0x001DD93Cu); RECOMP_ABI_CALL(0x001DCF7Bu, sub_001DCF7B); /* call 0x001DCF7B */

loc_001DD93C: ;
    SET_LO8(ecx, MEM8(ebp + -4));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001DD945u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DD93Fu); } /* indirect call */
    }

loc_001DD945: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001DD947(); return; /* fallthrough 0x001DD947 */

}

/**
 * sub_001DD947
 * Original: 0x001DD947 - 0x001DD94E (7 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD947(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD947: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DD94E
 * Original: 0x001DD94E - 0x001DD9E3 (149 bytes, 40 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD94E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD94E: ;
    ecx = MEM32(edi + 0x154);
    eax = MEM32(edi + 0x158);
    edx = ecx;
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001DD931(); return; } /* je: equal / zero */

loc_001DD960: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x1E39C4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x1E39C4) (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001DD92A(); return; } /* jl: less (signed <) */

loc_001DD968: ;
    if (CMP_G(_fas, _fbs)) goto loc_001DD972; /* jg: greater (signed >) */

loc_001DD96A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x1E39C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x1E39C0) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD92A(); return; } /* jb: below (unsigned <) */

loc_001DD972: ;
    ecx = ZX8(MEM8(ebx + 0x22));
    eax = MEM32(edi + 0x15C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xE10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD92A(); return; } /* jb: below (unsigned <) */

loc_001DD986: ;
    ecx = ZX8(MEM8(ebx + 0x23));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x15180);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD92A(); return; } /* ja: above (unsigned >) */

loc_001DD994: ;
    ecx = edi + 0x160;
    PUSH32(esp, 0x001DD99Fu); RECOMP_ABI_CALL(0x001D85F2u, sub_001D85F2); /* call 0x001D85F2 */

loc_001DD99F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD92A(); return; } /* je: equal / zero */

loc_001DD9A3: ;
    eax = MEM32(edi + 0x164);
    eax = BSWAP32(eax); /* bswap */
    eax = ~eax;
    ecx = eax + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD92A(); return; } /* jne: not equal / not zero */

loc_001DD9B8: ;
    ecx = edi + 0x168;
    MEM32(ebp + -16) = ecx;
    PUSH32(esp, 0x001DD9C6u); RECOMP_ABI_CALL(0x001D85F2u, sub_001D85F2); /* call 0x001D85F2 */

loc_001DD9C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD92A(); return; } /* je: equal / zero */

loc_001DD9CE: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = edi + 0x16C;
    eax = esi + 0x10;
    MEM32(ebp + -20) = esi;
    MEM32(ebp + 0xC) = eax;
    g_seh_ebp = ebp; sub_001DD9FA(); return; /* tail jmp 0x001DD9FA */

}

/**
 * sub_001DD9E3
 * Original: 0x001DD9E3 - 0x001DD9FA (23 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD9E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD9E3: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD9FF(); return; } /* je: equal / zero */

loc_001DD9E8: ;
    ecx = esi;
    PUSH32(esp, 0x001DD9EFu); RECOMP_ABI_CALL(0x001D85F2u, sub_001D85F2); /* call 0x001D85F2 */

loc_001DD9EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD92A(); return; } /* je: equal / zero */

loc_001DD9F7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001DD9FA(); return; /* fallthrough 0x001DD9FA */

}

/**
 * sub_001DD9FA
 * Original: 0x001DD9FA - 0x001DD9FF (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD9FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD9FA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD9E3(); return; } /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_001DD9FF(); return; /* fallthrough 0x001DD9FF */

}

/**
 * sub_001DD9FF
 * Original: 0x001DD9FF - 0x001DDB32 (307 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD9FF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD9FF: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = edi + 0x17C;
    eax = esi + 0x10;
    MEM32(ebp + 0xC) = eax;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DD9FA(); return; } /* jb: below (unsigned <) */

loc_001DDA14: ;
    eax = ebp + -28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BAE4); PUSH32(esp, 0x001DDA1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DDA18u); } /* indirect call */
    }

loc_001DDA1E: ;
    eax = MEM32(edi + 0x158);
    ecx = MEM32(ebp + -24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = MEM32(edi + 0x154);
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001DDB32(); return; } /* jl: less (signed <) */

loc_001DDA35: ;
    if (CMP_G(_fas, _fbs)) goto loc_001DDA40; /* jg: greater (signed >) */

loc_001DDA37: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDB32(); return; } /* jb: below (unsigned <) */

loc_001DDA40: ;
    esi = MEM32(edi + 0x15C);
    eax = esi;
    edx = 0x989680;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(MEM32(edi + 0x154)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(edi + 0x154))) >> 32) & 1);
    eax = eax + MEM32(edi + 0x154);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = edx;
    edx = MEM32(edi + 0x158);
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + -8);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_001DDB32(); return; } /* jg: greater (signed >) */

loc_001DDA6E: ;
    eax = MEM32(ebp + -28);
    if (CMP_L(_fas, _fbs)) goto loc_001DDA7C; /* jl: less (signed <) */

loc_001DDA73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -36) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDB32(); return; } /* jae: above or equal (unsigned >=) */

loc_001DDA7C: ;
    _fb = (uint32_t)(MEM32(edi + 0x154)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(edi + 0x154)));
    eax = eax - MEM32(edi + 0x154);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0);
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(MEM32(edi + 0x158)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, 0x989680);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DDA96u); RECOMP_ABI_CALL(0x00152A80u, sub_00152A80); /* call 0x00152A80 */

loc_001DDA96: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ZX8(MEM8(ebx + 0x22));
    eax = (uint32_t)((int32_t)eax * (int32_t)0xE10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDB32(); return; } /* jb: below (unsigned <) */

loc_001DDAAA: ;
    eax = MEM32(ebx + 0x1D8);
    MEM32(ebx + 0x920) = eax;
    eax = esi;
    if (1) _cf = (int)(((eax) >> ((1) - 1)) & 1);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebx + 0x924) = eax;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)7);
    if (3) _cf = (int)(((eax) >> ((3) - 1)) & 1);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebx + 0x928) = eax;
    MEM32(ebx + 0x92C) = esi;
    eax = MEM32(edi + 0x160);
    esi = MEM32(ebp + -20);
    MEM32(ebx + 0x8F0) = eax;
    eax = MEM32(edi + 0x164);
    MEM32(ebx + 0x8F4) = eax;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax);
    MEM32(ebx + 0x930) = eax;
    SET_LO16(eax, MEM16(ebx + 0x8CC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    edi = ebx + 0x908;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    if (TEST_NZ(_fa, _fb)) goto loc_001DDB22; /* jne: not equal / not zero */

loc_001DDB0F: ;
    esi = MEM32(ebp + 8);
    _fb = (uint32_t)(0x17C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x17C)) >> 32) & 1);
    esi = esi + 0x17C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebx + 0x8F8;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */

loc_001DDB22: ;
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | 0x10);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(ebx + 0x8CC) = LO16(eax);
    g_seh_ebp = ebp; sub_001DD931(); return; /* tail jmp 0x001DD931 */

}

/**
 * sub_001DDB32
 * Original: 0x001DDB32 - 0x001DDB3E (12 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDB32(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DDB32: ;
    MEM8(ebx + 0xA79) = MEM8(ebx + 0xA79) | 2;
    _fa = (uint32_t)(MEM8(ebx + 0xA79)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001DD931(); return; /* tail jmp 0x001DD931 */

}

/**
 * sub_001DDB3E
 * Original: 0x001DDB3E - 0x001DDB78 (58 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDB3E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DDB3E: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(edx, MEM8(esi + 0x8C8));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDB78(); return; } /* je: equal / zero */

loc_001DDB4C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xC (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDB78(); return; } /* je: equal / zero */

loc_001DDB51: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xE (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDB78(); return; } /* je: equal / zero */

loc_001DDB56: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x16) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x16 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDB78(); return; } /* je: equal / zero */

loc_001DDB5B: ;
    ecx = MEM32(esp + 8);
    eax = esi + 0xA78;
    MEM32(eax) = MEM32(eax) | ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x14) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x14 (8-bit) */
    ecx = MEM32(eax);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDB7F(); return; } /* jne: not equal / not zero */

loc_001DDB6E: ;
    ecx = ecx | 0x80010000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ecx;
    g_seh_ebp = ebp; sub_001DDB7F(); return; /* tail jmp 0x001DDB7F */

}

/**
 * sub_001DDB78
 * Original: 0x001DDB78 - 0x001DDB7F (7 bytes, 2 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDB78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DDB78: ;
    ecx = esi;
    PUSH32(esp, 0x001DDB7Fu); RECOMP_ABI_CALL(0x001DD4D7u, sub_001DD4D7); /* call 0x001DD4D7 */

    g_seh_ebp = ebp; sub_001DDB7F(); return; /* fallthrough 0x001DDB7F */

}

/**
 * sub_001DDB7F
 * Original: 0x001DDB7F - 0x001DDB8E (15 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDB7F(void)
{

loc_001DDB7F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x001DDB8Au); RECOMP_ABI_CALL(0x001DCF7Bu, sub_001DCF7B); /* call 0x001DCF7B */

loc_001DDB8A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DDB8E
 * Original: 0x001DDB8E - 0x001DDC3B (173 bytes, 53 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DDB8E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DDB8E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0xF0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = ecx;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDFBC(); return; } /* jb: below (unsigned <) */

loc_001DDBA4: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = BSWAP32(ecx); /* bswap */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xA7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0xA7C) (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDFBC(); return; } /* jne: not equal / not zero */

loc_001DDBBE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    POP32(esp, ecx);
    edi = ebx + 0x1E0;
    esi = eax + 0x1C;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_001DDFBA(); return; } /* jne: not equal / not zero */

loc_001DDBD7: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDFB3(); return; } /* jne: not equal / not zero */

loc_001DDBE0: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDFB3(); return; } /* jne: not equal / not zero */

loc_001DDBEA: ;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDFB3(); return; } /* jne: not equal / not zero */

loc_001DDBF4: ;
    _fa = (uint32_t)(MEM32(eax + 0xEC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63538263) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xEC), 0x63538263 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDFB3(); return; } /* jne: not equal / not zero */

loc_001DDC04: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x35);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DDC1Au); RECOMP_ABI_CALL(0x001DC726u, sub_001DC726); /* call 0x001DC726 */

loc_001DDC1A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DDC2F; /* je: equal / zero */

loc_001DDC1E: ;
    esi = MEM32(ebp + 0xC);
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDC3B(); return; } /* je: equal / zero */

loc_001DDC27: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDC3B(); return; } /* je: equal / zero */

loc_001DDC2B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDC3B(); return; } /* je: equal / zero */

loc_001DDC2F: ;
    MEM8(ebx + 0xA7A) = MEM8(ebx + 0xA7A) | 0x10;
    _fa = (uint32_t)(MEM8(ebx + 0xA7A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001DDFBA(); return; /* tail jmp 0x001DDFBA */

}

/**
 * sub_001DDC3B
 * Original: 0x001DDC3B - 0x001DDC6E (51 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDC3B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DDC3B: ;
    PUSH32(esp, edi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    edi = MEM32(ebp + -8);
    PUSH32(esp, 4);
    PUSH32(esp, 0x36);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = edi;
    PUSH32(esp, 0x001DDC52u); RECOMP_ABI_CALL(0x001DC726u, sub_001DC726); /* call 0x001DC726 */

loc_001DDC52: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DDC62; /* je: equal / zero */

loc_001DDC56: ;
    ecx = MEM32(ebp + -16);
    PUSH32(esp, 0x001DDC5Eu); RECOMP_ABI_CALL(0x001D85F2u, sub_001D85F2); /* call 0x001D85F2 */

loc_001DDC5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDC6E(); return; } /* jne: not equal / not zero */

loc_001DDC62: ;
    MEM8(ebx + 0xA7A) = MEM8(ebx + 0xA7A) | 0x20;
    _fa = (uint32_t)(MEM8(ebx + 0xA7A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001DDFBA(); return; /* tail jmp 0x001DDFBA */

}

/**
 * sub_001DDC6E
 * Original: 0x001DDC6E - 0x001DDC95 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDC6E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DDC6E: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDCDB(); return; } /* jne: not equal / not zero */

loc_001DDC73: ;
    SET_LO8(eax, MEM8(ebx + 0x8C8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDC95(); return; } /* je: equal / zero */

loc_001DDC7D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDC95(); return; } /* je: equal / zero */

loc_001DDC81: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xD (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDC95(); return; } /* je: equal / zero */

loc_001DDC85: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xE (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDC95(); return; } /* je: equal / zero */

loc_001DDC89: ;
    MEM8(ebx + 0xA7B) = MEM8(ebx + 0xA7B) | 8;
    _fa = (uint32_t)(MEM8(ebx + 0xA7B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001DDFBA(); return; /* tail jmp 0x001DDFBA */

}

/**
 * sub_001DDC95
 * Original: 0x001DDC95 - 0x001DDCBE (41 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDC95(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DDC95: ;
    MEM8(ebx + 0xA7A) = MEM8(ebx + 0xA7A) | 2;
    _fa = (uint32_t)(MEM8(ebx + 0xA7A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDCBE(); return; } /* je: equal / zero */

loc_001DDCA0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDCBE(); return; } /* je: equal / zero */

loc_001DDCA4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xD (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DDCB0; /* je: equal / zero */

loc_001DDCA8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xE (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDFBA(); return; } /* jne: not equal / not zero */

loc_001DDCB0: ;
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x001DDCB9u); RECOMP_ABI_CALL(0x001DDB3Eu, sub_001DDB3E); /* call 0x001DDB3E */

loc_001DDCB9: ;
    g_seh_ebp = ebp; sub_001DDFBA(); return; /* tail jmp 0x001DDFBA */

}

/**
 * sub_001DDCBE
 * Original: 0x001DDCBE - 0x001DDCDB (29 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDCBE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DDCBE: ;
    MEM8(ebx + 0x8CC) = MEM8(ebx + 0x8CC) & 0xEF;
    _fa = (uint32_t)(MEM8(ebx + 0x8CC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(ebx + 0x8F0) = eax;
    MEM32(ebx + 0x930) = eax;
    PUSH32(esp, 9);
    g_seh_ebp = ebp; sub_001DDF9D(); return; /* tail jmp 0x001DDF9D */

}

/**
 * sub_001DDCDB
 * Original: 0x001DDCDB - 0x001DDCFC (33 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDCDB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DDCDB: ;
    _fa = (uint32_t)(MEM8(ebx + 0x8C8)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x8C8), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDCFC(); return; } /* je: equal / zero */

loc_001DDCE4: ;
    ecx = edi + 0x10;
    PUSH32(esp, 0x001DDCECu); RECOMP_ABI_CALL(0x001D85F2u, sub_001D85F2); /* call 0x001D85F2 */

loc_001DDCEC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDCFC(); return; } /* jne: not equal / not zero */

loc_001DDCF0: ;
    MEM8(ebx + 0xA7A) = MEM8(ebx + 0xA7A) | 0x40;
    _fa = (uint32_t)(MEM8(ebx + 0xA7A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001DDFBA(); return; /* tail jmp 0x001DDFBA */

}

/**
 * sub_001DDCFC
 * Original: 0x001DDCFC - 0x001DDD16 (26 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDCFC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DDCFC: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDD47(); return; } /* jne: not equal / not zero */

loc_001DDD01: ;
    _fa = (uint32_t)(MEM8(ebx + 0x8C8)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x8C8), 9 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDD16(); return; } /* je: equal / zero */

loc_001DDD0A: ;
    MEM8(ebx + 0xA7B) = MEM8(ebx + 0xA7B) | 4;
    _fa = (uint32_t)(MEM8(ebx + 0xA7B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001DDFBA(); return; /* tail jmp 0x001DDFBA */

}

/**
 * sub_001DDD16
 * Original: 0x001DDD16 - 0x001DDD47 (49 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDD16(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DDD16: ;
    MEM8(ebx + 0xA79) = MEM8(ebx + 0xA79) | 0x20;
    _fa = (uint32_t)(MEM8(ebx + 0xA79)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = MEM32(edi + 0x10);
    MEM32(ebx + 0x8F0) = eax;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax);
    MEM8(ebx + 0x8CC) = MEM8(ebx + 0x8CC) & 0xEF;
    _fa = (uint32_t)(MEM8(ebx + 0x8CC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(ebx + 0xA7C) = MEM32(ebx + 0xA7C) - 1;
    _fa = (uint32_t)(MEM32(ebx + 0xA7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    MEM32(ebx + 0x930) = eax;
    PUSH32(esp, 0xA);
    g_seh_ebp = ebp; sub_001DDF9D(); return; /* tail jmp 0x001DDF9D */

}

/**
 * sub_001DDD47
 * Original: 0x001DDD47 - 0x001DDD6D (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDD47(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DDD47: ;
    SET_LO8(eax, MEM8(ebx + 0x8C8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDD6D(); return; } /* je: equal / zero */

loc_001DDD51: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDD6D(); return; } /* je: equal / zero */

loc_001DDD55: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xD (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDD6D(); return; } /* je: equal / zero */

loc_001DDD59: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xE (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDD6D(); return; } /* je: equal / zero */

loc_001DDD5D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDD6D(); return; } /* je: equal / zero */

loc_001DDD61: ;
    MEM8(ebx + 0xA7B) = MEM8(ebx + 0xA7B) | 2;
    _fa = (uint32_t)(MEM8(ebx + 0xA7B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001DDFBA(); return; /* tail jmp 0x001DDFBA */

}

/**
 * sub_001DDD6D
 * Original: 0x001DDD6D - 0x001DDDAF (66 bytes, 25 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDD6D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DDD6D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -12) = esi;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDDE3(); return; } /* je: equal / zero */

loc_001DDD79: ;
    PUSH32(esp, esi);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x33);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = edi;
    PUSH32(esp, 0x001DDD8Du); RECOMP_ABI_CALL(0x001DC726u, sub_001DC726); /* call 0x001DC726 */

loc_001DDD8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DDDA3; /* je: equal / zero */

loc_001DDD91: ;
    ecx = ZX8(MEM8(ebx + 0x20));
    eax = MEM32(ebp + -24);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    eax = MEM32(eax);
    eax = BSWAP32(eax); /* bswap */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDDAF(); return; } /* jae: above or equal (unsigned >=) */

loc_001DDDA3: ;
    MEM8(ebx + 0xA7A) = MEM8(ebx + 0xA7A) | 0x80;
    _fa = (uint32_t)(MEM8(ebx + 0xA7A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001DDFBA(); return; /* tail jmp 0x001DDFBA */

}

/**
 * sub_001DDDAF
 * Original: 0x001DDDAF - 0x001DDDE3 (52 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDDAF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DDDAF: ;
    PUSH32(esp, esi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = edi;
    PUSH32(esp, 0x001DDDC3u); RECOMP_ABI_CALL(0x001DC726u, sub_001DC726); /* call 0x001DC726 */

loc_001DDDC3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DDDD7; /* je: equal / zero */

loc_001DDDC7: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax);
    eax = BSWAP32(eax); /* bswap */
    eax = ~eax;
    ecx = eax + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDDE3(); return; } /* je: equal / zero */

loc_001DDDD7: ;
    MEM8(ebx + 0xA7B) = MEM8(ebx + 0xA7B) | 1;
    _fa = (uint32_t)(MEM8(ebx + 0xA7B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001DDFBA(); return; /* tail jmp 0x001DDFBA */

}

/**
 * sub_001DDDE3
 * Original: 0x001DDDE3 - 0x001DDEC2 (223 bytes, 72 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDDE3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DDDE3: ;
    MEM8(ebx + 0xA79) = MEM8(ebx + 0xA79) | 0x80;
    _fa = (uint32_t)(MEM8(ebx + 0xA79)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(ecx, MEM8(ebx + 0x8C8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xD (8-bit) */
    eax = MEM32(ebx + 0xA78);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDEF5(); return; } /* je: equal / zero */

loc_001DDDFF: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xE (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDEF5(); return; } /* je: equal / zero */

loc_001DDE08: ;
    esi = ebx + 0x908;
    MEM8(ebp + -4) = 3;

loc_001DDE12: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -4), 3 (8-bit) */
    MEM32(ebp + -28) = esi;
    MEM32(ebp + -20) = 4;
    if (CMP_NE(_fa, _fb)) goto loc_001DDE2B; /* jne: not equal / not zero */

loc_001DDE22: ;
    _fa = (uint32_t)(MEM8(ebx + 0xA78)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xA78), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001DDEAA; /* jne: not equal / not zero */

loc_001DDE2B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(ebp + -8);
    edi = esi;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0x001DDE4Du); RECOMP_ABI_CALL(0x001DC726u, sub_001DC726); /* call 0x001DC726 */

loc_001DDE4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DDEA1; /* je: equal / zero */

loc_001DDE51: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) >> 2;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if ((_fa == 0)) goto loc_001DDEA1; /* je: equal / zero */

loc_001DDE57: ;
    edi = MEM32(ebp + -32);

loc_001DDE5A: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DDEA1; /* jbe: below or equal (unsigned <=) */

loc_001DDE60: ;
    ecx = edi;
    PUSH32(esp, 0x001DDE67u); RECOMP_ABI_CALL(0x001D85F2u, sub_001D85F2); /* call 0x001D85F2 */

loc_001DDE67: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DDE92; /* je: equal / zero */

loc_001DDE6B: ;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    ecx = esi;
    if (CMP_AE(_fa, _fb)) goto loc_001DDE81; /* jae: above or equal (unsigned >=) */

loc_001DDE74: ;
    edx = MEM32(edi);

loc_001DDE76: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DDE81; /* je: equal / zero */

loc_001DDE7A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DDE76; /* jb: below (unsigned <) */

loc_001DDE81: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DDE92; /* jne: not equal / not zero */

loc_001DDE85: ;
    ecx = MEM32(edi);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -20) = MEM32(ebp + -20) - 1;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -28) = eax;

loc_001DDE92: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    MEM32(ebp + -32) = edi;
    if (CMP_A(_fa, _fb)) goto loc_001DDE5A; /* ja: above (unsigned >) */

loc_001DDEA1: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -4), 6 (8-bit) */
    edi = MEM32(ebp + -8);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDEC2(); return; } /* je: equal / zero */

loc_001DDEAA: ;
    _fa = (uint32_t)(MEM8(ebx + 0x8CC)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x8CC), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDEC2(); return; } /* jne: not equal / not zero */

loc_001DDEB3: ;
    esi = ebx + 0x8F8;
    MEM8(ebp + -4) = 6;
    goto loc_001DDE12;

}

/**
 * sub_001DDEC2
 * Original: 0x001DDEC2 - 0x001DDEDF (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDEC2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DDEC2: ;
    _fa = (uint32_t)(MEM8(ebx + 0x8C8)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x8C8), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDEDF(); return; } /* jne: not equal / not zero */

loc_001DDECB: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax);
    PUSH32(esp, 0);
    MEM32(ebx + 0x930) = eax;
    PUSH32(esp, 5);
    g_seh_ebp = ebp; sub_001DDF9D(); return; /* tail jmp 0x001DDF9D */

}

/**
 * sub_001DDEDF
 * Original: 0x001DDEDF - 0x001DDEF5 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDEDF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DDEDF: ;
    eax = MEM32(edi + 0x10);
    MEM32(ebx + 0x8F0) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax);
    MEM32(ebx + 0x8F4) = eax;
    g_seh_ebp = ebp; sub_001DDF15(); return; /* tail jmp 0x001DDF15 */

}

/**
 * sub_001DDEF5
 * Original: 0x001DDEF5 - 0x001DDF99 (164 bytes, 44 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDEF5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DDEF5: ;
    ecx = MEM32(ebx + 0x8F0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDFA6(); return; } /* jne: not equal / not zero */

loc_001DDF04: ;
    ecx = MEM32(ebx + 0x8F4);
    edx = MEM32(ebp + -12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDFA6(); return; } /* jne: not equal / not zero */

loc_001DDF15: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax);
    ecx = MEM32(ebp + 8);
    MEM32(ebx + 0x930) = eax;
    PUSH32(esp, 0x001DDF28u); RECOMP_ABI_CALL(0x001D8186u, sub_001D8186); /* call 0x001D8186 */

loc_001DDF28: ;
    ecx = ZX8(MEM8(ebx + 0x21));
    esi = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x15180);
    eax = MEM32(ebx + 0x1D8);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebx + 0x934;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM32(ebx + 0x920) = eax;
    eax = MEM32(ebp + -24);
    eax = MEM32(eax);
    eax = BSWAP32(eax); /* bswap */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebx + 0x92C) = eax;
    if (CMP_B(_fa, _fb)) goto loc_001DDF5F; /* jb: below (unsigned <) */

loc_001DDF5D: ;
    eax = ecx;

loc_001DDF5F: ;
    MEM32(ebx + 0x92C) = eax;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebx + 0x924) = eax;
    eax = MEM32(ebx + 0x92C);
    eax = (uint32_t)((int32_t)eax * (int32_t)7);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebx + 0x928) = eax;
    SET_LO8(eax, MEM8(ebx + 0x8C8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xD (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDF99(); return; } /* je: equal / zero */

loc_001DDF89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xE (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDF99(); return; } /* je: equal / zero */

loc_001DDF8D: ;
    MEM32(ebx + 0xA7C) = MEM32(ebx + 0xA7C) - 1;
    _fa = (uint32_t)(MEM32(ebx + 0xA7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    PUSH32(esp, 0xB);
    g_seh_ebp = ebp; sub_001DDF9D(); return; /* tail jmp 0x001DDF9D */

}

/**
 * sub_001DDF15
 * Original: 0x001DDF15 - 0x001DDF99 (132 bytes, 37 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDF15(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DDF15: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax);
    ecx = MEM32(ebp + 8);
    MEM32(ebx + 0x930) = eax;
    PUSH32(esp, 0x001DDF28u); RECOMP_ABI_CALL(0x001D8186u, sub_001D8186); /* call 0x001D8186 */

loc_001DDF28: ;
    ecx = ZX8(MEM8(ebx + 0x21));
    esi = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x15180);
    eax = MEM32(ebx + 0x1D8);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebx + 0x934;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM32(ebx + 0x920) = eax;
    eax = MEM32(ebp + -24);
    eax = MEM32(eax);
    eax = BSWAP32(eax); /* bswap */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebx + 0x92C) = eax;
    if (CMP_B(_fa, _fb)) goto loc_001DDF5F; /* jb: below (unsigned <) */

loc_001DDF5D: ;
    eax = ecx;

loc_001DDF5F: ;
    MEM32(ebx + 0x92C) = eax;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebx + 0x924) = eax;
    eax = MEM32(ebx + 0x92C);
    eax = (uint32_t)((int32_t)eax * (int32_t)7);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebx + 0x928) = eax;
    SET_LO8(eax, MEM8(ebx + 0x8C8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xD (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDF99(); return; } /* je: equal / zero */

loc_001DDF89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xE (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DDF99(); return; } /* je: equal / zero */

loc_001DDF8D: ;
    MEM32(ebx + 0xA7C) = MEM32(ebx + 0xA7C) - 1;
    _fa = (uint32_t)(MEM32(ebx + 0xA7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    PUSH32(esp, 0xB);
    g_seh_ebp = ebp; sub_001DDF9D(); return; /* tail jmp 0x001DDF9D */

}

/**
 * sub_001DDF99
 * Original: 0x001DDF99 - 0x001DDF9D (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDF99(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DDF99: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);

    g_seh_ebp = ebp; sub_001DDF9D(); return; /* fallthrough 0x001DDF9D */

}

/**
 * sub_001DDF9D
 * Original: 0x001DDF9D - 0x001DDFA6 (9 bytes, 3 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDF9D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DDF9D: ;
    ecx = ebx;
    PUSH32(esp, 0x001DDFA4u); RECOMP_ABI_CALL(0x001DCF7Bu, sub_001DCF7B); /* call 0x001DCF7B */

loc_001DDFA4: ;
    g_seh_ebp = ebp; sub_001DDFBA(); return; /* tail jmp 0x001DDFBA */

}

/**
 * sub_001DDFA6
 * Original: 0x001DDFA6 - 0x001DDFB3 (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDFA6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DDFA6: ;
    eax = eax | 0x10000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0xA78) = eax;
    g_seh_ebp = ebp; sub_001DDFBA(); return; /* tail jmp 0x001DDFBA */

}

/**
 * sub_001DDFB3
 * Original: 0x001DDFB3 - 0x001DDFBA (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDFB3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DDFB3: ;
    MEM8(ebx + 0xA7A) = MEM8(ebx + 0xA7A) | 8;
    _fa = (uint32_t)(MEM8(ebx + 0xA7A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001DDFBA(); return; /* fallthrough 0x001DDFBA */

}

/**
 * sub_001DDFBA
 * Original: 0x001DDFBA - 0x001DDFBC (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDFBA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DDFBA: ;
    POP32(esp, edi);
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001DDFBC(); return; /* fallthrough 0x001DDFBC */

}

/**
 * sub_001DDFBC
 * Original: 0x001DDFBC - 0x001DDFC1 (5 bytes, 3 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDFBC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DDFBC: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001DDFC1
 * Original: 0x001DDFC1 - 0x001DE08F (206 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DDFC1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DDFC1: ;
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
    edi = MEM32(ebp + 8);
    esi = MEM32(edi);
    ebx = ecx;
    SET_LO16(ecx, MEM16(edi + 4));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 4 (16-bit) */
    MEM32(ebp + -28) = esi;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE44B(); return; } /* jb: below (unsigned <) */

loc_001DDFE2: ;
    SET_LO16(eax, MEM16(esi + 2));
    SET_HI8(edx, LO8(eax));
    SET_LO8(edx, HI8(eax));
    eax = ZX16(LO16(edx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE44B(); return; } /* jb: below (unsigned <) */

loc_001DDFF6: ;
    ecx = ZX16(LO16(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE44B(); return; } /* ja: above (unsigned >) */

loc_001DE001: ;
    MEM16(edi + 4) = LO16(eax);
    _fa = (uint32_t)(MEM8(ebx + 0x8C8)) & 0xFFu; _fb = (uint32_t)(0x13) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x8C8), 0x13 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE44B(); return; } /* jb: below (unsigned <) */

loc_001DE012: ;
    SET_LO8(ecx, MEM8(esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE43F(); return; } /* je: equal / zero */

loc_001DE01D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 7 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE43F(); return; } /* je: equal / zero */

loc_001DE026: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE43F(); return; } /* je: equal / zero */

loc_001DE02F: ;
    edx = 0x21C0;
    _fa = (uint32_t)(MEM16(ebp + 0xC)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0xC), LO16(edx) (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE08F(); return; } /* jne: not equal / not zero */

loc_001DE03A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE44B(); return; } /* je: equal / zero */

loc_001DE043: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE44B(); return; } /* je: equal / zero */

loc_001DE04C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE08F(); return; } /* jne: not equal / not zero */

loc_001DE051: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE44B(); return; } /* jb: below (unsigned <) */

loc_001DE05A: ;
    _fa = (uint32_t)(MEM8(ebx + 0xA38)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0xA38), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE44B(); return; } /* jne: not equal / not zero */

loc_001DE067: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    eax = ebx + 0xA44;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 1));
    PUSH32(esp, eax);
    PUSH32(esp, 0xA);
    PUSH32(esp, edx);
    g_seh_ebp = ebp; sub_001DE436(); return; /* tail jmp 0x001DE436 */

}

/**
 * sub_001DE08F
 * Original: 0x001DE08F - 0x001DE436 (935 bytes, 340 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE08F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DE08F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DE408; /* jb: below (unsigned <) */

loc_001DE098: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001DE408; /* ja: above (unsigned >) */

loc_001DE0A1: ;
    _fa = (uint32_t)(MEM16(ebp + 0xC)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0xC), LO16(edx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DE0B2; /* jne: not equal / not zero */

loc_001DE0A7: ;
    edx = ebx + 0xA38;
    MEM32(ebp + -12) = edx;
    goto loc_001DE0BD;

loc_001DE0B2: ;
    ecx = ebx + 0xA3D;
    MEM32(ebp + -12) = ecx;
    edx = ecx;

loc_001DE0BD: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE44B(); return; } /* je: equal / zero */

loc_001DE0C6: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    ecx = esi + 4;
    MEM32(ebp + 8) = edi;
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -8) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_001DE144; /* jbe: below or equal (unsigned <=) */

loc_001DE0E1: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 2 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE44B(); return; } /* jb: below (unsigned <) */

loc_001DE0EB: ;
    ecx = MEM32(ebp + -4);
    SET_LO8(eax, MEM8(ecx + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE44B(); return; } /* jb: below (unsigned <) */

loc_001DE0F9: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    MEM32(ebp + -24) = eax;
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE44B(); return; } /* ja: above (unsigned >) */

loc_001DE108: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi));
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x001DE11Au); RECOMP_ABI_CALL(0x001DC9E1u, sub_001DC9E1); /* call 0x001DC9E1 */

loc_001DE11A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE44B(); return; } /* je: equal / zero */

loc_001DE122: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DE12E; /* jne: not equal / not zero */

loc_001DE129: ;
    MEM32(ebp + 8) = ecx;
    goto loc_001DE136;

loc_001DE12E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DE136; /* jne: not equal / not zero */

loc_001DE133: ;
    MEM32(ebp + -20) = ecx;

loc_001DE136: ;
    eax = MEM32(ebp + -24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) - eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_001DE0E1; /* jne: not equal / not zero */

loc_001DE141: ;
    edx = MEM32(ebp + -12);

loc_001DE144: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DE33B; /* jne: not equal / not zero */

loc_001DE14D: ;
    _fa = (uint32_t)(MEM8(ebx + 0x8C8)) & 0xFFu; _fb = (uint32_t)(0x14) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x8C8), 0x14 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DE162; /* jne: not equal / not zero */

loc_001DE156: ;
    PUSH32(esp, 0x13);
    ecx = ebx;
    PUSH32(esp, 0x001DE15Fu); RECOMP_ABI_CALL(0x001DD307u, sub_001DD307); /* call 0x001DD307 */

loc_001DE15F: ;
    edx = MEM32(ebp + -12);

loc_001DE162: ;
    MEM8(ebx + 0xA7A) = MEM8(ebx + 0xA7A) | 4;
    _fa = (uint32_t)(MEM8(ebx + 0xA7A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DE213; /* jne: not equal / not zero */

loc_001DE172: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DE213; /* jne: not equal / not zero */

loc_001DE17B: ;
    eax = esi + 4;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_001DE1B3; /* jbe: below or equal (unsigned <=) */

loc_001DE18B: ;
    eax = MEM32(ebp + -4);
    SET_LO8(ecx, MEM8(eax + 1));
    MEM8(ebp + 0xB) = LO8(ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi));
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DE1A7u); RECOMP_ABI_CALL(0x001DC9E1u, sub_001DC9E1); /* call 0x001DC9E1 */

loc_001DE1A7: ;
    eax = ZX8(MEM8(ebp + 0xB));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) - eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_001DE18B; /* jne: not equal / not zero */

loc_001DE1B3: ;
    PUSH32(esp, edi);
    MEM8(ebx + 0xA79) = MEM8(ebx + 0xA79) | 0x80;
    _fa = (uint32_t)(MEM8(ebx + 0xA79)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -16));
    eax = esi + 4;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 1));
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x001DE1DCu); RECOMP_ABI_CALL(0x001DCC4Au, sub_001DCC4A); /* call 0x001DCC4A */

loc_001DE1DC: ;
    ecx = MEM32(ebp + -12);
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE44B(); return; } /* je: equal / zero */

loc_001DE1E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DE20B; /* jne: not equal / not zero */

loc_001DE1ED: ;
    MEM8(ecx) = 4;

loc_001DE1F0: ;
    _fa = (uint32_t)(MEM8(ebx + 0x8C8)) & 0xFFu; _fb = (uint32_t)(0x13) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x8C8), 0x13 (8-bit) */
    ecx = ebx;
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = eax + eax + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DE206u); RECOMP_ABI_CALL(0x001DD307u, sub_001DD307); /* call 0x001DD307 */

loc_001DE206: ;
    g_seh_ebp = ebp; sub_001DE44B(); return; /* tail jmp 0x001DE44B */

loc_001DE20B: ;
    MEM8(ecx) = 3;
    g_seh_ebp = ebp; sub_001DE44B(); return; /* tail jmp 0x001DE44B */

loc_001DE213: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE44B(); return; } /* je: equal / zero */

loc_001DE21C: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    ecx = MEM32(ebp + -16);
    eax = esi + 4;
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001DE2A6; /* je: equal / zero */

loc_001DE22D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_001DE285; /* jbe: below or equal (unsigned <=) */

loc_001DE234: ;
    eax = MEM32(ebp + -4);
    SET_LO8(ecx, MEM8(eax + 1));
    MEM8(ebp + 0xB) = LO8(ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi));
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DE24Fu); RECOMP_ABI_CALL(0x001DC9E1u, sub_001DC9E1); /* call 0x001DC9E1 */

loc_001DE24F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DE276; /* jne: not equal / not zero */

loc_001DE254: ;
    eax = ZX8(MEM8(ebp + 0xB));
    edi = MEM32(ebp + -16);
    esi = MEM32(ebp + -4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -16) = MEM32(ebp + -16) + eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
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
    esi = MEM32(ebp + -28);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001DE276: ;
    eax = ZX8(MEM8(ebp + 0xB));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) - eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_001DE234; /* jne: not equal / not zero */

loc_001DE282: ;
    eax = MEM32(ebp + -16);

loc_001DE285: ;
    MEM8(ebx + 0xA7A) = MEM8(ebx + 0xA7A) | 2;
    _fa = (uint32_t)(MEM8(ebx + 0xA7A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    ecx = esi + 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 1));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    goto loc_001DE31D;

loc_001DE2A6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    eax = ebp + -56;
    MEM32(ebp + -16) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_001DE2FC; /* jbe: below or equal (unsigned <=) */

loc_001DE2B0: ;
    ecx = MEM32(ebp + -4);
    SET_LO8(ecx, MEM8(ecx + 1));
    MEM8(ebp + 0xB) = LO8(ecx);
    ecx = ebp + -56;
    edx = ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DE2D5; /* jae: above or equal (unsigned >=) */

loc_001DE2C2: ;
    edx = MEM32(ebp + -4);
    SET_LO8(edx, MEM8(edx));
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DE2F0; /* je: equal / zero */

loc_001DE2CB: ;
    edx = ZX8(MEM8(ecx + 1));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DE2C2; /* jb: below (unsigned <) */

loc_001DE2D5: ;
    PUSH32(esp, 1);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi));
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x001DE2EDu); RECOMP_ABI_CALL(0x001DC9E1u, sub_001DC9E1); /* call 0x001DC9E1 */

loc_001DE2ED: ;
    eax = MEM32(ebp + -16);

loc_001DE2F0: ;
    ecx = ZX8(MEM8(ebp + 0xB));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + ecx;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) - ecx;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_001DE2B0; /* jne: not equal / not zero */

loc_001DE2FC: ;
    MEM8(ebx + 0xA7A) = MEM8(ebx + 0xA7A) | 1;
    _fa = (uint32_t)(MEM8(ebx + 0xA7A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    ecx = ebp + -56;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = ecx;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 1));
    PUSH32(esp, eax);
    PUSH32(esp, 3);

loc_001DE31D: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebx;
    PUSH32(esp, 0x001DE327u); RECOMP_ABI_CALL(0x001DCC4Au, sub_001DCC4A); /* call 0x001DCC4A */

loc_001DE327: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE44B(); return; } /* jne: not equal / not zero */

loc_001DE333: ;
    MEM8(eax) = 1;
    g_seh_ebp = ebp; sub_001DE44B(); return; /* tail jmp 0x001DE44B */

loc_001DE33B: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ebx + 0xA3A)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ebx + 0xA3A) (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE44B(); return; } /* jne: not equal / not zero */

loc_001DE34A: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE44B(); return; } /* je: equal / zero */

loc_001DE353: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE44B(); return; } /* jne: not equal / not zero */

loc_001DE35C: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE44B(); return; } /* jne: not equal / not zero */

loc_001DE365: ;
    ecx = ebx + 0xA3B;
    SET_LO8(eax, MEM8(ecx));
    MEM8(ebx + 0xA3A) = LO8(eax);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx) = LO8(eax);
    eax = esi + 4;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM8(ebx + 0x8C9) = 0;
    MEM32(ebp + -8) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_001DE3B9; /* jbe: below or equal (unsigned <=) */

loc_001DE38E: ;
    eax = MEM32(ebp + -4);
    SET_LO8(ecx, MEM8(eax + 1));
    MEM8(ebp + 0xB) = LO8(ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi));
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DE3AAu); RECOMP_ABI_CALL(0x001DC9E1u, sub_001DC9E1); /* call 0x001DC9E1 */

loc_001DE3AA: ;
    eax = ZX8(MEM8(ebp + 0xB));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) - eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_001DE38E; /* jne: not equal / not zero */

loc_001DE3B6: ;
    edx = MEM32(ebp + -12);

loc_001DE3B9: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DE3DD; /* jne: not equal / not zero */

loc_001DE3BF: ;
    MEM8(ebx + 0xA7A) = MEM8(ebx + 0xA7A) | 8;
    _fa = (uint32_t)(MEM8(ebx + 0xA7A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(eax, MEM8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DE3D4; /* jne: not equal / not zero */

loc_001DE3CC: ;
    MEM8(edx) = 4;
    goto loc_001DE1F0;

loc_001DE3D4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DE3FC; /* jne: not equal / not zero */

loc_001DE3D8: ;
    MEM8(edx) = 2;
    g_seh_ebp = ebp; sub_001DE44B(); return; /* tail jmp 0x001DE44B */

loc_001DE3DD: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0xFFF00000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x200000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0xA78) = MEM32(ebx + 0xA78) | ecx;
    _fa = (uint32_t)(MEM32(ebx + 0xA78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DE3FF; /* jne: not equal / not zero */

loc_001DE3FC: ;
    MEM8(edx) = 1;

loc_001DE3FF: ;
    ecx = ebx;
    PUSH32(esp, 0x001DE406u); RECOMP_ABI_CALL(0x001DCEA1u, sub_001DCEA1); /* call 0x001DCEA1 */

loc_001DE406: ;
    g_seh_ebp = ebp; sub_001DE44B(); return; /* tail jmp 0x001DE44B */

loc_001DE408: ;
    _fa = (uint32_t)(MEM8(ebx + 0x8C8)) & 0xFFu; _fb = (uint32_t)(0x16) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x8C8), 0x16 (8-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE44B(); return; } /* jae: above or equal (unsigned >=) */

loc_001DE411: ;
    eax = ebx + 0xA3B;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = ZX16(MEM16(edi + 4));
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 7);
    PUSH32(esp, MEM32(ebp + 0xC));

    g_seh_ebp = ebp; sub_001DE436(); return; /* fallthrough 0x001DE436 */

}

/**
 * sub_001DE436
 * Original: 0x001DE436 - 0x001DE43F (9 bytes, 3 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE436(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DE436: ;
    ecx = ebx;
    PUSH32(esp, 0x001DE43Du); RECOMP_ABI_CALL(0x001DCC4Au, sub_001DCC4A); /* call 0x001DCC4A */

loc_001DE43D: ;
    g_seh_ebp = ebp; sub_001DE44B(); return; /* tail jmp 0x001DE44B */

}

/**
 * sub_001DE43F
 * Original: 0x001DE43F - 0x001DE44B (12 bytes, 3 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE43F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DE43F: ;
    PUSH32(esp, 0xA0000000u);
    ecx = ebx;
    PUSH32(esp, 0x001DE44Bu); RECOMP_ABI_CALL(0x001DDB3Eu, sub_001DDB3E); /* call 0x001DDB3E */

    g_seh_ebp = ebp; sub_001DE44B(); return; /* fallthrough 0x001DE44B */

}

/**
 * sub_001DE44B
 * Original: 0x001DE44B - 0x001DE452 (7 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE44B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DE44B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DE452
 * Original: 0x001DE452 - 0x001DE5C6 (372 bytes, 125 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DE452(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DE452: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(eax + 4));
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 4 (16-bit) */
    esi = ecx;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE5F0(); return; } /* jb: below (unsigned <) */

loc_001DE470: ;
    SET_LO16(ecx, MEM16(ebx + 2));
    SET_HI8(edx, LO8(ecx));
    SET_LO8(edx, HI8(ecx));
    ecx = ZX16(LO16(edx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    MEM32(ebp + 8) = ecx;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE5F0(); return; } /* jb: below (unsigned <) */

loc_001DE487: ;
    edx = ZX16(LO16(edi));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE5F0(); return; } /* ja: above (unsigned >) */

loc_001DE492: ;
    MEM16(eax + 4) = LO16(ecx);
    eax = ZX8(MEM8(esi + 0xA39));
    SET_LO8(edx, MEM8(esi + 0x8C8));
    ecx = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x14) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x14 (8-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE5F7(); return; } /* jb: below (unsigned <) */

loc_001DE4BD: ;
    if (CMP_BE(_fa, _fb)) goto loc_001DE4C7; /* jbe: below or equal (unsigned <=) */

loc_001DE4BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE5F7(); return; } /* je: equal / zero */

loc_001DE4C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ebp + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x23C0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0xC), 0x23C0 (16-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE5F7(); return; } /* jne: not equal / not zero */

loc_001DE4DA: ;
    ecx = esi + 0x962;
    edi = ecx + 1;

loc_001DE4E3: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DE4E3; /* jne: not equal / not zero */

loc_001DE4EA: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = ecx;
    ecx = esi + 0x9A2;
    edi = ecx + 1;

loc_001DE4F8: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DE4F8; /* jne: not equal / not zero */

loc_001DE4FF: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    MEM32(ebp + 0xC) = ecx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE5C6(); return; } /* je: equal / zero */

loc_001DE50E: ;
    SET_LO8(eax, MEM8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE5CD(); return; } /* je: equal / zero */

loc_001DE518: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE5E2(); return; } /* je: equal / zero */

loc_001DE520: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE5F7(); return; } /* jne: not equal / not zero */

loc_001DE528: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 5 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE5F0(); return; } /* jb: below (unsigned <) */

loc_001DE532: ;
    eax = ZX8(MEM8(ebx + 4));
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE5F0(); return; } /* jb: below (unsigned <) */

loc_001DE542: ;
    eax = ebp + -120;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DE54Bu); RECOMP_ABI_CALL(0x001E35E5u, sub_001E35E5); /* call 0x001E35E5 */

loc_001DE54B: ;
    PUSH32(esp, 1);
    edi = ebx + 1;
    PUSH32(esp, edi);
    eax = ebp + -120;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DE55Au); RECOMP_ABI_CALL(0x001E3623u, sub_001E3623); /* call 0x001E3623 */

loc_001DE55A: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DE573; /* jbe: below or equal (unsigned <=) */

loc_001DE560: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = esi + 0x9A2;
    PUSH32(esp, eax);
    eax = ebp + -120;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DE573u); RECOMP_ABI_CALL(0x001E3623u, sub_001E3623); /* call 0x001E3623 */

loc_001DE573: ;
    SET_LO8(eax, MEM8(ebx + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DE58B; /* jbe: below or equal (unsigned <=) */

loc_001DE57A: ;
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 5;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    eax = ebp + -120;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DE58Bu); RECOMP_ABI_CALL(0x001E3623u, sub_001E3623); /* call 0x001E3623 */

loc_001DE58B: ;
    eax = ebp + -120;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DE594u); RECOMP_ABI_CALL(0x001E3751u, sub_001E3751); /* call 0x001E3751 */

loc_001DE594: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    eax = esi + 0x962;
    PUSH32(esp, eax);
    PUSH32(esp, 0x11);
    eax = ebp + -29;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edi));
    ecx = esi;
    MEM8(ebp + -29) = 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x23C2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DE5C4u); RECOMP_ABI_CALL(0x001DCC4Au, sub_001DCC4A); /* call 0x001DCC4A */

loc_001DE5C4: ;
    g_seh_ebp = ebp; sub_001DE5F7(); return; /* tail jmp 0x001DE5F7 */

}

/**
 * sub_001DE5C6
 * Original: 0x001DE5C6 - 0x001DE5CD (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE5C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DE5C6: ;
    SET_LO8(ebx, MEM8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE5DD(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001DE5CD(); return; /* fallthrough 0x001DE5CD */

}

/**
 * sub_001DE5CD
 * Original: 0x001DE5CD - 0x001DE5DD (16 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE5CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DE5CD: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x14) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x14 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE5F7(); return; } /* jne: not equal / not zero */

loc_001DE5D2: ;
    PUSH32(esp, 0x15);
    ecx = esi;
    PUSH32(esp, 0x001DE5DBu); RECOMP_ABI_CALL(0x001DD307u, sub_001DD307); /* call 0x001DD307 */

loc_001DE5DB: ;
    g_seh_ebp = ebp; sub_001DE5F7(); return; /* tail jmp 0x001DE5F7 */

}

/**
 * sub_001DE5DD
 * Original: 0x001DE5DD - 0x001DE5E2 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE5DD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DE5DD: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE5F7(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001DE5E2(); return; /* fallthrough 0x001DE5E2 */

}

/**
 * sub_001DE5E2
 * Original: 0x001DE5E2 - 0x001DE5F0 (14 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE5E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DE5E2: ;
    PUSH32(esp, 0x80010000u);
    ecx = esi;
    PUSH32(esp, 0x001DE5EEu); RECOMP_ABI_CALL(0x001DDB3Eu, sub_001DDB3E); /* call 0x001DDB3E */

loc_001DE5EE: ;
    g_seh_ebp = ebp; sub_001DE5F7(); return; /* tail jmp 0x001DE5F7 */

}

/**
 * sub_001DE5F0
 * Original: 0x001DE5F0 - 0x001DE5F7 (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE5F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DE5F0: ;
    MEM8(esi + 0xA7A) = MEM8(esi + 0xA7A) | 2;
    _fa = (uint32_t)(MEM8(esi + 0xA7A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001DE5F7(); return; /* fallthrough 0x001DE5F7 */

}

/**
 * sub_001DE5F7
 * Original: 0x001DE5F7 - 0x001DE5FE (7 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE5F7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DE5F7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DE5FE
 * Original: 0x001DE5FE - 0x001DE63D (63 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE5FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DE5FE: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x8C8)) & 0xFFu; _fb = (uint32_t)(0x16) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x8C8), 0x16 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE681(); return; } /* jne: not equal / not zero */

loc_001DE60A: ;
    eax = ZX8(MEM8(esi + 0x2B));
    ecx = eax + eax * 4;
    eax = MEM32(esi + 0xA60);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1D8);
    edx = eax + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE680(); return; } /* jae: above or equal (unsigned >=) */

loc_001DE625: ;
    edx = ZX8(MEM8(esi + 0x2C));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x32);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE63D(); return; } /* jae: above or equal (unsigned >=) */

loc_001DE632: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x001DE63Bu); RECOMP_ABI_CALL(0x001DDB3Eu, sub_001DDB3E); /* call 0x001DDB3E */

loc_001DE63B: ;
    g_seh_ebp = ebp; sub_001DE680(); return; /* tail jmp 0x001DE680 */

}

/**
 * sub_001DE63D
 * Original: 0x001DE63D - 0x001DE680 (67 bytes, 28 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE63D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DE63D: ;
    eax = MEM32(esi + 0xA64);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DE680(); return; } /* jae: above or equal (unsigned >=) */

loc_001DE649: ;
    eax = esi + 0xA3B;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    eax = esi + 0xA44;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 9);
    PUSH32(esp, 0x21C0);
    ecx = esi;
    PUSH32(esp, 0x001DE67Au); RECOMP_ABI_CALL(0x001DCC4Au, sub_001DCC4A); /* call 0x001DCC4A */

loc_001DE67A: ;
    MEM32(esi + 0xA64) = edi;

    g_seh_ebp = ebp; sub_001DE680(); return; /* fallthrough 0x001DE680 */

}

/**
 * sub_001DE680
 * Original: 0x001DE680 - 0x001DE681 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DE680: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001DE681(); return; /* fallthrough 0x001DE681 */

}

/**
 * sub_001DE681
 * Original: 0x001DE681 - 0x001DE683 (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE681(void)
{

loc_001DE681: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DE683
 * Original: 0x001DE683 - 0x001DE99D (794 bytes, 210 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE683(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DE683: ;
    SET_LO8(edx, MEM8(ecx + 0x8C8));
    eax = ZX8(LO8(edx));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001DE932; /* ja: above (unsigned >) */

loc_001DE696: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1DE935); /* switch: 26 entries, 23 targets */
    if (_jt == 0x001DE69Du) goto loc_001DE69D;
    if (_jt == 0x001DE6B7u) goto loc_001DE6B7;
    if (_jt == 0x001DE6E8u) goto loc_001DE6E8;
    if (_jt == 0x001DE71Bu) goto loc_001DE71B;
    if (_jt == 0x001DE72Fu) goto loc_001DE72F;
    if (_jt == 0x001DE746u) goto loc_001DE746;
    if (_jt == 0x001DE758u) goto loc_001DE758;
    if (_jt == 0x001DE792u) goto loc_001DE792;
    if (_jt == 0x001DE7A9u) goto loc_001DE7A9;
    if (_jt == 0x001DE7C6u) goto loc_001DE7C6;
    if (_jt == 0x001DE7E3u) goto loc_001DE7E3;
    if (_jt == 0x001DE7ECu) goto loc_001DE7EC;
    if (_jt == 0x001DE80Cu) goto loc_001DE80C;
    if (_jt == 0x001DE82Bu) goto loc_001DE82B;
    if (_jt == 0x001DE848u) goto loc_001DE848;
    if (_jt == 0x001DE854u) goto loc_001DE854;
    if (_jt == 0x001DE87Fu) goto loc_001DE87F;
    if (_jt == 0x001DE897u) goto loc_001DE897;
    if (_jt == 0x001DE8DEu) goto loc_001DE8DE;
    if (_jt == 0x001DE8FFu) goto loc_001DE8FF;
    if (_jt == 0x001DE914u) goto loc_001DE914;
    if (_jt == 0x001DE929u) goto loc_001DE929;
    if (_jt == 0x001DE932u) goto loc_001DE932;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001DE69D: ;
    SET_LO16(eax, MEM16(ecx + 0x8CC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, 0);
    if (TEST_Z(_fa, _fb)) goto loc_001DE6B1; /* je: equal / zero */

loc_001DE6AA: ;
    PUSH32(esp, 2);
    goto loc_001DE92D;

loc_001DE6B1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001DE6E1; /* je: equal / zero */

loc_001DE6B5: ;
    goto loc_001DE728;

loc_001DE6B7: ;
    SET_LO8(eax, MEM8(ecx + 0x8C9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x11)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x11) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001DE7A1; /* jb: below (unsigned <) */

loc_001DE6C6: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 0x908)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x908), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) goto loc_001DE6D8; /* je: equal / zero */

loc_001DE6D1: ;
    PUSH32(esp, 3);
    goto loc_001DE92D;

loc_001DE6D8: ;
    _fa = (uint32_t)(MEM8(ecx + 0x8CC)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x8CC), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001DE728; /* jne: not equal / not zero */

loc_001DE6E1: ;
    PUSH32(esp, 4);
    goto loc_001DE92D;

loc_001DE6E8: ;
    SET_LO8(eax, MEM8(ecx + 0x8C9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x11)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x11) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001DE7A1; /* jb: below (unsigned <) */

loc_001DE6F7: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ecx + 0xA78) = MEM32(ecx + 0xA78) | 0x80001000u;
    _fa = (uint32_t)(MEM32(ecx + 0xA78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0x8CC));
    if (6) _cf = (int)(((LO8(eax)) >> ((6) - 1)) & 1);
    SET_LO8(eax, LO8(eax) >> 6);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    PUSH32(esp, 0);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFF01u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001DE879;

loc_001DE71B: ;
    SET_LO8(eax, MEM8(ecx + 0x8C9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x1C)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x1C) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001DE7A1; /* jb: below (unsigned <) */

loc_001DE726: ;
    PUSH32(esp, 0);

loc_001DE728: ;
    PUSH32(esp, 5);
    goto loc_001DE92D;

loc_001DE72F: ;
    SET_LO8(eax, MEM8(ecx + 0x8CC));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0x10);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xFE);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, 0);
    _fb = (uint32_t)(9) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(9)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 9);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    goto loc_001DE879;

loc_001DE746: ;
    SET_LO8(eax, MEM8(ecx + 0x8C9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x1A)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x1A) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001DE7A1; /* jb: below (unsigned <) */

loc_001DE751: ;
    PUSH32(esp, 0);
    goto loc_001DE841;

loc_001DE758: ;
    SET_LO8(eax, MEM8(ecx + 0x8C9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x19)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x19) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001DE7A1; /* jb: below (unsigned <) */

loc_001DE763: ;
    _fa = (uint32_t)(MEM8(ecx + 0x8CC)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x8CC), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001DE775; /* je: equal / zero */

loc_001DE76C: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + 0xA79) = MEM8(ecx + 0xA79) | 8;
    _fa = (uint32_t)(MEM8(ecx + 0xA79)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_001DE7DA;

loc_001DE775: ;
    _fa = (uint32_t)(MEM8(ecx + 5)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 5), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001DE784; /* je: equal / zero */

loc_001DE77B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x17);
    goto loc_001DE92D;

loc_001DE784: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + 0xA7B) = MEM8(ecx + 0xA7B) | 0xC0;
    _fa = (uint32_t)(MEM8(ecx + 0xA7B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001DE878;

loc_001DE792: ;
    SET_LO8(eax, MEM8(ecx + 0x8C9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x1B)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x1B) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001DE832; /* jae: above or equal (unsigned >=) */

loc_001DE7A1: ;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    goto loc_001DE92D;

loc_001DE7A9: ;
    _fa = (uint32_t)(MEM8(ecx + 0x8CC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x8CC), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001DE7BD; /* je: equal / zero */

loc_001DE7B2: ;
    SET_LO8(eax, MEM8(ecx + 0x8C9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x11)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x11) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001DE7A1; /* jb: below (unsigned <) */

loc_001DE7BD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    goto loc_001DE92D;

loc_001DE7C6: ;
    _fa = (uint32_t)(MEM8(ecx + 0x8CC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x8CC), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001DE7DA; /* je: equal / zero */

loc_001DE7CF: ;
    SET_LO8(eax, MEM8(ecx + 0x8C9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x11)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x11) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001DE7A1; /* jb: below (unsigned <) */

loc_001DE7DA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    goto loc_001DE92D;

loc_001DE7E3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xD);
    goto loc_001DE92D;

loc_001DE7EC: ;
    eax = MEM32(ecx + 0x928);
    eax = eax + eax * 4;
    _fb = (uint32_t)(MEM32(ecx + 0x920)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ecx + 0x920))) >> 32) & 1);
    eax = eax + MEM32(ecx + 0x920);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ecx + 0x1D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1D8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001DE7A1; /* jb: below (unsigned <) */

loc_001DE803: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xE);
    goto loc_001DE92D;

loc_001DE80C: ;
    eax = MEM32(ecx + 0x92C);
    eax = eax + eax * 4;
    _fb = (uint32_t)(MEM32(ecx + 0x920)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ecx + 0x920))) >> 32) & 1);
    eax = eax + MEM32(ecx + 0x920);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ecx + 0x1D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1D8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001DE7A1; /* jb: below (unsigned <) */

loc_001DE827: ;
    PUSH32(esp, 0);
    goto loc_001DE8A7;

loc_001DE82B: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + 0x8CC) = MEM8(ecx + 0x8CC) & 0xEF;
    _fa = (uint32_t)(MEM8(ecx + 0x8CC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_001DE832: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x8F0) = eax;
    MEM32(ecx + 0x930) = eax;
    PUSH32(esp, eax);

loc_001DE841: ;
    PUSH32(esp, 9);
    goto loc_001DE92D;

loc_001DE848: ;
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x001DE84Fu); RECOMP_ABI_CALL(0x001DD307u, sub_001DD307); /* call 0x001DD307 */

loc_001DE84F: ;
    goto loc_001DE932;

loc_001DE854: ;
    SET_LO8(eax, MEM8(ecx + 0x8C9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x27)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x27) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001DE7A1; /* jb: below (unsigned <) */

loc_001DE863: ;
    _fa = (uint32_t)(MEM8(ecx + 0x8CC)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x8CC), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001DE8A2; /* je: equal / zero */

loc_001DE86C: ;
    edx = MEM32(ecx + 0xA34);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001DE8A2; /* je: equal / zero */

loc_001DE878: ;
    PUSH32(esp, eax);

loc_001DE879: ;
    PUSH32(esp, eax);
    goto loc_001DE92D;

loc_001DE87F: ;
    SET_LO8(eax, MEM8(ecx + 0x8C9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x28)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x28) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001DE7A1; /* jb: below (unsigned <) */

loc_001DE88E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x11);
    goto loc_001DE92D;

loc_001DE897: ;
    SET_LO8(eax, MEM8(ecx + 0x8C9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x29)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x29) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001DE8B1; /* jb: below (unsigned <) */

loc_001DE8A2: ;
    PUSH32(esp, 0xC0000000u);

loc_001DE8A7: ;
    PUSH32(esp, 0x001DE8ACu); RECOMP_ABI_CALL(0x001DDB3Eu, sub_001DDB3E); /* call 0x001DDB3E */

loc_001DE8AC: ;
    goto loc_001DE932;

loc_001DE8B1: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x13) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x13 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001DE8CD; /* jne: not equal / not zero */

loc_001DE8B6: ;
    eax = ecx + 0xA38;

loc_001DE8BC: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 2 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001DE7A1; /* jne: not equal / not zero */

loc_001DE8C5: ;
    MEM8(eax) = 1;
    goto loc_001DE7A1;

loc_001DE8CD: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x15) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x15 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001DE7A1; /* jne: not equal / not zero */

loc_001DE8D6: ;
    eax = ecx + 0xA3D;
    goto loc_001DE8BC;

loc_001DE8DE: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x908) = eax;
    MEM32(ecx + 0x930) = eax;
    MEM8(ecx + 0x8CA) = LO8(eax);
    MEM32(ecx + 0x8F4) = 0xFFFF;
    PUSH32(esp, eax);
    goto loc_001DE92B;

loc_001DE8FF: ;
    SET_LO8(eax, MEM8(ecx + 0x8C9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x2E)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x2E) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001DE7A1; /* jb: below (unsigned <) */

loc_001DE90E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x19);
    goto loc_001DE92D;

loc_001DE914: ;
    SET_LO8(eax, MEM8(ecx + 0x8C9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x2E)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x2E) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001DE7A1; /* jb: below (unsigned <) */

loc_001DE923: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1B);
    goto loc_001DE92D;

loc_001DE929: ;
    PUSH32(esp, 0);

loc_001DE92B: ;
    PUSH32(esp, 0x18);

loc_001DE92D: ;
    PUSH32(esp, 0x001DE932u); RECOMP_ABI_CALL(0x001DCF7Bu, sub_001DCF7B); /* call 0x001DCF7B */

loc_001DE932: ;
    esp += 8; return; /* ret 4 */

    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0x1DE7A900) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + -25)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(esi + -25) = MEM8(esi + -25) + LO8(eax);
    _fa = (uint32_t)(MEM8(esi + -25)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0x1DE75800) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + -973070873)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(edx + -973070873) = MEM8(edx + -973070873) + LO8(edx);
    _fa = (uint32_t)(MEM8(edx + -973070873)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    xbox_PortOut(0x1Du, (uint32_t)(eax), 4); /* out 0x1d, eax */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ebx)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    SET_LO8(ebx, LO8(ebx) + HI8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    xbox_PortOut(0x1Du, (uint32_t)(eax), 4); /* out 0x1d, eax */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(eax)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    SET_HI8(eax, HI8(eax) + HI8(ecx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    xbox_PortOut(0x1Du, (uint32_t)(eax), 4); /* out 0x1d, eax */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + ebp * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax + ebp * 8) = MEM8(eax + ebp * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax + ebp * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0x1DE82B00) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + -24)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax + -24) = MEM8(eax + -24) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax + -24)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0x1DE85400) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + -24)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(edi + -24) = MEM8(edi + -24) + HI8(ebx);
    _fa = (uint32_t)(MEM8(edi + -24)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0x1DE89700) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + -1761600024)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(edi + -1761600024) = MEM8(edi + -1761600024) + LO8(edx);
    _fa = (uint32_t)(MEM8(edi + -1761600024)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0x001DE98Bu); RECOMP_ABI_CALL(0xE94FE9A8u, sub_E94FE9A8); /* call 0xE94FE9A8 */

loc_001DE98B: ;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0x1DE8DE00) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ebx)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0x001DE997u); RECOMP_ABI_CALL(0xE931E9B4u, sub_E931E9B4); /* call 0xE931E9B4 */

loc_001DE997: ;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0x1DE92900) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

    g_seh_ebp = ebp; sub_001DE99D(); return; /* fallthrough 0x001DE99D */

}

/**
 * sub_001DE99D
 * Original: 0x001DE99D - 0x001DEA33 (150 bytes, 39 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DE99D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DE99D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(MEM8(ebx + 0x8C8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x8C8), 0x10 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF09E(); return; } /* jb: below (unsigned <) */

loc_001DE9B3: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(edi + 0xB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xB), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF09D(); return; } /* jne: not equal / not zero */

loc_001DE9C1: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DE9C9u); RECOMP_ABI_CALL(0x001D8186u, sub_001D8186); /* call 0x001D8186 */

loc_001DE9C9: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6488) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x6488 (32-bit) */
    ecx = ZX16(MEM16(edi + 4));
    esi = MEM32(edi);
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -32) = ecx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEF57(); return; } /* je: equal / zero */

loc_001DE9E5: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x133C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x133C (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEF57(); return; } /* je: equal / zero */

loc_001DE9F2: ;
    SET_LO8(ecx, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 7 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEA33(); return; } /* je: equal / zero */

loc_001DE9FA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x65) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x65 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEA33(); return; } /* je: equal / zero */

loc_001DE9FF: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA7 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF09C(); return; } /* jne: not equal / not zero */

loc_001DEA08: ;
    SET_LO16(eax, MEM16(ebx + 0xA5A));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF09C(); return; } /* je: equal / zero */

loc_001DEA18: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(esi + 2) (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF09C(); return; } /* jne: not equal / not zero */

loc_001DEA22: ;
    PUSH32(esp, 0x90000000u);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DEA2Eu); RECOMP_ABI_CALL(0x001DDB3Eu, sub_001DDB3E); /* call 0x001DDB3E */

loc_001DEA2E: ;
    g_seh_ebp = ebp; sub_001DF09C(); return; /* tail jmp 0x001DF09C */

}

/**
 * sub_001DEA33
 * Original: 0x001DEA33 - 0x001DEAE6 (179 bytes, 53 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEA33(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEA33: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 7 (8-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEAE6(); return; } /* je: equal / zero */

loc_001DEA46: ;
    _fa = (uint32_t)(MEM8(ebx + 0x8C8)) & 0xFFu; _fb = (uint32_t)(0x11) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x8C8), 0x11 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF09C(); return; } /* jne: not equal / not zero */

loc_001DEA53: ;
    _fa = (uint32_t)(MEM16(ebx + 0xA52)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0xA52), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001DEA9E; /* je: equal / zero */

loc_001DEA5D: ;
    edx = MEM32(ebp + -28);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(6)) >> 32) & 1);
    edx = edx + 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 3);
    POP32(esp, ecx);
    edi = edx;
    esi = ebx + 0xA4C;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        _cf = (MEM16(esi) < MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    if ((_flags == 0)) goto loc_001DEA9B; /* jne: not equal / not zero */

loc_001DEA75: ;
    SET_LO16(eax, MEM16(ebx + 0xA52));
    PUSH32(esp, eax);
    SET_LO16(eax, MEM16(ebp + 0xC));
    SET_HI8(ecx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_HI8(eax, LO8(ecx));
    SET_LO8(eax, HI8(ecx));
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001DEA93u); RECOMP_ABI_CALL(0x001DCE1Cu, sub_001DCE1C); /* call 0x001DCE1C */

loc_001DEA93: ;
    _cf = 0; /* logical op clears CF */
    MEM16(ebx + 0xA52) = MEM16(ebx + 0xA52) & 0;
    _fa = (uint32_t)(MEM16(ebx + 0xA52)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */

loc_001DEA9B: ;
    esi = MEM32(ebp + -4);

loc_001DEA9E: ;
    eax = MEM32(ebp + -8);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFE8000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x20000)) >> 32) & 1);
    eax = eax + 0x20000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebx + 0xA78) = MEM32(ebx + 0xA78) | eax;
    _fa = (uint32_t)(MEM32(ebx + 0xA78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_LO8(ecx, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 7 (8-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(ebx + 0xA78);
    if (CMP_NE(_fa, _fb)) goto loc_001DEACB; /* jne: not equal / not zero */

loc_001DEAC5: ;
    _fa = (uint32_t)(MEM16(esi + 2)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 2), LO16(edx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001DEAD6; /* jne: not equal / not zero */

loc_001DEACB: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x65) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x65 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEAF5(); return; } /* jne: not equal / not zero */

loc_001DEAD0: ;
    _fa = (uint32_t)(MEM16(esi + 2)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 2), LO16(edx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEAF5(); return; } /* jne: not equal / not zero */

loc_001DEAD6: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x800000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0xA78) = eax;
    g_seh_ebp = ebp; sub_001DF09C(); return; /* tail jmp 0x001DF09C */

}

/**
 * sub_001DEA9E
 * Original: 0x001DEA9E - 0x001DEAE6 (72 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEA9E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEA9E: ;
    eax = MEM32(ebp + -8);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFE8000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x20000)) >> 32) & 1);
    eax = eax + 0x20000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebx + 0xA78) = MEM32(ebx + 0xA78) | eax;
    _fa = (uint32_t)(MEM32(ebx + 0xA78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_LO8(ecx, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 7 (8-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(ebx + 0xA78);
    if (CMP_NE(_fa, _fb)) goto loc_001DEACB; /* jne: not equal / not zero */

loc_001DEAC5: ;
    _fa = (uint32_t)(MEM16(esi + 2)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 2), LO16(edx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001DEAD6; /* jne: not equal / not zero */

loc_001DEACB: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x65) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x65 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEAF5(); return; } /* jne: not equal / not zero */

loc_001DEAD0: ;
    _fa = (uint32_t)(MEM16(esi + 2)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 2), LO16(edx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEAF5(); return; } /* jne: not equal / not zero */

loc_001DEAD6: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x800000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0xA78) = eax;
    g_seh_ebp = ebp; sub_001DF09C(); return; /* tail jmp 0x001DF09C */

}

/**
 * sub_001DEAE6
 * Original: 0x001DEAE6 - 0x001DEAF5 (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEAE6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEAE6: ;
    _fa = (uint32_t)(MEM8(ebx + 0x8C8)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x8C8), 0x12 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF09C(); return; } /* jne: not equal / not zero */

loc_001DEAF3: ;
    g_seh_ebp = ebp; sub_001DEA9E(); return; /* tail jmp 0x001DEA9E */

}

/**
 * sub_001DEAF5
 * Original: 0x001DEAF5 - 0x001DEB37 (66 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEAF5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEAF5: ;
    eax = esi + 6;
    MEM32(ebp + -36) = eax;
    edi = eax;
    eax = MEM32(ebp + -32);
    _fb = (uint32_t)(0xFFFFFFFAu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFAu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -40) = eax;
    MEM32(ebp + 0xC) = eax;
    eax = ebx + 0xA0A;
    MEM32(ebp + -24) = edx;
    MEM32(ebp + 8) = edx;
    MEM32(ebp + -20) = edx;
    MEM32(ebp + -12) = edx;
    MEM32(ebp + -16) = edx;
    ecx = eax + 1;

loc_001DEB21: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DEB21; /* jne: not equal / not zero */

loc_001DEB28: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    MEM32(ebp + -32) = eax;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEC17(); return; } /* jbe: below or equal (unsigned <=) */

    g_seh_ebp = ebp; sub_001DEB37(); return; /* fallthrough 0x001DEB37 */

}

/**
 * sub_001DEB37
 * Original: 0x001DEB37 - 0x001DEB88 (81 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEB37(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEB37: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 4 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEC23(); return; } /* jb: below (unsigned <) */

loc_001DEB41: ;
    SET_LO16(eax, MEM16(edi + 2));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 4;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_HI8(edx, LO8(eax));
    ecx = edi + 4;
    SET_LO8(edx, HI8(eax));
    edx = ZX16(LO16(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0xC) (32-bit) */
    MEM32(ebp + -4) = edx;
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEC23(); return; } /* ja: above (unsigned >) */

loc_001DEB5F: ;
    SET_LO16(eax, MEM16(edi));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - edx;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEC10(); return; } /* je: equal / zero */

loc_001DEB6E: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x301) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x301 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEB88(); return; } /* jne: not equal / not zero */

loc_001DEB74: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEC23(); return; } /* jne: not equal / not zero */

loc_001DEB7D: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEBFF(); return; } /* jne: not equal / not zero */

loc_001DEB83: ;
    MEM32(ebp + -20) = edi;
    g_seh_ebp = ebp; sub_001DEBFF(); return; /* tail jmp 0x001DEBFF */

}

/**
 * sub_001DEB88
 * Original: 0x001DEB88 - 0x001DEBB0 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEB88(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEB88: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEBFF(); return; } /* je: equal / zero */

loc_001DEB8E: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x101) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x101 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEBCE(); return; } /* jne: not equal / not zero */

loc_001DEB94: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEBB0(); return; } /* jne: not equal / not zero */

loc_001DEB9A: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEBC9(); return; } /* je: equal / zero */

loc_001DEBA1: ;
    SET_LO16(eax, MEM16(eax + 2));
    SET_HI8(ecx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEBC9(); return; } /* je: equal / zero */

loc_001DEBAE: ;
    g_seh_ebp = ebp; sub_001DEBFF(); return; /* tail jmp 0x001DEBFF */

}

/**
 * sub_001DEBB0
 * Original: 0x001DEBB0 - 0x001DEBC9 (25 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEBB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEBB0: ;
    PUSH32(esp, MEM32(ebp + -4));
    eax = ebx + 0xA0A;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -32));
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DEBC5u); RECOMP_ABI_CALL(0x001DC033u, sub_001DC033); /* call 0x001DC033 */

loc_001DEBC5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEBFF(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_001DEBC9(); return; /* fallthrough 0x001DEBC9 */

}

/**
 * sub_001DEBC9
 * Original: 0x001DEBC9 - 0x001DEBCE (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEBC9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEBC9: ;
    MEM32(ebp + 8) = edi;
    g_seh_ebp = ebp; sub_001DEBFF(); return; /* tail jmp 0x001DEBFF */

}

/**
 * sub_001DEBCE
 * Original: 0x001DEBCE - 0x001DEBDF (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEBCE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEBCE: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x201) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x201 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEBDF(); return; } /* jne: not equal / not zero */

loc_001DEBD4: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEBFF(); return; } /* jne: not equal / not zero */

loc_001DEBDA: ;
    MEM32(ebp + -24) = edi;
    g_seh_ebp = ebp; sub_001DEBFF(); return; /* tail jmp 0x001DEBFF */

}

/**
 * sub_001DEBDF
 * Original: 0x001DEBDF - 0x001DEBF0 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEBDF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEBDF: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x401) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x401 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEBF0(); return; } /* jne: not equal / not zero */

loc_001DEBE5: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEBFF(); return; } /* jne: not equal / not zero */

loc_001DEBEB: ;
    MEM32(ebp + -12) = edi;
    g_seh_ebp = ebp; sub_001DEBFF(); return; /* tail jmp 0x001DEBFF */

}

/**
 * sub_001DEBF0
 * Original: 0x001DEBF0 - 0x001DEBFF (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEBF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEBF0: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x1001) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x1001 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEBFF(); return; } /* jne: not equal / not zero */

loc_001DEBF6: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEBFF(); return; } /* jne: not equal / not zero */

loc_001DEBFC: ;
    MEM32(ebp + -16) = edi;

    g_seh_ebp = ebp; sub_001DEBFF(); return; /* fallthrough 0x001DEBFF */

}

/**
 * sub_001DEBFF
 * Original: 0x001DEBFF - 0x001DEC10 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEBFF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEBFF: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    eax = MEM32(ebp + -4);
    edi = edi + eax + 4;
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEB37(); return; } /* ja: above (unsigned >) */

    g_seh_ebp = ebp; sub_001DEC10(); return; /* fallthrough 0x001DEC10 */

}

/**
 * sub_001DEC10
 * Original: 0x001DEC10 - 0x001DEC17 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEC10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEC10: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEC2F(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001DEC17(); return; /* fallthrough 0x001DEC17 */

}

/**
 * sub_001DEC17
 * Original: 0x001DEC17 - 0x001DEC23 (12 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEC17(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEC17: ;
    MEM8(ebx + 0xA7A) = MEM8(ebx + 0xA7A) | 8;
    _fa = (uint32_t)(MEM8(ebx + 0xA7A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001DF09C(); return; /* tail jmp 0x001DF09C */

}

/**
 * sub_001DEC23
 * Original: 0x001DEC23 - 0x001DEC2F (12 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEC23(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEC23: ;
    MEM8(ebx + 0xA7A) = MEM8(ebx + 0xA7A) | 4;
    _fa = (uint32_t)(MEM8(ebx + 0xA7A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001DF09C(); return; /* tail jmp 0x001DF09C */

}

/**
 * sub_001DEC2F
 * Original: 0x001DEC2F - 0x001DEC5A (43 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEC2F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEC2F: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xA7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0xA7C) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF09C(); return; } /* jne: not equal / not zero */

loc_001DEC3E: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEEE9(); return; } /* je: equal / zero */

loc_001DEC48: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEC5A(); return; } /* jne: not equal / not zero */

loc_001DEC4E: ;
    MEM8(ebx + 0xA7A) = MEM8(ebx + 0xA7A) | 0x40;
    _fa = (uint32_t)(MEM8(ebx + 0xA7A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001DF09C(); return; /* tail jmp 0x001DF09C */

}

/**
 * sub_001DEC5A
 * Original: 0x001DEC5A - 0x001DEC6D (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEC5A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEC5A: ;
    eax = MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEC6D(); return; } /* jne: not equal / not zero */

loc_001DEC61: ;
    MEM8(ebx + 0xA7A) = MEM8(ebx + 0xA7A) | 0x10;
    _fa = (uint32_t)(MEM8(ebx + 0xA7A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001DF09C(); return; /* tail jmp 0x001DF09C */

}

/**
 * sub_001DEC6D
 * Original: 0x001DEC6D - 0x001DECB4 (71 bytes, 26 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEC6D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEC6D: ;
    edx = eax + 4;
    SET_LO16(eax, MEM16(eax + 2));
    SET_HI8(ecx, LO8(eax));
    edi = ebx + 0x9E2;
    MEM32(ebp + -32) = edx;
    SET_LO8(ecx, HI8(eax));
    eax = ZX16(LO16(ecx));
    MEM32(ebp + -8) = eax;
    eax = edi;
    esi = eax + 1;

loc_001DEC8C: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DEC8C; /* jne: not equal / not zero */

loc_001DEC93: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001DECB4(); return; } /* je: equal / zero */

loc_001DEC97: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = ebx;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DECA4u); RECOMP_ABI_CALL(0x001DC033u, sub_001DC033); /* call 0x001DC033 */

loc_001DECA4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DECB4(); return; } /* jne: not equal / not zero */

loc_001DECA8: ;
    MEM8(ebx + 0xA7A) = MEM8(ebx + 0xA7A) | 0x20;
    _fa = (uint32_t)(MEM8(ebx + 0xA7A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001DF09C(); return; /* tail jmp 0x001DF09C */

}

/**
 * sub_001DECB4
 * Original: 0x001DECB4 - 0x001DECD1 (29 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DECB4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DECB4: ;
    _fa = (uint32_t)(MEM8(ebx + 0x8CC)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x8CC), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEDD7(); return; } /* je: equal / zero */

loc_001DECC1: ;
    eax = MEM32(ebx + 0xA34);
    esi = MEM32(eax);
    ecx = eax + 4;
    MEM32(ebp + 0xC) = ecx;
    g_seh_ebp = ebp; sub_001DED01(); return; /* tail jmp 0x001DED01 */

}

/**
 * sub_001DECD1
 * Original: 0x001DECD1 - 0x001DED01 (48 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DECD1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DECD1: ;
    eax = MEM32(ebp + 0xC);
    edi = eax + 1;

loc_001DECD7: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DECD7; /* jne: not equal / not zero */

loc_001DECDE: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebx;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, 0x001DECF1u); RECOMP_ABI_CALL(0x001DC033u, sub_001DC033); /* call 0x001DC033 */

loc_001DECF1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF09C(); return; } /* jne: not equal / not zero */

loc_001DECF9: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 0x18C;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001DED01(); return; /* fallthrough 0x001DED01 */

}

/**
 * sub_001DED01
 * Original: 0x001DED01 - 0x001DEDD7 (214 bytes, 77 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DED01(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DED01: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001DECD1(); return; } /* ja: above (unsigned >) */

loc_001DED05: ;
    PUSH32(esp, 0x27);
    POP32(esp, ecx);
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001DED10; /* ja: above (unsigned >) */

loc_001DED0D: ;
    ecx = MEM32(ebp + -8);

loc_001DED10: ;
    eax = MEM32(ebp + 0xC);
    esi = MEM32(ebp + -32);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    ecx = MEM32(ebp + -40);
    edi = MEM32(ebp + -36);
    MEM32(ebp + 0xC) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    goto loc_001DEDAB;

loc_001DED33: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DEDB0; /* jb: below (unsigned <) */

loc_001DED39: ;
    SET_LO16(ecx, MEM16(edi + 2));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 4;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_HI8(edx, LO8(ecx));
    esi = edi + 4;
    SET_LO8(edx, HI8(ecx));
    edx = ZX16(LO16(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0xC) (32-bit) */
    MEM32(ebp + -4) = edx;
    if (CMP_A(_fa, _fb)) goto loc_001DEDB0; /* ja: above (unsigned >) */

loc_001DED53: ;
    ecx = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(ecx));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - edx;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DEDB0; /* je: equal / zero */

loc_001DED61: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x101) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x101 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DEDA0; /* jne: not equal / not zero */

loc_001DED68: ;
    ecx = MEM32(eax + 0x28);
    edi = ecx + ecx * 4;
    edi = eax + edi * 8 + 0x4C;
    PUSH32(esp, 0x27);
    MEM32(eax + ecx * 4 + 0x2C) = edi;
    POP32(esp, ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001DED7F; /* ja: above (unsigned >) */

loc_001DED7D: ;
    ecx = edx;

loc_001DED7F: ;
    edx = MEM32(eax + 0x28);
    edi = MEM32(eax + edx * 4 + 0x2C);
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
    MEM32(eax + 0x28) = MEM32(eax + 0x28) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DEDB0; /* je: equal / zero */

loc_001DED9D: ;
    edx = MEM32(ebp + -4);

loc_001DEDA0: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    edi = ecx + edx + 4;

loc_001DEDAB: ;
    MEM32(ebp + 8) = edi;
    if (CMP_A(_fa, _fb)) goto loc_001DED33; /* ja: above (unsigned >) */

loc_001DEDB0: ;
    ecx = MEM32(ebx + 0xA34);
    eax = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;
    ecx = ZX8(MEM8(ebx + 0x26));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF09C(); return; } /* jne: not equal / not zero */

loc_001DEDC7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x001DEDD2u); RECOMP_ABI_CALL(0x001DCF7Bu, sub_001DCF7B); /* call 0x001DCF7B */

loc_001DEDD2: ;
    g_seh_ebp = ebp; sub_001DF09C(); return; /* tail jmp 0x001DF09C */

}

/**
 * sub_001DED33
 * Original: 0x001DED33 - 0x001DEDD7 (164 bytes, 56 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DED33(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DED33: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DEDB0; /* jb: below (unsigned <) */

loc_001DED39: ;
    SET_LO16(ecx, MEM16(edi + 2));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 4;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_HI8(edx, LO8(ecx));
    esi = edi + 4;
    SET_LO8(edx, HI8(ecx));
    edx = ZX16(LO16(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0xC) (32-bit) */
    MEM32(ebp + -4) = edx;
    if (CMP_A(_fa, _fb)) goto loc_001DEDB0; /* ja: above (unsigned >) */

loc_001DED53: ;
    ecx = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(ecx));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - edx;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DEDB0; /* je: equal / zero */

loc_001DED61: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x101) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x101 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DEDA0; /* jne: not equal / not zero */

loc_001DED68: ;
    ecx = MEM32(eax + 0x28);
    edi = ecx + ecx * 4;
    edi = eax + edi * 8 + 0x4C;
    PUSH32(esp, 0x27);
    MEM32(eax + ecx * 4 + 0x2C) = edi;
    POP32(esp, ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001DED7F; /* ja: above (unsigned >) */

loc_001DED7D: ;
    ecx = edx;

loc_001DED7F: ;
    edx = MEM32(eax + 0x28);
    edi = MEM32(eax + edx * 4 + 0x2C);
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
    MEM32(eax + 0x28) = MEM32(eax + 0x28) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DEDB0; /* je: equal / zero */

loc_001DED9D: ;
    edx = MEM32(ebp + -4);

loc_001DEDA0: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    edi = ecx + edx + 4;
    MEM32(ebp + 8) = edi;
    if (CMP_A(_fa, _fb)) goto loc_001DED33; /* ja: above (unsigned >) */

loc_001DEDB0: ;
    ecx = MEM32(ebx + 0xA34);
    eax = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;
    ecx = ZX8(MEM8(ebx + 0x26));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF09C(); return; } /* jne: not equal / not zero */

loc_001DEDC7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x001DEDD2u); RECOMP_ABI_CALL(0x001DCF7Bu, sub_001DCF7B); /* call 0x001DCF7B */

loc_001DEDD2: ;
    g_seh_ebp = ebp; sub_001DF09C(); return; /* tail jmp 0x001DF09C */

}

/**
 * sub_001DEDAB
 * Original: 0x001DEDAB - 0x001DEDD7 (44 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEDAB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEDAB: ;
    MEM32(ebp + 8) = edi;
    if (_flags /* ja: above (unsigned >) */) { g_seh_ebp = ebp; sub_001DED33(); return; }

loc_001DEDB0: ;
    ecx = MEM32(ebx + 0xA34);
    eax = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;
    ecx = ZX8(MEM8(ebx + 0x26));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF09C(); return; } /* jne: not equal / not zero */

loc_001DEDC7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x001DEDD2u); RECOMP_ABI_CALL(0x001DCF7Bu, sub_001DCF7B); /* call 0x001DCF7B */

loc_001DEDD2: ;
    g_seh_ebp = ebp; sub_001DF09C(); return; /* tail jmp 0x001DF09C */

}

/**
 * sub_001DEDCB
 * Original: 0x001DEDCB - 0x001DEDD7 (12 bytes, 3 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEDCB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEDCB: ;
    ecx = ebx;
    PUSH32(esp, 0x001DEDD2u); RECOMP_ABI_CALL(0x001DCF7Bu, sub_001DCF7B); /* call 0x001DCF7B */

loc_001DEDD2: ;
    g_seh_ebp = ebp; sub_001DF09C(); return; /* tail jmp 0x001DF09C */

}

/**
 * sub_001DEDD7
 * Original: 0x001DEDD7 - 0x001DEEE9 (274 bytes, 93 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEDD7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEDD7: ;
    eax = MEM32(ebp + 8);
    SET_LO16(eax, MEM16(eax + 2));
    esi = MEM32(ebp + -12);
    SET_HI8(ecx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    eax = ZX16(LO16(ecx));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001DEE05; /* je: equal / zero */

loc_001DEDF2: ;
    SET_LO16(ecx, MEM16(esi + 2));
    SET_HI8(edx, LO8(ecx));
    SET_LO8(edx, HI8(ecx));
    edi = ZX16(LO16(edx));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = edi;
    goto loc_001DEE0C;

loc_001DEE05: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(ebp + 0xC);

loc_001DEE0C: ;
    esi = MEM32(ebp + -16);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DEE23; /* je: equal / zero */

loc_001DEE13: ;
    SET_LO16(ecx, MEM16(esi + 2));
    SET_HI8(edx, LO8(ecx));
    SET_LO8(edx, HI8(ecx));
    esi = ZX16(LO16(edx));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001DEE25;

loc_001DEE23: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001DEE25: ;
    PUSH32(esp, MEM32(ebx + 0xA34));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    MEM32(ebp + -8) = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001DEE39u); RECOMP_ABI_CALL(0x001D8001u, sub_001D8001); /* call 0x001D8001 */

loc_001DEE39: ;
    PUSH32(esp, 0x4A54454E);
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001DEE49u); RECOMP_ABI_CALL(0x001D7ECCu, sub_001D7ECC); /* call 0x001D7ECC */

loc_001DEE49: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0xA34) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF09C(); return; } /* je: equal / zero */

loc_001DEE57: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    MEM32(eax) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_001DEE7F; /* jbe: below or equal (unsigned <=) */

loc_001DEE5F: ;
    ecx = MEM32(ebp + -4);
    edi = MEM32(ebx + 0xA34);
    esi = MEM32(ebp + 8);
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    esi = MEM32(ebp + -8);

loc_001DEE7F: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DEEA9; /* jbe: below or equal (unsigned <=) */

loc_001DEE85: ;
    eax = MEM32(ebx + 0xA34);
    edx = MEM32(ebp + -4);
    ecx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + -12);
    edi = eax + edx + 4;
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
    esi = MEM32(ebp + -8);

loc_001DEEA9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DEED1; /* jbe: below or equal (unsigned <=) */

loc_001DEEAD: ;
    eax = MEM32(ebx + 0xA34);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebp + -4);
    ecx = MEM32(ebp + -8);
    esi = MEM32(ebp + -16);
    edi = eax + edx + 4;
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

loc_001DEED1: ;
    esi = MEM32(ebp + -28);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebx + 0xA54;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, 0);
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    PUSH32(esp, 0x12);
    g_seh_ebp = ebp; sub_001DEDCB(); return; /* tail jmp 0x001DEDCB */

}

/**
 * sub_001DEEE9
 * Original: 0x001DEEE9 - 0x001DEF57 (110 bytes, 28 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEEE9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEEE9: ;
    SET_LO16(eax, MEM16(esi + 2));
    MEM16(ebx + 0xA5A) = LO16(eax);
    SET_LO16(eax, MEM16(ebx + 0x8CC));
    SET_LO8(ecx, LO8(eax));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 0x80);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(0u - (uint32_t)(LO8(ecx))));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | 8);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFAEB4u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(ebx + 0x8CC) = LO16(eax);
    eax = MEM32(ebx + 0xAF8);
    _fb = (uint32_t)(0x6488) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x6488)) >> 32) & 1);
    ecx = ecx + 0x6488;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM16(ebx + 0xA5C) = LO16(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001DEF37; /* je: equal / zero */

loc_001DEF2C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BC5C); PUSH32(esp, 0x001DEF37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DEF31u); } /* indirect call */
    }

loc_001DEF37: ;
    esi = ebx + 0xA34;
    PUSH32(esp, MEM32(esi));
    ecx = ebx;
    PUSH32(esp, 0x001DEF46u); RECOMP_ABI_CALL(0x001D8001u, sub_001D8001); /* call 0x001D8001 */

loc_001DEF46: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x13);
    ecx = ebx;
    PUSH32(esp, 0x001DEF52u); RECOMP_ABI_CALL(0x001DD307u, sub_001DD307); /* call 0x001DD307 */

loc_001DEF52: ;
    g_seh_ebp = ebp; sub_001DF09C(); return; /* tail jmp 0x001DF09C */

}

/**
 * sub_001DEF57
 * Original: 0x001DEF57 - 0x001DEF8E (55 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEF57(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEF57: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF09C(); return; } /* jne: not equal / not zero */

loc_001DEF61: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF09C(); return; } /* jb: below (unsigned <) */

loc_001DEF6A: ;
    _fa = (uint32_t)(MEM16(ebx + 0xA5A)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0xA5A), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEF8E(); return; } /* jne: not equal / not zero */

loc_001DEF74: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 2));
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001DEF89u); RECOMP_ABI_CALL(0x001DCE1Cu, sub_001DCE1C); /* call 0x001DCE1C */

loc_001DEF89: ;
    g_seh_ebp = ebp; sub_001DF09C(); return; /* tail jmp 0x001DF09C */

}

/**
 * sub_001DEF7D
 * Original: 0x001DEF7D - 0x001DEF8E (17 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEF7D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEF7D: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001DEF89u); RECOMP_ABI_CALL(0x001DCE1Cu, sub_001DCE1C); /* call 0x001DCE1C */

loc_001DEF89: ;
    g_seh_ebp = ebp; sub_001DF09C(); return; /* tail jmp 0x001DF09C */

}

/**
 * sub_001DEF81
 * Original: 0x001DEF81 - 0x001DEF8E (13 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEF81(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEF81: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001DEF89u); RECOMP_ABI_CALL(0x001DCE1Cu, sub_001DCE1C); /* call 0x001DCE1C */

loc_001DEF89: ;
    g_seh_ebp = ebp; sub_001DF09C(); return; /* tail jmp 0x001DF09C */

}

/**
 * sub_001DEF8E
 * Original: 0x001DEF8E - 0x001DEFAF (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEF8E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEF8E: ;
    eax = MEM32(ebp + -28);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 3);
    POP32(esp, ecx);
    edi = ebx + 0xA54;
    esi = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    if ((_flags != 0)) { g_seh_ebp = ebp; sub_001DEFAF(); return; } /* je: equal / zero */

loc_001DEFA6: ;
    ecx = MEM32(ebp + -4);
    ecx = ZX16(MEM16(ecx + 2));
    g_seh_ebp = ebp; sub_001DEF7D(); return; /* tail jmp 0x001DEF7D */

}

/**
 * sub_001DEFAF
 * Original: 0x001DEFAF - 0x001DEFC4 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEFAF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEFAF: ;
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM16(ebx + 0xA5C)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0xA5C), LO16(esi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEFC4(); return; } /* je: equal / zero */

loc_001DEFBB: ;
    ecx = MEM32(ebp + -4);
    ecx = ZX16(MEM16(ecx + 2));
    g_seh_ebp = ebp; sub_001DEFD6(); return; /* tail jmp 0x001DEFD6 */

}

/**
 * sub_001DEFC4
 * Original: 0x001DEFC4 - 0x001DEFD6 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEFC4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEFC4: ;
    edx = MEM32(ebp + -4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edx + 2));
    _fa = (uint32_t)(MEM16(ebx + 0xA5A)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0xA5A), LO16(ecx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DEFDA(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_001DEFD6(); return; /* fallthrough 0x001DEFD6 */

}

/**
 * sub_001DEFD6
 * Original: 0x001DEFD6 - 0x001DEFDA (4 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEFD6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEFD6: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    g_seh_ebp = ebp; sub_001DEF81(); return; /* tail jmp 0x001DEF81 */

}

/**
 * sub_001DEFDA
 * Original: 0x001DEFDA - 0x001DF02E (84 bytes, 24 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEFDA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEFDA: ;
    eax = MEM32(ebx + 0x1D8);
    esi = MEM32(ebp + -32);
    MEM32(ebx + 0xA60) = eax;
    eax = MEM32(ebp + 8);
    MEM8(eax + 0xA) = MEM8(eax + 0xA) | 8;
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = MEM32(eax + 8);
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFF8u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 4) = LO16(esi);
    esi = edx + 8;
    MEM32(eax) = esi;
    esi = edx + 6;
    SET_LO16(eax, MEM16(esi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x2100) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x2100 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF02E(); return; } /* jne: not equal / not zero */

loc_001DF00B: ;
    _fa = (uint32_t)(MEM8(ebx + 0x8C8)) & 0xFFu; _fb = (uint32_t)(0x16) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x8C8), 0x16 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF09C(); return; } /* jne: not equal / not zero */

loc_001DF018: ;
    eax = MEM32(ebp + 8);
    ecx = ecx & 0xFFFFFFF9u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 8) = ecx;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001DF02Cu); RECOMP_ABI_CALL(0x001D754Eu, sub_001D754E); /* call 0x001D754E */

loc_001DF02C: ;
    g_seh_ebp = ebp; sub_001DF09C(); return; /* tail jmp 0x001DF09C */

}

/**
 * sub_001DF02E
 * Original: 0x001DF02E - 0x001DF084 (86 bytes, 36 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF02E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF02E: ;
    edi = 0x21C0;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF091(); return; } /* je: equal / zero */

loc_001DF038: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x2180) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x2180 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF091(); return; } /* je: equal / zero */

loc_001DF03E: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x23C0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x23C0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF084(); return; } /* je: equal / zero */

loc_001DF044: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x23C2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x23C2 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF084(); return; } /* je: equal / zero */

loc_001DF04A: ;
    _fa = (uint32_t)(MEM8(ebx + 0xA38)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0xA38), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF09C(); return; } /* jne: not equal / not zero */

loc_001DF053: ;
    eax = ebx + 0xA3B;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    edx = ZX16(MEM16(eax + 4));
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001DF082u); RECOMP_ABI_CALL(0x001DCC4Au, sub_001DCC4A); /* call 0x001DCC4A */

loc_001DF082: ;
    g_seh_ebp = ebp; sub_001DF09C(); return; /* tail jmp 0x001DF09C */

}

/**
 * sub_001DF084
 * Original: 0x001DF084 - 0x001DF091 (13 bytes, 5 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF084(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF084: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    PUSH32(esp, 0x001DF08Fu); RECOMP_ABI_CALL(0x001DE452u, sub_001DE452); /* call 0x001DE452 */

loc_001DF08F: ;
    g_seh_ebp = ebp; sub_001DF09C(); return; /* tail jmp 0x001DF09C */

}

/**
 * sub_001DF091
 * Original: 0x001DF091 - 0x001DF09C (11 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF091(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF091: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    PUSH32(esp, 0x001DF09Cu); RECOMP_ABI_CALL(0x001DDFC1u, sub_001DDFC1); /* call 0x001DDFC1 */

    g_seh_ebp = ebp; sub_001DF09C(); return; /* fallthrough 0x001DF09C */

}

/**
 * sub_001DF09C
 * Original: 0x001DF09C - 0x001DF09D (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF09C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF09C: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001DF09D(); return; /* fallthrough 0x001DF09D */

}

/**
 * sub_001DF09D
 * Original: 0x001DF09D - 0x001DF09E (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF09D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF09D: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001DF09E(); return; /* fallthrough 0x001DF09E */

}

/**
 * sub_001DF09E
 * Original: 0x001DF09E - 0x001DF0A3 (5 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF09E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF09E: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DF0A3
 * Original: 0x001DF0A3 - 0x001DF0C9 (38 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF0A3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DF0A3: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xA68;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = MEM32(eax + 8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0xC) = 0x1DE683;
    PUSH32(esp, 0x001DF0BFu); RECOMP_ABI_CALL(0x001D8157u, sub_001D8157); /* call 0x001D8157 */

loc_001DF0BF: ;
    MEM32(esi + 0xA7C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DF0D0
 * Original: 0x001DF0D0 - 0x001DF0ED (29 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DF0D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DF0D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x8B0);
    edx = MEM32(eax);
    ecx = eax + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF13E(); return; } /* jbe: below or equal (unsigned <=) */

loc_001DF0EA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

    g_seh_ebp = ebp; sub_001DF0ED(); return; /* fallthrough 0x001DF0ED */

}

/**
 * sub_001DF0ED
 * Original: 0x001DF0ED - 0x001DF113 (38 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF0ED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF0ED: ;
    eax = edx;
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DF0FA; /* jae: above or equal (unsigned >=) */

loc_001DF0F7: ;
    eax = MEM32(ebp + 0xC);

loc_001DF0FA: ;
    edi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF124(); return; } /* je: equal / zero */

loc_001DF101: ;
    ecx = eax;
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF113(); return; } /* je: equal / zero */

loc_001DF10E: ;
    esi = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_001DF118(); return; /* tail jmp 0x001DF118 */

}

/**
 * sub_001DF113
 * Original: 0x001DF113 - 0x001DF118 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF113(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF113: ;
    esi = edi;
    edi = MEM32(ebp + 8);

    g_seh_ebp = ebp; sub_001DF118(); return; /* fallthrough 0x001DF118 */

}

/**
 * sub_001DF118
 * Original: 0x001DF118 - 0x001DF124 (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF118(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF118: ;
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
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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

    g_seh_ebp = ebp; sub_001DF124(); return; /* fallthrough 0x001DF124 */

}

/**
 * sub_001DF124
 * Original: 0x001DF124 - 0x001DF13E (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF124(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF124: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DF135; /* jne: not equal / not zero */

loc_001DF12F: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + 8) = eax;

loc_001DF135: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF0ED(); return; } /* ja: above (unsigned >) */

loc_001DF13B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001DF13E(); return; /* fallthrough 0x001DF13E */

}

/**
 * sub_001DF13E
 * Original: 0x001DF13E - 0x001DF145 (7 bytes, 3 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF13E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF13E: ;
    eax = MEM32(ebp + 8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001DF1B1
 * Original: 0x001DF1B1 - 0x001DF1CA (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DF1B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001DF1B1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x2A0;
    ebx = edi + 8;
    MEM32(ebp + -4) = 0x40;

    g_seh_ebp = ebp; sub_001DF1CA(); return; /* fallthrough 0x001DF1CA */

}

/**
 * sub_001DF1CA
 * Original: 0x001DF1CA - 0x001DF1DF (21 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF1CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF1CA: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF1E4(); return; } /* je: equal / zero */

loc_001DF1CF: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    ecx = ebx;
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF1DF(); return; } /* je: equal / zero */

loc_001DF1D8: ;
    PUSH32(esp, 0x001DF1DDu); RECOMP_ABI_CALL(0x001D8360u, sub_001D8360); /* call 0x001D8360 */

loc_001DF1DD: ;
    g_seh_ebp = ebp; sub_001DF1E4(); return; /* tail jmp 0x001DF1E4 */

}

/**
 * sub_001DF1DF
 * Original: 0x001DF1DF - 0x001DF1E4 (5 bytes, 1 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF1DF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF1DF: ;
    PUSH32(esp, 0x001DF1E4u); RECOMP_ABI_CALL(0x001D8343u, sub_001D8343); /* call 0x001D8343 */

    g_seh_ebp = ebp; sub_001DF1E4(); return; /* fallthrough 0x001DF1E4 */

}

/**
 * sub_001DF1E4
 * Original: 0x001DF1E4 - 0x001DF220 (60 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF1E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF1E4: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001DF1CA(); return; } /* jne: not equal / not zero */

loc_001DF1EC: ;
    MEM32(esi + 0x294) = MEM32(esi + 0x294) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x294)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x298) = MEM32(esi + 0x298) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x298)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x29C) = edi;
    ecx = 0x180;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esi + 0x8A0;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001DF219u); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001DF219: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DF220
 * Original: 0x001DF220 - 0x001DF24F (47 bytes, 17 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF220: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_001DF247; /* jns: not sign (positive) */

loc_001DF229: ;
    ecx = 0x40000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001DF247; /* jne: not equal / not zero */

loc_001DF232: ;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001DF23Au); RECOMP_ABI_CALL(0x001E018Du, sub_001E018D); /* call 0x001E018D */

loc_001DF23A: ;
    eax = esi + 0x278;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD58); PUSH32(esp, 0x001DF247u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DF241u); } /* indirect call */
    }

loc_001DF247: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001D9023(); return; /* tail jmp 0x001D9023 */

}

/**
 * sub_001DF24F
 * Original: 0x001DF24F - 0x001DF267 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF24F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DF24F: ;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 2), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001DF266; /* jne: not equal / not zero */

loc_001DF255: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x278) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x278;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x22BD24); PUSH32(esp, 0x001DF266u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DF260u); } /* indirect call */
    }

loc_001DF266: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001DF267
 * Original: 0x001DF267 - 0x001DF2B2 (75 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF267(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DF267: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001DF272u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DF26Cu); } /* indirect call */
    }

loc_001DF272: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DF29A; /* je: equal / zero */

loc_001DF27A: ;
    edi = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x110) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x110 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DF28B; /* jae: above or equal (unsigned >=) */

loc_001DF284: ;
    esi = 0x2747;
    goto loc_001DF2A2;

loc_001DF28B: ;
    esi = edx + 0x10;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFF0u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 4) = esi;
    MEM32(edx + 8) = esi;
    MEM32(edx + 0xC) = edi;

loc_001DF29A: ;
    MEM32(ebx + 0x8B0) = edx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001DF2A2: ;
    SET_LO8(ecx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001DF2AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DF2A4u); } /* indirect call */
    }

loc_001DF2AA: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DF2B2
 * Original: 0x001DF2B2 - 0x001DF39C (234 bytes, 87 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DF2B2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DF2B2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x8B0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DF396; /* je: equal / zero */

loc_001DF2CA: ;
    PUSH32(esp, edi);
    edi = ebp + -32;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    esi = MEM32(ebp + 8);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DF2DCu); RECOMP_ABI_CALL(0x001D8186u, sub_001D8186); /* call 0x001D8186 */

loc_001DF2DC: ;
    ecx = ZX16(MEM16(esi + 4));
    MEM32(ebp + -8) = eax;
    eax = MEM32(esi + 8);
    eax = eax >> 0x13;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = ecx + eax * 8 + 0xE;
    eax = MEM32(ebp + -32);
    ecx = MEM32(0x22BAE8);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebx + 0x1D8);
    _fb = (uint32_t)(0xFFF96880u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFF96880u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xC8);
    _fb = (uint32_t)(MEM32(ebx + 0x1DC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebx + 0x1DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esi + 8;
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), edi (32-bit) */
    MEM32(ebp + -16) = edi;
    MEM32(ebp + -12) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_001DF362; /* jae: above or equal (unsigned >=) */

loc_001DF326: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DF35D; /* jae: above or equal (unsigned >=) */

loc_001DF32E: ;
    PUSH32(esp, 1);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(ebp + -28));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DF340u); RECOMP_ABI_CALL(0x001DF0D0u, sub_001DF0D0); /* call 0x001DF0D0 */

loc_001DF340: ;
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -20) = MEM32(ebp + -20) + eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -28));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DF355u); RECOMP_ABI_CALL(0x001DF0D0u, sub_001DF0D0); /* call 0x001DF0D0 */

loc_001DF355: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), edi (32-bit) */
    MEM32(ebp + -28) = eax;
    if (CMP_B(_fa, _fb)) goto loc_001DF326; /* jb: below (unsigned <) */

loc_001DF35D: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DF395; /* jb: below (unsigned <) */

loc_001DF362: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -20) = MEM32(ebp + -20) - edi;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, MEM32(ebp + -24));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DF377u); RECOMP_ABI_CALL(0x001DF0D0u, sub_001DF0D0); /* call 0x001DF0D0 */

loc_001DF377: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -8));
    ecx = ebx;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DF385u); RECOMP_ABI_CALL(0x001DF0D0u, sub_001DF0D0); /* call 0x001DF0D0 */

loc_001DF385: ;
    edi = MEM32(ebx + 0x8B0);
    MEM32(ebp + -24) = eax;
    esi = ebp + -32;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */

loc_001DF395: ;
    POP32(esp, edi);

loc_001DF396: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DF39C
 * Original: 0x001DF39C - 0x001DF3D8 (60 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF39C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF39C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001DF3A4u); RECOMP_ABI_CALL(0x001DF220u, sub_001DF220); /* call 0x001DF220 */

loc_001DF3A4: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 1), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001DF3C4; /* je: equal / zero */

loc_001DF3AA: ;
    ecx = esi + 0x270;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DF3BB; /* je: equal / zero */

loc_001DF3B5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DF3BBu); RECOMP_ABI_CALL(0x001D8360u, sub_001D8360); /* call 0x001D8360 */

loc_001DF3BB: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x001DF3C4u); RECOMP_ABI_CALL(0x001DF1B1u, sub_001DF1B1); /* call 0x001DF1B1 */

loc_001DF3C4: ;
    PUSH32(esp, 0x80000);
    ecx = esi;
    PUSH32(esp, 0x001DF3D0u); RECOMP_ABI_CALL(0x001E018Du, sub_001E018D); /* call 0x001E018D */

loc_001DF3D0: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001D908D(); return; /* tail jmp 0x001D908D */

}

/**
 * sub_001DF3D8
 * Original: 0x001DF3D8 - 0x001DF404 (44 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF3D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF3D8: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM16(eax + 0xA)) & 0xFFFFu; _fb = (uint32_t)(0x408) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(eax + 0xA), 0x408 (16-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001DF3F0; /* jne: not equal / not zero */

loc_001DF3E7: ;
    ecx = MEM32(eax);
    edx = MEM32(esp + 0xC);
    MEM32(ecx + -4) = edx;

loc_001DF3F0: ;
    _fa = (uint32_t)(MEM8(eax + 0xB)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xB), 8 (8-bit) */
    ecx = esi + 0x270;
    PUSH32(esp, eax);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF404(); return; } /* je: equal / zero */

loc_001DF3FD: ;
    PUSH32(esp, 0x001DF402u); RECOMP_ABI_CALL(0x001D7AC2u, sub_001D7AC2); /* call 0x001D7AC2 */

loc_001DF402: ;
    g_seh_ebp = ebp; sub_001DF409(); return; /* tail jmp 0x001DF409 */

}

/**
 * sub_001DF404
 * Original: 0x001DF404 - 0x001DF409 (5 bytes, 1 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF404(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF404: ;
    PUSH32(esp, 0x001DF409u); RECOMP_ABI_CALL(0x001D7AD7u, sub_001D7AD7); /* call 0x001D7AD7 */

    g_seh_ebp = ebp; sub_001DF409(); return; /* fallthrough 0x001DF409 */

}

/**
 * sub_001DF409
 * Original: 0x001DF409 - 0x001DF414 (11 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF409(void)
{

loc_001DF409: ;
    ecx = esi;
    PUSH32(esp, 0x001DF410u); RECOMP_ABI_CALL(0x001DF24Fu, sub_001DF24F); /* call 0x001DF24F */

loc_001DF410: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DF414
 * Original: 0x001DF414 - 0x001DF4A4 (144 bytes, 57 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DF414(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DF414: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ebx = ecx;
    { uint32_t _icall_target = MEM32(0x22BC54); PUSH32(esp, 0x001DF423u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DF41Du); } /* indirect call */
    }

loc_001DF423: ;
    esi = MEM32(ebp + 8);
    MEM8(ebp + -4) = LO8(eax);
    eax = MEM32(ebp + 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(ebx + 0x8B4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001DF490; /* je: equal / zero */

loc_001DF438: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DF490; /* jbe: below or equal (unsigned <=) */

loc_001DF440: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xFFFFFFF2u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF2u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x4000000);
    PUSH32(esp, 0x7254454E);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DF458u); RECOMP_ABI_CALL(0x001D84DEu, sub_001D84DE); /* call 0x001D84DE */

loc_001DF458: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(ebp + 0x10) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001DF468; /* jne: not equal / not zero */

loc_001DF461: ;
    esi = 0x2747;
    goto loc_001DF492;

loc_001DF468: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DF46Du); RECOMP_ABI_CALL(0x001D8186u, sub_001D8186); /* call 0x001D8186 */

loc_001DF46D: ;
    ecx = MEM32(ebp + 0xC);
    edi = eax;
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
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DF490u); RECOMP_ABI_CALL(0x001DF3D8u, sub_001DF3D8); /* call 0x001DF3D8 */

loc_001DF490: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001DF492: ;
    SET_LO8(ecx, MEM8(ebp + -4));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x22BC50); PUSH32(esp, 0x001DF49Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DF495u); } /* indirect call */
    }

loc_001DF49B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001DF4A4
 * Original: 0x001DF4A4 - 0x001DF4EF (75 bytes, 32 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DF4A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DF4A4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0xC040000);
    PUSH32(esp, 0x6954454E);
    MEM32(ebp + -4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DF4C4u); RECOMP_ABI_CALL(0x001D84DEu, sub_001D84DE); /* call 0x001D84DE */

loc_001DF4C4: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF554(); return; } /* je: equal / zero */

loc_001DF4CE: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DF4D5u); RECOMP_ABI_CALL(0x001D8186u, sub_001D8186); /* call 0x001D8186 */

loc_001DF4D5: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), esi (32-bit) */
    ecx = MEM32(ebx);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF4EF(); return; } /* je: equal / zero */

loc_001DF4DC: ;
    esi = MEM32(ebp + 0x14);
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    esi = MEM32(ebp + 0x14);
    edi = ecx + 0x12;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    g_seh_ebp = ebp; sub_001DF4FF(); return; /* tail jmp 0x001DF4FF */

}

/**
 * sub_001DF4EF
 * Original: 0x001DF4EF - 0x001DF4FF (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF4EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF4EF: ;
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(eax + 4) = MEM16(eax + 4) | 0xFFFF;
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM32(ecx + 0x12) = esi;
    MEM16(ecx + 0x16) = LO16(esi);

    g_seh_ebp = ebp; sub_001DF4FF(); return; /* fallthrough 0x001DF4FF */

}

/**
 * sub_001DF4FF
 * Original: 0x001DF4FF - 0x001DF554 (85 bytes, 27 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF4FF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF4FF: ;
    edx = MEM32(ebp + -4);
    edi = eax + 6;
    _fb = (uint32_t)(0x1E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1E0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edx;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM16(eax + 0xC) = 0x608;
    SET_LO16(eax, MEM16(ebp + 8));
    MEM16(ecx + 6) = LO16(eax);
    eax = MEM32(ebp + 0xC);
    MEM16(ecx) = 0x100;
    MEM16(ecx + 2) = 8;
    MEM8(ecx + 4) = 6;
    MEM8(ecx + 5) = 4;
    edi = ecx + 8;
    esi = edx;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM32(ecx + 0xE) = eax;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    MEM32(ecx + 0x18) = eax;
    ecx = MEM32(ebp + -4);
    eax = esp;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DF554u); RECOMP_ABI_CALL(0x001DF3D8u, sub_001DF3D8); /* call 0x001DF3D8 */

    g_seh_ebp = ebp; sub_001DF554(); return; /* fallthrough 0x001DF554 */

}

/**
 * sub_001DF554
 * Original: 0x001DF554 - 0x001DF55B (7 bytes, 5 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF554(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF554: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001DF55B
 * Original: 0x001DF55B - 0x001DF598 (61 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF55B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF55B: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x29C);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF63E(); return; } /* je: equal / zero */

loc_001DF571: ;
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x3B);
    eax = ebx;
    POP32(esp, ecx);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx + edx * 2;
    esi = edi + eax * 8;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF635(); return; } /* je: equal / zero */

loc_001DF58C: ;
    edx = esi + 0x18;
    ecx = esi;
    eax = esi + 0x78;
    esi = edx;
    g_seh_ebp = ebp; sub_001DF5A3(); return; /* tail jmp 0x001DF5A3 */

}

/**
 * sub_001DF598
 * Original: 0x001DF598 - 0x001DF5A3 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF598(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF598: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF635(); return; } /* je: equal / zero */

loc_001DF5A0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001DF5A3(); return; /* fallthrough 0x001DF5A3 */

}

/**
 * sub_001DF5A3
 * Original: 0x001DF5A3 - 0x001DF5AE (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF5A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF5A3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF598(); return; } /* jb: below (unsigned <) */

loc_001DF5A7: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF5B5(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001DF5AE(); return; /* fallthrough 0x001DF5AE */

}

/**
 * sub_001DF5AE
 * Original: 0x001DF5AE - 0x001DF5B5 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF5AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF5AE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001DF63D(); return; /* tail jmp 0x001DF63D */

}

/**
 * sub_001DF5B5
 * Original: 0x001DF5B5 - 0x001DF5C2 (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF5B5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF5B5: ;
    _fa = (uint32_t)(MEM16(ecx + 0x16)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x16), 0 (16-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF5EA(); return; } /* je: equal / zero */

loc_001DF5BE: ;
    esi = edx;
    g_seh_ebp = ebp; sub_001DF5CC(); return; /* tail jmp 0x001DF5CC */

}

/**
 * sub_001DF5C2
 * Original: 0x001DF5C2 - 0x001DF5CC (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF5C2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF5C2: ;
    _fa = (uint32_t)(MEM16(esi + 0x16)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x16), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF5D0(); return; } /* je: equal / zero */

loc_001DF5C9: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001DF5CC(); return; /* fallthrough 0x001DF5CC */

}

/**
 * sub_001DF5CC
 * Original: 0x001DF5CC - 0x001DF5D0 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF5CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF5CC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF5C2(); return; } /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_001DF5D0(); return; /* fallthrough 0x001DF5D0 */

}

/**
 * sub_001DF5D0
 * Original: 0x001DF5D0 - 0x001DF5D8 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF5D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF5D0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF5EA(); return; } /* jne: not equal / not zero */

loc_001DF5D4: ;
    esi = edx;
    g_seh_ebp = ebp; sub_001DF5E2(); return; /* tail jmp 0x001DF5E2 */

}

/**
 * sub_001DF5D8
 * Original: 0x001DF5D8 - 0x001DF5E2 (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF5D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF5D8: ;
    _fa = (uint32_t)(MEM16(esi + 0x16)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x16), 3 (16-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF5E6(); return; } /* jb: below (unsigned <) */

loc_001DF5DF: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001DF5E2(); return; /* fallthrough 0x001DF5E2 */

}

/**
 * sub_001DF5E2
 * Original: 0x001DF5E2 - 0x001DF5E6 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF5E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF5E2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF5D8(); return; } /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_001DF5E6(); return; /* fallthrough 0x001DF5E6 */

}

/**
 * sub_001DF5E6
 * Original: 0x001DF5E6 - 0x001DF5EA (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF5E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF5E6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF5AE(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_001DF5EA(); return; /* fallthrough 0x001DF5EA */

}

/**
 * sub_001DF5EA
 * Original: 0x001DF5EA - 0x001DF62F (69 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF5EA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF5EA: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 2 (32-bit) */
    MEM32(esi) = ebx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF62F(); return; } /* jne: not equal / not zero */

loc_001DF5F3: ;
    SET_LO16(eax, ZX8(MEM8(edi + 0x11)));
    ecx = edi;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi + 0x16) = LO16(eax);
    eax = ZX8(MEM8(edi + 0x12));
    eax = eax + eax * 4;
    PUSH32(esp, eax);
    eax = edi + 0x8A0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DF615u); RECOMP_ABI_CALL(0x001D7C5Eu, sub_001D7C5E); /* call 0x001D7C5E */

loc_001DF615: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    MEM32(esi + 4) = eax;
    PUSH32(esp, MEM32(edi + 0x268));
    ecx = edi;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x001DF62Du); RECOMP_ABI_CALL(0x001DF4A4u, sub_001DF4A4); /* call 0x001DF4A4 */

loc_001DF62D: ;
    g_seh_ebp = ebp; sub_001DF635(); return; /* tail jmp 0x001DF635 */

}

/**
 * sub_001DF62F
 * Original: 0x001DF62F - 0x001DF635 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF62F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF62F: ;
    MEM16(esi + 0x16) = 3;

    g_seh_ebp = ebp; sub_001DF635(); return; /* fallthrough 0x001DF635 */

}

/**
 * sub_001DF635
 * Original: 0x001DF635 - 0x001DF63D (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF635(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF635: ;
    MEM32(edi + 0x29C) = esi;
    eax = esi;

    g_seh_ebp = ebp; sub_001DF63D(); return; /* fallthrough 0x001DF63D */

}

/**
 * sub_001DF63D
 * Original: 0x001DF63D - 0x001DF63E (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF63D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF63D: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001DF63E(); return; /* fallthrough 0x001DF63E */

}

/**
 * sub_001DF63E
 * Original: 0x001DF63E - 0x001DF643 (5 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF63E(void)
{

loc_001DF63E: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DF643
 * Original: 0x001DF643 - 0x001DF6F6 (179 bytes, 61 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DF643(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DF643: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = MEM32(edi + 0x1D8);
    esi = edi + 0x2A0;
    MEM32(ebp + -8) = 0x40;

loc_001DF664: ;
    SET_LO16(ecx, MEM16(esi + 0x16));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DF6DA; /* je: equal / zero */

loc_001DF66D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DF6CF; /* jb: below (unsigned <) */

loc_001DF672: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 3 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DF6A1; /* jbe: below or equal (unsigned <=) */

loc_001DF678: ;
    eax = ZX8(MEM8(edi + 0x12));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi));
    edx = ebx + eax * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(esi + 0x16) = LO16(ecx);
    MEM32(esi + 4) = edx;
    PUSH32(esp, MEM32(edi + 0x268));
    ecx = edi;
    PUSH32(esp, 0x100);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DF69Fu); RECOMP_ABI_CALL(0x001DF4A4u, sub_001DF4A4); /* call 0x001DF4A4 */

loc_001DF69F: ;
    goto loc_001DF6CF;

loc_001DF6A1: ;
    if (CMP_NE(_fa, _fb)) goto loc_001DF6C3; /* jne: not equal / not zero */

loc_001DF6A3: ;
    PUSH32(esp, edi);
    ecx = esi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DF6ACu); RECOMP_ABI_CALL(0x001D8343u, sub_001D8343); /* call 0x001D8343 */

loc_001DF6AC: ;
    eax = ZX8(MEM8(edi + 0x14));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x12C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;
    MEM16(esi + 0x16) = 2;
    goto loc_001DF6CF;

loc_001DF6C3: ;
    MEM32(esi + 4) = MEM32(esi + 4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(esi + 0x16) = MEM16(esi + 0x16) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x16)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001DF6CF: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DF6DA; /* jbe: below or equal (unsigned <=) */

loc_001DF6D7: ;
    MEM32(ebp + -4) = eax;

loc_001DF6DA: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001DF664; /* jne: not equal / not zero */

loc_001DF6E2: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = edi;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DF6EFu); RECOMP_ABI_CALL(0x001D7BF9u, sub_001D7BF9); /* call 0x001D7BF9 */

loc_001DF6EF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DF6F6
 * Original: 0x001DF6F6 - 0x001DF7D7 (225 bytes, 66 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DF6F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DF6F6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ebx = ecx;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DF70Bu); RECOMP_ABI_CALL(0x001D8186u, sub_001D8186); /* call 0x001D8186 */

loc_001DF70B: ;
    _fa = (uint32_t)(MEM16(edi + 4)) & 0xFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 4), 0x1C (16-bit) */
    esi = MEM32(edi);
    MEM32(ebp + -8) = esi;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF8BD(); return; } /* jb: below (unsigned <) */

loc_001DF71B: ;
    SET_LO16(eax, MEM16(esi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x100 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DF72E; /* je: equal / zero */

loc_001DF724: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x600) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x600 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF8BD(); return; } /* jne: not equal / not zero */

loc_001DF72E: ;
    _fa = (uint32_t)(MEM16(esi + 2)) & 0xFFFFu; _fb = (uint32_t)(8) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 2), 8 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF8BD(); return; } /* jne: not equal / not zero */

loc_001DF739: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 4), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF8BD(); return; } /* jne: not equal / not zero */

loc_001DF743: ;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 5), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF8BD(); return; } /* jne: not equal / not zero */

loc_001DF74D: ;
    SET_LO16(eax, MEM16(esi + 6));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x100 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DF761; /* je: equal / zero */

loc_001DF757: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x200 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF8BD(); return; } /* jne: not equal / not zero */

loc_001DF761: ;
    ecx = esi + 0xE;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    MEM32(ebp + -12) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001DF779; /* je: equal / zero */

loc_001DF76C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DF771u); RECOMP_ABI_CALL(0x001D85F2u, sub_001D85F2); /* call 0x001D85F2 */

loc_001DF771: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF8BD(); return; } /* je: equal / zero */

loc_001DF779: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 1 (8-bit) */
    MEM32(ebp + 8) = esi;
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF8BD(); return; } /* jne: not equal / not zero */

loc_001DF788: ;
    PUSH32(esp, 3);
    POP32(esp, ecx);
    edi = ebx + 0x1E0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    if ((_flags != 0)) { g_seh_ebp = ebp; sub_001DF8BD(); return; } /* je: equal / zero */

loc_001DF79C: ;
    esi = MEM32(ebp + -8);
    edi = esi + 0x18;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), eax (32-bit) */
    MEM32(ebp + -4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001DF7B8; /* je: equal / zero */

loc_001DF7A9: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001DF7B0u); RECOMP_ABI_CALL(0x001D85F2u, sub_001D85F2); /* call 0x001D85F2 */

loc_001DF7B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF8BD(); return; } /* je: equal / zero */

loc_001DF7B8: ;
    edx = MEM32(ebp + -12);
    eax = MEM32(ebx + 0x294);
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF7D7(); return; } /* jne: not equal / not zero */

loc_001DF7C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF7D7(); return; } /* je: equal / zero */

loc_001DF7CB: ;
    MEM32(ebx + 0x294) = MEM32(ebx + 0x294) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x294)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(ebp + 8));
    g_seh_ebp = ebp; sub_001DF7F3(); return; /* tail jmp 0x001DF7F3 */

}

/**
 * sub_001DF7D7
 * Original: 0x001DF7D7 - 0x001DF7F3 (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF7D7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF7D7: ;
    _fa = (uint32_t)(MEM32(ebx + 0x298)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x298), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF7FF(); return; } /* je: equal / zero */

loc_001DF7E0: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF7FF(); return; } /* jne: not equal / not zero */

loc_001DF7E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF7FF(); return; } /* je: equal / zero */

loc_001DF7E8: ;
    MEM32(ebx + 0x294) = MEM32(ebx + 0x294) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x294)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x12) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x12;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);

    g_seh_ebp = ebp; sub_001DF7F3(); return; /* fallthrough 0x001DF7F3 */

}

/**
 * sub_001DF7F3
 * Original: 0x001DF7F3 - 0x001DF7FF (12 bytes, 3 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF7F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF7F3: ;
    ecx = ebx;
    PUSH32(esp, 0x001DF7FAu); RECOMP_ABI_CALL(0x001DD452u, sub_001DD452); /* call 0x001DD452 */

loc_001DF7FA: ;
    g_seh_ebp = ebp; sub_001DF8BD(); return; /* tail jmp 0x001DF8BD */

}

/**
 * sub_001DF7FF
 * Original: 0x001DF7FF - 0x001DF8BD (190 bytes, 59 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF7FF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF7FF: ;
    esi = MEM32(ebx + 0x268);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF8BD(); return; } /* je: equal / zero */

loc_001DF80D: ;
    _fa = (uint32_t)(MEM32(ebx + 0x26C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x26C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF8BD(); return; } /* je: equal / zero */

loc_001DF81A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DF88E; /* je: equal / zero */

loc_001DF81E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DF88E; /* je: equal / zero */

loc_001DF822: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DF88E; /* je: equal / zero */

loc_001DF828: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(edx));
    ecx = ebx;
    PUSH32(esp, 0x001DF839u); RECOMP_ABI_CALL(0x001DF55Bu, sub_001DF55B); /* call 0x001DF55B */

loc_001DF839: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebp + -16) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001DF88E; /* je: equal / zero */

loc_001DF842: ;
    MEM16(esi + 0x16) = 1;
    eax = ZX8(MEM8(ebx + 0x13));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x12C);
    PUSH32(esp, eax);
    eax = ebx + 0x8A0;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001DF861u); RECOMP_ABI_CALL(0x001D7C5Eu, sub_001D7C5E); /* call 0x001D7C5E */

loc_001DF861: ;
    MEM32(esi + 4) = eax;
    eax = MEM32(ebp + -16);
    edi = esi + 0x10;
    esi = MEM32(ebp + 8);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    if (CMP_EQ(_fa, _fb)) goto loc_001DF88B; /* je: equal / zero */

loc_001DF878: ;
    PUSH32(esp, eax);
    ecx = ebx + 0x270;
    PUSH32(esp, 0x001DF884u); RECOMP_ABI_CALL(0x001D831Au, sub_001D831A); /* call 0x001D831A */

loc_001DF884: ;
    ecx = ebx;
    PUSH32(esp, 0x001DF88Bu); RECOMP_ABI_CALL(0x001DF24Fu, sub_001DF24F); /* call 0x001DF24F */

loc_001DF88B: ;
    edi = MEM32(ebp + -4);

loc_001DF88E: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM16(eax + 6)) & 0xFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 6), 0x100 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF8BD(); return; } /* jne: not equal / not zero */

loc_001DF899: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x268)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x268) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF8BD(); return; } /* jne: not equal / not zero */

loc_001DF8A3: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = MEM32(ebp + -12);
    PUSH32(esp, MEM32(eax));
    ecx = ebx;
    PUSH32(esp, MEM32(ebx + 0x268));
    PUSH32(esp, 0x200);
    PUSH32(esp, 0x001DF8BDu); RECOMP_ABI_CALL(0x001DF4A4u, sub_001DF4A4); /* call 0x001DF4A4 */

    g_seh_ebp = ebp; sub_001DF8BD(); return; /* fallthrough 0x001DF8BD */

}

/**
 * sub_001DF8BD
 * Original: 0x001DF8BD - 0x001DF8C4 (7 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF8BD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF8BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DF8C4
 * Original: 0x001DF8C4 - 0x001DF90B (71 bytes, 26 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF8C4(void)
{

loc_001DF8C4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DF8D2u); RECOMP_ABI_CALL(0x001D8186u, sub_001D8186); /* call 0x001D8186 */

loc_001DF8D2: ;
    esi = MEM32(esp + 0x14);
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    edi = eax + 6;
    esi = ebx + 0x1E0;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 0x14));
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    ecx = ebx;
    MEM16(eax + 0xC) = 8;
    PUSH32(esp, 0x001DF8FAu); RECOMP_ABI_CALL(0x001DF2B2u, sub_001DF2B2); /* call 0x001DF2B2 */

loc_001DF8FA: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = ebx;
    PUSH32(esp, 0x001DF905u); RECOMP_ABI_CALL(0x001D8DB0u, sub_001D8DB0); /* call 0x001D8DB0 */

loc_001DF905: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DF90B
 * Original: 0x001DF90B - 0x001DF927 (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF90B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF90B: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF927(); return; } /* jne: not equal / not zero */

loc_001DF914: ;
    PUSH32(esp, 0);
    eax = ecx + 0x268;
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0x200);
    g_seh_ebp = ebp; sub_001DF947(); return; /* tail jmp 0x001DF947 */

}

/**
 * sub_001DF927
 * Original: 0x001DF927 - 0x001DF947 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF927(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF927: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0x298) = edx;
    MEM32(ecx + 0x294) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF94C(); return; } /* je: equal / zero */

loc_001DF93B: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x100);

    g_seh_ebp = ebp; sub_001DF947(); return; /* fallthrough 0x001DF947 */

}

/**
 * sub_001DF947
 * Original: 0x001DF947 - 0x001DF94C (5 bytes, 1 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF947(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF947: ;
    PUSH32(esp, 0x001DF94Cu); RECOMP_ABI_CALL(0x001DF4A4u, sub_001DF4A4); /* call 0x001DF4A4 */

    g_seh_ebp = ebp; sub_001DF94C(); return; /* fallthrough 0x001DF94C */

}

/**
 * sub_001DF94C
 * Original: 0x001DF94C - 0x001DF94F (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF94C(void)
{

loc_001DF94C: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001DF94F
 * Original: 0x001DF94F - 0x001DF98C (61 bytes, 22 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF94F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF94F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    esi = MEM32(esp + 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(eax + 0x1C) = edi;
    PUSH32(esp, 0x001DF96Au); RECOMP_ABI_CALL(0x001DF2B2u, sub_001DF2B2); /* call 0x001DF2B2 */

loc_001DF96A: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF98C(); return; } /* jne: not equal / not zero */

loc_001DF973: ;
    eax = MEM32(esi + 8);
    eax = eax & 0xFFFFFFF9u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x001DF987u); RECOMP_ABI_CALL(0x001D754Eu, sub_001D754E); /* call 0x001D754E */

loc_001DF987: ;
    g_seh_ebp = ebp; sub_001DFA17(); return; /* tail jmp 0x001DFA17 */

}

/**
 * sub_001DF98C
 * Original: 0x001DF98C - 0x001DF9B9 (45 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF98C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF98C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6488) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6488 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF9E3(); return; } /* je: equal / zero */

loc_001DF993: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x133C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x133C (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF9E3(); return; } /* je: equal / zero */

loc_001DF99A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6388) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6388 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF9E3(); return; } /* je: equal / zero */

loc_001DF9A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x123C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x123C (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF9E3(); return; } /* je: equal / zero */

loc_001DF9A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x608) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x608 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DF9B9(); return; } /* jne: not equal / not zero */

loc_001DF9AF: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001DF9B7u); RECOMP_ABI_CALL(0x001DF6F6u, sub_001DF6F6); /* call 0x001DF6F6 */

loc_001DF9B7: ;
    g_seh_ebp = ebp; sub_001DFA17(); return; /* tail jmp 0x001DFA17 */

}

/**
 * sub_001DF9B9
 * Original: 0x001DF9B9 - 0x001DF9E3 (42 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF9B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF9B9: ;
    _fa = (uint32_t)(MEM32(ebx + 0x8B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x8B4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DFA17(); return; } /* je: equal / zero */

loc_001DF9C1: ;
    eax = MEM32(esi + 8);
    ecx = ZX16(MEM16(esi + 4));
    eax = eax >> 0x13;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx + eax * 8 + 0xE;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001DF9DAu); RECOMP_ABI_CALL(0x001D8186u, sub_001D8186); /* call 0x001D8186 */

loc_001DF9DA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx + 0x8B4); PUSH32(esp, 0x001DF9E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DF9DBu); } /* indirect call */
    }

loc_001DF9E1: ;
    g_seh_ebp = ebp; sub_001DFA17(); return; /* tail jmp 0x001DFA17 */

}

/**
 * sub_001DF9E3
 * Original: 0x001DF9E3 - 0x001DFA17 (52 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF9E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF9E3: ;
    edi = ZX16(MEM16(esi + 4));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001DFA17(); return; } /* jb: below (unsigned <) */

loc_001DF9EC: ;
    ecx = MEM32(esi);
    SET_LO16(eax, MEM16(ecx + 4));
    SET_HI8(edx, LO8(eax));
    SET_LO8(edx, HI8(eax));
    eax = ZX16(LO16(edx));
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0x11) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0x11 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DFA17(); return; } /* jne: not equal / not zero */

loc_001DFA01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001DFA17(); return; } /* ja: above (unsigned >) */

loc_001DFA05: ;
    if (CMP_AE(_fa, _fb)) goto loc_001DFA0B; /* jae: above or equal (unsigned >=) */

loc_001DFA07: ;
    MEM16(esi + 4) = LO16(eax);

loc_001DFA0B: ;
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = ebx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DFA17u); RECOMP_ABI_CALL(0x001DE99Du, sub_001DE99D); /* call 0x001DE99D */

    g_seh_ebp = ebp; sub_001DFA17(); return; /* fallthrough 0x001DFA17 */

}

/**
 * sub_001DFA17
 * Original: 0x001DFA17 - 0x001DFA1D (6 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFA17(void)
{

loc_001DFA17: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DFA1D
 * Original: 0x001DFA1D - 0x001DFA37 (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DFA1D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DFA1D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 0x270;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DFB68(); return; } /* je: equal / zero */

loc_001DFA36: ;
    PUSH32(esp, ebx);

    g_seh_ebp = ebp; sub_001DFA37(); return; /* fallthrough 0x001DFA37 */

}

/**
 * sub_001DFA37
 * Original: 0x001DFA37 - 0x001DFA7B (68 bytes, 20 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFA37(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFA37: ;
    ecx = edi;
    PUSH32(esp, 0x001DFA3Eu); RECOMP_ABI_CALL(0x001D897Fu, sub_001D897F); /* call 0x001D897F */

loc_001DFA3E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DFB67(); return; } /* je: equal / zero */

loc_001DFA46: ;
    ecx = esi;
    PUSH32(esp, 0x001DFA4Du); RECOMP_ABI_CALL(0x001D7AF3u, sub_001D7AF3); /* call 0x001D7AF3 */

loc_001DFA4D: ;
    _fa = (uint32_t)(MEM8(edi + 2)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 2), 4 (8-bit) */
    esi = eax;
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DFB52(); return; } /* jne: not equal / not zero */

loc_001DFA59: ;
    ebx = MEM32(esi + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4080000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0x4080000 (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001DFA7B(); return; } /* je: equal / zero */

loc_001DFA64: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001DFA6Eu); RECOMP_ABI_CALL(0x001DF2B2u, sub_001DF2B2); /* call 0x001DF2B2 */

loc_001DFA6E: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001DFA76u); RECOMP_ABI_CALL(0x001D8DB0u, sub_001D8DB0); /* call 0x001D8DB0 */

loc_001DFA76: ;
    g_seh_ebp = ebp; sub_001DFB58(); return; /* tail jmp 0x001DFB58 */

}

/**
 * sub_001DFA7B
 * Original: 0x001DFA7B - 0x001DFACC (81 bytes, 23 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFA7B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFA7B: ;
    eax = MEM32(esi);
    eax = MEM32(eax + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DFB52(); return; } /* je: equal / zero */

loc_001DFA8B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x7F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x7F (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DFA9A; /* jne: not equal / not zero */

loc_001DFA8F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100007F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100007F (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DFB52(); return; } /* jne: not equal / not zero */

loc_001DFA9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100007F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100007F (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DFB28(); return; } /* je: equal / zero */

loc_001DFAA5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x268)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x268) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DFB28(); return; } /* je: equal / zero */

loc_001DFAAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DFACC(); return; } /* jne: not equal / not zero */

loc_001DFAB2: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) | eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(ebp + -16) = MEM16(ebp + -16) | 0xFFFF;
    _fa = (uint32_t)(MEM16(ebp + -16)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    eax = ebp + -20;
    ecx = edi;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DFAC7u); RECOMP_ABI_CALL(0x001DF8C4u, sub_001DF8C4); /* call 0x001DF8C4 */

loc_001DFAC7: ;
    g_seh_ebp = ebp; sub_001DFB58(); return; /* tail jmp 0x001DFB58 */

}

/**
 * sub_001DFABE
 * Original: 0x001DFABE - 0x001DFACC (14 bytes, 5 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFABE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFABE: ;
    ecx = edi;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DFAC7u); RECOMP_ABI_CALL(0x001DF8C4u, sub_001DF8C4); /* call 0x001DF8C4 */

loc_001DFAC7: ;
    g_seh_ebp = ebp; sub_001DFB58(); return; /* tail jmp 0x001DFB58 */

}

/**
 * sub_001DFAC0
 * Original: 0x001DFAC0 - 0x001DFACC (12 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFAC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFAC0: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DFAC7u); RECOMP_ABI_CALL(0x001DF8C4u, sub_001DF8C4); /* call 0x001DF8C4 */

loc_001DFAC7: ;
    g_seh_ebp = ebp; sub_001DFB58(); return; /* tail jmp 0x001DFB58 */

}

/**
 * sub_001DFACC
 * Original: 0x001DFACC - 0x001DFAFC (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFACC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFACC: ;
    ecx = eax;
    SET_LO16(ecx, LO16(ecx) & 0xF0);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xE0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xE0 (8-bit) */
    ecx = edi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DFAFC(); return; } /* jne: not equal / not zero */

loc_001DFADA: ;
    SET_LO8(eax, HI8(eax));
    SET_LO8(eax, LO8(eax) & 0x7F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(ebp + -9) = LO8(eax);
    SET_LO16(eax, MEM16(ebp + -2));
    MEM8(ebp + -8) = LO8(eax);
    MEM8(ebp + -7) = HI8(eax);
    MEM8(ebp + -12) = 1;
    MEM8(ebp + -11) = 0;
    MEM8(ebp + -10) = 0x5E;
    eax = ebp + -12;
    g_seh_ebp = ebp; sub_001DFAC0(); return; /* tail jmp 0x001DFAC0 */

}

/**
 * sub_001DFAFC
 * Original: 0x001DFAFC - 0x001DFB17 (27 bytes, 10 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFAFC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFAFC: ;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DFB04u); RECOMP_ABI_CALL(0x001DF55Bu, sub_001DF55B); /* call 0x001DF55B */

loc_001DFB04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DFB52(); return; } /* je: equal / zero */

loc_001DFB08: ;
    SET_LO16(ecx, MEM16(eax + 0x16));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DFB17(); return; } /* jne: not equal / not zero */

loc_001DFB12: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001DFABE(); return; /* tail jmp 0x001DFABE */

}

/**
 * sub_001DFB17
 * Original: 0x001DFB17 - 0x001DFB28 (17 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFB17(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFB17: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 2 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001DFB52(); return; } /* je: equal / zero */

loc_001DFB1D: ;
    PUSH32(esp, esi);
    ecx = eax + 8;
    PUSH32(esp, 0x001DFB26u); RECOMP_ABI_CALL(0x001D7AD7u, sub_001D7AD7); /* call 0x001D7AD7 */

loc_001DFB26: ;
    g_seh_ebp = ebp; sub_001DFB58(); return; /* tail jmp 0x001DFB58 */

}

/**
 * sub_001DFB28
 * Original: 0x001DFB28 - 0x001DFB52 (42 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFB28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFB28: ;
    eax = ebx;
    eax = eax & 0xFFFC0009u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x2000001;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x001DFB3Fu); RECOMP_ABI_CALL(0x001D754Eu, sub_001D754E); /* call 0x001D754E */

loc_001DFB3F: ;
    eax = MEM32(esi + 8);
    eax = eax & 0xFDFC0008u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx & 0x3FFF7;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 8) = eax;

    g_seh_ebp = ebp; sub_001DFB52(); return; /* fallthrough 0x001DFB52 */

}

/**
 * sub_001DFB52
 * Original: 0x001DFB52 - 0x001DFB58 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFB52(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFB52: ;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x10); PUSH32(esp, 0x001DFB58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DFB55u); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001DFB58(); return; /* fallthrough 0x001DFB58 */

}

/**
 * sub_001DFB58
 * Original: 0x001DFB58 - 0x001DFB67 (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFB58(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFB58: ;
    esi = edi + 0x270;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001DFA37(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001DFB67(); return; /* fallthrough 0x001DFB67 */

}

/**
 * sub_001DFB67
 * Original: 0x001DFB67 - 0x001DFB68 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFB67(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFB67: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001DFB68(); return; /* fallthrough 0x001DFB68 */

}

/**
 * sub_001DFB68
 * Original: 0x001DFB68 - 0x001DFB6C (4 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFB68(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFB68: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001DFB6C
 * Original: 0x001DFB6C - 0x001DFB78 (12 bytes, 3 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFB6C(void)
{

loc_001DFB6C: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x001DFB75u); RECOMP_ABI_CALL(0x001DFA1Du, sub_001DFA1D); /* call 0x001DFA1D */

loc_001DFB75: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001DFB78
 * Original: 0x001DFB78 - 0x001DFBCD (85 bytes, 23 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFB78(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DFB78: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x001DFB84u); RECOMP_ABI_CALL(0x001D9236u, sub_001D9236); /* call 0x001D9236 */

loc_001DFB84: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DFBC9; /* jl: less (signed <) */

loc_001DFB88: ;
    PUSH32(esp, 0x8000);
    ecx = esi;
    PUSH32(esp, 0x001DFB94u); RECOMP_ABI_CALL(0x001E018Du, sub_001E018D); /* call 0x001E018D */

loc_001DFB94: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1DFB6C);
    eax = esi + 0x278;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BC68); PUSH32(esp, 0x001DFBA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DFBA1u); } /* indirect call */
    }

loc_001DFBA7: ;
    eax = esi + 0x2A0;
    MEM32(esi + 0x29C) = eax;
    eax = esi + 0x8A0;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = MEM32(eax + 8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0xC) = 0x1DF643;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001DFBC9: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DFBCD
 * Original: 0x001DFBCD - 0x001DFC1B (78 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DFBCD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DFBCD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x281718);
    eax = ebp + -12;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB40); PUSH32(esp, 0x001DFBE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DFBDCu); } /* indirect call */
    }

loc_001DFBE2: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) & 0;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = ebp + -12;
    MEM32(ebp + -28) = eax;
    PUSH32(esp, 3);
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC0100000u);
    eax = ebp + -4;
    PUSH32(esp, eax);
    MEM32(ebp + -24) = 0x40;
    { uint32_t _icall_target = MEM32(0x22BB58); PUSH32(esp, 0x001DFC0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DFC08u); } /* indirect call */
    }

loc_001DFC0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001DFC16; /* jge: greater or equal (signed >=) */

loc_001DFC12: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001DFC16: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001DFC1B
 * Original: 0x001DFC1B - 0x001DFC32 (23 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFC1B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DFC1B: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DFC2C; /* je: equal / zero */

loc_001DFC22: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    { uint32_t _icall_target = MEM32(0x22BB34); PUSH32(esp, 0x001DFC2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DFC26u); } /* indirect call */
    }

loc_001DFC2C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DFC32
 * Original: 0x001DFC32 - 0x001DFC3D (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFC32(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFC32: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001D52B2(); return; /* tail jmp 0x001D52B2 */

}

/**
 * sub_001DFC3D
 * Original: 0x001DFC3D - 0x001DFC48 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFC3D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFC3D: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001D57BE(); return; /* tail jmp 0x001D57BE */

}

/**
 * sub_001DFC48
 * Original: 0x001DFC48 - 0x001DFC53 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFC48(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFC48: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001D34B0(); return; /* tail jmp 0x001D34B0 */

}

/**
 * sub_001DFC5E
 * Original: 0x001DFC5E - 0x001DFC69 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFC5E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFC5E: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001D34DE(); return; /* tail jmp 0x001D34DE */

}

/**
 * sub_001DFC69
 * Original: 0x001DFC69 - 0x001DFC74 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFC69(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFC69: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001D35CC(); return; /* tail jmp 0x001D35CC */

}

/**
 * sub_001DFC74
 * Original: 0x001DFC74 - 0x001DFC7F (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFC74(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFC74: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001D36A6(); return; /* tail jmp 0x001D36A6 */

}

/**
 * sub_001DFC7F
 * Original: 0x001DFC7F - 0x001DFC8A (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFC7F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFC7F: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001D3724(); return; /* tail jmp 0x001D3724 */

}

/**
 * sub_001DFC8A
 * Original: 0x001DFC8A - 0x001DFC99 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DFC8A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001DFC8A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A0);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001D4BBA(); return; /* tail jmp 0x001D4BBA */

}

/**
 * sub_001DFC99
 * Original: 0x001DFC99 - 0x001DFCA4 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFC99(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFC99: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001D3777(); return; /* tail jmp 0x001D3777 */

}

/**
 * sub_001DFCA4
 * Original: 0x001DFCA4 - 0x001DFCAF (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFCA4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFCA4: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001D37FD(); return; /* tail jmp 0x001D37FD */

}
