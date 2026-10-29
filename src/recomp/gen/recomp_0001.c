/**
 * DOAU1 - Recompiled code chunk 1
 * Functions: 250 (0x0001810C - 0x00021310)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0001810C
 * Original: 0x0001810C - 0x00018115 (9 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001810C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001810C: ;
    POP32(esp, edi);
    MEM8(esi + 6) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00018115
 * Original: 0x00018115 - 0x00018155 (64 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018115(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018115: ;
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018136; /* jne: not equal / not zero */

loc_0001811B: ;
    eax = MEM32(esi + 0xC);
    SET_LO16(ecx, ZX8(MEM8(eax + 1)));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00018129u); RECOMP_ABI_CALL(0x00014220u, sub_00014220); /* call 0x00014220 */

loc_00018129: ;
    edx = MEM32(0x3026EC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edx + 8) = LO16(eax);

loc_00018136: ;
    eax = ZX8(MEM8(0x301FB0));
    SET_LO8(ecx, MEM8(eax + 0x302240));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x3025C2) = LO8(ecx);
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00016EC0(); return; /* tail jmp 0x00016EC0 */

}

/**
 * sub_00018155
 * Original: 0x00018155 - 0x00018186 (49 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018155(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018155: ;
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018167; /* jne: not equal / not zero */

loc_0001815B: ;
    edx = MEM32(esi + 0xC);
    SET_LO16(eax, ZX8(MEM8(edx + 1)));
    MEM16(esi + 8) = LO16(eax);

loc_00018167: ;
    ecx = ZX8(MEM8(0x301FB0));
    SET_LO8(edx, MEM8(ecx + 0x302240));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x3025C2) = LO8(edx);
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00016EC0(); return; /* tail jmp 0x00016EC0 */

}

/**
 * sub_00018186
 * Original: 0x00018186 - 0x000181CA (68 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018186(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018186: ;
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000181AB; /* jne: not equal / not zero */

loc_0001818C: ;
    eax = MEM32(esi + 0xC);
    ecx = ZX8(MEM8(eax + 1));
    edx = ZX8(MEM8(0x30ECC0));
    eax = 7;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(esi + 8) = LO16(ecx);

loc_000181AB: ;
    ecx = ZX8(MEM8(0x301FB0));
    SET_LO8(edx, MEM8(ecx + 0x302240));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x3025C2) = LO8(edx);
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00016EC0(); return; /* tail jmp 0x00016EC0 */

}

/**
 * sub_000181CA
 * Original: 0x000181CA - 0x0001836F (421 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000181CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000181CA: ;
    ecx = MEM32(0x302134);
    eax = MEM32(esi + 0xC);
    SET_LO8(edx, MEM8(ecx + 0x2D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + 1) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018366; /* je: equal / zero */

loc_000181DF: ;
    eax = ZX8(MEM8(0x301FB0));
    SET_LO8(ecx, MEM8(eax + 0x302240));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x3025C2) = LO8(ecx);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00018366: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + ebp;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000181F8
 * Original: 0x000181F8 - 0x0001836F (375 bytes, 28 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000181F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000181F8: ;
    ecx = MEM32(0x302134);
    SET_LO8(eax, MEM8(ecx + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018211; /* je: equal / zero */

loc_00018205: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018211; /* je: equal / zero */

loc_00018209: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018366; /* jne: not equal / not zero */

loc_00018211: ;
    _fa = (uint32_t)(MEM8(ecx + 0x33)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x33), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018221; /* jne: not equal / not zero */

loc_00018217: ;
    _fa = (uint32_t)(MEM8(ecx + 0x2C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2C), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018366; /* je: equal / zero */

loc_00018221: ;
    edx = ZX8(MEM8(0x301FB0));
    SET_LO8(eax, MEM8(edx + 0x302240));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x3025C2) = LO8(eax);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00018366: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + ebp;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00018239
 * Original: 0x00018239 - 0x00018245 (12 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018239(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018239: ;
    POP32(esp, edi);
    MEM16(esi + 8) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00018245
 * Original: 0x00018245 - 0x0001830F (202 bytes, 38 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018245(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018245: ;
    _fa = (uint32_t)(MEM8(0x302125)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x302125), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000182FA; /* jne: not equal / not zero */

loc_00018251: ;
    PUSH32(esp, 0x00018256u); RECOMP_ABI_CALL(0x000142A0u, sub_000142A0); /* call 0x000142A0 */

loc_00018256: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000182ED; /* jne: not equal / not zero */

loc_0001825E: ;
    eax = MEM32(0x3026EC);
    esi = MEM32(eax + 0xC);
    ecx = ZX8(MEM8(esi + 1));
    edx = MEM32(eax + 0x74);
    eax = MEM32(edx + 4);
    ecx = MEM32(eax + ecx * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00018279u); RECOMP_ABI_CALL(0x00018D20u, sub_00018D20); /* call 0x00018D20 */

loc_00018279: ;
    MEM8(0x3025C2) = LO8(eax);
    eax = MEM32(0x3026EC);
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    goto loc_000182E8;

loc_000182E8: ;
    if (CMP_NE(_fa, _fb)) goto loc_000182ED; /* jne: not equal / not zero */

loc_000182EA: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + ebp;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000182ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x302125) = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000182FA: ;
    MEM8(0x3025C2) = 0xFF;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0001828D
 * Original: 0x0001828D - 0x0001830F (130 bytes, 46 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001828D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001828D: ;
    _fa = (uint32_t)(MEM8(0x302125)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x302125), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000182FA; /* jne: not equal / not zero */

loc_00018295: ;
    ecx = MEM32(0x301FA0);
    SET_LO8(eax, MEM8(ecx + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000182A6; /* jb: below (unsigned <) */

loc_000182A2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000182AA; /* jbe: below or equal (unsigned <=) */

loc_000182A6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xD (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000182ED; /* jne: not equal / not zero */

loc_000182AA: ;
    _fa = (uint32_t)(MEM8(ecx + 0x2C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2C), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000182ED; /* jne: not equal / not zero */

loc_000182B0: ;
    edx = ZX8(MEM8(0x301FB0));
    _fa = (uint32_t)(MEM8(edx + 0x30223C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x30223C), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000182ED; /* jne: not equal / not zero */

loc_000182C0: ;
    edi = MEM32(esi + 0xC);
    eax = ZX8(MEM8(edi + 1));
    ecx = MEM32(esi + 0x74);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + eax * 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000182D6u); RECOMP_ABI_CALL(0x00018D20u, sub_00018D20); /* call 0x00018D20 */

loc_000182D6: ;
    MEM8(0x3025C2) = LO8(eax);
    eax = MEM32(0x3026EC);
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000182ED; /* jne: not equal / not zero */

loc_000182EA: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + ebp;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000182ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x302125) = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000182FA: ;
    MEM8(0x3025C2) = 0xFF;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0001830F
 * Original: 0x0001830F - 0x0001836F (96 bytes, 28 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001830F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001830F: ;
    ecx = MEM32(0x302134);
    SET_LO8(eax, MEM8(ecx + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018324; /* je: equal / zero */

loc_0001831C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018324; /* je: equal / zero */

loc_00018320: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018366; /* jne: not equal / not zero */

loc_00018324: ;
    _fa = (uint32_t)(MEM8(ecx + 0x33)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x33), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018369; /* jne: not equal / not zero */

loc_0001832A: ;
    _fa = (uint32_t)(MEM8(ecx + 0x2C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2C), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018369; /* jne: not equal / not zero */

loc_00018330: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00018366: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + ebp;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00018369: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0001833E
 * Original: 0x0001833E - 0x00018348 (10 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001833E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001833E: ;
    POP32(esp, edi);
    MEM16(esi + 8) = LO16(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00018348
 * Original: 0x00018348 - 0x0001836F (39 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018348(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018348: ;
    ecx = MEM32(esi + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(ecx + 1));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x301FB0));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001835Eu); RECOMP_ABI_CALL(0x00016DA0u, sub_00016DA0); /* call 0x00016DA0 */

loc_0001835E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3025C2) = LO8(eax);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + ebp;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00018369
 * Original: 0x00018369 - 0x0001836F (6 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018369(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018369: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00018420
 * Original: 0x00018420 - 0x00018471 (81 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018420: ;
    eax = ZX8(MEM8(0x301FB0));
    MEM16(eax * 2 + 0x3020F0) = MEM16(eax * 2 + 0x3020F0) - 1;
    _fa = (uint32_t)(MEM16(eax * 2 + 0x3020F0)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(0x302290);
    SET_LO16(ecx, ZX8(MEM8(eax + 0x11)));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001843Fu); RECOMP_ABI_CALL(0x00016F00u, sub_00016F00); /* call 0x00016F00 */

loc_0001843F: ;
    SET_LO8(ecx, MEM8(0x301FB0));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018458; /* jne: not equal / not zero */

loc_0001844C: ;
    eax = ZX8(LO8(ecx));
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax * 2 + 0x3020F0) = MEM16(eax * 2 + 0x3020F0) + 0xFFFFFFFCu;
    _fa = (uint32_t)(MEM16(eax * 2 + 0x3020F0)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */

loc_00018458: ;
    eax = ZX8(LO8(ecx));
    _fa = (uint32_t)(MEM16(eax * 2 + 0x3020F0)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 2 + 0x3020F0), 0 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00018470; /* jge: greater or equal (signed >=) */

loc_00018466: ;
    MEM16(eax * 2 + 0x3020F0) = 0;

loc_00018470: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00018480
 * Original: 0x00018480 - 0x000184D2 (82 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018480: ;
    eax = ZX8(MEM8(0x301FB0));
    _fa = (uint32_t)(MEM8(eax + 0x3025C0)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x3025C0), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018497; /* je: equal / zero */

loc_00018490: ;
    MEM8(eax + 0x301E44) = 0;

loc_00018497: ;
    _fa = (uint32_t)(MEM8(eax + 0x301E44)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x301E44), 0xA (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000184D1; /* jae: above or equal (unsigned >=) */

loc_000184A0: ;
    eax = MEM32(0x302290);
    SET_LO16(ecx, ZX8(MEM8(eax + 0x10)));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000184B0u); RECOMP_ABI_CALL(0x00016F00u, sub_00016F00); /* call 0x00016F00 */

loc_000184B0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000184D1; /* jne: not equal / not zero */

loc_000184B7: ;
    edx = MEM32(0x301FA0);
    MEM32(edx + 0x10) = 0x40000000;
    eax = ZX8(MEM8(0x301FB0));
    MEM8(eax + 0x301E44) = MEM8(eax + 0x301E44) + 1;
    _fa = (uint32_t)(MEM8(eax + 0x301E44)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_000184D1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000184E0
 * Original: 0x000184E0 - 0x000184F0 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000184E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000184E0: ;
    eax = MEM32(0x301FA0);
    SET_LO8(ecx, MEM8(eax + 0x44));
    PUSH32(esp, ebx);
    ebx = 1;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */

    g_seh_ebp = ebp; sub_000184F0(); return; /* fallthrough 0x000184F0 */

}

/**
 * sub_000184F0
 * Original: 0x000184F0 - 0x00018578 (136 bytes, 38 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000184F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000184F0: ;
    if (_flags /* jne: not equal / not zero */) goto loc_00018576;

loc_000184F6: ;
    eax = ZX8(MEM8(0x301FB0));
    _fa = (uint32_t)(MEM8(eax + 0x3026E0)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x3026E0), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018576; /* je: equal / zero */

loc_00018505: ;
    SET_LO16(ecx, MEM16(eax * 2 + 0x30226C));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001851C; /* jne: not equal / not zero */

loc_00018512: ;
    SET_LO16(ecx, MEM16(eax * 2 + 0x301E50));
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_0001851C: ;
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00018528; /* jge: greater or equal (signed >=) */

loc_00018524: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00018533;

loc_00018528: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x10 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00018533; /* jle: less or equal (signed <=) */

loc_0001852E: ;
    ecx = 0x10;

loc_00018533: ;
    edx = MEM32(0x302290);
    SET_LO8(eax, MEM8(edx + 0x17));
    SET_LO8(eax, LO8(eax) >> 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO16(eax, ZX8(LO8(eax)));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    SET_LO16(ecx, ZX8(MEM8(edx + 0x16)));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFF (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00018558; /* jbe: below or equal (unsigned <=) */

loc_00018553: ;
    eax = 0xFF;

loc_00018558: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001855Eu); RECOMP_ABI_CALL(0x00016F00u, sub_00016F00); /* call 0x00016F00 */

loc_0001855E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018576; /* jne: not equal / not zero */

loc_00018565: ;
    edx = MEM32(0x301FA0);
    MEM8(edx + 0x50) = LO8(ebx);
    eax = MEM32(0x3026EC);
    MEM8(eax + 0x16) = LO8(ebx);

loc_00018576: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00018580
 * Original: 0x00018580 - 0x00018670 (240 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018580(void)
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

loc_00018580: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(0x30C514)); /* fld float */
    eax = MEM32(0x2FCC80);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C170)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c170] */
    MEM32(esp + 0x10) = eax;
    MEM8(esp) = 0x1E;
    MEM8(esp + 1) = 0x7D;
    MEM8(esp + 2) = 0x7E;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    MEM8(esp + 3) = 0x2A;
    MEM8(esp + 4) = 0x1F;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    MEM8(esp + 5) = 0x7B;
    MEM8(esp + 6) = 0x7C;
    MEM8(esp + 7) = 0x2B;
    MEM8(esp + 8) = 0x20;
    MEM8(esp + 9) = 0x81;
    MEM8(esp + 0xA) = 0x82;
    MEM8(esp + 0xB) = 0x2C;
    MEM8(esp + 0xC) = 0x21;
    MEM8(esp + 0xD) = 0x7F;
    MEM8(esp + 0xE) = 0x80;
    MEM8(esp + 0xF) = 0x2D;
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00018663; /* jp: parity */

loc_000185EE: ;
    eax = MEM32(0x3026EC);
    SET_LO8(ecx, MEM8(eax + 0x14));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018663; /* jne: not equal / not zero */

loc_000185FA: ;
    ecx = ZX8(MEM8(0x301FB0));
    _fa = (uint32_t)(MEM8(ecx + 0x30223C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x30223C), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018663; /* jne: not equal / not zero */

loc_0001860A: ;
    edx = MEM32(0x302290);
    SET_LO16(eax, ZX8(MEM8(edx + 0x13)));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001861Bu); RECOMP_ABI_CALL(0x00016F00u, sub_00016F00); /* call 0x00016F00 */

loc_0001861B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018659; /* jne: not equal / not zero */

loc_00018622: ;
    ecx = MEM32(0x301FA0);
    SET_LO8(eax, MEM8(ecx + 0x2A));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_00018630: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esp + esi * 4 + 4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esp + esi * 4 + 4) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001863E; /* je: equal / zero */

loc_00018636: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00018630; /* jl: less (signed <) */

loc_0001863C: ;
    goto loc_00018658;

loc_0001863E: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00018645u); RECOMP_ABI_CALL(0x00014220u, sub_00014220); /* call 0x00014220 */

loc_00018645: ;
    edx = ZX16(LO16(eax));
    eax = esp + edx + 9;
    SET_LO8(ecx, MEM8(eax + esi * 4));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3025C2) = LO8(ecx);

loc_00018658: ;
    POP32(esp, esi);

loc_00018659: ;
    edx = MEM32(0x3026EC);
    MEM8(edx + 0x14) = 1;

loc_00018663: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x0001866Cu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0001866C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00018670
 * Original: 0x00018670 - 0x000189F9 (905 bytes, 298 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018670: ;
    eax = ZX8(MEM8(esp + 8));
    PUSH32(esp, ebx);
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000189F5; /* ja: above (unsigned >) */

loc_00018682: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x189FC); /* switch: 21 entries, 20 targets */
    if (_jt == 0x00018689u) goto loc_00018689;
    if (_jt == 0x000186E4u) goto loc_000186E4;
    if (_jt == 0x0001870Bu) goto loc_0001870B;
    if (_jt == 0x00018751u) goto loc_00018751;
    if (_jt == 0x00018777u) goto loc_00018777;
    if (_jt == 0x00018799u) goto loc_00018799;
    if (_jt == 0x000187BBu) goto loc_000187BB;
    if (_jt == 0x000187DDu) goto loc_000187DD;
    if (_jt == 0x000187FFu) goto loc_000187FF;
    if (_jt == 0x0001886Cu) goto loc_0001886C;
    if (_jt == 0x0001888Bu) goto loc_0001888B;
    if (_jt == 0x000188AAu) goto loc_000188AA;
    if (_jt == 0x000188C9u) goto loc_000188C9;
    if (_jt == 0x0001892Bu) goto loc_0001892B;
    if (_jt == 0x00018947u) goto loc_00018947;
    if (_jt == 0x0001895Fu) goto loc_0001895F;
    if (_jt == 0x000189BDu) goto loc_000189BD;
    if (_jt == 0x000189C9u) goto loc_000189C9;
    if (_jt == 0x000189D1u) goto loc_000189D1;
    if (_jt == 0x000189F5u) goto loc_000189F5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00018689: ;
    SET_LO8(eax, MEM8(0x301FB2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x1C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x1C (8-bit) */
    MEM8(esp + 0xC) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_000186C3; /* jne: not equal / not zero */

loc_00018696: ;
    PUSH32(esp, 0x0001869Bu); RECOMP_ABI_CALL(0x00069F60u, sub_00069F60); /* call 0x00069F60 */

loc_0001869B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000186BC; /* je: equal / zero */

loc_000186A8: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000186B5; /* je: equal / zero */

loc_000186AB: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00018729; /* jne: not equal / not zero */

loc_000186AE: ;
    MEM8(esp + 0xC) = 0x1B;
    goto loc_00018731;

loc_000186B5: ;
    MEM8(esp + 0xC) = 0x12;
    goto loc_000186EE;

loc_000186BC: ;
    MEM8(esp + 0xC) = 0x1A;
    goto loc_000186C7;

loc_000186C3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x1A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x1A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000186EA; /* jne: not equal / not zero */

loc_000186C7: ;
    PUSH32(esp, 0x000186CCu); RECOMP_ABI_CALL(0x00069F60u, sub_00069F60); /* call 0x00069F60 */

loc_000186CC: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000189F5; /* ja: above (unsigned >) */

loc_000186DD: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x18A20); /* switch: 12 entries, 12 targets */
    if (_jt == 0x000186E4u) goto loc_000186E4;
    if (_jt == 0x0001870Bu) goto loc_0001870B;
    if (_jt == 0x00018751u) goto loc_00018751;
    if (_jt == 0x00018777u) goto loc_00018777;
    if (_jt == 0x00018799u) goto loc_00018799;
    if (_jt == 0x000187BBu) goto loc_000187BB;
    if (_jt == 0x000187DDu) goto loc_000187DD;
    if (_jt == 0x000187FFu) goto loc_000187FF;
    if (_jt == 0x0001886Cu) goto loc_0001886C;
    if (_jt == 0x0001888Bu) goto loc_0001888B;
    if (_jt == 0x000188AAu) goto loc_000188AA;
    if (_jt == 0x000188C9u) goto loc_000188C9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000186E4: ;
    SET_LO8(ebx, 0xA5);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000186EA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x12 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001872D; /* jne: not equal / not zero */

loc_000186EE: ;
    PUSH32(esp, 0x000186F3u); RECOMP_ABI_CALL(0x00069F60u, sub_00069F60); /* call 0x00069F60 */

loc_000186F3: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 7;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000189F5; /* ja: above (unsigned >) */

loc_00018704: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x18A34); /* switch: 7 entries, 7 targets */
    if (_jt == 0x0001870Bu) goto loc_0001870B;
    if (_jt == 0x00018751u) goto loc_00018751;
    if (_jt == 0x00018777u) goto loc_00018777;
    if (_jt == 0x00018799u) goto loc_00018799;
    if (_jt == 0x000187BBu) goto loc_000187BB;
    if (_jt == 0x000187DDu) goto loc_000187DD;
    if (_jt == 0x000187FFu) goto loc_000187FF;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0001870B: ;
    edx = ZX8(MEM8(0x301FB0));
    SET_LO8(ebx, MEM8(edx + 0x301F84));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ebx, LO8(ebx) - 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(ebx, LO8(ebx) & 0x88);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x12) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + 0x12);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00018729: ;
    SET_LO8(eax, MEM8(esp + 0xC));

loc_0001872D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x1B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x1B (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018773; /* jne: not equal / not zero */

loc_00018731: ;
    PUSH32(esp, 0x00018736u); RECOMP_ABI_CALL(0x00069F60u, sub_00069F60); /* call 0x00069F60 */

loc_00018736: ;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00018821; /* je: equal / zero */

loc_00018742: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000188F6; /* je: equal / zero */

loc_00018749: ;
    SET_LO8(eax, MEM8(esp + 0xC));

loc_0001874D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xD (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018795; /* jne: not equal / not zero */

loc_00018751: ;
    ecx = ZX8(MEM8(0x301FB0));
    SET_LO8(ebx, MEM8(ecx + 0x301F84));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ebx, LO8(ebx) - 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(ebx, LO8(ebx) & 0xFA);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x5C) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + 0x5C);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00018773: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xC (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001874D; /* jne: not equal / not zero */

loc_00018777: ;
    eax = ZX8(MEM8(0x301FB0));
    SET_LO8(ebx, MEM8(eax + 0x301F84));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ebx, LO8(ebx) - 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(ebx, LO8(ebx) & 0xFA);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x59) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + 0x59);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00018795: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xE (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000187B7; /* jne: not equal / not zero */

loc_00018799: ;
    edx = ZX8(MEM8(0x301FB0));
    SET_LO8(ebx, MEM8(edx + 0x301F84));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ebx, LO8(ebx) - 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(ebx, LO8(ebx) & 0xFA);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x5D) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + 0x5D);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000187B7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000187D9; /* jne: not equal / not zero */

loc_000187BB: ;
    eax = ZX8(MEM8(0x301FB0));
    SET_LO8(ebx, MEM8(eax + 0x301F84));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ebx, LO8(ebx) - 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(ebx, LO8(ebx) & 0xFA);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x5B) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + 0x5B);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000187D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x10 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000187FB; /* jne: not equal / not zero */

loc_000187DD: ;
    ecx = ZX8(MEM8(0x301FB0));
    SET_LO8(ebx, MEM8(ecx + 0x301F84));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ebx, LO8(ebx) - 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(ebx, LO8(ebx) & 0xFA);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x5E) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + 0x5E);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000187FB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x11) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x11 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001881D; /* jne: not equal / not zero */

loc_000187FF: ;
    edx = ZX8(MEM8(0x301FB0));
    SET_LO8(ebx, MEM8(edx + 0x301F84));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ebx, LO8(ebx) - 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(ebx, LO8(ebx) & 0x52);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x12) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + 0x12);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001881D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x13) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x13 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018853; /* jne: not equal / not zero */

loc_00018821: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00018828u); RECOMP_ABI_CALL(0x000152D0u, sub_000152D0); /* call 0x000152D0 */

loc_00018828: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000189F5; /* jne: not equal / not zero */

loc_00018833: ;
    SET_LO8(eax, MEM8(0x301FB0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018847; /* jne: not equal / not zero */

loc_0001883C: ;
    eax = MEM32(0x30228C);
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00018847: ;
    ecx = MEM32(0x3026D4);
    SET_LO8(ebx, MEM8(ecx));
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00018853: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x15) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x15 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018872; /* jne: not equal / not zero */

loc_00018857: ;
    edx = ZX8(MEM8(0x301FB0));
    SET_LO8(eax, MEM8(edx + 0x301F84));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000189F5; /* jne: not equal / not zero */

loc_0001886C: ;
    SET_LO8(ebx, 0xA9);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00018872: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x16) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x16 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018891; /* jne: not equal / not zero */

loc_00018876: ;
    eax = ZX8(MEM8(0x301FB0));
    SET_LO8(ecx, MEM8(eax + 0x301F84));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000189F5; /* jne: not equal / not zero */

loc_0001888B: ;
    SET_LO8(ebx, 0xA8);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00018891: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x17) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x17 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000188B0; /* jne: not equal / not zero */

loc_00018895: ;
    ecx = ZX8(MEM8(0x301FB0));
    SET_LO8(eax, MEM8(ecx + 0x301F84));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000189F5; /* jne: not equal / not zero */

loc_000188AA: ;
    SET_LO8(ebx, 0xA6);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000188B0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x18) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x18 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000188CF; /* jne: not equal / not zero */

loc_000188B4: ;
    edx = ZX8(MEM8(0x301FB0));
    SET_LO8(eax, MEM8(edx + 0x301F84));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000189F5; /* jne: not equal / not zero */

loc_000188C9: ;
    SET_LO8(ebx, 0xA7);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000188CF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x19) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x19 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000188EE; /* jne: not equal / not zero */

loc_000188D3: ;
    eax = ZX8(MEM8(0x301FB0));
    SET_LO8(ecx, MEM8(eax + 0x301F84));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000189F5; /* jne: not equal / not zero */

loc_000188E8: ;
    SET_LO8(ebx, 0xA5);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000188EE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x14) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x14 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000189F5; /* jne: not equal / not zero */

loc_000188F6: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x000188FDu); RECOMP_ABI_CALL(0x000152D0u, sub_000152D0); /* call 0x000152D0 */

loc_000188FD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000189F5; /* jne: not equal / not zero */

loc_00018908: ;
    SET_LO8(eax, MEM8(0x301FB0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001891E; /* jne: not equal / not zero */

loc_00018911: ;
    ecx = MEM32(0x30228C);
    SET_LO8(ebx, MEM8(ecx + 4));
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001891E: ;
    edx = MEM32(0x3026D4);
    SET_LO8(ebx, MEM8(edx + 4));
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001892B: ;
    eax = ZX8(MEM8(0x301FB0));
    _fa = (uint32_t)(MEM8(eax + 0x301F84)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x301F84), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000189F5; /* jne: not equal / not zero */

loc_0001893F: ;
    SET_LO8(ebx, MEM8(esp + 8));
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00018947: ;
    ecx = MEM32(0x302134);
    _fa = (uint32_t)(MEM8(ecx + 0x43)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x43), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000189F5; /* jne: not equal / not zero */

loc_00018957: ;
    SET_LO8(ebx, MEM8(esp + 8));
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001895F: ;
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00018969u); RECOMP_ABI_CALL(0x000152D0u, sub_000152D0); /* call 0x000152D0 */

loc_00018969: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    SET_LO8(eax, MEM8(0x301FB0));
    if (CMP_NE(_fa, _fb)) goto loc_00018998; /* jne: not equal / not zero */

loc_00018975: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018988; /* jne: not equal / not zero */

loc_00018979: ;
    eax = MEM32(0x30228C);
    edx = ZX8(LO8(ebx));
    SET_LO8(ebx, MEM8(eax + edx * 2));
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00018988: ;
    edx = MEM32(0x3026D4);
    ecx = ZX8(LO8(ebx));
    SET_LO8(ebx, MEM8(edx + ecx * 2));
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00018998: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000189AD; /* jne: not equal / not zero */

loc_0001899C: ;
    ecx = MEM32(0x30228C);
    eax = ZX8(LO8(ebx));
    SET_LO8(ebx, MEM8(ecx + eax * 2 + 1));
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000189AD: ;
    eax = MEM32(0x3026D4);
    edx = ZX8(LO8(ebx));
    SET_LO8(ebx, MEM8(eax + edx * 2 + 1));
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000189BD: ;
    ecx = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(ecx + 0x2D)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2D), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000189F5; /* jne: not equal / not zero */

loc_000189C9: ;
    SET_LO8(ebx, MEM8(esp + 8));
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000189D1: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000189DBu); RECOMP_ABI_CALL(0x00016E70u, sub_00016E70); /* call 0x00016E70 */

loc_000189DB: ;
    eax = MEM32(0x3026EC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x10) = 0;
    PUSH32(esp, 0x000189EFu); RECOMP_ABI_CALL(0x00017A00u, sub_00017A00); /* call 0x00017A00 */

loc_000189EF: ;
    SET_LO8(ebx, MEM8(0x3025C2));

loc_000189F5: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00018A50
 * Original: 0x00018A50 - 0x00018B8D (317 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018A50(void)
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

loc_00018A50: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x302134);
    SET_LO8(ecx, MEM8(eax + 0x2D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xC (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018A9A; /* je: equal / zero */

loc_00018A5E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xD (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018A79; /* jne: not equal / not zero */

loc_00018A63: ;
    eax = ZX8(MEM8(eax + 0x2A));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018A6Du); RECOMP_ABI_CALL(0x000146B0u, sub_000146B0); /* call 0x000146B0 */

loc_00018A6D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018A9A; /* je: equal / zero */

loc_00018A74: ;
    eax = MEM32(0x302134);

loc_00018A79: ;
    _fa = (uint32_t)(MEM8(eax + 0x2D)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2D), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018A91; /* jne: not equal / not zero */

loc_00018A7F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(eax + 0x2A));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00018A8Au); RECOMP_ABI_CALL(0x000146D0u, sub_000146D0); /* call 0x000146D0 */

loc_00018A8A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018A9A; /* je: equal / zero */

loc_00018A91: ;
    MEM32(esp) = 0x3FA66666;
    goto loc_00018AA1;

loc_00018A9A: ;
    MEM32(esp) = 0x40000000;

loc_00018AA1: ;
    SET_LO8(eax, MEM8(0x301FB2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    SET_LO8(ecx, MEM8(0x301FB0));
    if (CMP_EQ(_fa, _fb)) goto loc_00018ABC; /* je: equal / zero */

loc_00018AB0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018ABC; /* je: equal / zero */

loc_00018AB4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018ABC; /* je: equal / zero */

loc_00018AB8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018AC6; /* jne: not equal / not zero */

loc_00018ABC: ;
    edx = ZX8(LO8(ecx));
    MEM8(edx + 0x302240) = 0xA;

loc_00018AC6: ;
    ecx = ZX8(LO8(ecx));
    SET_LO8(edx, MEM8(ecx + 0x302240));
    eax = ZX8(LO8(edx));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00018B4F; /* je: equal / zero */

loc_00018AD5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00018B4F; /* je: equal / zero */

loc_00018ADA: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00018B0F; /* je: equal / zero */

loc_00018ADF: ;
    SET_LO8(eax, MEM8(ecx + 0x3025C0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018B01; /* jne: not equal / not zero */

loc_00018AE9: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018B01; /* je: equal / zero */

loc_00018AEE: ;
    _fa = (uint32_t)(MEM16(ecx * 2 + 0x30226C)) & 0xFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 2 + 0x30226C), 0xA (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00018B01; /* jae: above or equal (unsigned >=) */

loc_00018AF9: ;
    MEM8(0x3025C2) = LO8(edx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00018B01: ;
    eax = MEM32(esp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018B0Au); RECOMP_ABI_CALL(0x00016F30u, sub_00016F30); /* call 0x00016F30 */

loc_00018B0A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00018B0F: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C16C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c16c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00018B30; /* jne: not equal / not zero */

loc_00018B22: ;
    ecx = MEM32(esp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00018B2Bu); RECOMP_ABI_CALL(0x00016F30u, sub_00016F30); /* call 0x00016F30 */

loc_00018B2B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00018B30: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C100)); /* fsub dword ptr [0x22c100] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x30C514)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x30c514] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00018B8B; /* jp: parity */

loc_00018B46: ;
    MEM8(0x3025C2) = 0xB;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00018B4F: ;
    edx = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(edx + 0x2A)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x2A), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018B6E; /* je: equal / zero */

loc_00018B5B: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C16C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c16c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00018B01; /* je: equal / zero */

loc_00018B6E: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C100)); /* fsub dword ptr [0x22c100] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x30C514)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x30c514] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00018B8B; /* jp: parity */

loc_00018B84: ;
    MEM8(0x3025C2) = 1;

loc_00018B8B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00018B90
 * Original: 0x00018B90 - 0x00018CAF (287 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018B90: ;
    ecx = MEM32(0x3026EC);
    _fa = (uint32_t)(MEM8(ecx + 0x17)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x17), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018BEE; /* jne: not equal / not zero */

loc_00018B9C: ;
    eax = MEM32(0x302290);
    SET_LO16(ecx, ZX8(MEM8(eax + 3)));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00018BACu); RECOMP_ABI_CALL(0x00014220u, sub_00014220); /* call 0x00014220 */

loc_00018BAC: ;
    edx = MEM32(0x302290);
    SET_LO16(ecx, ZX8(MEM8(edx + 2)));
    edx = MEM32(0x3026EC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edx) = LO16(eax);
    eax = ZX8(MEM8(0x301FB0));
    SET_LO8(eax, MEM8(eax + 0x3025C0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00018BDA; /* jb: below (unsigned <) */

loc_00018BD6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xC (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00018BE2; /* jbe: below or equal (unsigned <=) */

loc_00018BDA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018C62; /* jne: not equal / not zero */

loc_00018BE2: ;
    ecx = MEM32(0x3026EC);
    MEM16(ecx) = 0;
    esp += 4; return; /* ret */

loc_00018BEE: ;
    edx = ZX8(MEM8(0x301FB0));
    SET_LO8(eax, MEM8(edx + 0x3025C0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00018C03; /* jb: below (unsigned <) */

loc_00018BFF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xC (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00018C07; /* jbe: below or equal (unsigned <=) */

loc_00018C03: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018C86; /* jne: not equal / not zero */

loc_00018C07: ;
    SET_LO16(eax, ZX8(MEM8(ecx + 0x21)));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018C13u); RECOMP_ABI_CALL(0x00016F00u, sub_00016F00); /* call 0x00016F00 */

loc_00018C13: ;
    esi = MEM32(0x3026EC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018C32; /* jne: not equal / not zero */

loc_00018C20: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 0x20));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00018C2Bu); RECOMP_ABI_CALL(0x00017210u, sub_00017210); /* call 0x00017210 */

loc_00018C2B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018C5C; /* je: equal / zero */

loc_00018C32: ;
    SET_LO16(edx, ZX8(MEM8(esi + 0x23)));
    PUSH32(esp, edx);
    PUSH32(esp, 0x00018C3Du); RECOMP_ABI_CALL(0x00016F00u, sub_00016F00); /* call 0x00016F00 */

loc_00018C3D: ;
    esi = MEM32(0x3026EC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018C63; /* jne: not equal / not zero */

loc_00018C4A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x22));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018C55u); RECOMP_ABI_CALL(0x00017210u, sub_00017210); /* call 0x00017210 */

loc_00018C55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018C63; /* jne: not equal / not zero */

loc_00018C5C: ;
    MEM16(esi) = 0;
    POP32(esp, esi);

loc_00018C62: ;
    esp += 4; return; /* ret */

loc_00018C63: ;
    SET_LO8(eax, MEM8(0x30ECC0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00018C76; /* jb: below (unsigned <) */

loc_00018C6C: ;
    SET_LO8(ecx, MEM8(0x306320));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018C5C; /* jne: not equal / not zero */

loc_00018C76: ;
    SET_LO16(ecx, ZX8(LO8(eax)));
    edx = 7;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(esi) = LO16(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00018C86: ;
    eax = MEM32(0x302290);
    SET_LO16(ecx, ZX8(MEM8(eax + 1)));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00018C96u); RECOMP_ABI_CALL(0x00014220u, sub_00014220); /* call 0x00014220 */

loc_00018C96: ;
    edx = MEM32(0x302290);
    SET_LO16(ecx, ZX8(MEM8(edx)));
    edx = MEM32(0x3026EC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edx) = LO16(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00018CB0
 * Original: 0x00018CB0 - 0x00018D20 (112 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018CB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00018CB6u); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_00018CB6: ;
    ecx = eax;
    eax = MEM32(0x3026EC);
    edx = ZX8(MEM8(eax + 0x21));
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00018CE1; /* jle: less or equal (signed <=) */

loc_00018CCB: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ebx, MEM8(eax + 0x20));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00018CD6u); RECOMP_ABI_CALL(0x00017210u, sub_00017210); /* call 0x00017210 */

loc_00018CD6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018CE1; /* jne: not equal / not zero */

loc_00018CDD: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00018CE1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00018CE7u); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_00018CE7: ;
    esi = MEM32(0x3026EC);
    ecx = ZX8(MEM8(esi + 0x23));
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00018D11; /* jle: less or equal (signed <=) */

loc_00018CFA: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ebx, MEM8(esi + 0x22));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00018D05u); RECOMP_ABI_CALL(0x00017210u, sub_00017210); /* call 0x00017210 */

loc_00018D05: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018D11; /* jne: not equal / not zero */

loc_00018D0C: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00018D11: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00018D1Au); RECOMP_ABI_CALL(0x00017440u, sub_00017440); /* call 0x00017440 */

loc_00018D1A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00018D20
 * Original: 0x00018D20 - 0x00018D70 (80 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018D20: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018D2B; /* jne: not equal / not zero */

loc_00018D28: ;
    SET_LO8(eax, LO8(eax) | 0xFF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_00018D2B: ;
    SET_LO8(ecx, MEM8(0x30ECC0));
    SET_LO8(edx, MEM8(eax + 2));
    PUSH32(esp, ebx);
    ebx = 0x80;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 9 (8-bit) */
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00018DA2(); return; } /* je: equal / zero */

loc_00018D46: ;
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 3), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00018D51; /* je: equal / zero */

loc_00018D4B: ;
    SET_LO16(edx, ZX8(MEM8(eax)));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00018D51: ;
    SET_LO8(edx, MEM8(eax + 6));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018D46; /* jne: not equal / not zero */

loc_00018D5C: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00018DA2(); return; } /* je: equal / zero */

loc_00018D61: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00018D67u); RECOMP_ABI_CALL(0x00014220u, sub_00014220); /* call 0x00014220 */

loc_00018D67: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

    g_seh_ebp = ebp; sub_00018D70(); return; /* fallthrough 0x00018D70 */

}

/**
 * sub_00018D70
 * Original: 0x00018D70 - 0x00018DA2 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018D70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018D70: ;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 2), 9 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00018DA2(); return; } /* je: equal / zero */

loc_00018D76: ;
    _fa = (uint32_t)(MEM8(ecx + 3)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 3), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00018D81; /* je: equal / zero */

loc_00018D7B: ;
    SET_LO16(esi, ZX8(MEM8(ecx)));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00018D81: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(eax) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00018D70; /* jbe: below or equal (unsigned <=) */

loc_00018D89: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 2));
    ecx = ZX8(MEM8(ecx + 1));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00018D9Cu); RECOMP_ABI_CALL(0x00018670u, sub_00018670); /* call 0x00018670 */

loc_00018D9C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00018DA2
 * Original: 0x00018DA2 - 0x00018DA7 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018DA2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018DA2: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(eax) | 0xFF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00018DB0
 * Original: 0x00018DB0 - 0x00018DD9 (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018DB0: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(0x301FB0));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00018DC3u); RECOMP_ABI_CALL(0x00016DF0u, sub_00016DF0); /* call 0x00016DF0 */

loc_00018DC3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018DD8; /* je: equal / zero */

loc_00018DCA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018DD0u); RECOMP_ABI_CALL(0x00018D20u, sub_00018D20); /* call 0x00018D20 */

loc_00018DD0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3025C2) = LO8(eax);

loc_00018DD8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00018DE0
 * Original: 0x00018DE0 - 0x00018DFF (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018DE0: ;
    eax = ZX8(MEM8(esp + 4));
    eax = MEM32(eax * 4 + 0x2BB6A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018DFE; /* je: equal / zero */

loc_00018DF0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018DF6u); RECOMP_ABI_CALL(0x00018D20u, sub_00018D20); /* call 0x00018D20 */

loc_00018DF6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3025C2) = LO8(eax);

loc_00018DFE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00018E00
 * Original: 0x00018E00 - 0x00019073 (627 bytes, 156 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018E00(void)
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

loc_00018E00: ;
    eax = ZX8(MEM8(0x301FB0));
    ecx = MEM32(0x301FA0);
    SET_LO8(edx, MEM8(ecx + 0x2D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 0x3025C0)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + 0x3025C0) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018E1D; /* je: equal / zero */

loc_00018E18: ;
    PUSH32(esp, 0x00018E1Du); RECOMP_ABI_CALL(0x00013DF0u, sub_00013DF0); /* call 0x00013DF0 */

loc_00018E1D: ;
    eax = ZX8(MEM8(0x301FB0));
    eax = ZX8(MEM8(eax + 0x3020D0));
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0001904A; /* je: equal / zero */

loc_00018E34: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00019072; /* jne: not equal / not zero */

loc_00018E3B: ;
    ecx = MEM32(0x302290);
    SET_LO16(edx, ZX8(MEM8(ecx + 0x12)));
    PUSH32(esp, edx);
    PUSH32(esp, 0x00018E4Cu); RECOMP_ABI_CALL(0x00016F00u, sub_00016F00); /* call 0x00016F00 */

loc_00018E4C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018E80; /* jne: not equal / not zero */

loc_00018E53: ;
    eax = MEM32(0x301FA0);
    SET_LO8(ecx, MEM8(eax + 0x2F));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(ecx, MEM8(eax + 0x31));
    if (CMP_NE(_fa, _fb)) goto loc_00018E6E; /* jne: not equal / not zero */

loc_00018E62: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018E6A; /* jne: not equal / not zero */

loc_00018E66: ;
    PUSH32(esp, 0);
    goto loc_00018E78;

loc_00018E6A: ;
    PUSH32(esp, 1);
    goto loc_00018E78;

loc_00018E6E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018E76; /* jne: not equal / not zero */

loc_00018E72: ;
    PUSH32(esp, 2);
    goto loc_00018E78;

loc_00018E76: ;
    PUSH32(esp, 3);

loc_00018E78: ;
    PUSH32(esp, 0x00018E7Du); RECOMP_ABI_CALL(0x00018DE0u, sub_00018DE0); /* call 0x00018DE0 */

loc_00018E7D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00018E80: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(0x3025C2));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018F45; /* je: equal / zero */

loc_00018E91: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C164)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c164] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00018ED3; /* jne: not equal / not zero */

loc_00018EA4: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00018EAAu); RECOMP_ABI_CALL(0x000146D0u, sub_000146D0); /* call 0x000146D0 */

loc_00018EAA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018ECD; /* jne: not equal / not zero */

loc_00018EB1: ;
    eax = MEM32(0x301FA0);
    ecx = ZX8(MEM8(eax + 0x2F));
    edx = ZX8(MEM8(eax + 0x31));
    SET_LO8(ecx, MEM8(edx + ecx * 2 + 0x2BB6C0));
    MEM8(0x3025C2) = LO8(ecx);
    goto loc_00018EED;

loc_00018ECD: ;
    SET_LO8(ecx, MEM8(0x3025C2));

loc_00018ED3: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x1E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x1E (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00018EF8; /* jb: below (unsigned <) */

loc_00018ED8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x21) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x21 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00018EF8; /* ja: above (unsigned >) */

loc_00018EDD: ;
    PUSH32(esp, 0x00018EE2u); RECOMP_ABI_CALL(0x00014C10u, sub_00014C10); /* call 0x00014C10 */

loc_00018EE2: ;
    eax = MEM32(0x301FA0);

loc_00018EE7: ;
    SET_LO8(ecx, MEM8(0x3025C2));

loc_00018EED: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018F79; /* jne: not equal / not zero */

loc_00018EF6: ;
    goto loc_00018F4A;

loc_00018EF8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x22) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x22 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00018F02; /* jb: below (unsigned <) */

loc_00018EFD: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x25) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x25 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00018F14; /* jbe: below or equal (unsigned <=) */

loc_00018F02: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2E (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00018FD1; /* jb: below (unsigned <) */

loc_00018F0B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x31) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x31 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00018FD1; /* ja: above (unsigned >) */

loc_00018F14: ;
    eax = MEM32(0x301FA0);
    SET_LO8(ecx, MEM8(eax + 0x31));
    SET_LO8(ecx, LO8(ecx) ^ MEM8(eax + 0x2F));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    if ((_fa != 0)) goto loc_00018F98; /* jne: not equal / not zero */

loc_00018F21: ;
    edx = MEM32(eax + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x301FB0));
    PUSH32(esp, edx);
    PUSH32(esp, 0x40200000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018F37u); RECOMP_ABI_CALL(0x000140B0u, sub_000140B0); /* call 0x000140B0 */

loc_00018F37: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018EE2; /* jne: not equal / not zero */

loc_00018F3E: ;
    MEM8(0x3025C2) = 0xFF;

loc_00018F45: ;
    eax = MEM32(0x301FA0);

loc_00018F4A: ;
    ecx = ZX8(MEM8(0x301FB0));
    MEM16(ecx * 2 + 0x301E5C) = MEM16(ecx * 2 + 0x301E5C) - 1;
    _fa = (uint32_t)(MEM16(ecx * 2 + 0x301E5C)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 2 + 0x301E5C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 2 + 0x301E5C), 0 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00018F79; /* jge: greater or equal (signed >=) */

loc_00018F64: ;
    ecx = ZX8(MEM8(eax + 0x2F));
    edx = ZX8(MEM8(eax + 0x31));
    SET_LO8(ecx, MEM8(edx + ecx * 2 + 0x2BB6C0));
    MEM8(0x3025C2) = LO8(ecx);

loc_00018F79: ;
    ecx = ZX8(MEM8(0x301FB2));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1A (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00019072; /* ja: above (unsigned >) */

loc_00018F8A: ;
    edx = ZX8(MEM8(ecx + 0x1908C));
    { uint32_t _jt = MEM32(edx * 4 + 0x19074); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00018FDBu) goto loc_00018FDB;
    if (_jt == 0x00018FF0u) goto loc_00018FF0;
    if (_jt == 0x00019008u) goto loc_00019008;
    if (_jt == 0x0001901Du) goto loc_0001901D;
    if (_jt == 0x00019035u) goto loc_00019035;
    if (_jt == 0x00019072u) goto loc_00019072;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00018F98: ;
    ecx = MEM32(eax + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(0x301FB0));
    _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x8000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x40200000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00018FB5u); RECOMP_ABI_CALL(0x000140B0u, sub_000140B0); /* call 0x000140B0 */

loc_00018FB5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    eax = MEM32(0x301FA0);
    if (CMP_NE(_fa, _fb)) goto loc_00018EE7; /* jne: not equal / not zero */

loc_00018FC5: ;
    MEM8(0x3025C2) = 0xFF;
    goto loc_00018F4A;

loc_00018FD1: ;
    eax = MEM32(0x301FA0);
    goto loc_00018EED;

loc_00018FDB: ;
    ecx = ZX8(MEM8(eax + 0x2F));
    edx = ZX8(MEM8(eax + 0x31));
    SET_LO8(eax, MEM8(edx + ecx * 2 + 0x2BB6C0));
    MEM8(0x3025C2) = LO8(eax);
    esp += 4; return; /* ret */

loc_00018FF0: ;
    ecx = ZX8(MEM8(eax + 0x31));
    edx = ZX8(MEM8(eax + 0x2F));
    ecx = ecx ^ 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + edx * 2 + 0x2BB6C0));
    MEM8(0x3025C2) = LO8(eax);
    esp += 4; return; /* ret */

loc_00019008: ;
    ecx = ZX8(MEM8(eax + 0x2F));
    edx = ZX8(MEM8(eax + 0x31));
    SET_LO8(eax, MEM8(edx + ecx * 2 + 0x2BB6C4));
    MEM8(0x3025C2) = LO8(eax);
    esp += 4; return; /* ret */

loc_0001901D: ;
    ecx = ZX8(MEM8(eax + 0x31));
    edx = ZX8(MEM8(eax + 0x2F));
    ecx = ecx ^ 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + edx * 2 + 0x2BB6C4));
    MEM8(0x3025C2) = LO8(eax);
    esp += 4; return; /* ret */

loc_00019035: ;
    ecx = ZX8(MEM8(eax + 0x2F));
    edx = ZX8(MEM8(eax + 0x31));
    SET_LO8(eax, MEM8(edx + ecx * 2 + 0x2BB6D0));
    MEM8(0x3025C2) = LO8(eax);
    esp += 4; return; /* ret */

loc_0001904A: ;
    PUSH32(esp, 0x0001904Fu); RECOMP_ABI_CALL(0x00018420u, sub_00018420); /* call 0x00018420 */

loc_0001904F: ;
    eax = ZX8(MEM8(0x301FB0));
    _fa = (uint32_t)(MEM16(eax * 2 + 0x3020F0)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 2 + 0x3020F0), 0 (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00019072; /* jg: greater (signed >) */

loc_00019061: ;
    MEM8(eax + 0x3020D0) = 1;
    MEM16(eax * 2 + 0x301E5C) = 0x14;

loc_00019072: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000190B0
 * Original: 0x000190B0 - 0x00019181 (209 bytes, 64 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000190B0(void)
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

loc_000190B0: ;
    eax = MEM32(0x302290);
    SET_LO16(ecx, ZX8(MEM8(eax + 6)));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000190C0u); RECOMP_ABI_CALL(0x00016F00u, sub_00016F00); /* call 0x00016F00 */

loc_000190C0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019160; /* jne: not equal / not zero */

loc_000190CB: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C168)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c168] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00019159; /* jp: parity */

loc_000190DE: ;
    eax = MEM32(0x302134);
    ecx = ZX8(MEM8(eax + 0x2D));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00019160; /* ja: above (unsigned >) */

loc_000190EC: ;
    edx = ZX8(MEM8(ecx + 0x19198));
    { uint32_t _jt = MEM32(edx * 4 + 0x19184); /* switch: 5 entries, 5 targets */
    if (_jt == 0x000190FAu) goto loc_000190FA;
    if (_jt == 0x00019106u) goto loc_00019106;
    if (_jt == 0x00019112u) goto loc_00019112;
    if (_jt == 0x00019133u) goto loc_00019133;
    if (_jt == 0x00019159u) goto loc_00019159;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000190FA: ;
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0x00019101u); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_00019101: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00019160;

loc_00019106: ;
    _fa = (uint32_t)(MEM8(eax + 0x33)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x33), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019127; /* jne: not equal / not zero */

loc_0001910C: ;
    _fa = (uint32_t)(MEM8(eax + 0x2C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2C), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019127; /* jne: not equal / not zero */

loc_00019112: ;
    PUSH32(esp, 0x00019117u); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_00019117: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00019127; /* je: equal / zero */

loc_0001911B: ;
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0x00019122u); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_00019122: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00019160;

loc_00019127: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x0001912Eu); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_0001912E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00019160;

loc_00019133: ;
    eax = ZX8(MEM8(eax + 0x2A));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001913Du); RECOMP_ABI_CALL(0x000146B0u, sub_000146B0); /* call 0x000146B0 */

loc_0001913D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019160; /* jne: not equal / not zero */

loc_00019144: ;
    PUSH32(esp, 0x00019149u); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_00019149: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00019127; /* je: equal / zero */

loc_0001914D: ;
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0x00019154u); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_00019154: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00019160;

loc_00019159: ;
    MEM8(0x3025C2) = 0x12;

loc_00019160: ;
    SET_LO8(eax, MEM8(0x301FB2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019179; /* je: equal / zero */

loc_00019169: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019179; /* je: equal / zero */

loc_0001916D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019179; /* je: equal / zero */

loc_00019171: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019179; /* je: equal / zero */

loc_00019175: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019180; /* jne: not equal / not zero */

loc_00019179: ;
    MEM8(0x3025C2) = 0xA;

loc_00019180: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000191B0
 * Original: 0x000191B0 - 0x00019345 (405 bytes, 122 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000191B0(void)
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

loc_000191B0: ;
    eax = MEM32(0x3026EC);
    MEM8(eax + 0x1A) = 0;
    ecx = MEM32(0x3026EC);
    _fb = (uint32_t)(0x26) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x26;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000191C8u); RECOMP_ABI_CALL(0x00017440u, sub_00017440); /* call 0x00017440 */

loc_000191C8: ;
    edx = MEM32(0x3026EC);
    MEM8(edx + 0x1B) = LO8(eax);
    eax = MEM32(0x3026EC);
    eax = ZX8(MEM8(eax + 0x1B));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00019344; /* ja: above (unsigned >) */

loc_000191E6: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x19348); /* switch: 4 entries, 4 targets */
    if (_jt == 0x000191EDu) goto loc_000191ED;
    if (_jt == 0x00019247u) goto loc_00019247;
    if (_jt == 0x000192A1u) goto loc_000192A1;
    if (_jt == 0x00019304u) goto loc_00019304;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000191ED: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    ecx = MEM32(0x302294);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001920D; /* jp: parity */

loc_00019202: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00019209u); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_00019209: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0001920D: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00019228; /* jp: parity */

loc_0001921D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00019224u); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_00019224: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00019228: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00019344; /* jp: parity */

loc_0001923C: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x00019243u); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_00019243: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00019247: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    ecx = MEM32(0x302294);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00019267; /* jp: parity */

loc_0001925C: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00019263u); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_00019263: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00019267: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00019282; /* jp: parity */

loc_00019277: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x0001927Eu); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_0001927E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00019282: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00019344; /* jp: parity */

loc_00019296: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x0001929Du); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_0001929D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000192A1: ;
    edx = MEM32(0x302134);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000192ADu); RECOMP_ABI_CALL(0x00017600u, sub_00017600); /* call 0x00017600 */

loc_000192AD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019344; /* jne: not equal / not zero */

loc_000192B8: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C168)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c168] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00019344; /* jp: parity */

loc_000192CB: ;
    ecx = ZX8(MEM8(0x301FB0));
    SET_LO8(eax, MEM8(ecx + 0x3025C4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000192F9; /* jne: not equal / not zero */

loc_000192DC: ;
    SET_LO8(eax, MEM8(edx + 0x2E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000192EE; /* jne: not equal / not zero */

loc_000192E3: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x000192EAu); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_000192EA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000192EE: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x000192F5u); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_000192F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000192F9: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x00019300u); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_00019300: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00019304: ;
    edx = MEM32(0x302134);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00019310u); RECOMP_ABI_CALL(0x00017600u, sub_00017600); /* call 0x00017600 */

loc_00019310: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019344; /* jne: not equal / not zero */

loc_00019317: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C168)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c168] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00019344; /* jp: parity */

loc_0001932A: ;
    SET_LO8(eax, MEM8(edx + 0x2E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001933C; /* jne: not equal / not zero */

loc_00019331: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x00019338u); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_00019338: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0001933C: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x00019343u); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_00019343: ;
    POP32(esp, ecx);

loc_00019344: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00019360
 * Original: 0x00019360 - 0x0001950E (430 bytes, 128 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019360(void)
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

loc_00019360: ;
    eax = MEM32(0x3026EC);
    MEM8(eax + 0x1A) = 0;
    ecx = ZX8(MEM8(0x302110));
    edx = MEM32(0x3026EC);
    SET_LO8(eax, MEM8(ecx + 0x30212C));
    _fb = (uint32_t)(0x26) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x26;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    PUSH32(esp, edx);
    if (CMP_B(_fa, _fb)) goto loc_0001938B; /* jb: below (unsigned <) */

loc_00019384: ;
    PUSH32(esp, 0x00019389u); RECOMP_ABI_CALL(0x00017440u, sub_00017440); /* call 0x00017440 */

loc_00019389: ;
    goto loc_00019390;

loc_0001938B: ;
    PUSH32(esp, 0x00019390u); RECOMP_ABI_CALL(0x00017480u, sub_00017480); /* call 0x00017480 */

loc_00019390: ;
    ecx = MEM32(0x3026EC);
    MEM8(ecx + 0x1B) = LO8(eax);
    edx = MEM32(0x3026EC);
    eax = ZX8(MEM8(edx + 0x1B));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0001950D; /* ja: above (unsigned >) */

loc_000193AF: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x19510); /* switch: 4 entries, 4 targets */
    if (_jt == 0x000193B6u) goto loc_000193B6;
    if (_jt == 0x00019410u) goto loc_00019410;
    if (_jt == 0x0001946Au) goto loc_0001946A;
    if (_jt == 0x000194CDu) goto loc_000194CD;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000193B6: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    ecx = MEM32(0x302294);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000193D6; /* jp: parity */

loc_000193CB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000193D2u); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_000193D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000193D6: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000193F1; /* jp: parity */

loc_000193E6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000193EDu); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_000193ED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000193F1: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001950D; /* jp: parity */

loc_00019405: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x0001940Cu); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_0001940C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00019410: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    ecx = MEM32(0x302294);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00019430; /* jp: parity */

loc_00019425: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x0001942Cu); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_0001942C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00019430: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001944B; /* jp: parity */

loc_00019440: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00019447u); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_00019447: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0001944B: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001950D; /* jp: parity */

loc_0001945F: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x00019466u); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_00019466: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0001946A: ;
    edx = MEM32(0x302134);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00019476u); RECOMP_ABI_CALL(0x00017600u, sub_00017600); /* call 0x00017600 */

loc_00019476: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001950D; /* jne: not equal / not zero */

loc_00019481: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C168)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c168] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001950D; /* jp: parity */

loc_00019494: ;
    eax = ZX8(MEM8(0x301FB0));
    SET_LO8(ecx, MEM8(eax + 0x3025C4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000194C2; /* jne: not equal / not zero */

loc_000194A5: ;
    SET_LO8(eax, MEM8(edx + 0x2E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000194B7; /* jne: not equal / not zero */

loc_000194AC: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x000194B3u); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_000194B3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000194B7: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x000194BEu); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_000194BE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000194C2: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x000194C9u); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_000194C9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000194CD: ;
    edx = MEM32(0x302134);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000194D9u); RECOMP_ABI_CALL(0x00017600u, sub_00017600); /* call 0x00017600 */

loc_000194D9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001950D; /* jne: not equal / not zero */

loc_000194E0: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C168)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c168] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001950D; /* jp: parity */

loc_000194F3: ;
    SET_LO8(eax, MEM8(edx + 0x2E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019505; /* jne: not equal / not zero */

loc_000194FA: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x00019501u); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_00019501: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00019505: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0001950Cu); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_0001950C: ;
    POP32(esp, ecx);

loc_0001950D: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00019520
 * Original: 0x00019520 - 0x00019731 (529 bytes, 154 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019520(void)
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

loc_00019520: ;
    eax = ZX8(MEM8(0x302110));
    SET_LO16(ecx, MEM16(eax * 2 + 0x30226C));
    _fb = (uint32_t)(0xA) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(ecx, LO16(ecx) - 0xA);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001953C; /* jge: greater or equal (signed >=) */

loc_00019538: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00019547;

loc_0001953C: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x20 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00019547; /* jle: less or equal (signed <=) */

loc_00019542: ;
    ecx = 0x20;

loc_00019547: ;
    edx = MEM32(0x302290);
    SET_LO8(eax, MEM8(edx + 0xC));
    SET_LO8(eax, LO8(eax) >> 5);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO16(eax, ZX8(LO8(eax)));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    SET_LO16(ecx, ZX8(MEM8(edx + 0xB)));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFF (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0001956C; /* jbe: below or equal (unsigned <=) */

loc_00019567: ;
    eax = 0xFF;

loc_0001956C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00019573u); RECOMP_ABI_CALL(0x00016F00u, sub_00016F00); /* call 0x00016F00 */

loc_00019573: ;
    SET_LO8(ebx, 1);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000195A5; /* jne: not equal / not zero */

loc_0001957C: ;
    PUSH32(esp, 0x00019581u); RECOMP_ABI_CALL(0x000172B0u, sub_000172B0); /* call 0x000172B0 */

loc_00019581: ;
    edx = MEM32(0x3026EC);
    MEM8(edx + 0x1B) = LO8(eax);
    eax = MEM32(0x3026EC);
    _fa = (uint32_t)(MEM8(eax + 0x1B)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1B), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000195B3; /* jne: not equal / not zero */

loc_00019595: ;
    PUSH32(esp, 0x0001959Au); RECOMP_ABI_CALL(0x00018CB0u, sub_00018CB0); /* call 0x00018CB0 */

loc_0001959A: ;
    ecx = MEM32(0x3026EC);
    MEM8(ecx + 0x1B) = LO8(eax);
    goto loc_000195B3;

loc_000195A5: ;
    PUSH32(esp, 0x000195AAu); RECOMP_ABI_CALL(0x00018CB0u, sub_00018CB0); /* call 0x00018CB0 */

loc_000195AA: ;
    edx = MEM32(0x3026EC);
    MEM8(edx + 0x1B) = LO8(eax);

loc_000195B3: ;
    eax = MEM32(0x3026EC);
    MEM8(eax + 0x1A) = LO8(ebx);
    ecx = MEM32(0x3026EC);
    eax = ZX8(MEM8(ecx + 0x1B));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0001972F; /* ja: above (unsigned >) */

loc_000195CE: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x19734); /* switch: 4 entries, 4 targets */
    if (_jt == 0x000195D5u) goto loc_000195D5;
    if (_jt == 0x0001967Au) goto loc_0001967A;
    if (_jt == 0x0001969Du) goto loc_0001969D;
    if (_jt == 0x000196F9u) goto loc_000196F9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000195D5: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C168)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c168] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001972F; /* jp: parity */

loc_000195EC: ;
    SET_LO8(eax, MEM8(ecx + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001960B; /* jne: not equal / not zero */

loc_000195F3: ;
    SET_LO16(ecx, ZX8(MEM8(ecx + 0x21)));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000195FEu); RECOMP_ABI_CALL(0x00016F00u, sub_00016F00); /* call 0x00016F00 */

loc_000195FE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019626; /* jne: not equal / not zero */

loc_00019605: ;
    ecx = MEM32(0x3026EC);

loc_0001960B: ;
    SET_LO8(eax, MEM8(ecx + 0x22));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019624; /* jne: not equal / not zero */

loc_00019612: ;
    SET_LO16(edx, ZX8(MEM8(ecx + 0x23)));
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001961Du); RECOMP_ABI_CALL(0x00016F00u, sub_00016F00); /* call 0x00016F00 */

loc_0001961D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019626; /* jne: not equal / not zero */

loc_00019624: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00019626: ;
    eax = MEM32(0x302134);
    _fa = (uint32_t)(MEM8(eax + 0x4D)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x4D), 7 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019641; /* jne: not equal / not zero */

loc_00019631: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019641; /* je: equal / zero */

loc_00019635: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x0001963Cu); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_0001963C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00019641: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00019648u); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_00019648: ;
    ecx = MEM32(0x302134);
    SET_LO8(eax, MEM8(ecx + 0x46));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001972F; /* jne: not equal / not zero */

loc_0001965C: ;
    _fa = (uint32_t)(MEM8(0x3025C2)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3025C2), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001972F; /* jne: not equal / not zero */

loc_00019669: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001972F; /* je: equal / zero */

loc_00019671: ;
    MEM8(0x3025C2) = 0xC;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001967A: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C168)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c168] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001972F; /* jp: parity */

loc_00019691: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x00019698u); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_00019698: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001969D: ;
    edx = MEM32(0x301FA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000196A9u); RECOMP_ABI_CALL(0x00017600u, sub_00017600); /* call 0x00017600 */

loc_000196A9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001972F; /* jne: not equal / not zero */

loc_000196B0: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C168)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c168] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001972F; /* jp: parity */

loc_000196C3: ;
    eax = ZX8(MEM8(0x301FB0));
    SET_LO8(ecx, MEM8(eax + 0x3025C4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001972F; /* jne: not equal / not zero */

loc_000196D4: ;
    ecx = MEM32(0x302134);
    SET_LO8(eax, MEM8(ecx + 0x2E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000196ED; /* jne: not equal / not zero */

loc_000196E1: ;
    PUSH32(esp, 0x13);
    PUSH32(esp, 0x000196E8u); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_000196E8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000196ED: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000196F4u); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_000196F4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000196F9: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C168)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c168] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001972F; /* jp: parity */

loc_0001970C: ;
    edx = MEM32(0x302134);
    SET_LO8(eax, MEM8(edx + 0x2E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019725; /* jne: not equal / not zero */

loc_00019719: ;
    PUSH32(esp, 0x15);
    PUSH32(esp, 0x00019720u); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_00019720: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00019725: ;
    PUSH32(esp, 0x16);
    PUSH32(esp, 0x0001972Cu); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_0001972C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001972F: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00019750
 * Original: 0x00019750 - 0x000197EA (154 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019750(void)
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

loc_00019750: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C164)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c164] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000197E9; /* jp: parity */

loc_00019767: ;
    eax = MEM32(0x302134);
    SET_LO8(ecx, MEM8(eax + 0x44));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019778; /* jne: not equal / not zero */

loc_00019773: ;
    g_seh_ebp = ebp; sub_000191B0(); return; /* tail jmp 0x000191B0 */

loc_00019778: ;
    _fa = (uint32_t)(MEM8(eax + 0x3F)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x3F), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000197E9; /* jne: not equal / not zero */

loc_0001977E: ;
    eax = MEM32(0x302290);
    SET_LO16(ecx, ZX8(MEM8(eax + 0x14)));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001978Eu); RECOMP_ABI_CALL(0x00016F00u, sub_00016F00); /* call 0x00016F00 */

loc_0001978E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000197E9; /* jne: not equal / not zero */

loc_00019795: ;
    ecx = MEM32(0x302134);
    fp_push(MEMF(ecx + 8)); /* fld float */
    edx = MEM32(0x302294);
    fp_push(MEMF(edx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x22C178)); /* fadd qword ptr [0x22c178] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000197C1; /* jp: parity */

loc_000197B6: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x000197BDu); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_000197BD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000197C1: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_push(MEMF(edx + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x22C178)); /* fadd qword ptr [0x22c178] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000197E1; /* jp: parity */

loc_000197D6: ;
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x000197DDu); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_000197DD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000197E1: ;
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0x000197E8u); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_000197E8: ;
    POP32(esp, ecx);

loc_000197E9: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000197F0
 * Original: 0x000197F0 - 0x00019866 (118 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000197F0(void)
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

loc_000197F0: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C16C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c16c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00019865; /* jp: parity */

loc_00019803: ;
    eax = MEM32(0x3026EC);
    SET_LO8(ecx, MEM8(eax + 0x14));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019865; /* jne: not equal / not zero */

loc_0001980F: ;
    ecx = MEM32(0x302134);
    SET_LO8(eax, MEM8(ecx + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019820; /* je: equal / zero */

loc_0001981C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001985C; /* jne: not equal / not zero */

loc_00019820: ;
    _fa = (uint32_t)(MEM8(ecx + 0x33)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x33), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001985C; /* je: equal / zero */

loc_00019826: ;
    PUSH32(esp, 0x0001982Bu); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_0001982B: ;
    ecx = MEM32(0x3026EC);
    edx = ZX8(MEM8(ecx + 0x25));
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00019852; /* jl: less (signed <) */

loc_0001983E: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00019845u); RECOMP_ABI_CALL(0x00018DE0u, sub_00018DE0); /* call 0x00018DE0 */

loc_00019845: ;
    eax = MEM32(0x3026EC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 0x14) = 1;
    esp += 4; return; /* ret */

loc_00019852: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x00019859u); RECOMP_ABI_CALL(0x00018DE0u, sub_00018DE0); /* call 0x00018DE0 */

loc_00019859: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001985C: ;
    eax = MEM32(0x3026EC);
    MEM8(eax + 0x14) = 1;

loc_00019865: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00019870
 * Original: 0x00019870 - 0x000199A2 (306 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019870(void)
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

loc_00019870: ;
    ecx = MEM32(0x302134);
    SET_LO8(eax, MEM8(ecx + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019881; /* je: equal / zero */

loc_0001987D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019890; /* jne: not equal / not zero */

loc_00019881: ;
    SET_LO8(eax, MEM8(ecx + 0x2A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019890; /* je: equal / zero */

loc_00019888: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x10 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019890; /* je: equal / zero */

loc_0001988C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x14) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x14 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001989A; /* jne: not equal / not zero */

loc_00019890: ;
    eax = MEM32(0x3026EC);
    MEM16(eax) = 0;

loc_0001989A: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C144)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c144] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000198B8; /* jp: parity */

loc_000198AD: ;
    eax = MEM32(0x3026EC);
    _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax) = MEM16(eax) + 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    goto loc_000198F1;

loc_000198B8: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C180)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c180] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000198D6; /* jp: parity */

loc_000198CB: ;
    eax = MEM32(0x3026EC);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax) = MEM16(eax) + 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    goto loc_000198F1;

loc_000198D6: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C168)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c168] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000198F1; /* jp: parity */

loc_000198E9: ;
    eax = MEM32(0x3026EC);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */

loc_000198F1: ;
    eax = MEM32(0x3026EC);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00019993; /* jg: greater (signed >) */

loc_00019900: ;
    MEM8(eax + 0x17) = 0;
    ecx = MEM32(0x3026EC);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x21));
    PUSH32(esp, 0x00019913u); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_00019913: ;
    edx = ZX8(LO8(ebx));
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0001998D; /* jle: less or equal (signed <=) */

loc_0001991F: ;
    ecx = MEM32(0x302134);
    SET_LO8(eax, MEM8(ecx + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019930; /* je: equal / zero */

loc_0001992C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001998D; /* jne: not equal / not zero */

loc_00019930: ;
    _fa = (uint32_t)(MEM8(ecx + 0x33)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x33), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001998D; /* je: equal / zero */

loc_00019936: ;
    eax = MEM32(0x3026EC);
    SET_LO8(eax, MEM8(eax + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019977; /* jne: not equal / not zero */

loc_00019942: ;
    _fa = (uint32_t)(MEM8(ecx + 0x46)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x46), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019977; /* je: equal / zero */

loc_00019948: ;
    _fa = (uint32_t)(MEM8(ecx + 0x4D)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x4D), 7 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001996B; /* jne: not equal / not zero */

loc_0001994E: ;
    SET_LO16(ecx, ZX8(LO8(ebx)));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00019958u); RECOMP_ABI_CALL(0x00016F00u, sub_00016F00); /* call 0x00016F00 */

loc_00019958: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001996B; /* jne: not equal / not zero */

loc_0001995F: ;
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x00019966u); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_00019966: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00019992;

loc_0001996B: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00019972u); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_00019972: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00019992;

loc_00019977: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001998D; /* jne: not equal / not zero */

loc_0001997B: ;
    _fa = (uint32_t)(MEM8(ecx + 0x46)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x46), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001998D; /* jne: not equal / not zero */

loc_00019981: ;
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x00019988u); RECOMP_ABI_CALL(0x00018DB0u, sub_00018DB0); /* call 0x00018DB0 */

loc_00019988: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00019992;

loc_0001998D: ;
    PUSH32(esp, 0x00019992u); RECOMP_ABI_CALL(0x00019520u, sub_00019520); /* call 0x00019520 */

loc_00019992: ;
    POP32(esp, ebx);

loc_00019993: ;
    _fa = (uint32_t)(MEM8(0x3025C2)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3025C2), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000199A1; /* jne: not equal / not zero */

loc_0001999C: ;
    g_seh_ebp = ebp; sub_00018A50(); return; /* tail jmp 0x00018A50 */

loc_000199A1: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000199B0
 * Original: 0x000199B0 - 0x00019B28 (376 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000199B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000199B0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x302134);
    SET_LO8(eax, MEM8(ecx + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000199CE; /* jne: not equal / not zero */

loc_000199BE: ;
    PUSH32(esp, 0x000199C3u); RECOMP_ABI_CALL(0x00019750u, sub_00019750); /* call 0x00019750 */

loc_000199C3: ;
    eax = MEM32(0x3026EC);
    MEM8(eax + 0x1C) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000199CE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xC (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000199FE; /* jne: not equal / not zero */

loc_000199D2: ;
    PUSH32(esp, 0x000199D7u); RECOMP_ABI_CALL(0x00017780u, sub_00017780); /* call 0x00017780 */

loc_000199D7: ;
    ecx = MEM32(0x302294);
    edx = MEM32(0x3026EC);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x26) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x26;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x000199F0u); RECOMP_ABI_CALL(0x00017300u, sub_00017300); /* call 0x00017300 */

loc_000199F0: ;
    eax = MEM32(0x3026EC);
    MEM8(eax + 0x1C) = 0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000199FE: ;
    ecx = ZX8(MEM8(ecx + 0x2A));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00019A08u); RECOMP_ABI_CALL(0x000146B0u, sub_000146B0); /* call 0x000146B0 */

loc_00019A08: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019B01; /* je: equal / zero */

loc_00019A13: ;
    edx = MEM32(0x302134);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edx + 0x2A));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00019A24u); RECOMP_ABI_CALL(0x000146D0u, sub_000146D0); /* call 0x000146D0 */

loc_00019A24: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019B01; /* je: equal / zero */

loc_00019A2F: ;
    ecx = MEM32(0x3026EC);
    _fa = (uint32_t)(MEM8(ecx + 0x1E)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x1E), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019A43; /* jne: not equal / not zero */

loc_00019A3B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000191B0(); return; /* tail jmp 0x000191B0 */

loc_00019A43: ;
    ecx = MEM32(0x302134);
    SET_LO8(eax, MEM8(ecx + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019A58; /* je: equal / zero */

loc_00019A50: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019A58; /* je: equal / zero */

loc_00019A54: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019A6C; /* jne: not equal / not zero */

loc_00019A58: ;
    _fa = (uint32_t)(MEM8(ecx + 0x33)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x33), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019AFC; /* jne: not equal / not zero */

loc_00019A62: ;
    _fa = (uint32_t)(MEM8(ecx + 0x2C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2C), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019AFC; /* jne: not equal / not zero */

loc_00019A6C: ;
    SET_LO8(ecx, MEM8(ecx + 0x2A));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019AFC; /* je: equal / zero */

loc_00019A78: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x10 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019AFC; /* je: equal / zero */

loc_00019A7D: ;
    edx = MEM32(0x302290);
    SET_LO16(eax, ZX8(MEM8(edx + 7)));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00019A8Eu); RECOMP_ABI_CALL(0x00016F00u, sub_00016F00); /* call 0x00016F00 */

loc_00019A8E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019AFC; /* jne: not equal / not zero */

loc_00019A95: ;
    ecx = MEM32(0x3026EC);
    SET_LO8(eax, MEM8(ecx + 0x1F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019AF4; /* jne: not equal / not zero */

loc_00019AA2: ;
    eax = ZX8(MEM8(ecx + 0x1E));
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00019AC5; /* je: equal / zero */

loc_00019AAB: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00019ABF; /* je: equal / zero */

loc_00019AB0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00019AB9; /* je: equal / zero */

loc_00019AB3: ;
    MEM8(esp) = 0;
    goto loc_00019AC9;

loc_00019AB9: ;
    MEM8(esp) = 0xF6;
    goto loc_00019AC9;

loc_00019ABF: ;
    MEM8(esp) = 0xFB;
    goto loc_00019AC9;

loc_00019AC5: ;
    MEM8(esp) = 0xFE;

loc_00019AC9: ;
    SET_LO8(eax, MEM8(ecx + 0x1D));
    _fb = (uint32_t)(0x26) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x26;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019ADB; /* je: equal / zero */

loc_00019AD3: ;
    edx = MEM32(esp);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    goto loc_00019AE1;

loc_00019ADB: ;
    eax = MEM32(esp);
    PUSH32(esp, eax);
    PUSH32(esp, 1);

loc_00019AE1: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00019AE7u); RECOMP_ABI_CALL(0x00017350u, sub_00017350); /* call 0x00017350 */

loc_00019AE7: ;
    ecx = MEM32(0x3026EC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ecx + 0x1F) = 1;

loc_00019AF4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000191B0(); return; /* tail jmp 0x000191B0 */

loc_00019AFC: ;
    PUSH32(esp, 0x00019B01u); RECOMP_ABI_CALL(0x00019520u, sub_00019520); /* call 0x00019520 */

loc_00019B01: ;
    edx = MEM32(0x302294);
    eax = MEM32(0x3026EC);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x26) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x26;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00019B19u); RECOMP_ABI_CALL(0x00017300u, sub_00017300); /* call 0x00017300 */

loc_00019B19: ;
    ecx = MEM32(0x3026EC);
    MEM8(ecx + 0x1C) = 0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00019B30
 * Original: 0x00019B30 - 0x00019BD8 (168 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00019B30: ;
    eax = ZX8(MEM8(0x301FB0));
    SET_LO8(eax, MEM8(eax + 0x3025C0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00019B45; /* jb: below (unsigned <) */

loc_00019B41: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xC (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00019B49; /* jbe: below or equal (unsigned <=) */

loc_00019B45: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019BA3; /* jne: not equal / not zero */

loc_00019B49: ;
    _fa = (uint32_t)(MEM8(0x30ECC0)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30ECC0), 3 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00019B9E; /* jb: below (unsigned <) */

loc_00019B52: ;
    SET_LO8(eax, MEM8(0x306320));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019B9E; /* je: equal / zero */

loc_00019B5B: ;
    ecx = MEM32(0x302134);
    _fa = (uint32_t)(MEM8(ecx + 0x33)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x33), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019B9E; /* jne: not equal / not zero */

loc_00019B67: ;
    edx = ZX8(MEM8(0x302110));
    _fa = (uint32_t)(MEM8(edx + 0x30212C)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x30212C), 5 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00019B9E; /* jb: below (unsigned <) */

loc_00019B77: ;
    PUSH32(esp, 0x00019B7Cu); RECOMP_ABI_CALL(0x000174C0u, sub_000174C0); /* call 0x000174C0 */

loc_00019B7C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019B9E; /* jne: not equal / not zero */

loc_00019B80: ;
    eax = MEM32(0x3026EC);
    PUSH32(esp, 0xFFFFFFF6u);
    PUSH32(esp, 0xFFFFFFF6u);
    PUSH32(esp, 0xA);
    _fb = (uint32_t)(0x26) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x26;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xA);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00019B96u); RECOMP_ABI_CALL(0x000173A0u, sub_000173A0); /* call 0x000173A0 */

loc_00019B96: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00019360(); return; /* tail jmp 0x00019360 */

loc_00019B9E: ;
    g_seh_ebp = ebp; sub_00019520(); return; /* tail jmp 0x00019520 */

loc_00019BA3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019BD3; /* jne: not equal / not zero */

loc_00019BA7: ;
    PUSH32(esp, 0x00019BACu); RECOMP_ABI_CALL(0x000174C0u, sub_000174C0); /* call 0x000174C0 */

loc_00019BAC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019BD3; /* jne: not equal / not zero */

loc_00019BB0: ;
    _fa = (uint32_t)(MEM8(0x30ECC0)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30ECC0), 3 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00019B9E; /* jb: below (unsigned <) */

loc_00019BB9: ;
    SET_LO8(eax, MEM8(0x306320));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019B9E; /* je: equal / zero */

loc_00019BC2: ;
    ecx = MEM32(0x302134);
    _fa = (uint32_t)(MEM8(ecx + 0x33)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x33), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019B9E; /* jne: not equal / not zero */

loc_00019BCE: ;
    g_seh_ebp = ebp; sub_00019360(); return; /* tail jmp 0x00019360 */

loc_00019BD3: ;
    g_seh_ebp = ebp; sub_000191B0(); return; /* tail jmp 0x000191B0 */

}

/**
 * sub_00019BE0
 * Original: 0x00019BE0 - 0x00019CBD (221 bytes, 66 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00019BE0: ;
    ecx = MEM32(0x302134);
    eax = ZX8(MEM8(ecx + 0x2D));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00019C76; /* ja: above (unsigned >) */

loc_00019BF3: ;
    eax = ZX8(MEM8(eax + 0x19CDC));
    { uint32_t _jt = MEM32(eax * 4 + 0x19CC0); /* switch: 7 entries, 7 targets */
    if (_jt == 0x00019C01u) goto loc_00019C01;
    if (_jt == 0x00019C43u) goto loc_00019C43;
    if (_jt == 0x00019C4Au) goto loc_00019C4A;
    if (_jt == 0x00019C51u) goto loc_00019C51;
    if (_jt == 0x00019C58u) goto loc_00019C58;
    if (_jt == 0x00019C71u) goto loc_00019C71;
    if (_jt == 0x00019C76u) goto loc_00019C76;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00019C01: ;
    ecx = ZX8(MEM8(ecx + 0x2A));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00019C0Bu); RECOMP_ABI_CALL(0x000146D0u, sub_000146D0); /* call 0x000146D0 */

loc_00019C0B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019C19; /* jne: not equal / not zero */

loc_00019C12: ;
    PUSH32(esp, 0x00019C17u); RECOMP_ABI_CALL(0x000197F0u, sub_000197F0); /* call 0x000197F0 */

loc_00019C17: ;
    goto loc_00019C76;

loc_00019C19: ;
    eax = MEM32(0x302134);
    _fa = (uint32_t)(MEM8(eax + 0x33)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x33), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019C2A; /* jne: not equal / not zero */

loc_00019C24: ;
    _fa = (uint32_t)(MEM8(eax + 0x2C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2C), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019C71; /* je: equal / zero */

loc_00019C2A: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(eax + 0x2A));
    PUSH32(esp, edx);
    PUSH32(esp, 0x00019C35u); RECOMP_ABI_CALL(0x000146F0u, sub_000146F0); /* call 0x000146F0 */

loc_00019C35: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019C71; /* je: equal / zero */

loc_00019C3C: ;
    PUSH32(esp, 0x00019C41u); RECOMP_ABI_CALL(0x00019520u, sub_00019520); /* call 0x00019520 */

loc_00019C41: ;
    goto loc_00019C76;

loc_00019C43: ;
    PUSH32(esp, 0x00019C48u); RECOMP_ABI_CALL(0x00019750u, sub_00019750); /* call 0x00019750 */

loc_00019C48: ;
    goto loc_00019C76;

loc_00019C4A: ;
    PUSH32(esp, 0x00019C4Fu); RECOMP_ABI_CALL(0x000191B0u, sub_000191B0); /* call 0x000191B0 */

loc_00019C4F: ;
    goto loc_00019C76;

loc_00019C51: ;
    PUSH32(esp, 0x00019C56u); RECOMP_ABI_CALL(0x00017780u, sub_00017780); /* call 0x00017780 */

loc_00019C56: ;
    goto loc_00019C76;

loc_00019C58: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0x2A));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00019C63u); RECOMP_ABI_CALL(0x000146B0u, sub_000146B0); /* call 0x000146B0 */

loc_00019C63: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019C71; /* jne: not equal / not zero */

loc_00019C6A: ;
    PUSH32(esp, 0x00019C6Fu); RECOMP_ABI_CALL(0x000197F0u, sub_000197F0); /* call 0x000197F0 */

loc_00019C6F: ;
    goto loc_00019C76;

loc_00019C71: ;
    PUSH32(esp, 0x00019C76u); RECOMP_ABI_CALL(0x00019B30u, sub_00019B30); /* call 0x00019B30 */

loc_00019C76: ;
    SET_LO8(eax, MEM8(0x301FB2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019CAC; /* je: equal / zero */

loc_00019C7F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019CAC; /* je: equal / zero */

loc_00019C83: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019CAC; /* je: equal / zero */

loc_00019C87: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019CBC; /* jne: not equal / not zero */

loc_00019C8B: ;
    ecx = ZX8(MEM8(0x301FB0));
    _fa = (uint32_t)(MEM8(ecx + 0x301F84)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x301F84), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019CBC; /* jne: not equal / not zero */

loc_00019C9B: ;
    edx = MEM32(0x301FA0);
    SET_LO8(eax, 0xA);
    MEM8(edx + 0x2C) = LO8(eax);
    MEM8(0x3025C2) = LO8(eax);
    esp += 4; return; /* ret */

loc_00019CAC: ;
    ecx = MEM32(0x301FA0);
    SET_LO8(eax, 0xA);
    MEM8(ecx + 0x2C) = LO8(eax);
    MEM8(0x3025C2) = LO8(eax);

loc_00019CBC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00019CF0
 * Original: 0x00019CF0 - 0x0001A647 (2391 bytes, 646 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019CF0(void)
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

loc_00019CF0: ;
    eax = ZX8(MEM8(0x301FB0));
    fp_push(MEMF(0x22C0D4)); /* fld float */
    ecx = MEM32(0x301FA0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    _fb = (uint32_t)(0x3025C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3025C8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3026EC) = eax;
    MEM8(0x302125) = LO8(ebx);
    MEM8(0x3025C2) = 0xFF;
    MEM8(ecx + 0x3A) = LO8(ebx);
    ecx = MEM32(0x301FA0);
    edx = MEM32(0x302134);
    fp_push(MEMF(ecx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00019D53; /* jnp: not parity */

loc_00019D3B: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */
    fp_push(MEMF(edx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00019D53; /* jnp: not parity */

loc_00019D4D: ;
    _fa = (uint32_t)(MEM16(edx + 0x20)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0x20), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019D64; /* jne: not equal / not zero */

loc_00019D53: ;
    _fa = (uint32_t)(MEM8(ecx + 0x2D)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2D), 0xC (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019D64; /* je: equal / zero */

loc_00019D59: ;
    edx = MEM32(0x3026EC);
    MEM8(edx + 6) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00019D64: ;
    edx = MEM32(0x3026EC);
    eax = MEM32(edx + 0x74);
    eax = MEM32(eax + 0xC);
    MEM32(0x302294) = eax;
    eax = ZX8(MEM8(0x301FB0));
    SET_LO8(eax, MEM8(eax + 0x3025C0));
    _fa = (uint32_t)(MEM8(ecx + 0x2D)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2D), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019D8A; /* je: equal / zero */

loc_00019D87: ;
    MEM8(edx + 0x24) = LO8(eax);

loc_00019D8A: ;
    ecx = ZX8(MEM8(0x301FB0));
    eax = MEM32(0x301FA0);
    SET_LO8(edx, MEM8(eax + 0x2A));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x302258)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ecx + 0x302258) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019E14; /* je: equal / zero */

loc_00019DA1: ;
    SET_LO8(eax, MEM8(eax + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019DDE; /* je: equal / zero */

loc_00019DA8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019DDE; /* je: equal / zero */

loc_00019DAC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019E14; /* je: equal / zero */

loc_00019DB0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00019DB8; /* jb: below (unsigned <) */

loc_00019DB4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xC (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00019E14; /* jbe: below or equal (unsigned <=) */

loc_00019DB8: ;
    eax = MEM32(0x3026EC);
    MEM8(eax + 0x1C) = LO8(ebx);
    ecx = MEM32(0x302294);
    edx = MEM32(0x3026EC);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x26) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x26;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00019DD9u); RECOMP_ABI_CALL(0x00017300u, sub_00017300); /* call 0x00017300 */

loc_00019DD9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00019E14;

loc_00019DDE: ;
    eax = MEM32(0x3026EC);
    _fa = (uint32_t)(MEM8(eax + 0x1B)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1B), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019E11; /* je: equal / zero */

loc_00019DE9: ;
    MEM8(eax + 0x1C) = 1;
    eax = MEM32(0x302134);
    SET_LO8(ecx, MEM8(eax + 0x46));
    edx = MEM32(0x3026EC);
    MEM8(edx + 0x1D) = LO8(ecx);
    eax = MEM32(0x3026EC);
    MEM8(eax + 0x1E) = LO8(ebx);
    ecx = MEM32(0x3026EC);
    MEM8(ecx + 0x1F) = LO8(ebx);
    goto loc_00019E14;

loc_00019E11: ;
    MEM8(eax + 0x1C) = LO8(ebx);

loc_00019E14: ;
    edx = MEM32(0x302134);
    SET_LO8(eax, MEM8(edx + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019E25; /* je: equal / zero */

loc_00019E21: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019E41; /* jne: not equal / not zero */

loc_00019E25: ;
    eax = ZX8(MEM8(0x302110));
    _fa = (uint32_t)(MEM16(eax * 2 + 0x30226C)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 2 + 0x30226C), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019E41; /* jne: not equal / not zero */

loc_00019E37: ;
    ecx = MEM32(0x3026EC);
    MEM8(ecx + 0x1E) = 1;

loc_00019E41: ;
    edx = ZX8(MEM8(0x301FB0));
    eax = MEM32(0x301FA0);
    SET_LO8(ecx, MEM8(eax + 0x2D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(edx + 0x3025C0)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(edx + 0x3025C0) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A132; /* je: equal / zero */

loc_00019E5C: ;
    edx = MEM32(0x3026EC);
    MEM8(edx + 0x14) = LO8(ebx);
    eax = MEM32(0x3026EC);
    MEM8(eax + 0x19) = LO8(ebx);
    ecx = MEM32(0x301FA0);
    eax = ZX8(MEM8(ecx + 0x2D));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0001A132; /* ja: above (unsigned >) */

loc_00019E80: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1A648); /* switch: 22 entries, 16 targets */
    if (_jt == 0x00019E87u) goto loc_00019E87;
    if (_jt == 0x00019EBAu) goto loc_00019EBA;
    if (_jt == 0x00019F8Au) goto loc_00019F8A;
    if (_jt == 0x00019FD4u) goto loc_00019FD4;
    if (_jt == 0x0001A034u) goto loc_0001A034;
    if (_jt == 0x0001A081u) goto loc_0001A081;
    if (_jt == 0x0001A0B0u) goto loc_0001A0B0;
    if (_jt == 0x0001A0D6u) goto loc_0001A0D6;
    if (_jt == 0x0001A0F3u) goto loc_0001A0F3;
    if (_jt == 0x0001A132u) goto loc_0001A132;
    if (_jt == 0x0001A160u) goto loc_0001A160;
    if (_jt == 0x0001A16Bu) goto loc_0001A16B;
    if (_jt == 0x0001A177u) goto loc_0001A177;
    if (_jt == 0x0001A194u) goto loc_0001A194;
    if (_jt == 0x0001A1B1u) goto loc_0001A1B1;
    if (_jt == 0x0001A1C2u) goto loc_0001A1C2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00019E87: ;
    ecx = MEM32(0x3026EC);
    MEM8(ecx + 0x16) = LO8(ebx);
    edx = MEM32(0x301FA0);
    MEM8(edx + 0x2C) = 0xFF;
    eax = ZX8(MEM8(0x301FB0));
    SET_LO8(eax, MEM8(eax + 0x3025C0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00019EB3; /* jb: below (unsigned <) */

loc_00019EAB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xC (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0001A046; /* jbe: below or equal (unsigned <=) */

loc_00019EB3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xF (8-bit) */
    goto loc_0001A044;

loc_00019EBA: ;
    eax = MEM32(0x302134);
    _fa = (uint32_t)(MEM8(eax + 0x46)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x46), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019EDF; /* je: equal / zero */

loc_00019EC5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00019ECBu); RECOMP_ABI_CALL(0x000171A0u, sub_000171A0); /* call 0x000171A0 */

loc_00019ECB: ;
    ecx = MEM32(0x3026EC);
    PUSH32(esp, 0xFFFFFFFCu);
    PUSH32(esp, 0xFFFFFFFCu);
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, 0xA);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    goto loc_00019EF8;

loc_00019EDF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00019EE6u); RECOMP_ABI_CALL(0x000171A0u, sub_000171A0); /* call 0x000171A0 */

loc_00019EE6: ;
    edx = MEM32(0x3026EC);
    PUSH32(esp, 0xFFFFFFFCu);
    PUSH32(esp, 0xFFFFFFFCu);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0xFFFFFFFEu);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x2C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);

loc_00019EF8: ;
    PUSH32(esp, 0x00019EFDu); RECOMP_ABI_CALL(0x000173A0u, sub_000173A0); /* call 0x000173A0 */

loc_00019EFD: ;
    eax = ZX8(MEM8(0x302110));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(eax + 0x302258));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00019F15u); RECOMP_ABI_CALL(0x000146D0u, sub_000146D0); /* call 0x000146D0 */

loc_00019F15: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019F50; /* jne: not equal / not zero */

loc_00019F1C: ;
    edx = MEM32(0x302134);
    _fa = (uint32_t)(MEM8(edx + 0x46)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x46), 3 (8-bit) */
    ecx = MEM32(0x3026EC);
    SET_LO16(eax, ZX8(MEM8(ecx + 0x25)));
    if (CMP_EQ(_fa, _fb)) goto loc_00019F43; /* je: equal / zero */

loc_00019F33: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFF (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00019F4D; /* jle: less or equal (signed <=) */

loc_00019F3C: ;
    eax = 0xFF;
    goto loc_00019F4D;

loc_00019F43: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebx) (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00019F4D; /* jge: greater or equal (signed >=) */

loc_00019F4B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00019F4D: ;
    MEM8(ecx + 0x25) = LO8(eax);

loc_00019F50: ;
    eax = ZX8(MEM8(0x301FB0));
    SET_LO8(eax, MEM8(eax + 0x3025C0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019F69; /* je: equal / zero */

loc_00019F61: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019F69; /* je: equal / zero */

loc_00019F65: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019F73; /* jne: not equal / not zero */

loc_00019F69: ;
    ecx = MEM32(0x3026EC);
    MEM8(ecx + 0x18) = 1;

loc_00019F73: ;
    edx = MEM32(0x3026EC);
    MEM8(edx + 6) = LO8(ebx);
    eax = MEM32(0x301FA0);
    MEM8(eax + 0x2C) = 0xFF;
    goto loc_0001A132;

loc_00019F8A: ;
    eax = ZX8(MEM8(0x301FB0));
    _fa = (uint32_t)(MEM8(eax + 0x3025C0)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x3025C0), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019FC5; /* jne: not equal / not zero */

loc_00019F9A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(eax + 0x302258));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00019FA8u); RECOMP_ABI_CALL(0x000146F0u, sub_000146F0); /* call 0x000146F0 */

loc_00019FA8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019FC5; /* jne: not equal / not zero */

loc_00019FAF: ;
    edx = MEM32(0x3026EC);
    PUSH32(esp, 0xFFFFFFF6u);
    _fb = (uint32_t)(0x26) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x26;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00019FC2u); RECOMP_ABI_CALL(0x00017350u, sub_00017350); /* call 0x00017350 */

loc_00019FC2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00019FC5: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x00019FCCu); RECOMP_ABI_CALL(0x000171A0u, sub_000171A0); /* call 0x000171A0 */

loc_00019FCC: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0xFFFFFFFCu);
    goto loc_0001A009;

loc_00019FD4: ;
    eax = ZX8(MEM8(0x302110));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(eax + 0x302258));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00019FE9u); RECOMP_ABI_CALL(0x000146F0u, sub_000146F0); /* call 0x000146F0 */

loc_00019FE9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019FFC; /* jne: not equal / not zero */

loc_00019FF0: ;
    edx = MEM32(0x3026EC);
    MEM8(edx + 0x1E) = 3;
    goto loc_0001A01C;

loc_00019FFC: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x0001A003u); RECOMP_ABI_CALL(0x000171A0u, sub_000171A0); /* call 0x000171A0 */

loc_0001A003: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0xFFFFFFFCu);
    PUSH32(esp, 0xFFFFFFFEu);

loc_0001A009: ;
    eax = MEM32(0x3026EC);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFCu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001A019u); RECOMP_ABI_CALL(0x000173A0u, sub_000173A0); /* call 0x000173A0 */

loc_0001A019: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001A01C: ;
    ecx = MEM32(0x3026EC);
    MEM8(ecx + 6) = LO8(ebx);
    edx = MEM32(0x301FA0);
    MEM8(edx + 0x2C) = 0xFF;
    goto loc_0001A132;

loc_0001A034: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0x2A));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001A03Fu); RECOMP_ABI_CALL(0x000146D0u, sub_000146D0); /* call 0x000146D0 */

loc_0001A03F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */

loc_0001A044: ;
    if (CMP_NE(_fa, _fb)) goto loc_0001A073; /* jne: not equal / not zero */

loc_0001A046: ;
    ecx = MEM32(0x3026EC);
    _fa = (uint32_t)(MEM8(ecx + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x18), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A073; /* jne: not equal / not zero */

loc_0001A052: ;
    edx = MEM32(0x302290);
    SET_LO16(eax, ZX8(MEM8(edx + 8)));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001A063u); RECOMP_ABI_CALL(0x00016F00u, sub_00016F00); /* call 0x00016F00 */

loc_0001A063: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A073; /* jne: not equal / not zero */

loc_0001A06A: ;
    ecx = MEM32(0x3026EC);
    MEM8(ecx + 0x17) = LO8(eax);

loc_0001A073: ;
    edx = MEM32(0x3026EC);
    MEM8(edx + 0x18) = LO8(ebx);
    goto loc_0001A132;

loc_0001A081: ;
    eax = ZX8(MEM8(0x302110));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(eax + 0x302258));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001A096u); RECOMP_ABI_CALL(0x000146D0u, sub_000146D0); /* call 0x000146D0 */

loc_0001A096: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A132; /* jne: not equal / not zero */

loc_0001A0A1: ;
    edx = MEM32(0x3026EC);
    MEM8(edx + 0x25) = 0x7F;
    goto loc_0001A132;

loc_0001A0B0: ;
    eax = ZX8(MEM8(0x302110));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(eax + 0x302258));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001A0C5u); RECOMP_ABI_CALL(0x000146D0u, sub_000146D0); /* call 0x000146D0 */

loc_0001A0C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A0D6; /* jne: not equal / not zero */

loc_0001A0CC: ;
    edx = MEM32(0x3026EC);
    MEM8(edx + 0x25) = 0x7F;

loc_0001A0D6: ;
    eax = MEM32(0x3026EC);
    MEM8(eax + 6) = LO8(ebx);
    ecx = MEM32(0x3026EC);
    MEM8(ecx + 0x16) = LO8(ebx);
    edx = MEM32(0x301FA0);
    MEM8(edx + 0x2C) = 0xFF;
    goto loc_0001A132;

loc_0001A0F3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0x2A));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001A0FEu); RECOMP_ABI_CALL(0x000146B0u, sub_000146B0); /* call 0x000146B0 */

loc_0001A0FE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A132; /* jne: not equal / not zero */

loc_0001A105: ;
    ecx = MEM32(0x3026EC);
    _fa = (uint32_t)(MEM8(ecx + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x18), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A132; /* jne: not equal / not zero */

loc_0001A111: ;
    edx = MEM32(0x302290);
    SET_LO16(eax, ZX8(MEM8(edx + 8)));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001A122u); RECOMP_ABI_CALL(0x00016F00u, sub_00016F00); /* call 0x00016F00 */

loc_0001A122: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A132; /* jne: not equal / not zero */

loc_0001A129: ;
    ecx = MEM32(0x3026EC);
    MEM8(ecx + 0x17) = LO8(eax);

loc_0001A132: ;
    ecx = MEM32(0x302134);
    edx = ZX8(MEM8(0x302110));
    SET_LO8(eax, MEM8(ecx + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edx + 0x3025C0)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edx + 0x3025C0) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A1C2; /* je: equal / zero */

loc_0001A14A: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0001A1C2; /* ja: above (unsigned >) */

loc_0001A152: ;
    eax = ZX8(MEM8(eax + 0x1A6A0));
    { uint32_t _jt = MEM32(eax * 4 + 0x1A688); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0001A160u) goto loc_0001A160;
    if (_jt == 0x0001A16Bu) goto loc_0001A16B;
    if (_jt == 0x0001A177u) goto loc_0001A177;
    if (_jt == 0x0001A194u) goto loc_0001A194;
    if (_jt == 0x0001A1B1u) goto loc_0001A1B1;
    if (_jt == 0x0001A1C2u) goto loc_0001A1C2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0001A160: ;
    ecx = MEM32(0x3026EC);
    MEM8(ecx + 0x15) = LO8(ebx);
    goto loc_0001A1C2;

loc_0001A16B: ;
    edx = MEM32(0x3026EC);
    MEM8(edx + 0x1E) = 2;
    goto loc_0001A1C2;

loc_0001A177: ;
    eax = MEM32(0x3026EC);
    ecx = MEM32(eax + 0x74);
    edx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001A18Fu); RECOMP_ABI_CALL(0x00017300u, sub_00017300); /* call 0x00017300 */

loc_0001A18F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0001A1C2;

loc_0001A194: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0x2A));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001A19Fu); RECOMP_ABI_CALL(0x000146B0u, sub_000146B0); /* call 0x000146B0 */

loc_0001A19F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A1C2; /* jne: not equal / not zero */

loc_0001A1A6: ;
    ecx = MEM32(0x3026EC);
    MEM8(ecx + 6) = LO8(ebx);
    goto loc_0001A1C2;

loc_0001A1B1: ;
    edx = MEM32(0x3026EC);
    MEM8(edx + 0x1C) = LO8(ebx);
    eax = MEM32(0x3026EC);
    MEM8(eax + 6) = LO8(ebx);

loc_0001A1C2: ;
    PUSH32(esp, edi);
    edi = MEM32(0x3026EC);
    _fa = (uint32_t)(MEM8(edi + 6)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 6), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A1D9; /* jne: not equal / not zero */

loc_0001A1CF: ;
    PUSH32(esp, 0x0001A1D4u); RECOMP_ABI_CALL(0x00017A00u, sub_00017A00); /* call 0x00017A00 */

loc_0001A1D4: ;
    goto loc_0001A60E;

loc_0001A1D9: ;
    edx = MEM32(0x301FA0);
    SET_LO8(eax, MEM8(edx + 0x2D));
    ecx = ZX8(LO8(eax));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0001A60E; /* ja: above (unsigned >) */

loc_0001A1EE: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x1A6B0); /* switch: 16 entries, 12 targets */
    if (_jt == 0x0001A1F5u) goto loc_0001A1F5;
    if (_jt == 0x0001A500u) goto loc_0001A500;
    if (_jt == 0x0001A519u) goto loc_0001A519;
    if (_jt == 0x0001A532u) goto loc_0001A532;
    if (_jt == 0x0001A53Cu) goto loc_0001A53C;
    if (_jt == 0x0001A546u) goto loc_0001A546;
    if (_jt == 0x0001A59Eu) goto loc_0001A59E;
    if (_jt == 0x0001A5AEu) goto loc_0001A5AE;
    if (_jt == 0x0001A5B5u) goto loc_0001A5B5;
    if (_jt == 0x0001A5BCu) goto loc_0001A5BC;
    if (_jt == 0x0001A5F0u) goto loc_0001A5F0;
    if (_jt == 0x0001A60Eu) goto loc_0001A60E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0001A1F5: ;
    _fa = (uint32_t)(MEM8(0x30AE18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AE18), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A272; /* jne: not equal / not zero */

loc_0001A1FE: ;
    _fa = (uint32_t)(MEM8(0x3024B4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3024B4), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A272; /* je: equal / zero */

loc_0001A207: ;
    SET_LO16(ecx, ZX8(MEM8(0x30ECC0)));
    edx = 0xF;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001A21Cu); RECOMP_ABI_CALL(0x00014220u, sub_00014220); /* call 0x00014220 */

loc_0001A21C: ;
    ecx = MEM32(0x302290);
    SET_LO16(edx, ZX8(MEM8(ecx)));
    ecx = MEM32(0x3026EC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx) = LO16(eax);
    eax = MEM32(0x3026EC);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A244; /* je: equal / zero */

loc_0001A23E: ;
    MEM8(eax + 0x19) = 1;
    goto loc_0001A28E;

loc_0001A244: ;
    MEM8(eax + 0x19) = LO8(ebx);
    edx = MEM32(0x302290);
    SET_LO16(eax, ZX8(MEM8(edx + 1)));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001A258u); RECOMP_ABI_CALL(0x00014220u, sub_00014220); /* call 0x00014220 */

loc_0001A258: ;
    ecx = MEM32(0x302290);
    SET_LO16(edx, ZX8(MEM8(ecx)));
    ecx = MEM32(0x3026EC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx) = LO16(eax);
    goto loc_0001A28E;

loc_0001A272: ;
    edx = ZX8(MEM8(0x301FB0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edx + 0x3025C0)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edx + 0x3025C0) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A28E; /* je: equal / zero */

loc_0001A281: ;
    _fa = (uint32_t)(MEM8(0x301FB2)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x301FB2), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A28E; /* jne: not equal / not zero */

loc_0001A289: ;
    PUSH32(esp, 0x0001A28Eu); RECOMP_ABI_CALL(0x00018B90u, sub_00018B90); /* call 0x00018B90 */

loc_0001A28E: ;
    ecx = ZX8(MEM8(0x301FB0));
    _fa = (uint32_t)(MEM8(ecx + 0x301F84)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x301F84), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A37C; /* jne: not equal / not zero */

loc_0001A2A1: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001A2BD; /* jp: parity */

loc_0001A2B4: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A2EF; /* je: equal / zero */

loc_0001A2BD: ;
    eax = MEM32(0x301FA0);
    edx = MEM32(eax + 0x14);
    eax = MEM32(0x30F910);
    ecx = ecx << 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xAAA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xAAA;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1554) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1554 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0001A2EF; /* jle: less or equal (signed <=) */

loc_0001A2E5: ;
    PUSH32(esp, 0x0001A2EAu); RECOMP_ABI_CALL(0x00016FA0u, sub_00016FA0); /* call 0x00016FA0 */

loc_0001A2EA: ;
    goto loc_0001A381;

loc_0001A2EF: ;
    ecx = MEM32(0x3026EC);
    _fa = (uint32_t)(MEM8(ecx + 0x17)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x17), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A302; /* jne: not equal / not zero */

loc_0001A2FB: ;
    PUSH32(esp, 0x0001A300u); RECOMP_ABI_CALL(0x00019870u, sub_00019870); /* call 0x00019870 */

loc_0001A300: ;
    goto loc_0001A381;

loc_0001A302: ;
    SET_LO16(eax, MEM16(ecx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebx) (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0001A32C; /* jg: greater (signed >) */

loc_0001A30A: ;
    _fa = (uint32_t)(MEM8(ecx + 0x1C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x1C), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A317; /* jne: not equal / not zero */

loc_0001A310: ;
    PUSH32(esp, 0x0001A315u); RECOMP_ABI_CALL(0x000199B0u, sub_000199B0); /* call 0x000199B0 */

loc_0001A315: ;
    goto loc_0001A31C;

loc_0001A317: ;
    PUSH32(esp, 0x0001A31Cu); RECOMP_ABI_CALL(0x00019BE0u, sub_00019BE0); /* call 0x00019BE0 */

loc_0001A31C: ;
    _fa = (uint32_t)(MEM8(0x3025C2)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3025C2), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A381; /* jne: not equal / not zero */

loc_0001A325: ;
    PUSH32(esp, 0x0001A32Au); RECOMP_ABI_CALL(0x00018A50u, sub_00018A50); /* call 0x00018A50 */

loc_0001A32A: ;
    goto loc_0001A381;

loc_0001A32C: ;
    _fa = (uint32_t)(MEM8(ecx + 0x19)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x19), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A36D; /* jne: not equal / not zero */

loc_0001A332: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(ecx) = LO16(eax);
    eax = MEM32(0x3026EC);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebx) (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0001A381; /* jg: greater (signed >) */

loc_0001A340: ;
    MEM8(eax + 0x19) = LO8(ebx);
    eax = MEM32(0x302290);
    SET_LO16(ecx, ZX8(MEM8(eax + 1)));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001A353u); RECOMP_ABI_CALL(0x00014220u, sub_00014220); /* call 0x00014220 */

loc_0001A353: ;
    edx = MEM32(0x302290);
    SET_LO16(ecx, ZX8(MEM8(edx)));
    edx = MEM32(0x3026EC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edx) = LO16(eax);
    goto loc_0001A381;

loc_0001A36D: ;
    PUSH32(esp, 0x0001A372u); RECOMP_ABI_CALL(0x00018A50u, sub_00018A50); /* call 0x00018A50 */

loc_0001A372: ;
    eax = MEM32(0x3026EC);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0001A381;

loc_0001A37C: ;
    PUSH32(esp, 0x0001A381u); RECOMP_ABI_CALL(0x000190B0u, sub_000190B0); /* call 0x000190B0 */

loc_0001A381: ;
    eax = MEM32(0x3026EC);
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 6), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A390; /* jne: not equal / not zero */

loc_0001A38B: ;
    PUSH32(esp, 0x0001A390u); RECOMP_ABI_CALL(0x00017010u, sub_00017010); /* call 0x00017010 */

loc_0001A390: ;
    SET_LO8(ecx, MEM8(0x301FB2));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(0x3026C8)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(0x3026C8) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A3A8; /* je: equal / zero */

loc_0001A39E: ;
    PUSH32(esp, 0x0001A3A3u); RECOMP_ABI_CALL(0x00017620u, sub_00017620); /* call 0x00017620 */

loc_0001A3A3: ;
    goto loc_0001A432;

loc_0001A3A8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A3C8; /* jne: not equal / not zero */

loc_0001A3AD: ;
    ecx = ZX8(MEM8(0x301FB0));
    _fa = (uint32_t)(MEM8(ecx + 0x301F84)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x301F84), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A42A; /* jne: not equal / not zero */

loc_0001A3BC: ;
    edx = MEM32(0x301FA0);
    MEM8(edx + 0x2C) = 0x12;
    goto loc_0001A42A;

loc_0001A3C8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A3E8; /* jne: not equal / not zero */

loc_0001A3CD: ;
    eax = ZX8(MEM8(0x301FB0));
    _fa = (uint32_t)(MEM8(eax + 0x301F84)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x301F84), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A42A; /* jne: not equal / not zero */

loc_0001A3DC: ;
    ecx = MEM32(0x301FA0);
    MEM8(ecx + 0x2C) = 0x13;
    goto loc_0001A42A;

loc_0001A3E8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A3FC; /* je: equal / zero */

loc_0001A3ED: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A3FC; /* je: equal / zero */

loc_0001A3F2: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A3FC; /* je: equal / zero */

loc_0001A3F7: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A42A; /* jne: not equal / not zero */

loc_0001A3FC: ;
    edx = MEM32(0x301FA0);
    SET_LO8(eax, MEM8(edx + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A427; /* je: equal / zero */

loc_0001A409: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A427; /* je: equal / zero */

loc_0001A40D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A42A; /* jne: not equal / not zero */

loc_0001A412: ;
    _fa = (uint32_t)(MEM8(edx + 0x2A)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x2A), 0xC (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A42A; /* jne: not equal / not zero */

loc_0001A418: ;
    MEM8(edx + 0x2A) = LO8(ecx);
    edx = MEM32(0x301FA0);
    MEM8(edx + 0x2C) = 0xD;
    goto loc_0001A42A;

loc_0001A427: ;
    MEM8(edx + 0x2C) = LO8(ebx);

loc_0001A42A: ;
    eax = MEM32(0x3026EC);
    MEM8(eax + 2) = LO8(ebx);

loc_0001A432: ;
    SET_LO8(eax, MEM8(0x301FB2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A443; /* je: equal / zero */

loc_0001A43B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A443; /* je: equal / zero */

loc_0001A43F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A44D; /* jne: not equal / not zero */

loc_0001A443: ;
    PUSH32(esp, 0x0001A448u); RECOMP_ABI_CALL(0x000141C0u, sub_000141C0); /* call 0x000141C0 */

loc_0001A448: ;
    SET_LO8(eax, MEM8(0x301FB2));

loc_0001A44D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A455; /* je: equal / zero */

loc_0001A451: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A468; /* jne: not equal / not zero */

loc_0001A455: ;
    _fa = (uint32_t)(MEM8(0x3024A9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3024A9), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A468; /* jne: not equal / not zero */

loc_0001A45E: ;
    PUSH32(esp, 0x0001A463u); RECOMP_ABI_CALL(0x000141C0u, sub_000141C0); /* call 0x000141C0 */

loc_0001A463: ;
    SET_LO8(eax, MEM8(0x301FB2));

loc_0001A468: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A47B; /* jne: not equal / not zero */

loc_0001A46C: ;
    ecx = MEM32(0x301FA0);
    MEM8(ecx + 0x2C) = 0xA;
    SET_LO8(eax, MEM8(0x301FB2));

loc_0001A47B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A487; /* je: equal / zero */

loc_0001A47F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A60E; /* jne: not equal / not zero */

loc_0001A487: ;
    _fa = (uint32_t)(MEM8(0x3024A9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3024A9), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A60E; /* jne: not equal / not zero */

loc_0001A494: ;
    ecx = MEM32(0x302134);
    SET_LO8(eax, MEM8(ecx + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A4A9; /* je: equal / zero */

loc_0001A4A1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A60E; /* jne: not equal / not zero */

loc_0001A4A9: ;
    _fa = (uint32_t)(MEM8(ecx + 0x33)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x33), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A60E; /* jne: not equal / not zero */

loc_0001A4B2: ;
    edx = ZX8(MEM8(0x302110));
    _fa = (uint32_t)(MEM8(edx + 0x30212C)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x30212C), 8 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0001A60E; /* ja: above (unsigned >) */

loc_0001A4C6: ;
    eax = MEM32(0x301FA0);
    MEM8(eax + 0x37) = LO8(ebx);
    ecx = MEM32(0x302134);
    SET_LO8(eax, MEM8(ecx + 0x46));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0001A4F2; /* jbe: below or equal (unsigned <=) */

loc_0001A4DB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A60E; /* jne: not equal / not zero */

loc_0001A4E3: ;
    edx = MEM32(0x301FA0);
    MEM8(edx + 0x2C) = 0x42;
    goto loc_0001A60E;

loc_0001A4F2: ;
    eax = MEM32(0x301FA0);
    MEM8(eax + 0x2C) = 0x40;
    goto loc_0001A60E;

loc_0001A500: ;
    _fa = (uint32_t)(MEM8(edi + 0x24)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x24), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A60E; /* je: equal / zero */

loc_0001A50A: ;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x0001A511u); RECOMP_ABI_CALL(0x00017840u, sub_00017840); /* call 0x00017840 */

loc_0001A511: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0001A60E;

loc_0001A519: ;
    _fa = (uint32_t)(MEM8(edi + 0x24)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x24), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A60E; /* je: equal / zero */

loc_0001A523: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x0001A52Au); RECOMP_ABI_CALL(0x00017840u, sub_00017840); /* call 0x00017840 */

loc_0001A52A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0001A60E;

loc_0001A532: ;
    PUSH32(esp, 0x0001A537u); RECOMP_ABI_CALL(0x000141C0u, sub_000141C0); /* call 0x000141C0 */

loc_0001A537: ;
    goto loc_0001A60E;

loc_0001A53C: ;
    PUSH32(esp, 0x0001A541u); RECOMP_ABI_CALL(0x00018480u, sub_00018480); /* call 0x00018480 */

loc_0001A541: ;
    goto loc_0001A60E;

loc_0001A546: ;
    _fa = (uint32_t)(MEM8(edi + 0x24)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x24), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A597; /* je: equal / zero */

loc_0001A54C: ;
    _fa = (uint32_t)(MEM8(edx + 0x2A)) & 0xFFu; _fb = (uint32_t)(0x4E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x2A), 0x4E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A58D; /* jne: not equal / not zero */

loc_0001A552: ;
    ecx = ZX8(MEM8(0x301FB0));
    _fa = (uint32_t)(MEM16(ecx * 2 + 0x30226C)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 2 + 0x30226C), 1 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0001A597; /* ja: above (unsigned >) */

loc_0001A564: ;
    edx = MEM32(0x302290);
    SET_LO16(eax, ZX8(MEM8(edx + 0xF)));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001A575u); RECOMP_ABI_CALL(0x00016F00u, sub_00016F00); /* call 0x00016F00 */

loc_0001A575: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A597; /* jne: not equal / not zero */

loc_0001A57C: ;
    MEM8(0x3025C2) = 0x4F;
    PUSH32(esp, 0x0001A588u); RECOMP_ABI_CALL(0x000184E0u, sub_000184E0); /* call 0x000184E0 */

loc_0001A588: ;
    goto loc_0001A60E;

loc_0001A58D: ;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x0001A594u); RECOMP_ABI_CALL(0x00017920u, sub_00017920); /* call 0x00017920 */

loc_0001A594: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001A597: ;
    PUSH32(esp, 0x0001A59Cu); RECOMP_ABI_CALL(0x000184E0u, sub_000184E0); /* call 0x000184E0 */

loc_0001A59C: ;
    goto loc_0001A60E;

loc_0001A59E: ;
    _fa = (uint32_t)(MEM8(edi + 0x24)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x24), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A5AE; /* je: equal / zero */

loc_0001A5A4: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x0001A5ABu); RECOMP_ABI_CALL(0x00017920u, sub_00017920); /* call 0x00017920 */

loc_0001A5AB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001A5AE: ;
    PUSH32(esp, 0x0001A5B3u); RECOMP_ABI_CALL(0x000184E0u, sub_000184E0); /* call 0x000184E0 */

loc_0001A5B3: ;
    goto loc_0001A60E;

loc_0001A5B5: ;
    PUSH32(esp, 0x0001A5BAu); RECOMP_ABI_CALL(0x00018E00u, sub_00018E00); /* call 0x00018E00 */

loc_0001A5BA: ;
    goto loc_0001A60E;

loc_0001A5BC: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edx + 0x2A));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001A5C7u); RECOMP_ABI_CALL(0x000146B0u, sub_000146B0); /* call 0x000146B0 */

loc_0001A5C7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A5D5; /* jne: not equal / not zero */

loc_0001A5CE: ;
    PUSH32(esp, 0x0001A5D3u); RECOMP_ABI_CALL(0x00018580u, sub_00018580); /* call 0x00018580 */

loc_0001A5D3: ;
    goto loc_0001A60E;

loc_0001A5D5: ;
    ecx = MEM32(0x301FA0);
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 1), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A60E; /* jne: not equal / not zero */

loc_0001A5E1: ;
    _fa = (uint32_t)(MEM8(ecx + 0x2A)) & 0xFFu; _fb = (uint32_t)(0x9D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2A), 0x9D (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A60E; /* jne: not equal / not zero */

loc_0001A5E7: ;
    SET_LO8(eax, 0x9C);
    MEM8(0x3025C2) = LO8(eax);
    goto loc_0001A61D;

loc_0001A5F0: ;
    ecx = ZX8(MEM8(0x301FB0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x3025C0)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x3025C0) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A60E; /* je: equal / zero */

loc_0001A5FF: ;
    edx = MEM32(0x302134);
    SET_LO8(eax, MEM8(edx + 0x2A));
    MEM8(ecx + 0x301F80) = LO8(eax);

loc_0001A60E: ;
    SET_LO8(eax, MEM8(0x3025C2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A644; /* je: equal / zero */

loc_0001A617: ;
    ecx = MEM32(0x301FA0);

loc_0001A61D: ;
    MEM8(ecx + 0x2C) = LO8(eax);
    SET_LO8(eax, MEM8(0x3025C2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A636; /* jne: not equal / not zero */

loc_0001A629: ;
    ecx = MEM32(0x301FA0);
    POP32(esp, edi);
    MEM8(ecx + 0x3A) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001A636: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xC (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A644; /* jne: not equal / not zero */

loc_0001A63A: ;
    edx = MEM32(0x301FA0);
    MEM8(edx + 0x3A) = 2;

loc_0001A644: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001A6F0
 * Original: 0x0001A6F0 - 0x0001A73C (76 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A6F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001A6F0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    MEM32(esp + 0x10) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(0x30F914));
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001A712u); RECOMP_ABI_CALL(0x00030CB0u, sub_00030CB0); /* call 0x00030CB0 */

loc_0001A712: ;
    edx = MEM32(0x30ECA0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x0001A72Au); RECOMP_ABI_CALL(0x00027AD0u, sub_00027AD0); /* call 0x00027AD0 */

loc_0001A72A: ;
    PUSH32(esp, 0x0001A72Fu); RECOMP_ABI_CALL(0x0005C070u, sub_0005C070); /* call 0x0005C070 */

loc_0001A72F: ;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, 0x0001A738u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0001A738: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0001A740
 * Original: 0x0001A740 - 0x0001A741 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A740(void)
{

loc_0001A740: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0001A750
 * Original: 0x0001A750 - 0x0001A751 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A750(void)
{

loc_0001A750: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0001A760
 * Original: 0x0001A760 - 0x0001A761 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A760(void)
{

loc_0001A760: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0001A770
 * Original: 0x0001A770 - 0x0001A771 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A770(void)
{

loc_0001A770: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0001A780
 * Original: 0x0001A780 - 0x0001A781 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A780(void)
{

loc_0001A780: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0001A790
 * Original: 0x0001A790 - 0x0001A7DE (78 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A790(void)
{
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

loc_0001A790: ;
    eax = ZX8(MEM8(0x30F914));
    PUSH32(esp, esi);
    esi = eax + eax * 2;
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_push(MEMF(esi + 0x2C0004)); /* fld float */
    PUSH32(esp, 0x0001A7A9u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0001A7A9: ;
    ecx = MEM32(esi + 0x2C000C);
    edx = MEM32(esi + 0x2C0010);
    MEM32(0x3035B8) = eax;
    eax = MEM32(esi + 0x2C0008);
    MEM32(0x30271C) = eax;
    eax = MEM32(esi + 0x2C0014);
    MEM32(0x303680) = ecx;
    MEM32(0x3035B4) = edx;
    MEM32(0x302734) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001A7E0
 * Original: 0x0001A7E0 - 0x0001A7E1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A7E0(void)
{

loc_0001A7E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0001A7F0
 * Original: 0x0001A7F0 - 0x0001A7F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A7F0(void)
{

loc_0001A7F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0001A800
 * Original: 0x0001A800 - 0x0001A82E (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001A800: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001A810u); RECOMP_ABI_CALL(0x0006A800u, sub_0006A800); /* call 0x0006A800 */

loc_0001A810: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001A818u); RECOMP_ABI_CALL(0x0006C050u, sub_0006C050); /* call 0x0006C050 */

loc_0001A818: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001A821u); RECOMP_ABI_CALL(0x0006C0B0u, sub_0006C0B0); /* call 0x0006C0B0 */

loc_0001A821: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001A82Au); RECOMP_ABI_CALL(0x0006C110u, sub_0006C110); /* call 0x0006C110 */

loc_0001A82A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0001A830
 * Original: 0x0001A830 - 0x0001A831 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A830(void)
{

loc_0001A830: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0001A840
 * Original: 0x0001A840 - 0x0001A8C8 (136 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001A840: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x2FCC80);
    MEM32(esp) = eax;
    MEM32(0x302710) = 0;
    MEM32(0x302728) = 0;
    MEM32(0x303554) = 0;
    MEM32(0x303544) = 0;
    PUSH32(esp, 0x0001A876u); RECOMP_ABI_CALL(0x0001A790u, sub_0001A790); /* call 0x0001A790 */

loc_0001A876: ;
    ecx = MEM32(esp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x302714) = LO8(eax);
    MEM32(0x303540) = 0x3F800000;
    MEM32(0x304754) = eax;
    MEM32(0x304758) = eax;
    MEM32(0x30475C) = eax;
    MEM32(0x304770) = 0x3F800000;
    MEM32(0x304774) = 0x3F800000;
    MEM32(0x304778) = 0x3F800000;
    MEM16(0x3035B0) = 0xFFFF;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00150375(); return; /* tail jmp 0x00150375 */

}

/**
 * sub_0001A8D0
 * Original: 0x0001A8D0 - 0x0001A93B (107 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A8D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001A8D0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0001A8EB; /* jae: above or equal (unsigned >=) */

loc_0001A8D9: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = 0x6EE8D4;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

loc_0001A8EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    ecx = MEM32(esp + 4);
    if (CMP_AE(_fa, _fb)) goto loc_0001A90A; /* jae: above or equal (unsigned >=) */

loc_0001A8F4: ;
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0xFFFFFFE8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFE8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = 0x6EE8B0;
    MEM32(ecx + 4) = eax;
    esp += 4; return; /* ret */

loc_0001A90A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0001A925; /* jae: above or equal (unsigned >=) */

loc_0001A90F: ;
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = 0x6EE8E0;
    MEM32(ecx + 4) = eax;
    esp += 4; return; /* ret */

loc_0001A925: ;
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0xFFFFFFD0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFD0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = 0x6EE8EC;
    MEM32(ecx + 4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0001A940
 * Original: 0x0001A940 - 0x0001AA79 (313 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001A940: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ZX8(MEM8(0x30F914));
    eax = MEM32(eax * 4 + 0x2BEEBC);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x30355C) = ebp;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001AA67; /* je: equal / zero */

loc_0001A969: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = 0x3035CC;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 0x3035CA;
    ebx = 0x3035C8;
    edi = 0x3035C0;
    esi = 0x3035C4;
    MEM32(esp + 0x14) = ecx;
    /* nop */

loc_0001A990: ;
    SET_LO16(edx, MEM16(eax + 2));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0xFF (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A9DE; /* jne: not equal / not zero */

loc_0001A99B: ;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(edi) = 0xFFFFFFFFu;
    MEM32(esi) = 0xFFFFFFFFu;
    MEM16(ebx) = 0;
    MEM16(eax) = 1;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(edx + ebp * 4);
    MEM32(esp + 0x14) = ecx;
    goto loc_0001AA5B;

loc_0001A9DE: ;
    edx = ZX16(LO16(edx));
    MEM32(edi) = edx;
    edx = ZX16(MEM16(eax + 4));
    MEM32(esi) = edx;
    SET_LO16(edx, MEM16(eax + 6));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    ecx = MEM32(edi);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    MEM16(ebx) = LO16(edx);
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001AA09u); RECOMP_ABI_CALL(0x0001A8D0u, sub_0001A8D0); /* call 0x0001A8D0 */

loc_0001AA09: ;
    eax = ZX16(MEM16(ebx));
    edx = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    eax = ZX16(MEM16(edx + 4));
    edx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(eax * 4 + 0x2BE930);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001AA2Cu); RECOMP_ABI_CALL(0x000356F0u, sub_000356F0); /* call 0x000356F0 */

loc_0001AA2C: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = 1;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x18);
    eax = MEM32(eax + ebp * 4);
    MEM32(esp + 0x14) = ecx;

loc_0001AA5B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A990; /* jne: not equal / not zero */

loc_0001AA64: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0001AA67: ;
    ebp = ebp << 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0x3035CC) = 0xFFFFFFFFu;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0001AA80
 * Original: 0x0001AA80 - 0x0001AB70 (240 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001AA80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001AA80: ;
    eax = MEM32(0x3035CC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001AB6C; /* je: equal / zero */

loc_0001AA91: ;
    SET_LO8(edx, MEM8(0x30F914));
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0x3035CC;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x3035CA;

loc_0001AAA6: ;
    esi = MEM32(eax);
    SET_LO16(ecx, MEM16(edi));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(esi + 2) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0001AB50; /* jb: below (unsigned <) */

loc_0001AAB5: ;
    ecx = MEM32(edi + -10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001AAF6; /* jne: not equal / not zero */

loc_0001AABD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(edi) = 1;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), 1 (16-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x30355C) = ecx;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), 4 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001AAED; /* jne: not equal / not zero */

loc_0001AADD: ;
    ecx = ZX8(LO8(edx));
    ecx = MEM32(ecx * 4 + 0x2BEEBC);
    esi = MEM32(ecx + ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001AAED: ;
    MEM32(eax) = esi;
    MEM16(edi) = 1;
    goto loc_0001AB54;

loc_0001AAF6: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), 4 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001AB0F; /* jne: not equal / not zero */

loc_0001AAFF: ;
    edx = ZX8(LO8(edx));
    edx = MEM32(edx * 4 + 0x2BEEBC);
    esi = MEM32(edx + ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001AB0F: ;
    MEM32(eax) = esi;
    eax = MEM32(edi + -6);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001AB20u); RECOMP_ABI_CALL(0x0001A8D0u, sub_0001A8D0); /* call 0x0001A8D0 */

loc_0001AB20: ;
    edx = ZX16(MEM16(edi + -2));
    ecx = ZX16(MEM16(esi + 4));
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(ecx * 4 + 0x2BE930);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001AB40u); RECOMP_ABI_CALL(0x000356F0u, sub_000356F0); /* call 0x000356F0 */

loc_0001AB40: ;
    SET_LO8(edx, MEM8(0x30F914));
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edi) = 1;
    goto loc_0001AB54;

loc_0001AB50: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(edi) = LO16(ecx);

loc_0001AB54: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edi + 2);
    eax = edi + 2;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001AAA6; /* jne: not equal / not zero */

loc_0001AB69: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0001AB6C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0001AB70
 * Original: 0x0001AB70 - 0x0001ADE0 (624 bytes, 182 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001AB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001AB70: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ZX8(MEM8(0x30F914));
    eax = MEM32(eax * 4 + 0x2BFF9C);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(eax);
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0001ADCD; /* je: equal / zero */

loc_0001AB99: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = edi;
    esi = 0x30368E;
    MEM32(esp + 0x18) = edi;
    goto loc_0001ABB3;

loc_0001ABAF: ;
    edi = MEM32(esp + 0x18);

loc_0001ABB3: ;
    SET_LO16(ecx, MEM16(eax + 2));
    MEM16(esi + -2) = LO16(ecx);
    edx = ZX16(MEM16(eax + 4));
    ecx = ZX16(MEM16(eax + 6));
    MEM32(esp + 0x20) = edx;
    SET_LO16(edx, MEM16(eax + 8));
    MEM16(esi) = LO16(edx);
    MEM32(esp + 0x1C) = ecx;
    SET_LO16(ecx, MEM16(eax + 0xA));
    MEM16(esi + 2) = LO16(ecx);
    SET_LO16(edx, MEM16(eax + 4));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi + 4) = LO16(edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xA) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(edx) (16-bit) */
    MEM32(esi + -6) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_0001AC21; /* jbe: below or equal (unsigned <=) */

loc_0001ABF5: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), LO16(ecx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0001AC18; /* jbe: below or equal (unsigned <=) */

loc_0001ABFC: ;
    /* nop */

loc_0001AC00: ;
    _fa = (uint32_t)(MEM16(esi + -2)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + -2), 1 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0001AC0C; /* ja: above (unsigned >) */

loc_0001AC07: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0001AC10;

loc_0001AC0C: ;
    _fb = (uint32_t)(2) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax) = MEM16(eax) + 2;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */

loc_0001AC10: ;
    ebx = ZX16(MEM16(esi));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001AC00; /* jl: less (signed <) */

loc_0001AC18: ;
    ecx = ZX16(MEM16(esi + 2));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001ABF5; /* jl: less (signed <) */

loc_0001AC21: ;
    PUSH32(esp, 0x200);
    ebx = edi + 0x302E60;
    PUSH32(esp, 0x800);
    ecx = ebx;
    PUSH32(esp, 0x0001AC38u); RECOMP_ABI_CALL(0x00035D80u, sub_00035D80); /* call 0x00035D80 */

loc_0001AC38: ;
    PUSH32(esp, 0x100);
    edi = edi + 0x302738;
    PUSH32(esp, 0x100);
    ecx = edi;
    PUSH32(esp, 0x0001AC4Fu); RECOMP_ABI_CALL(0x00035D80u, sub_00035D80); /* call 0x00035D80 */

loc_0001AC4F: ;
    eax = MEM32(esp + 0x1C);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0001AC66u); RECOMP_ABI_CALL(0x00035E20u, sub_00035E20); /* call 0x00035E20 */

loc_0001AC66: ;
    eax = ZX8(MEM8(0x30F914));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0001ACF7; /* je: equal / zero */

loc_0001AC76: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0001ACBE; /* je: equal / zero */

loc_0001AC7B: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0001AD2F; /* jne: not equal / not zero */

loc_0001AC84: ;
    ebp = MEM32(esp + 0x14);
    edx = MEM32(esi + -6);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x2C0480) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x2C0480;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(edx + 8);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(edx + 0xC);
    edx = MEM32(esp + 0x10);
    ebp = MEM32(edx * 4 + 0x2C0150);
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = ecx;
    goto loc_0001AD2F;

loc_0001ACBE: ;
    ebp = MEM32(esp + 0x14);
    eax = MEM32(esi + -6);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x2C02F0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C02F0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(esp + 0x10);
    ebp = MEM32(eax * 4 + 0x2C0148);
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x34) = edx;
    goto loc_0001AD2F;

loc_0001ACF7: ;
    ebp = MEM32(esp + 0x14);
    ecx = MEM32(esi + -6);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x2C0160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C0160;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 0x10);
    ebp = MEM32(ecx * 4 + 0x2C0140);
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = eax;

loc_0001AD2F: ;
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0001AD4Eu); RECOMP_ABI_CALL(0x00035DF0u, sub_00035DF0); /* call 0x00035DF0 */

loc_0001AD4E: ;
    _fa = (uint32_t)(MEM16(esi + -2)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + -2), 2 (16-bit) */
    ecx = ebx;
    if (CMP_AE(_fa, _fb)) goto loc_0001AD5E; /* jae: above or equal (unsigned >=) */

loc_0001AD57: ;
    PUSH32(esp, 0x6EE998);
    goto loc_0001AD63;

loc_0001AD5E: ;
    PUSH32(esp, 0x6EE9AC);

loc_0001AD63: ;
    PUSH32(esp, 0x0001AD68u); RECOMP_ABI_CALL(0x00035E40u, sub_00035E40); /* call 0x00035E40 */

loc_0001AD68: ;
    edx = ebp + ebp * 4;
    eax = edx * 4 + 0x6EE948;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0001AD7Bu); RECOMP_ABI_CALL(0x00035E40u, sub_00035E40); /* call 0x00035E40 */

loc_0001AD7B: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0001AD82u); RECOMP_ABI_CALL(0x00036700u, sub_00036700); /* call 0x00036700 */

loc_0001AD82: ;
    ebx = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x2C);
    eax = 1;
    MEM32(esi + -6) = eax;
    MEM16(esi + 6) = LO16(eax);
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ecx + eax * 4);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 5;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xDC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0001ABAF; /* jne: not equal / not zero */

loc_0001ADC6: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0001ADCD: ;
    edx = ecx + ecx * 4;
    MEM32(edx * 4 + 0x303698) = 0xFFFFFFFFu;
    POP32(esp, edi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0001ADE0
 * Original: 0x0001ADE0 - 0x0001AE15 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001ADE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001ADE0: ;
    eax = MEM32(0x303698);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0001AF77(); return; } /* je: equal / zero */

loc_0001ADF1: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x303698;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = eax;
    esi = 0x30368E;
    MEM32(esp + 0x14) = eax;

    g_seh_ebp = ebp; sub_0001AE15(); return; /* fallthrough 0x0001AE15 */

}

/**
 * sub_0001AE15
 * Original: 0x0001AE15 - 0x0001AE70 (91 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001AE15(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001AE15: ;
    eax = MEM32(ecx);
    SET_LO16(edx, MEM16(esi + 6));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax + 2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(eax + 2) (16-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0001AF39(); return; } /* jb: below (unsigned <) */

loc_0001AE25: ;
    edi = ZX16(MEM16(esi));
    edx = ZX16(MEM16(esi + 2));
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    _fa = (uint32_t)(MEM16(esi + -2)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + -2), 1 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0001AE3C; /* ja: above (unsigned >) */

loc_0001AE36: ;
    eax = eax + edi * 2 + 4;
    goto loc_0001AE40;

loc_0001AE3C: ;
    eax = eax + edi * 4 + 4;

loc_0001AE40: ;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 4 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001AE65; /* jne: not equal / not zero */

loc_0001AE46: ;
    eax = ZX8(MEM8(0x30F914));
    eax = MEM32(eax * 4 + 0x2BFF9C);
    edi = MEM32(esp + 0x18);
    eax = MEM32(eax + edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + -6) = 0;

loc_0001AE65: ;
    MEM32(ecx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0001AE98(); return; } /* jle: less or equal (signed <=) */

    g_seh_ebp = ebp; sub_0001AE70(); return; /* fallthrough 0x0001AE70 */

}

/**
 * sub_0001AE70
 * Original: 0x0001AE70 - 0x0001AE77 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001AE70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001AE70: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), LO16(ecx) (16-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_0001AE8F(); return; } /* jbe: below or equal (unsigned <=) */

    g_seh_ebp = ebp; sub_0001AE77(); return; /* fallthrough 0x0001AE77 */

}

/**
 * sub_0001AE77
 * Original: 0x0001AE77 - 0x0001AE8F (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001AE77(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001AE77: ;
    _fa = (uint32_t)(MEM16(esi + -2)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + -2), 1 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0001AE83; /* ja: above (unsigned >) */

loc_0001AE7E: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0001AE87;

loc_0001AE83: ;
    _fb = (uint32_t)(2) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax) = MEM16(eax) + 2;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */

loc_0001AE87: ;
    edx = ZX16(MEM16(esi));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001AE77; /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_0001AE8F(); return; /* fallthrough 0x0001AE8F */

}

/**
 * sub_0001AE8F
 * Original: 0x0001AE8F - 0x0001AE98 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001AE8F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001AE8F: ;
    ecx = ZX16(MEM16(esi + 2));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0001AE70(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_0001AE98(); return; /* fallthrough 0x0001AE98 */

}

/**
 * sub_0001AE98
 * Original: 0x0001AE98 - 0x0001AF39 (161 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001AE98(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001AE98: ;
    eax = ZX8(MEM8(0x30F914));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0001AED2; /* je: equal / zero */

loc_0001AEA4: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0001AEC0; /* je: equal / zero */

loc_0001AEA9: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0001AEF5; /* jne: not equal / not zero */

loc_0001AEAE: ;
    edx = MEM32(esi + -6);
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x2C0480) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x2C0480;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0001AEE2;

loc_0001AEC0: ;
    edx = MEM32(esi + -6);
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x2C02F0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x2C02F0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0001AEE2;

loc_0001AED2: ;
    edx = MEM32(esi + -6);
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x2C0160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x2C0160;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001AEE2: ;
    ebp = MEM32(edx);
    ebx = MEM32(edx + 4);
    eax = MEM32(edx + 8);
    ecx = MEM32(edx + 0xC);
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = ecx;

loc_0001AEF5: ;
    edx = MEM32(esp + 0x28);
    edi = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi + 0x302738;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0001AF16u); RECOMP_ABI_CALL(0x00035DF0u, sub_00035DF0); /* call 0x00035DF0 */

loc_0001AF16: ;
    ecx = MEM32(esp + 0x14);
    edx = ecx + 0x302E60;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001AF27u); RECOMP_ABI_CALL(0x00036700u, sub_00036700); /* call 0x00036700 */

loc_0001AF27: ;
    eax = MEM32(esi + -6);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + -6) = eax;
    MEM16(esi + 6) = 1;
    g_seh_ebp = ebp; sub_0001AF3E(); return; /* tail jmp 0x0001AF3E */

}

/**
 * sub_0001AF39
 * Original: 0x0001AF39 - 0x0001AF77 (62 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001AF39(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001AF39: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(esi + 6) = LO16(edx);
    eax = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xA;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ecx);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xDC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = edx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0001AE15(); return; } /* jne: not equal / not zero */

loc_0001AF73: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_0001AF77(); return; /* fallthrough 0x0001AF77 */

}

/**
 * sub_0001AF3E
 * Original: 0x0001AF3E - 0x0001AF77 (57 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001AF3E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001AF3E: ;
    eax = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xA;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ecx);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xDC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = edx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0001AE15(); return; } /* jne: not equal / not zero */

loc_0001AF73: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_0001AF77(); return; /* fallthrough 0x0001AF77 */

}

/**
 * sub_0001AF77
 * Original: 0x0001AF77 - 0x0001AF7B (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001AF77(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001AF77: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0001AF80
 * Original: 0x0001AF80 - 0x0001AF81 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001AF80(void)
{

loc_0001AF80: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0001AF90
 * Original: 0x0001AF90 - 0x0001AF91 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001AF90(void)
{

loc_0001AF90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0001AFA0
 * Original: 0x0001AFA0 - 0x0001AFF0 (80 bytes, 16 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0001AFA0(void)
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

loc_0001AFA0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 1;
    PUSH32(esp, edi);
    MEM32(0x302718) = 0;
    MEM32(0x302724) = ebx;
    MEM32(0x302720) = 3;
    MEM8(0x331B10) = 0;
    PUSH32(esp, 0x0001AFD1u); RECOMP_ABI_CALL(0x0001A840u, sub_0001A840); /* call 0x0001A840 */

loc_0001AFD1: ;
    PUSH32(esp, 0x0001AFD6u); RECOMP_ABI_CALL(0x0001A940u, sub_0001A940); /* call 0x0001A940 */

loc_0001AFD6: ;
    PUSH32(esp, 0x0001AFDBu); RECOMP_ABI_CALL(0x0001AB70u, sub_0001AB70); /* call 0x0001AB70 */

loc_0001AFDB: ;
    fp_push(MEMF(0x303680)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C1EC)); /* fsub dword ptr [0x22c1ec] */
    MEMF(0x303680) = (float)fp_top(); fp_pop(); /* fstp */
    /* nop */

    g_seh_ebp = ebp; sub_0001AFF0(); return; /* fallthrough 0x0001AFF0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001AFF0
 * Original: 0x0001AFF0 - 0x0001B749 (1881 bytes, 445 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001AFF0(void)
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

loc_0001AFF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0001AFF6u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0001AFF6: ;
    PUSH32(esp, 0x0001AFFBu); RECOMP_ABI_CALL(0x0001AA80u, sub_0001AA80); /* call 0x0001AA80 */

loc_0001AFFB: ;
    PUSH32(esp, 0x0001B000u); RECOMP_ABI_CALL(0x0001ADE0u, sub_0001ADE0); /* call 0x0001ADE0 */

loc_0001B000: ;
    fp_push(MEMF(0x30AAB4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x30AE50)); /* fsub dword ptr [0x30ae50] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    fp_push(MEMF(0x30F9B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x30D010)); /* fsub dword ptr [0x30d010] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001B024u); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_0001B024: ;
    fp_push(MEMF(0x30F9B0)); /* fld float */
    ecx = MEM32(0x30F9B0);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x30D010)); /* fsub dword ptr [0x30d010] */
    esi = eax;
    fp_push(MEMF(0x30AAB4)); /* fld float */
    eax = MEM32(0x3062A0);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x30AE50)); /* fsub dword ptr [0x30ae50] */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, ecx);
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    esi = esi << 0xB;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001B06Du); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_0001B06D: ;
    ecx = MEM32(0x30AA68);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x0001B07Du); RECOMP_ABI_CALL(0x0006A110u, sub_0006A110); /* call 0x0006A110 */

loc_0001B07D: ;
    edx = MEM32(esp + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3049A8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3145A8)); /* fadd dword ptr [0x3145a8] */
    fp_top() = RECOMP_FP_PC(MEMF(0x3062A0) - fp_top()); /* fsubr dword ptr [0x3062a0] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001B0A5u); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_0001B0A5: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x28) = eax;
    SET_LO8(eax, MEM8(0x3139CB));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001B370; /* je: equal / zero */

loc_0001B0BB: ;
    _fa = (uint32_t)(MEM32(0x3035B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3035B8), 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001B1A9; /* je: equal / zero */

loc_0001B0C8: ;
    edi = MEM32(0x30AA68);
    ecx = 0x4000;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x0001B0DAu); RECOMP_ABI_CALL(0x0006A110u, sub_0006A110); /* call 0x0006A110 */

loc_0001B0DA: ;
    edx = MEM32(0x30AA68);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1E8)); /* fmul dword ptr [0x22c1e8] */
    ecx = 0x4000;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x30D010)); /* fsub dword ptr [0x30d010] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001B0FCu); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_0001B0FC: ;
    eax = MEM32(0x30AA68);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1E8)); /* fmul dword ptr [0x22c1e8] */
    ecx = 0x4000;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x30AE50)); /* fsub dword ptr [0x30ae50] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001B12Fu); RECOMP_ABI_CALL(0x0006A110u, sub_0006A110); /* call 0x0006A110 */

loc_0001B12F: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x1C) - fp_top()); /* fsubr dword ptr [esp + 0x1c] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1E4)); /* fmul dword ptr [0x22c1e4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C1E0)); /* fadd dword ptr [0x22c1e0] */
    MEMF(0x303540) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C1DC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c1dc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001B16A; /* jne: not equal / not zero */

loc_0001B15E: ;
    MEM32(0x303540) = 0x3F19999A;
    goto loc_0001B187;

loc_0001B16A: ;
    fp_push(MEMF(0x303540)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C100)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c100] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001B187; /* jp: parity */

loc_0001B17D: ;
    MEM32(0x303540) = 0x3DCCCCCD;

loc_0001B187: ;
    fp_push(MEMF(0x22C0D0)); /* fld float */
    eax = MEM32(0x303540);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0x303540)); /* fdiv dword ptr [0x303540] */
    MEM32(0x302730) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1D8)); /* fmul dword ptr [0x22c1d8] */
    MEMF(0x303550) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001B1A9: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ecx = esi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1D4)); /* fmul dword ptr [0x22c1d4] */
    ecx = ecx & 0x7FFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x1C) = ecx;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0E4)); /* fmul dword ptr [0x22c0e4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x30271C)); /* fadd dword ptr [0x30271c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x303550)); /* fadd dword ptr [0x303550] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C1D0)); /* fadd dword ptr [0x22c1d0] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1CC)); /* fmul dword ptr [0x22c1cc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1C8)); /* fmul dword ptr [0x22c1c8] */
    fp_push(MEMF(0x303680)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C1C4)); /* fsub dword ptr [0x22c1c4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x303550)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C1C0)); /* fsub dword ptr [0x22c1c0] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001B26C; /* jne: not equal / not zero */

loc_0001B216: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(0x22C1BC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x302730) - fp_top()); /* fsubr dword ptr [0x302730] */
    MEMF(0x302730) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C1B8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c1b8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001B243; /* jp: parity */

loc_0001B239: ;
    MEM32(0x302730) = 0x3E4CCCCD;

loc_0001B243: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x303550)); /* fadd dword ptr [0x303550] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C1C0)); /* fsub dword ptr [0x22c1c0] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C1B4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c1b4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001B2B5; /* jne: not equal / not zero */

loc_0001B262: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x22C1B4)); /* fld float */
    goto loc_0001B2B5;

loc_0001B26C: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x303550)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x303540)); /* fadd dword ptr [0x303540] */
    fp_push(MEMF(0x22C1B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001B2B3; /* jp: parity */

loc_0001B28D: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C1B0)); /* fsub dword ptr [0x22c1b0] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1BC)); /* fmul dword ptr [0x22c1bc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x302730)); /* fadd dword ptr [0x302730] */
    MEMF(0x302730) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    goto loc_0001B2B5;

loc_0001B2B3: ;
    fp_pop(); /* fstp st(0) */

loc_0001B2B5: ;
    fp_push(MEMF(0x303550)); /* fld float */
    SET_LO8(eax, MEM8(0x307604));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xF (8-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    if (CMP_NE(_fa, _fb)) goto loc_0001B2DE; /* jne: not equal / not zero */

loc_0001B2CA: ;
    fp_push(MEMF(0x3145A8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C1AC)); /* fsub dword ptr [0x22c1ac] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */

loc_0001B2DE: ;
    fp_push(MEMF(0x22C1A4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    MEMF(0x303554) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C1A4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c1a4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001B30D; /* jne: not equal / not zero */

loc_0001B2FB: ;
    fp_push(MEMF(0x303554)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C1A4)); /* fsub dword ptr [0x22c1a4] */
    MEMF(0x303554) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001B30D: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c0d4] */
    MEMF(0x303544) = (float)fp_top(); /* fst */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001B32E; /* jp: parity */

loc_0001B320: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C1A0)); /* fadd dword ptr [0x22c1a0] */
    MEMF(0x303544) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0001B330;

loc_0001B32E: ;
    fp_pop(); /* fstp st(0) */

loc_0001B330: ;
    fp_push(MEMF(0x303544)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C1A0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c1a0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001B355; /* jne: not equal / not zero */

loc_0001B343: ;
    fp_push(MEMF(0x303544)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C1A0)); /* fsub dword ptr [0x22c1a0] */
    MEMF(0x303544) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001B355: ;
    _fa = (uint32_t)(MEM8(0x30F914)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30F914), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001B370; /* je: equal / zero */

loc_0001B35E: ;
    fp_push(MEMF(0x303540)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C19C)); /* fmul dword ptr [0x22c19c] */
    MEMF(0x303540) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001B370: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    esi = esi & 0x3FFFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEM32(esp + 0x1C) = esi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    SET_LO8(eax, MEM8(0x3139CB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0E4)); /* fmul dword ptr [0x22c0e4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3035B4)); /* fadd dword ptr [0x3035b4] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1CC)); /* fmul dword ptr [0x22c1cc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C198)); /* fmul dword ptr [0x22c198] */
    fp_push(MEMF(0x302734)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C194)); /* fadd dword ptr [0x22c194] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    if (CMP_NE(_fa, _fb)) goto loc_0001B3F5; /* jne: not equal / not zero */

loc_0001B3BD: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001B3D2; /* jp: parity */

loc_0001B3CA: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x22C0D4)); /* fld float */

loc_0001B3D2: ;
    fp_push(MEMF(0x303550)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C190)); /* fadd dword ptr [0x22c190] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001B437; /* jne: not equal / not zero */

loc_0001B3ED: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    goto loc_0001B437;

loc_0001B3F5: ;
    fp_push(MEMF(0x303550)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C18C)); /* fsub dword ptr [0x22c18c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001B416; /* jp: parity */

loc_0001B410: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x20)); /* fld float */

loc_0001B416: ;
    fp_push(MEMF(0x303550)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C188)); /* fadd dword ptr [0x22c188] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001B437; /* jne: not equal / not zero */

loc_0001B431: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x20)); /* fld float */

loc_0001B437: ;
    fp_push(MEMF(0x22C184)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    MEMF(0x302710) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C184)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c184] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001B466; /* jne: not equal / not zero */

loc_0001B454: ;
    fp_push(MEMF(0x302710)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C184)); /* fsub dword ptr [0x22c184] */
    MEMF(0x302710) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001B466: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c0d4] */
    MEMF(0x302728) = (float)fp_top(); /* fst */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001B487; /* jp: parity */

loc_0001B479: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C1A0)); /* fadd dword ptr [0x22c1a0] */
    MEMF(0x302728) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0001B489;

loc_0001B487: ;
    fp_pop(); /* fstp st(0) */

loc_0001B489: ;
    fp_push(MEMF(0x302728)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C1A0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c1a0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001B4AE; /* jne: not equal / not zero */

loc_0001B49C: ;
    fp_push(MEMF(0x302728)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C1A0)); /* fsub dword ptr [0x22c1a0] */
    MEMF(0x302728) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001B4AE: ;
    fp_push(MEMF(0x30F918)); /* fld float */
    PUSH32(esp, 0x0001B4B9u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0001B4B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001B4DC; /* je: equal / zero */

loc_0001B4BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001B4D2; /* je: equal / zero */

loc_0001B4C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001B4E4; /* jne: not equal / not zero */

loc_0001B4C8: ;
    MEM32(esp + 0x10) = 0x3D400000;
    goto loc_0001B4E4;

loc_0001B4D2: ;
    MEM32(esp + 0x10) = 0x3CC00000;
    goto loc_0001B4E4;

loc_0001B4DC: ;
    MEM32(esp + 0x10) = 0x3C400000;

loc_0001B4E4: ;
    _fa = (uint32_t)(MEM8(0x30F914)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30F914), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001B4F5; /* jne: not equal / not zero */

loc_0001B4ED: ;
    MEM32(esp + 0x10) = 0x3CC00000;

loc_0001B4F5: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0001B4FCu); RECOMP_ABI_CALL(0x0006AC00u, sub_0006AC00); /* call 0x0006AC00 */

loc_0001B4FC: ;
    esi = 0x304754;
    eax = 0x304760;
    PUSH32(esp, 0x0001B50Bu); RECOMP_ABI_CALL(0x0001A800u, sub_0001A800); /* call 0x0001A800 */

loc_0001B50B: ;
    PUSH32(esp, 0x43800000);
    PUSH32(esp, 0x43800000);
    PUSH32(esp, 0x43800000);
    PUSH32(esp, 0x0001B51Fu); RECOMP_ABI_CALL(0x0006A8B0u, sub_0006A8B0); /* call 0x0006A8B0 */

loc_0001B51F: ;
    PUSH32(esp, 0x3F916873);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F916873);
    PUSH32(esp, 0x0001B533u); RECOMP_ABI_CALL(0x0006A8B0u, sub_0006A8B0); /* call 0x0006A8B0 */

loc_0001B533: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x30AA70;
    PUSH32(esp, 0x0001B540u); RECOMP_ABI_CALL(0x0006ACC0u, sub_0006ACC0); /* call 0x0006ACC0 */

loc_0001B540: ;
    _fa = (uint32_t)(MEM16(0x3035B0)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x3035B0), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001B575; /* je: equal / zero */

loc_0001B54A: ;
    ecx = 0x10;
    esi = 0x30AA70;
    edi = 0x302E20;
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
    ecx = 0x10;
    esi = 0x30AA70;
    edi = 0x303570;
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
    MEM16(0x3035B0) = 0;

loc_0001B575: ;
    ecx = 0x303570;
    PUSH32(esp, 0x0001B57Fu); RECOMP_ABI_CALL(0x0006ACB0u, sub_0006ACB0); /* call 0x0006ACB0 */

loc_0001B57F: ;
    fp_push(MEMF(0x30AE50)); /* fld float */
    fp_push(MEMF(0x30D010)); /* fld float */
    ecx = esp + 0x24;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x30) = 0;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001B5ACu); RECOMP_ABI_CALL(0x0006A660u, sub_0006A660); /* call 0x0006A660 */

loc_0001B5AC: ;
    SET_LO8(eax, MEM8(0x3139CB));
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001B6AA; /* je: equal / zero */

loc_0001B5BB: ;
    edx = MEM32(0x30AE50);
    eax = MEM32(0x30D010);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM8(0x30272C) = 0;
    PUSH32(esp, 0x0001B5D4u); RECOMP_ABI_CALL(0x0001BB50u, sub_0001BB50); /* call 0x0001BB50 */

loc_0001B5D4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001B6AA; /* jne: not equal / not zero */

loc_0001B5DF: ;
    eax = MEM32(0x30AA68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC000 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001B5F2; /* jl: less (signed <) */

loc_0001B5EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10000 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001B5FD; /* jl: less (signed <) */

loc_0001B5F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001B616; /* jl: less (signed <) */

loc_0001B5F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4000 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001B616; /* jge: greater or equal (signed >=) */

loc_0001B5FD: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0001B604u); RECOMP_ABI_CALL(0x0006AC00u, sub_0006AC00); /* call 0x0006AC00 */

loc_0001B604: ;
    ecx = ebx;
    PUSH32(esp, 0x0001B60Bu); RECOMP_ABI_CALL(0x0006AC70u, sub_0006AC70); /* call 0x0006AC70 */

loc_0001B60B: ;
    eax = MEM32(0x30AA68);
    MEM8(0x30272C) = LO8(ebx);

loc_0001B616: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8000 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001B64A; /* jl: less (signed <) */

loc_0001B61D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10000 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001B64A; /* jge: greater or equal (signed >=) */

loc_0001B624: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0001B62Bu); RECOMP_ABI_CALL(0x0006AC00u, sub_0006AC00); /* call 0x0006AC00 */

loc_0001B62B: ;
    PUSH32(esp, 0x4000);
    PUSH32(esp, 0x0001B635u); RECOMP_ABI_CALL(0x0006C0B0u, sub_0006C0B0); /* call 0x0006C0B0 */

loc_0001B635: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    PUSH32(esp, 0x0001B63Fu); RECOMP_ABI_CALL(0x0006AC70u, sub_0006AC70); /* call 0x0006AC70 */

loc_0001B63F: ;
    eax = MEM32(0x30AA68);
    MEM8(0x30272C) = LO8(ebx);

loc_0001B64A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4000 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001B67E; /* jl: less (signed <) */

loc_0001B651: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC000 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001B67E; /* jge: greater or equal (signed >=) */

loc_0001B658: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0001B65Fu); RECOMP_ABI_CALL(0x0006AC00u, sub_0006AC00); /* call 0x0006AC00 */

loc_0001B65F: ;
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0x0001B669u); RECOMP_ABI_CALL(0x0006C0B0u, sub_0006C0B0); /* call 0x0006C0B0 */

loc_0001B669: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    PUSH32(esp, 0x0001B673u); RECOMP_ABI_CALL(0x0006AC70u, sub_0006AC70); /* call 0x0006AC70 */

loc_0001B673: ;
    eax = MEM32(0x30AA68);
    MEM8(0x30272C) = LO8(ebx);

loc_0001B67E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001B6AA; /* jl: less (signed <) */

loc_0001B682: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8000 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001B6AA; /* jge: greater or equal (signed >=) */

loc_0001B689: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0001B690u); RECOMP_ABI_CALL(0x0006AC00u, sub_0006AC00); /* call 0x0006AC00 */

loc_0001B690: ;
    PUSH32(esp, 0xC000);
    PUSH32(esp, 0x0001B69Au); RECOMP_ABI_CALL(0x0006C0B0u, sub_0006C0B0); /* call 0x0006C0B0 */

loc_0001B69A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    PUSH32(esp, 0x0001B6A4u); RECOMP_ABI_CALL(0x0006AC70u, sub_0006AC70); /* call 0x0006AC70 */

loc_0001B6A4: ;
    MEM8(0x30272C) = LO8(ebx);

loc_0001B6AA: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CC00000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001B6BAu); RECOMP_ABI_CALL(0x0006A8B0u, sub_0006A8B0); /* call 0x0006A8B0 */

loc_0001B6BA: ;
    PUSH32(esp, 0x44000000);
    PUSH32(esp, 0xC2280000u);
    PUSH32(esp, 0xC4000000u);
    PUSH32(esp, 0x0001B6CEu); RECOMP_ABI_CALL(0x0006A800u, sub_0006A800); /* call 0x0006A800 */

loc_0001B6CE: ;
    PUSH32(esp, 0x4000);
    PUSH32(esp, 0x0001B6D8u); RECOMP_ABI_CALL(0x0006C050u, sub_0006C050); /* call 0x0006C050 */

loc_0001B6D8: ;
    ecx = 0x10;
    esi = 0x302E20;
    edi = 0x303570;
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
    ecx = 0x10;
    esi = 0x30AA70;
    edi = 0x302E20;
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
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    PUSH32(esp, 0x0001B704u); RECOMP_ABI_CALL(0x0006AC70u, sub_0006AC70); /* call 0x0006AC70 */

loc_0001B704: ;
    _fa = (uint32_t)(MEM32(0x3035B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3035B8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001AFF0; /* jne: not equal / not zero */

loc_0001B710: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0001B717u); RECOMP_ABI_CALL(0x0006AC00u, sub_0006AC00); /* call 0x0006AC00 */

loc_0001B717: ;
    esi = 0x304754;
    eax = 0x304760;
    PUSH32(esp, 0x0001B726u); RECOMP_ABI_CALL(0x0001A800u, sub_0001A800); /* call 0x0001A800 */

loc_0001B726: ;
    PUSH32(esp, 0x43800000);
    PUSH32(esp, 0x43800000);
    PUSH32(esp, 0x43800000);
    PUSH32(esp, 0x0001B73Au); RECOMP_ABI_CALL(0x0006A8B0u, sub_0006A8B0); /* call 0x0006A8B0 */

loc_0001B73A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    PUSH32(esp, 0x0001B744u); RECOMP_ABI_CALL(0x0006AC70u, sub_0006AC70); /* call 0x0006AC70 */

loc_0001B744: ;
    goto loc_0001AFF0;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001B750
 * Original: 0x0001B750 - 0x0001B781 (49 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001B750: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx + eax;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    ebx = eax + 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3FB;
    edi = 0x303728;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edx = 0xFEE;
    MEM32(esp + 0x14) = ebp;
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_0001B785(); return; /* tail jmp 0x0001B785 */

}

/**
 * sub_0001B781
 * Original: 0x0001B781 - 0x0001B785 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B781(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001B781: ;
    ebp = MEM32(esp + 0x14);

    g_seh_ebp = ebp; sub_0001B785(); return; /* fallthrough 0x0001B785 */

}

/**
 * sub_0001B785
 * Original: 0x0001B785 - 0x0001B833 (174 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B785(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001B785: ;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    MEM32(esp + 0x18) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0001B7A7; /* jne: not equal / not zero */

loc_0001B790: ;
    eax = ZX8(MEM8(ebx));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0001B82E; /* ja: above (unsigned >) */

loc_0001B79C: ;
    eax = eax | 0xFF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x18) = eax;
    ecx = eax;

loc_0001B7A7: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001B7C6; /* je: equal / zero */

loc_0001B7AC: ;
    eax = ZX8(MEM8(ebx));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0001B82E; /* ja: above (unsigned >) */

loc_0001B7B4: ;
    MEM8(esi) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx + 0x303728) = LO8(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx & 0xFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0001B785;

loc_0001B7C6: ;
    edi = ZX8(MEM8(ebx));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0001B82E; /* ja: above (unsigned >) */

loc_0001B7CE: ;
    eax = ZX8(MEM8(ebx));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0001B82E; /* ja: above (unsigned >) */

loc_0001B7D6: ;
    ebp = eax;
    ebp = ebp & 0xF0;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp << 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = eax;
    eax = 0;
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_0001B781(); return; } /* js: sign (negative) */

loc_0001B7F2: ;
    goto loc_0001B800;

    /* nop */
    goto loc_0001B800;

    /* nop */

loc_0001B800: ;
    ecx = edi + eax;
    ecx = ecx & 0xFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ZX8(MEM8(ecx + 0x303728));
    MEM8(esi) = LO8(ecx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx + 0x303728) = LO8(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx & 0xFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0001B800; /* jle: less or equal (signed <=) */

loc_0001B825: ;
    ecx = MEM32(esp + 0x18);
    g_seh_ebp = ebp; sub_0001B781(); return; /* tail jmp 0x0001B781 */

loc_0001B82E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0001B840
 * Original: 0x0001B840 - 0x0001B878 (56 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001B840: ;
    eax = ZX8(MEM8(0x30F914));
    SET_LO8(ecx, MEM8(0x3139CB));
    PUSH32(esp, esi);
    esi = MEM32(eax * 4 + 0x2C1598);
    SET_LO8(eax, 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001B863; /* jne: not equal / not zero */

loc_0001B85B: ;
    ecx = ZX8(LO8(eax));
    SET_LO8(eax, MEM8(ecx + esi));
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0001B863: ;
    PUSH32(esp, 0x0001B868u); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_0001B868: ;
    ecx = ZX8(MEM8(esi));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx = ZX8(LO8(edx));
    SET_LO8(eax, MEM8(edx + esi));
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0001B880
 * Original: 0x0001B880 - 0x0001B898 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001B880: ;
    PUSH32(esp, 0x304840);
    PUSH32(esp, 0x3048F4);
    PUSH32(esp, 0x3048BC);
    PUSH32(esp, 0x0001B894u); RECOMP_ABI_CALL(0x00022190u, sub_00022190); /* call 0x00022190 */

loc_0001B894: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0001B8A0
 * Original: 0x0001B8A0 - 0x0001B914 (116 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B8A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001B8A0: ;
    PUSH32(esp, 0x30478C);
    PUSH32(esp, 0x30477C);
    PUSH32(esp, 0x304750);
    PUSH32(esp, 0x0001B8B4u); RECOMP_ABI_CALL(0x00022190u, sub_00022190); /* call 0x00022190 */

loc_0001B8B4: ;
    eax = MEM32(0x304750);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3048BC);
    PUSH32(esp, 0x0001B8D3u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001B8D3: ;
    ecx = MEM32(0x30477C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3048F4);
    PUSH32(esp, 0x0001B8F0u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001B8F0: ;
    edx = MEM32(0x30478C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x304840);
    PUSH32(esp, 0x0001B910u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001B910: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0001B920
 * Original: 0x0001B920 - 0x0001B92B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B920(void)
{

loc_0001B920: ;
    MEM32(0x3049F8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0001B930
 * Original: 0x0001B930 - 0x0001B93B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B930(void)
{

loc_0001B930: ;
    MEM32(0x304BA4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0001B940
 * Original: 0x0001B940 - 0x0001B959 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B940(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001B940: ;
    PUSH32(esp, 0x222);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3049F8);
    PUSH32(esp, 0x0001B955u); RECOMP_ABI_CALL(0x000232E0u, sub_000232E0); /* call 0x000232E0 */

loc_0001B955: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0001B960
 * Original: 0x0001B960 - 0x0001B979 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B960(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001B960: ;
    PUSH32(esp, 0x38E);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x304BA4);
    PUSH32(esp, 0x0001B975u); RECOMP_ABI_CALL(0x000232E0u, sub_000232E0); /* call 0x000232E0 */

loc_0001B975: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0001B980
 * Original: 0x0001B980 - 0x0001B9B5 (53 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001B980: ;
    SET_LO8(eax, MEM8(0x316FF4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001B999; /* jne: not equal / not zero */

loc_0001B989: ;
    eax = MEM32(0x30F910);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x304944) = eax;
    esp += 4; return; /* ret */

loc_0001B999: ;
    ecx = MEM32(0x30F910);
    _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x8000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304944) = ecx;
    MEM16(0x304946) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0001B9C0
 * Original: 0x0001B9C0 - 0x0001B9E3 (35 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B9C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001B9C0: ;
    PUSH32(esp, 0x3048C4);
    PUSH32(esp, 0x0001B9CAu); RECOMP_ABI_CALL(0x00022CB0u, sub_00022CB0); /* call 0x00022CB0 */

loc_0001B9CA: ;
    eax = MEM32(0x304780);
    PUSH32(esp, 0x41700000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3048C4);
    PUSH32(esp, 0x0001B9DFu); RECOMP_ABI_CALL(0x00022A20u, sub_00022A20); /* call 0x00022A20 */

loc_0001B9DF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0001B9F0
 * Original: 0x0001B9F0 - 0x0001BA30 (64 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B9F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001B9F0: ;
    PUSH32(esp, 0x304814);
    PUSH32(esp, 0x0001B9FAu); RECOMP_ABI_CALL(0x00022CB0u, sub_00022CB0); /* call 0x00022CB0 */

loc_0001B9FA: ;
    eax = MEM32(0x304780);
    PUSH32(esp, 0x41700000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x304814);
    PUSH32(esp, 0x0001BA0Fu); RECOMP_ABI_CALL(0x00022A20u, sub_00022A20); /* call 0x00022A20 */

loc_0001BA0F: ;
    ecx = MEM32(0x304814);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3048C4);
    PUSH32(esp, 0x0001BA2Cu); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001BA2C: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0001BA30
 * Original: 0x0001BA30 - 0x0001BAC8 (152 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001BA30(void)
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

loc_0001BA30: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 8));
    SET_LO8(ecx, MEM8(esi + 0x3049DC));
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    SET_LO8(edx, MEM8(eax + 0x30D9CA));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001BA8A; /* je: equal / zero */

loc_0001BA4B: ;
    eax = ZX8(MEM8(eax + 0x30D9A1));
    eax = MEM32(eax * 4 + 0x2C0898);
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001BA8A; /* je: equal / zero */

loc_0001BA60: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001BA71; /* je: equal / zero */

loc_0001BA64: ;
    SET_LO8(ecx, MEM8(eax + 3));
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001BA60; /* jne: not equal / not zero */

loc_0001BA6F: ;
    goto loc_0001BA8A;

loc_0001BA71: ;
    SET_LO8(ecx, MEM8(eax + 1));
    MEM8(0x3047E4) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 2));
    MEM8(0x304868) = LO8(edx);
    MEM8(0x3049C2) = 1;

loc_0001BA8A: ;
    _fa = (uint32_t)(MEM8(0x3047E4)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3047E4), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001BAC6; /* je: equal / zero */

loc_0001BA93: ;
    ecx = esi;
    ecx = ecx ^ 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB4);
    fp_push(MEMF(eax + 0x30C25C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C1F0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c1f0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001BAC6; /* jp: parity */

loc_0001BAB3: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    _fa = (uint32_t)(MEM8(ecx + 0x30D9CD)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x30D9CD), 0xF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001BAC6; /* je: equal / zero */

loc_0001BABF: ;
    MEM8(0x3047B5) = 1;

loc_0001BAC6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001BAD0
 * Original: 0x0001BAD0 - 0x0001BB43 (115 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001BAD0(void)
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

loc_0001BAD0: ;
    SET_LO8(eax, MEM8(0x30AE3E));
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001BAF6; /* je: equal / zero */

loc_0001BADB: ;
    MEM8(0x304961) = LO8(eax);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x30AE3E) = LO8(edx);
    MEM8(0x30487C) = 1;
    MEM8(0x3048C1) = LO8(eax);
    goto loc_0001BB04;

loc_0001BAF6: ;
    _fa = (uint32_t)(MEM8(0x30487C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30487C), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001BB42; /* jne: not equal / not zero */

loc_0001BAFF: ;
    SET_LO8(eax, MEM8(0x3048C1));

loc_0001BB04: ;
    ecx = ZX8(MEM8(0x304961));
    ecx = MEM32(ecx * 4 + 0x2C1558);
    PUSH32(esp, esi);
    esi = ZX8(LO8(eax));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    fp_push(MEMF(ecx + esi * 4)); /* fld float */
    MEM8(0x3048C1) = LO8(eax);
    eax = ZX8(LO8(eax));
    MEMF(0x3049A8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x22C1F4)); /* fld float */
    POP32(esp, esi);
    fp_push(MEMF(ecx + eax * 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001BB42; /* jp: parity */

loc_0001BB3C: ;
    MEM8(0x30487C) = LO8(edx);

loc_0001BB42: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001BB50
 * Original: 0x0001BB50 - 0x0001BBB2 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001BB50(void)
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

loc_0001BB50: ;
    fp_push(MEMF(0x30F918)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C15C)); /* fmul dword ptr [0x22c15c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001BBAF; /* je: equal / zero */

loc_0001BB67: ;
    fp_push(MEMF(0x30F918)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0001BBAF; /* jnp: not parity */

loc_0001BB7E: ;
    fp_push(MEMF(0x30D8E4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C15C)); /* fmul dword ptr [0x22c15c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001BBAF; /* je: equal / zero */

loc_0001BB95: ;
    fp_push(MEMF(0x30D8E4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0001BBAF; /* jnp: not parity */

loc_0001BBAC: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0001BBAF: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001BBC0
 * Original: 0x0001BBC0 - 0x0001BBFB (59 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001BBC0(void)
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

loc_0001BBC0: ;
    ecx = ZX8(MEM8(esp + 4));
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    _fa = (uint32_t)(MEM8(eax + 0x30D9CD)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x30D9CD), 0xD (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001BBE1; /* jne: not equal / not zero */

loc_0001BBD3: ;
    SET_LO8(eax, MEM8(eax + 0x30D9CA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x34) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x34 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0001BBE1; /* jb: below (unsigned <) */

loc_0001BBDD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3F (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0001BBF5; /* jbe: below or equal (unsigned <=) */

loc_0001BBE1: ;
    fp_push(MEMF(ecx * 4 + 0x304844)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001BBF8; /* jp: parity */

loc_0001BBF5: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0001BBF8: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001BC00
 * Original: 0x0001BC00 - 0x0001BC94 (148 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001BC00(void)
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

loc_0001BC00: ;
    PUSH32(esp, 0x0001BC05u); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_0001BC05: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    ecx = eax;
    fp_push(MEMF(esp + 4)); /* fld float */
    ecx = ecx & 0x3FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001BC24; /* je: equal / zero */

loc_0001BC22: ;
    fp_top() = -fp_top(); /* fchs */

loc_0001BC24: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001BC3B; /* je: equal / zero */

loc_0001BC39: ;
    fp_top() = -fp_top(); /* fchs */

loc_0001BC3B: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001BC71; /* jne: not equal / not zero */

loc_0001BC48: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001BC65; /* jne: not equal / not zero */

loc_0001BC59: ;
    eax = ecx + 0x2000;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

loc_0001BC65: ;
    eax = ecx + -24576;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

loc_0001BC71: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    eax = ecx + 0x6000;
    if (TEST_Z(_fa, _fb)) goto loc_0001BC8E; /* je: equal / zero */

loc_0001BC88: ;
    eax = ecx + -8192;

loc_0001BC8E: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001BCA0
 * Original: 0x0001BCA0 - 0x0001BD6E (206 bytes, 57 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0001BCA0(void)
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

loc_0001BCA0: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x30AE50)); /* fsub dword ptr [0x30ae50] */
    PUSH32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x30D010)); /* fsub dword ptr [0x30d010] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001BCC5u); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_0001BCC5: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    esi = eax;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x4000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001BCE7; /* je: equal / zero */

loc_0001BCE5: ;
    fp_top() = -fp_top(); /* fchs */

loc_0001BCE7: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001BCFE; /* je: equal / zero */

loc_0001BCFC: ;
    fp_top() = -fp_top(); /* fchs */

loc_0001BCFE: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    PUSH32(esp, 0x4000);
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_0001BDE4(); return; } /* jne: not equal / not zero */

loc_0001BD14: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_0001BD9D(); return; } /* jne: not equal / not zero */

loc_0001BD25: ;
    PUSH32(esp, 0x4000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001BD30u); RECOMP_ABI_CALL(0x00022A50u, sub_00022A50); /* call 0x00022A50 */

loc_0001BD30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0001BE8F(); return; } /* jne: not equal / not zero */

loc_0001BD3B: ;
    fp_push(MEMF(0x22C0D0)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFF8000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x30F918)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x10) - fp_top()); /* fsubr dword ptr [esp + 0x10] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001BD6Au); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_0001BD6A: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x10) / fp_top()); /* fdivr dword ptr [esp + 0x10] */

    g_seh_ebp = ebp; sub_0001BD6E(); return; /* fallthrough 0x0001BD6E */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001BD6E
 * Original: 0x0001BD6E - 0x0001BD9D (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001BD6E(void)
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

loc_0001BD6E: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C0D8)); /* fsub dword ptr [0x22c0d8] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001BD7Du); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_0001BD7D: ;
    ecx = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, 0x0001BD89u); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_0001BD89: ;
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x4000 (32-bit) */
    eax = 0x4000;
    if (CMP_G(_fas, _fbs)) goto loc_0001BD9A; /* jg: greater (signed >) */

loc_0001BD98: ;
    eax = edi;

loc_0001BD9A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001BD9D
 * Original: 0x0001BD9D - 0x0001BEA0 (259 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001BD9D(void)
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

loc_0001BD9D: ;
    PUSH32(esp, 0xC000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001BDA8u); RECOMP_ABI_CALL(0x00022A50u, sub_00022A50); /* call 0x00022A50 */

loc_0001BDA8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001BE8F; /* jne: not equal / not zero */

loc_0001BDB3: ;
    fp_push(MEMF(0x22C0D0)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x30F918)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    fp_top() = -fp_top(); /* fchs */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001BDDEu); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_0001BDDE: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x10) / fp_top()); /* fdivr dword ptr [esp + 0x10] */
    g_seh_ebp = ebp; sub_0001BD6E(); return; /* tail jmp 0x0001BD6E */

    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001BE43; /* jne: not equal / not zero */

loc_0001BDF5: ;
    PUSH32(esp, 0x8000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001BE00u); RECOMP_ABI_CALL(0x00022A50u, sub_00022A50); /* call 0x00022A50 */

loc_0001BE00: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001BE8F; /* jne: not equal / not zero */

loc_0001BE0B: ;
    fp_push(MEMF(0x22C0D0)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x30D8E4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x18) - fp_top()); /* fsubr dword ptr [esp + 0x18] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001BE3Au); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_0001BE3A: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x10) / fp_top()); /* fdivr dword ptr [esp + 0x10] */
    g_seh_ebp = ebp; sub_0001BD6E(); return; /* tail jmp 0x0001BD6E */

loc_0001BE43: ;
    PUSH32(esp, 0x10000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001BE4Eu); RECOMP_ABI_CALL(0x00022A50u, sub_00022A50); /* call 0x00022A50 */

loc_0001BE4E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001BE8F; /* jne: not equal / not zero */

loc_0001BE55: ;
    fp_push(MEMF(0x22C0D0)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    _fb = (uint32_t)(0xFFFFC000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFC000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x30D8E4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    fp_top() = -fp_top(); /* fchs */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001BE86u); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_0001BE86: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x10) / fp_top()); /* fdivr dword ptr [esp + 0x10] */
    g_seh_ebp = ebp; sub_0001BD6E(); return; /* tail jmp 0x0001BD6E */

loc_0001BE8F: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001BDE4
 * Original: 0x0001BDE4 - 0x0001BEA0 (188 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001BDE4(void)
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

loc_0001BDE4: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001BE43; /* jne: not equal / not zero */

loc_0001BDF5: ;
    PUSH32(esp, 0x8000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001BE00u); RECOMP_ABI_CALL(0x00022A50u, sub_00022A50); /* call 0x00022A50 */

loc_0001BE00: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001BE8F; /* jne: not equal / not zero */

loc_0001BE0B: ;
    fp_push(MEMF(0x22C0D0)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x30D8E4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x18) - fp_top()); /* fsubr dword ptr [esp + 0x18] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001BE3Au); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_0001BE3A: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x10) / fp_top()); /* fdivr dword ptr [esp + 0x10] */
    g_seh_ebp = ebp; sub_0001BD6E(); return; /* tail jmp 0x0001BD6E */

loc_0001BE43: ;
    PUSH32(esp, 0x10000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001BE4Eu); RECOMP_ABI_CALL(0x00022A50u, sub_00022A50); /* call 0x00022A50 */

loc_0001BE4E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001BE8F; /* jne: not equal / not zero */

loc_0001BE55: ;
    fp_push(MEMF(0x22C0D0)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    _fb = (uint32_t)(0xFFFFC000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFC000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x30D8E4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    fp_top() = -fp_top(); /* fchs */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001BE86u); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_0001BE86: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x10) / fp_top()); /* fdivr dword ptr [esp + 0x10] */
    g_seh_ebp = ebp; sub_0001BD6E(); return; /* tail jmp 0x0001BD6E */

loc_0001BE8F: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001BE8F
 * Original: 0x0001BE8F - 0x0001BEA0 (17 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001BE8F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001BE8F: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0001BEA0
 * Original: 0x0001BEA0 - 0x0001C036 (406 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001BEA0(void)
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

loc_0001BEA0: ;
    SET_LO8(eax, MEM8(0x30485C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(0x307604)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(0x307604) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001BEF3; /* je: equal / zero */

loc_0001BEAD: ;
    MEM32(0x30499C) = 0;
    MEM32(0x3049E8) = 0;
    MEM32(0x30480C) = 0;
    MEM32(0x304870) = 0x18E3;
    MEM32(0x304824) = 0;
    MEM32(0x304B88) = 0;
    MEM32(0x304814) = 0x41080000;

loc_0001BEF3: ;
    eax = ZX8(MEM8(esp + 4));
    fp_push(MEMF(0x30499C)); /* fld float */
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax * 4 + 0x3049B8)); /* fadd dword ptr [eax*4 + 0x3049b8] */
    MEMF(0x3047F8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3049E8)); /* fld float */
    PUSH32(esp, 0x40E00000);
    PUSH32(esp, 0xC0E00000u);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x30D9A8)); /* fadd dword ptr [ecx + 0x30d9a8] */
    PUSH32(esp, 0x3047F8);
    MEMF(0x304828) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x30480C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax * 4 + 0x30490C)); /* fadd dword ptr [eax*4 + 0x30490c] */
    MEMF(0x304808) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001BF49u); RECOMP_ABI_CALL(0x00022A20u, sub_00022A20); /* call 0x00022A20 */

loc_0001BF49: ;
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0xC1080000u);
    PUSH32(esp, 0x304808);
    PUSH32(esp, 0x0001BF5Du); RECOMP_ABI_CALL(0x00022A20u, sub_00022A20); /* call 0x00022A20 */

loc_0001BF5D: ;
    edx = MEM32(0x3047F8);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3048BC);
    PUSH32(esp, 0x0001BF7Du); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001BF7D: ;
    eax = MEM32(0x304828);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3048F4);
    PUSH32(esp, 0x0001BF99u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001BF99: ;
    ecx = MEM32(0x304808);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x304840);
    PUSH32(esp, 0x0001BFBCu); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001BFBC: ;
    edx = MEM32(0x304870);
    PUSH32(esp, 0x16C);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3049F8);
    PUSH32(esp, 0x0001BFD6u); RECOMP_ABI_CALL(0x000232E0u, sub_000232E0); /* call 0x000232E0 */

loc_0001BFD6: ;
    eax = MEM32(0x304824);
    PUSH32(esp, 0x16C);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x304944);
    PUSH32(esp, 0x0001BFEFu); RECOMP_ABI_CALL(0x000232E0u, sub_000232E0); /* call 0x000232E0 */

loc_0001BFEF: ;
    ecx = MEM32(0x304B88);
    PUSH32(esp, 0x16C);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x304BA4);
    PUSH32(esp, 0x0001C009u); RECOMP_ABI_CALL(0x000232E0u, sub_000232E0); /* call 0x000232E0 */

loc_0001C009: ;
    edx = MEM32(0x304814);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3048C4);
    PUSH32(esp, 0x0001C029u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001C029: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001C031u); RECOMP_ABI_CALL(0x0001BAD0u, sub_0001BAD0); /* call 0x0001BAD0 */

loc_0001C031: ;
    g_seh_ebp = ebp; sub_00023470(); return; /* tail jmp 0x00023470 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001C040
 * Original: 0x0001C040 - 0x0001C1AE (366 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001C040(void)
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

loc_0001C040: ;
    SET_LO8(eax, MEM8(0x30485C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(0x307604)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(0x307604) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001C093; /* je: equal / zero */

loc_0001C04D: ;
    MEM32(0x30499C) = 0;
    MEM32(0x3049E8) = 0x3FB33333;
    MEM32(0x30480C) = 0;
    MEM32(0x304870) = 0xE38;
    MEM32(0x304824) = 0;
    MEM32(0x304B88) = 0;
    MEM32(0x304814) = 0x40600000;

loc_0001C093: ;
    eax = ZX8(MEM8(esp + 4));
    fp_push(MEMF(0x30499C)); /* fld float */
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax * 4 + 0x3049B8)); /* fadd dword ptr [eax*4 + 0x3049b8] */
    MEMF(0x3047F8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3049E8)); /* fld float */
    edx = MEM32(0x3047F8);
    PUSH32(esp, 0x3F000000);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x30D9A8)); /* fadd dword ptr [ecx + 0x30d9a8] */
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, edx);
    MEMF(0x304828) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x3048BC);
    fp_push(MEMF(0x30480C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax * 4 + 0x30490C)); /* fadd dword ptr [eax*4 + 0x30490c] */
    MEMF(0x304808) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001C0F5u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001C0F5: ;
    eax = MEM32(0x304828);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3048F4);
    PUSH32(esp, 0x0001C114u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001C114: ;
    ecx = MEM32(0x304808);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x304840);
    PUSH32(esp, 0x0001C134u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001C134: ;
    edx = MEM32(0x304870);
    PUSH32(esp, 0x16C);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3049F8);
    PUSH32(esp, 0x0001C14Eu); RECOMP_ABI_CALL(0x000232E0u, sub_000232E0); /* call 0x000232E0 */

loc_0001C14E: ;
    eax = MEM32(0x304824);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x16C);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x304944);
    PUSH32(esp, 0x0001C16Au); RECOMP_ABI_CALL(0x000232E0u, sub_000232E0); /* call 0x000232E0 */

loc_0001C16A: ;
    ecx = MEM32(0x304B88);
    PUSH32(esp, 0x16C);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x304BA4);
    PUSH32(esp, 0x0001C184u); RECOMP_ABI_CALL(0x000232E0u, sub_000232E0); /* call 0x000232E0 */

loc_0001C184: ;
    edx = MEM32(0x304814);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3048C4);
    PUSH32(esp, 0x0001C1A1u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001C1A1: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001C1A9u); RECOMP_ABI_CALL(0x0001BAD0u, sub_0001BAD0); /* call 0x0001BAD0 */

loc_0001C1A9: ;
    g_seh_ebp = ebp; sub_00023470(); return; /* tail jmp 0x00023470 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001C1B0
 * Original: 0x0001C1B0 - 0x0001C361 (433 bytes, 93 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001C1B0(void)
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

loc_0001C1B0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x30485C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(0x307604)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(0x307604) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001C232; /* jne: not equal / not zero */

loc_0001C1BE: ;
    _fa = (uint32_t)(MEM16(0x3047B8)) & 0xFFFFu; _fb = (uint32_t)(0x258) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x3047B8), 0x258 (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0001C232; /* jg: greater (signed >) */

loc_0001C1C9: ;
    MEM16(0x3047B8) = MEM16(0x3047B8) + 1;
    _fa = (uint32_t)(MEM16(0x3047B8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0001C1D5u); RECOMP_ABI_CALL(0x00023380u, sub_00023380); /* call 0x00023380 */

loc_0001C1D5: ;
    PUSH32(esp, 0x0001C1DAu); RECOMP_ABI_CALL(0x00022270u, sub_00022270); /* call 0x00022270 */

loc_0001C1DA: ;
    PUSH32(esp, 0x0001C1DFu); RECOMP_ABI_CALL(0x0001B8A0u, sub_0001B8A0); /* call 0x0001B8A0 */

loc_0001C1DF: ;
    ecx = MEM32(0x304824);
    PUSH32(esp, 0x38E);
    PUSH32(esp, 0x1E0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x304944);
    PUSH32(esp, 0x0001C1FCu); RECOMP_ABI_CALL(0x000232E0u, sub_000232E0); /* call 0x000232E0 */

loc_0001C1FC: ;
    edx = MEM32(0x304814);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x43960000);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3048C4);
    PUSH32(esp, 0x0001C219u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001C219: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001C221u); RECOMP_ABI_CALL(0x0001B940u, sub_0001B940); /* call 0x0001B940 */

loc_0001C221: ;
    PUSH32(esp, 0x0001C226u); RECOMP_ABI_CALL(0x0001B960u, sub_0001B960); /* call 0x0001B960 */

loc_0001C226: ;
    PUSH32(esp, 0x0001C22Bu); RECOMP_ABI_CALL(0x0001BAD0u, sub_0001BAD0); /* call 0x0001BAD0 */

loc_0001C22B: ;
    PUSH32(esp, 0x0001C230u); RECOMP_ABI_CALL(0x00023470u, sub_00023470); /* call 0x00023470 */

loc_0001C230: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0001C232: ;
    eax = ZX8(MEM8(0x30D9A1));
    ecx = ZX8(MEM8(0x30D9A2));
    eax = eax + eax * 8;
    eax = (uint32_t)(int32_t)SMEM8(eax + ecx + 0x2C15D8);
    ecx = ZX8(MEM8(0x30D9FA));
    edx = eax + eax * 2;
    eax = ZX8(MEM8(0x30D9F9));
    eax = eax + eax * 8;
    eax = (uint32_t)(int32_t)SMEM8(eax + ecx + 0x2C15D8);
    ecx = eax + edx * 4;
    MEM16(0x3047B8) = 0;
    fp_push(MEMF(ecx * 4 + 0x2C1658)); /* fld float */
    MEMF(0x304780) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001C285u); RECOMP_ABI_CALL(0x00022140u, sub_00022140); /* call 0x00022140 */

loc_0001C285: ;
    fp_push(MEMF(0x304780)); /* fld float */
    MEM8(0x316FF4) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C164)); /* fadd dword ptr [0x22c164] */
    MEMF(0x3048C4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x304780)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C1B8)); /* fsub dword ptr [0x22c1b8] */
    MEMF(0x304814) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001C2B5u); RECOMP_ABI_CALL(0x0001B880u, sub_0001B880); /* call 0x0001B880 */

loc_0001C2B5: ;
    PUSH32(esp, 0x0001C2BAu); RECOMP_ABI_CALL(0x0001B920u, sub_0001B920); /* call 0x0001B920 */

loc_0001C2BA: ;
    PUSH32(esp, 0x0001C2BFu); RECOMP_ABI_CALL(0x0001B930u, sub_0001B930); /* call 0x0001B930 */

loc_0001C2BF: ;
    PUSH32(esp, 0x0001C2C4u); RECOMP_ABI_CALL(0x0001B980u, sub_0001B980); /* call 0x0001B980 */

loc_0001C2C4: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001C301; /* jne: not equal / not zero */

loc_0001C2CD: ;
    PUSH32(esp, 0x0001C2D2u); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_0001C2D2: ;
    PUSH32(esp, 4);
    edx = esp + 4;
    PUSH32(esp, edx);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x0001C2E2u); RECOMP_ABI_CALL(0x001CEEC3u, sub_001CEEC3); /* call 0x001CEEC3 */

loc_0001C2E2: ;
    eax = MEM32(esp);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xC000;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(0x304944);
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304944) = eax;
    goto loc_0001C32F;

loc_0001C301: ;
    SET_LO8(edx, MEM8(0x30485C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(0x307604)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(0x307604) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001C32F; /* jne: not equal / not zero */

loc_0001C30F: ;
    PUSH32(esp, 0x471C);
    PUSH32(esp, 0x38E3);
    PUSH32(esp, 0x0001C31Eu); RECOMP_ABI_CALL(0x00022740u, sub_00022740); /* call 0x00022740 */

loc_0001C31E: ;
    ecx = MEM32(0x304944);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304944) = ecx;

loc_0001C32F: ;
    eax = MEM32(0x304944);
    MEM32(0x304824) = eax;
    _fb = (uint32_t)(0x2AAA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2AAA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304944) = eax;
    MEM16(0x304826) = 0;
    MEM16(0x304946) = 0;
    PUSH32(esp, 0x0001C35Au); RECOMP_ABI_CALL(0x0001BAD0u, sub_0001BAD0); /* call 0x0001BAD0 */

loc_0001C35A: ;
    PUSH32(esp, 0x0001C35Fu); RECOMP_ABI_CALL(0x00023470u, sub_00023470); /* call 0x00023470 */

loc_0001C35F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001C370
 * Original: 0x0001C370 - 0x0001C4A1 (305 bytes, 72 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0001C370(void)
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

loc_0001C370: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x6E9A90;

loc_0001C378: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001C38A; /* jne: not equal / not zero */

loc_0001C37F: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E9B40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6E9B40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001C378; /* jl: less (signed <) */

loc_0001C38A: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x6E9B6C));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001C3A6; /* jne: not equal / not zero */

loc_0001C396: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    _fa = (uint32_t)(MEM16(eax + 0x6E9AB0)) & 0xFFFFu; _fb = (uint32_t)(0xE000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x6E9AB0), 0xE000 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001C3C1; /* jge: greater or equal (signed >=) */

loc_0001C3A6: ;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x22C210)); /* fmul qword ptr [0x22c210] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C20C)); /* fmul dword ptr [0x22c20c] */
    PUSH32(esp, 0x0001C3BBu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0001C3BB: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x30AA68) = MEM32(0x30AA68) + eax;
    _fa = (uint32_t)(MEM32(0x30AA68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001C3C1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001C3D6; /* jne: not equal / not zero */

loc_0001C3C6: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    _fa = (uint32_t)(MEM16(ecx + 0x6E9AB0)) & 0xFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x6E9AB0), 0x2000 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0001C3F1; /* jle: less or equal (signed <=) */

loc_0001C3D6: ;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x22C210)); /* fmul qword ptr [0x22c210] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C208)); /* fmul dword ptr [0x22c208] */
    PUSH32(esp, 0x0001C3EBu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0001C3EB: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x30AA68) = MEM32(0x30AA68) + eax;
    _fa = (uint32_t)(MEM32(0x30AA68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001C3F1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    MEM16(0x30AA6A) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0001C41A; /* je: equal / zero */

loc_0001C3FF: ;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x22C200)); /* fmul qword ptr [0x22c200] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C20C)); /* fmul dword ptr [0x22c20c] */
    PUSH32(esp, 0x0001C414u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0001C414: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x30DABC) = MEM32(0x30DABC) + eax;
    _fa = (uint32_t)(MEM32(0x30DABC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001C41A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0001C43B; /* je: equal / zero */

loc_0001C420: ;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x22C200)); /* fmul qword ptr [0x22c200] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C208)); /* fmul dword ptr [0x22c208] */
    PUSH32(esp, 0x0001C435u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0001C435: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x30DABC) = MEM32(0x30DABC) + eax;
    _fa = (uint32_t)(MEM32(0x30DABC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001C43B: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    SET_LO16(esi, MEM16(esi + 0x6E9AB2));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0x2000 (16-bit) */
    MEM16(0x30DABE) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0001C482; /* jle: less or equal (signed <=) */

loc_0001C455: ;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x22C1F8)); /* fmul qword ptr [0x22c1f8] */
    fp_top() = RECOMP_FP_PC(MEMF(0x3048C4) - fp_top()); /* fsubr dword ptr [0x3048c4] */
    MEMF(0x3048C4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001C482; /* jp: parity */

loc_0001C478: ;
    MEM32(0x3048C4) = 0x3F000000;

loc_0001C482: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0xE000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0xE000 (16-bit) */
    POP32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_0001C4A0; /* jge: greater or equal (signed >=) */

loc_0001C48A: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x22C1F8)); /* fmul qword ptr [0x22c1f8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3048C4)); /* fadd dword ptr [0x3048c4] */
    MEMF(0x3048C4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001C4A0: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001C4B0
 * Original: 0x0001C4B0 - 0x0001C57F (207 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001C4B0(void)
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

loc_0001C4B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0001C4B7u); RECOMP_ABI_CALL(0x0001BBC0u, sub_0001BBC0); /* call 0x0001BBC0 */

loc_0001C4B7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001C4CD; /* jne: not equal / not zero */

loc_0001C4BE: ;
    eax = MEM32(0x30490C);
    ecx = MEM32(0x3049B8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    goto loc_0001C4E8;

loc_0001C4CD: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0001C4D4u); RECOMP_ABI_CALL(0x0001BBC0u, sub_0001BBC0); /* call 0x0001BBC0 */

loc_0001C4D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001C541; /* jne: not equal / not zero */

loc_0001C4DB: ;
    edx = MEM32(0x304910);
    eax = MEM32(0x3049BC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);

loc_0001C4E8: ;
    PUSH32(esp, 0x0001C4EDu); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_0001C4ED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x304824) = eax;
    MEM16(0x304826) = 0;

loc_0001C503: ;
    eax = MEM32(0x304824);

loc_0001C508: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x2D8);
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x304944);
    PUSH32(esp, 0x0001C51Fu); RECOMP_ABI_CALL(0x000232E0u, sub_000232E0); /* call 0x000232E0 */

loc_0001C51F: ;
    eax = MEM32(0x304824);
    _fb = (uint32_t)(MEM32(0x304944)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x304944);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x38E) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x38E (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0001C540; /* jg: greater (signed >) */

loc_0001C533: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFC72) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFC72 (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001C540; /* jl: less (signed <) */

loc_0001C539: ;
    MEM8(0x3049EC) = 0;

loc_0001C540: ;
    esp += 4; return; /* ret */

loc_0001C541: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C218)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c218] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001C503; /* jne: not equal / not zero */

loc_0001C554: ;
    SET_LO8(eax, MEM8(0x316FF4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(0x30F910);
    if (CMP_NE(_fa, _fb)) goto loc_0001C56E; /* jne: not equal / not zero */

loc_0001C562: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x304824) = eax;
    goto loc_0001C508;

loc_0001C56E: ;
    _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFF8000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x304824) = eax;
    goto loc_0001C508;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001C580
 * Original: 0x0001C580 - 0x0001C6AA (298 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001C580(void)
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

loc_0001C580: ;
    SET_LO8(eax, MEM8(0x30485C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(0x307604)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(0x307604) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001C59B; /* je: equal / zero */

loc_0001C58D: ;
    MEM8(0x3049EC) = 0;
    MEM8(0x304968) = 0;

loc_0001C59B: ;
    PUSH32(esp, 0x0001C5A0u); RECOMP_ABI_CALL(0x00022270u, sub_00022270); /* call 0x00022270 */

loc_0001C5A0: ;
    PUSH32(esp, 0x304814);
    PUSH32(esp, 0x0001C5AAu); RECOMP_ABI_CALL(0x00022CB0u, sub_00022CB0); /* call 0x00022CB0 */

loc_0001C5AA: ;
    ecx = MEM32(0x304780);
    PUSH32(esp, 0x41700000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x304814);
    PUSH32(esp, 0x0001C5C0u); RECOMP_ABI_CALL(0x00022A20u, sub_00022A20); /* call 0x00022A20 */

loc_0001C5C0: ;
    fp_push(MEMF(0x304814)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3048C4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3048c4] */
    SET_LO8(eax, MEM8(0x304968));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    PUSH32(esp, 0x3F800000);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    if (CMP_NE(_fa, _fb)) goto loc_0001C5FA; /* jne: not equal / not zero */

loc_0001C5DF: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    PUSH32(esp, 0x41800000);
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001C5ED; /* jp: parity */

loc_0001C5E9: ;
    PUSH32(esp, 0);
    goto loc_0001C614;

loc_0001C5ED: ;
    eax = MEM32(0x304814);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, eax);
    goto loc_0001C61B;

loc_0001C5FA: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    PUSH32(esp, 0x41000000);
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001C60F; /* jp: parity */

loc_0001C604: ;
    ecx = MEM32(0x304814);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    goto loc_0001C61B;

loc_0001C60F: ;
    PUSH32(esp, 0x3E800000);

loc_0001C614: ;
    edx = MEM32(0x304814);
    PUSH32(esp, edx);

loc_0001C61B: ;
    PUSH32(esp, 0x3048C4);
    PUSH32(esp, 0x0001C625u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001C625: ;
    fp_push(MEMF(0x304814)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x3048C4)); /* fsub dword ptr [0x3048c4] */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C220)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x22c220] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001C657; /* jp: parity */

loc_0001C641: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C21C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c21c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001C659; /* jne: not equal / not zero */

loc_0001C64E: ;
    MEM8(0x304968) = 0;
    goto loc_0001C659;

loc_0001C657: ;
    fp_pop(); /* fstp st(0) */

loc_0001C659: ;
    PUSH32(esp, 0x0001C65Eu); RECOMP_ABI_CALL(0x0001B8A0u, sub_0001B8A0); /* call 0x0001B8A0 */

loc_0001C65E: ;
    SET_LO8(eax, MEM8(0x316FF4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(0x3049CC)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(0x3049CC) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001C679; /* je: equal / zero */

loc_0001C66B: ;
    MEM8(0x3049EC) = 1;
    PUSH32(esp, 0x38E);
    goto loc_0001C68E;

loc_0001C679: ;
    _fa = (uint32_t)(MEM8(0x3049EC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3049EC), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001C689; /* jne: not equal / not zero */

loc_0001C682: ;
    PUSH32(esp, 0x38E);
    goto loc_0001C68E;

loc_0001C689: ;
    PUSH32(esp, 0xAAA);

loc_0001C68E: ;
    PUSH32(esp, 0x0001C693u); RECOMP_ABI_CALL(0x0001C4B0u, sub_0001C4B0); /* call 0x0001C4B0 */

loc_0001C693: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001C69Bu); RECOMP_ABI_CALL(0x0001B940u, sub_0001B940); /* call 0x0001B940 */

loc_0001C69B: ;
    PUSH32(esp, 0x0001C6A0u); RECOMP_ABI_CALL(0x0001B960u, sub_0001B960); /* call 0x0001B960 */

loc_0001C6A0: ;
    PUSH32(esp, 0x0001C6A5u); RECOMP_ABI_CALL(0x0001BAD0u, sub_0001BAD0); /* call 0x0001BAD0 */

loc_0001C6A5: ;
    g_seh_ebp = ebp; sub_00023470(); return; /* tail jmp 0x00023470 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001C6B0
 * Original: 0x0001C6B0 - 0x0001C7D5 (293 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001C6B0(void)
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

loc_0001C6B0: ;
    _fa = (uint32_t)(MEM8(0x3049C2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3049C2), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001C75A; /* jne: not equal / not zero */

loc_0001C6BD: ;
    PUSH32(esp, 0x0001C6C2u); RECOMP_ABI_CALL(0x0001B980u, sub_0001B980); /* call 0x0001B980 */

loc_0001C6C2: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x0001C6C9u); RECOMP_ABI_CALL(0x000224C0u, sub_000224C0); /* call 0x000224C0 */

loc_0001C6C9: ;
    edx = MEM32(0x304788);
    ecx = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x30486C) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_0001C6E3; /* jg: greater (signed >) */

loc_0001C6DF: ;
    ecx = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0001C6E3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAAA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xAAA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001C72D; /* jge: greater or equal (signed >=) */

loc_0001C6EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31C7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x31C7 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0001C700; /* jg: greater (signed >) */

loc_0001C6F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18E3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18E3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0001C707; /* jle: less or equal (signed <=) */

loc_0001C6F9: ;
    eax = 0x11C7;
    goto loc_0001C728;

loc_0001C700: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18E3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18E3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0001C715; /* jg: greater (signed >) */

loc_0001C707: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x38E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x38E (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0001C71C; /* jle: less or equal (signed <=) */

loc_0001C70E: ;
    eax = 0xFFFFF8E4u;
    goto loc_0001C728;

loc_0001C715: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x38E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x38E (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0001C72D; /* jg: greater (signed >) */

loc_0001C71C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF556u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFF556u (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0001C72D; /* jle: less or equal (signed <=) */

loc_0001C723: ;
    eax = 0x71C;

loc_0001C728: ;
    MEM32(0x30486C) = eax;

loc_0001C72D: ;
    MEM32(0x304788) = eax;
    PUSH32(esp, 0x0001C737u); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_0001C737: ;
    ecx = MEM32(0x304944);
    eax = eax & 0x7FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x40D) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x40D;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xE);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304A1C) = eax;
    MEM16(0x304A1E) = 0;

loc_0001C75A: ;
    PUSH32(esp, 0x0001C75Fu); RECOMP_ABI_CALL(0x00023380u, sub_00023380); /* call 0x00023380 */

loc_0001C75F: ;
    PUSH32(esp, 0x0001C764u); RECOMP_ABI_CALL(0x00022270u, sub_00022270); /* call 0x00022270 */

loc_0001C764: ;
    PUSH32(esp, 0x0001C769u); RECOMP_ABI_CALL(0x0001B880u, sub_0001B880); /* call 0x0001B880 */

loc_0001C769: ;
    eax = MEM32(0x304A1C);
    ecx = MEM32(0x30486C);
    PUSH32(esp, 0x304814);
    MEM32(0x304944) = eax;
    MEM32(0x3049F8) = ecx;
    PUSH32(esp, 0x0001C789u); RECOMP_ABI_CALL(0x00022CB0u, sub_00022CB0); /* call 0x00022CB0 */

loc_0001C789: ;
    fp_push(MEMF(0x304780)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C1B8)); /* fsub dword ptr [0x22c1b8] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x41700000);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x304814);
    PUSH32(esp, 0x0001C7ABu); RECOMP_ABI_CALL(0x00022A20u, sub_00022A20); /* call 0x00022A20 */

loc_0001C7AB: ;
    edx = MEM32(0x304814);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3048C4);
    PUSH32(esp, 0x0001C7C8u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001C7C8: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001C7D0u); RECOMP_ABI_CALL(0x0001BAD0u, sub_0001BAD0); /* call 0x0001BAD0 */

loc_0001C7D0: ;
    g_seh_ebp = ebp; sub_00023470(); return; /* tail jmp 0x00023470 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001C7E0
 * Original: 0x0001C7E0 - 0x0001C966 (390 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001C7E0(void)
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

loc_0001C7E0: ;
    _fa = (uint32_t)(MEM8(0x3049C2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3049C2), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001C892; /* jne: not equal / not zero */

loc_0001C7ED: ;
    PUSH32(esp, 0x0001C7F2u); RECOMP_ABI_CALL(0x0001B980u, sub_0001B980); /* call 0x0001B980 */

loc_0001C7F2: ;
    PUSH32(esp, 0x2000);
    PUSH32(esp, 0xFFFFF556u);
    PUSH32(esp, 0x0001C801u); RECOMP_ABI_CALL(0x00022740u, sub_00022740); /* call 0x00022740 */

loc_0001C801: ;
    edx = MEM32(0x304788);
    ecx = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x30486C) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_0001C81B; /* jg: greater (signed >) */

loc_0001C817: ;
    ecx = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0001C81B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAAA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xAAA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001C865; /* jge: greater or equal (signed >=) */

loc_0001C823: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2000 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0001C838; /* jg: greater (signed >) */

loc_0001C82A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18E3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18E3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0001C83F; /* jle: less or equal (signed <=) */

loc_0001C831: ;
    eax = 0xAAA;
    goto loc_0001C860;

loc_0001C838: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18E3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18E3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0001C84D; /* jg: greater (signed >) */

loc_0001C83F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x38E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x38E (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0001C854; /* jle: less or equal (signed <=) */

loc_0001C846: ;
    eax = 0xFFFFF8E4u;
    goto loc_0001C860;

loc_0001C84D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x38E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x38E (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0001C865; /* jg: greater (signed >) */

loc_0001C854: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF556u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFF556u (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0001C865; /* jle: less or equal (signed <=) */

loc_0001C85B: ;
    eax = 0x71C;

loc_0001C860: ;
    MEM32(0x30486C) = eax;

loc_0001C865: ;
    MEM32(0x304788) = eax;
    PUSH32(esp, 0x0001C86Fu); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_0001C86F: ;
    ecx = MEM32(0x304944);
    eax = eax & 0x7FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x40D) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x40D;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xE);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304A1C) = eax;
    MEM16(0x304A1E) = 0;

loc_0001C892: ;
    PUSH32(esp, 0x0001C897u); RECOMP_ABI_CALL(0x00023380u, sub_00023380); /* call 0x00023380 */

loc_0001C897: ;
    PUSH32(esp, 0x0001C89Cu); RECOMP_ABI_CALL(0x00022270u, sub_00022270); /* call 0x00022270 */

loc_0001C89C: ;
    PUSH32(esp, 0x0001C8A1u); RECOMP_ABI_CALL(0x0001B880u, sub_0001B880); /* call 0x0001B880 */

loc_0001C8A1: ;
    eax = ZX8(MEM8(esp + 4));
    ecx = eax + eax * 2;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_push(MEMF(ecx + 0x30C25C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x30C310)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x30c310] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001C8C7; /* jne: not equal / not zero */

loc_0001C8BF: ;
    fp_push(MEMF(ecx + 0x30C25C)); /* fld float */
    goto loc_0001C8CD;

loc_0001C8C7: ;
    fp_push(MEMF(ecx + 0x30C310)); /* fld float */

loc_0001C8CD: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C224)); /* fsub dword ptr [0x22c224] */
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3048F4);
    MEMF(0x3048F4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001C8EDu); RECOMP_ABI_CALL(0x00022A20u, sub_00022A20); /* call 0x00022A20 */

loc_0001C8ED: ;
    eax = MEM32(0x304A1C);
    ecx = MEM32(0x30486C);
    PUSH32(esp, 0x304814);
    MEM32(0x304944) = eax;
    MEM32(0x3049F8) = ecx;
    PUSH32(esp, 0x0001C90Du); RECOMP_ABI_CALL(0x00022CB0u, sub_00022CB0); /* call 0x00022CB0 */

loc_0001C90D: ;
    ecx = MEM32(0x30486C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001C91Bu); RECOMP_ABI_CALL(0x0006A110u, sub_0006A110); /* call 0x0006A110 */

loc_0001C91B: ;
    edx = MEM32(0x304780);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x304814)); /* fmul dword ptr [0x304814] */
    PUSH32(esp, 0x41700000);
    PUSH32(esp, edx);
    MEMF(0x304814) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x304814);
    PUSH32(esp, 0x0001C93Du); RECOMP_ABI_CALL(0x00022A20u, sub_00022A20); /* call 0x00022A20 */

loc_0001C93D: ;
    eax = MEM32(0x304814);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3048C4);
    PUSH32(esp, 0x0001C959u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001C959: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001C961u); RECOMP_ABI_CALL(0x0001BAD0u, sub_0001BAD0); /* call 0x0001BAD0 */

loc_0001C961: ;
    g_seh_ebp = ebp; sub_00023470(); return; /* tail jmp 0x00023470 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001C970
 * Original: 0x0001C970 - 0x0001CAB7 (327 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001C970(void)
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

loc_0001C970: ;
    _fa = (uint32_t)(MEM8(0x3049C2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3049C2), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001C9D6; /* jne: not equal / not zero */

loc_0001C979: ;
    PUSH32(esp, 0x0001C97Eu); RECOMP_ABI_CALL(0x0001B980u, sub_0001B980); /* call 0x0001B980 */

loc_0001C97E: ;
    edi = edi;

loc_0001C980: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0001C987u); RECOMP_ABI_CALL(0x000224C0u, sub_000224C0); /* call 0x000224C0 */

loc_0001C987: ;
    edx = MEM32(0x304788);
    ecx = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x30486C) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_0001C9A1; /* jg: greater (signed >) */

loc_0001C99D: ;
    ecx = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0001C9A1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x271C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x271C (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0001C980; /* jg: greater (signed >) */

loc_0001C9A9: ;
    MEM32(0x304788) = eax;
    PUSH32(esp, 0x0001C9B3u); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_0001C9B3: ;
    ecx = MEM32(0x304944);
    eax = eax & 0x7FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x40D) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x40D;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xE);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304A1C) = eax;
    MEM16(0x304A1E) = 0;

loc_0001C9D6: ;
    PUSH32(esp, 0x0001C9DBu); RECOMP_ABI_CALL(0x00023380u, sub_00023380); /* call 0x00023380 */

loc_0001C9DB: ;
    PUSH32(esp, 0x0001C9E0u); RECOMP_ABI_CALL(0x00022270u, sub_00022270); /* call 0x00022270 */

loc_0001C9E0: ;
    PUSH32(esp, 0x0001C9E5u); RECOMP_ABI_CALL(0x0001B880u, sub_0001B880); /* call 0x0001B880 */

loc_0001C9E5: ;
    eax = ZX8(MEM8(esp + 4));
    ecx = eax + eax * 2;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_push(MEMF(ecx + 0x30C25C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x30C310)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x30c310] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001CA0B; /* jne: not equal / not zero */

loc_0001CA03: ;
    fp_push(MEMF(ecx + 0x30C25C)); /* fld float */
    goto loc_0001CA11;

loc_0001CA0B: ;
    fp_push(MEMF(ecx + 0x30C310)); /* fld float */

loc_0001CA11: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C0D0)); /* fsub dword ptr [0x22c0d0] */
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3048F4);
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C22C)); /* fmul dword ptr [0x22c22c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    MEMF(0x3048F4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001CA41u); RECOMP_ABI_CALL(0x00022A20u, sub_00022A20); /* call 0x00022A20 */

loc_0001CA41: ;
    eax = MEM32(0x304A1C);
    ecx = MEM32(0x30486C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304944) = eax;
    MEM32(0x3049F8) = ecx;
    PUSH32(esp, 0x0001CA5Fu); RECOMP_ABI_CALL(0x0006A110u, sub_0006A110); /* call 0x0006A110 */

loc_0001CA5F: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    ecx = MEM32(0x304780);
    PUSH32(esp, 0x41700000);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C228)); /* fmul dword ptr [0x22c228] */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x304814);
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    MEMF(0x304814) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001CA8Du); RECOMP_ABI_CALL(0x00022A20u, sub_00022A20); /* call 0x00022A20 */

loc_0001CA8D: ;
    edx = MEM32(0x304814);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3048C4);
    PUSH32(esp, 0x0001CAAAu); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001CAAA: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001CAB2u); RECOMP_ABI_CALL(0x0001BAD0u, sub_0001BAD0); /* call 0x0001BAD0 */

loc_0001CAB2: ;
    g_seh_ebp = ebp; sub_00023470(); return; /* tail jmp 0x00023470 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001CAC0
 * Original: 0x0001CAC0 - 0x0001CB6F (175 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001CAC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001CAC0: ;
    _fa = (uint32_t)(MEM8(0x3049C2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3049C2), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001CB01; /* jne: not equal / not zero */

loc_0001CAC9: ;
    PUSH32(esp, 0x2AAA);
    PUSH32(esp, 0x11C7);
    PUSH32(esp, 0x0001CAD8u); RECOMP_ABI_CALL(0x00022740u, sub_00022740); /* call 0x00022740 */

loc_0001CAD8: ;
    MEM32(0x30486C) = eax;
    PUSH32(esp, 0x0001CAE2u); RECOMP_ABI_CALL(0x0001B980u, sub_0001B980); /* call 0x0001B980 */

loc_0001CAE2: ;
    PUSH32(esp, 0x38E3);
    PUSH32(esp, 0xFFFFC71Du);
    PUSH32(esp, 0x0001CAF1u); RECOMP_ABI_CALL(0x00022740u, sub_00022740); /* call 0x00022740 */

loc_0001CAF1: ;
    ecx = MEM32(0x304944);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304A1C) = eax;

loc_0001CB01: ;
    PUSH32(esp, 0x0001CB06u); RECOMP_ABI_CALL(0x00023380u, sub_00023380); /* call 0x00023380 */

loc_0001CB06: ;
    PUSH32(esp, 0x0001CB0Bu); RECOMP_ABI_CALL(0x00022270u, sub_00022270); /* call 0x00022270 */

loc_0001CB0B: ;
    PUSH32(esp, 0x0001CB10u); RECOMP_ABI_CALL(0x0001B880u, sub_0001B880); /* call 0x0001B880 */

loc_0001CB10: ;
    eax = MEM32(0x304A1C);
    ecx = MEM32(0x30486C);
    PUSH32(esp, 0x304814);
    MEM32(0x304944) = eax;
    MEM32(0x3049F8) = ecx;
    PUSH32(esp, 0x0001CB30u); RECOMP_ABI_CALL(0x00022CB0u, sub_00022CB0); /* call 0x00022CB0 */

loc_0001CB30: ;
    edx = MEM32(0x304780);
    PUSH32(esp, 0x41700000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x304814);
    PUSH32(esp, 0x0001CB46u); RECOMP_ABI_CALL(0x00022A20u, sub_00022A20); /* call 0x00022A20 */

loc_0001CB46: ;
    eax = MEM32(0x304814);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3048C4);
    PUSH32(esp, 0x0001CB62u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001CB62: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001CB6Au); RECOMP_ABI_CALL(0x0001BAD0u, sub_0001BAD0); /* call 0x0001BAD0 */

loc_0001CB6A: ;
    g_seh_ebp = ebp; sub_00023470(); return; /* tail jmp 0x00023470 */

}

/**
 * sub_0001CB70
 * Original: 0x0001CB70 - 0x0001CC1E (174 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001CB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001CB70: ;
    _fa = (uint32_t)(MEM8(0x3049C2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3049C2), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001CBA9; /* jne: not equal / not zero */

loc_0001CB79: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x0001CB80u); RECOMP_ABI_CALL(0x000224C0u, sub_000224C0); /* call 0x000224C0 */

loc_0001CB80: ;
    MEM32(0x30486C) = eax;
    PUSH32(esp, 0x0001CB8Au); RECOMP_ABI_CALL(0x0001B980u, sub_0001B980); /* call 0x0001B980 */

loc_0001CB8A: ;
    PUSH32(esp, 0x38E3);
    PUSH32(esp, 0xFFFFC71Du);
    PUSH32(esp, 0x0001CB99u); RECOMP_ABI_CALL(0x00022740u, sub_00022740); /* call 0x00022740 */

loc_0001CB99: ;
    ecx = MEM32(0x304944);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304A1C) = eax;

loc_0001CBA9: ;
    PUSH32(esp, 0x0001CBAEu); RECOMP_ABI_CALL(0x00023380u, sub_00023380); /* call 0x00023380 */

loc_0001CBAE: ;
    PUSH32(esp, 0x0001CBB3u); RECOMP_ABI_CALL(0x00022270u, sub_00022270); /* call 0x00022270 */

loc_0001CBB3: ;
    PUSH32(esp, 0x304840);
    PUSH32(esp, 0x3048F4);
    PUSH32(esp, 0x3048BC);
    PUSH32(esp, 0x0001CBC7u); RECOMP_ABI_CALL(0x00022190u, sub_00022190); /* call 0x00022190 */

loc_0001CBC7: ;
    eax = MEM32(0x304A1C);
    ecx = MEM32(0x30486C);
    PUSH32(esp, 0x41700000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x304814);
    MEM32(0x304944) = eax;
    MEM32(0x3049F8) = ecx;
    PUSH32(esp, 0x0001CBF1u); RECOMP_ABI_CALL(0x00022A20u, sub_00022A20); /* call 0x00022A20 */

loc_0001CBF1: ;
    edx = MEM32(0x304814);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3048C4);
    PUSH32(esp, 0x0001CC11u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001CC11: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001CC19u); RECOMP_ABI_CALL(0x0001BAD0u, sub_0001BAD0); /* call 0x0001BAD0 */

loc_0001CC19: ;
    g_seh_ebp = ebp; sub_00023470(); return; /* tail jmp 0x00023470 */

}

/**
 * sub_0001CC20
 * Original: 0x0001CC20 - 0x0001CCF6 (214 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001CC20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001CC20: ;
    _fa = (uint32_t)(MEM8(0x3049C2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3049C2), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001CC65; /* jne: not equal / not zero */

loc_0001CC29: ;
    PUSH32(esp, 0x0001CC2Eu); RECOMP_ABI_CALL(0x0001B980u, sub_0001B980); /* call 0x0001B980 */

loc_0001CC2E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0001CC35u); RECOMP_ABI_CALL(0x000224C0u, sub_000224C0); /* call 0x000224C0 */

loc_0001CC35: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x30486C) = eax;
    PUSH32(esp, 0x0001CC42u); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_0001CC42: ;
    ecx = MEM32(0x304944);
    eax = eax & 0x7FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x40D) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x40D;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xE);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304A1C) = eax;
    MEM16(0x304A1E) = 0;

loc_0001CC65: ;
    PUSH32(esp, 0x0001CC6Au); RECOMP_ABI_CALL(0x00023380u, sub_00023380); /* call 0x00023380 */

loc_0001CC6A: ;
    PUSH32(esp, 0x0001CC6Fu); RECOMP_ABI_CALL(0x00022270u, sub_00022270); /* call 0x00022270 */

loc_0001CC6F: ;
    PUSH32(esp, 0x0001CC74u); RECOMP_ABI_CALL(0x0001B880u, sub_0001B880); /* call 0x0001B880 */

loc_0001CC74: ;
    eax = MEM32(0x30486C);
    PUSH32(esp, 0x2D8);
    PUSH32(esp, 8);
    PUSH32(esp, 0x16C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3049F8);
    PUSH32(esp, 0x0001CC90u); RECOMP_ABI_CALL(0x000232E0u, sub_000232E0); /* call 0x000232E0 */

loc_0001CC90: ;
    ecx = MEM32(0x304A1C);
    PUSH32(esp, 0x2D8);
    PUSH32(esp, 8);
    PUSH32(esp, 0x16C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x304944);
    PUSH32(esp, 0x0001CCADu); RECOMP_ABI_CALL(0x000232E0u, sub_000232E0); /* call 0x000232E0 */

loc_0001CCAD: ;
    PUSH32(esp, 0x304814);
    PUSH32(esp, 0x0001CCB7u); RECOMP_ABI_CALL(0x00022CB0u, sub_00022CB0); /* call 0x00022CB0 */

loc_0001CCB7: ;
    edx = MEM32(0x304780);
    PUSH32(esp, 0x41700000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x304814);
    PUSH32(esp, 0x0001CCCDu); RECOMP_ABI_CALL(0x00022A20u, sub_00022A20); /* call 0x00022A20 */

loc_0001CCCD: ;
    eax = MEM32(0x304814);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3048C4);
    PUSH32(esp, 0x0001CCE9u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001CCE9: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001CCF1u); RECOMP_ABI_CALL(0x0001BAD0u, sub_0001BAD0); /* call 0x0001BAD0 */

loc_0001CCF1: ;
    g_seh_ebp = ebp; sub_00023470(); return; /* tail jmp 0x00023470 */

}

/**
 * sub_0001CD00
 * Original: 0x0001CD00 - 0x0001CDD2 (210 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001CD00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001CD00: ;
    _fa = (uint32_t)(MEM8(0x3049C2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3049C2), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001CD41; /* jne: not equal / not zero */

loc_0001CD09: ;
    PUSH32(esp, 0x238E);
    PUSH32(esp, 0x11C7);
    PUSH32(esp, 0x0001CD18u); RECOMP_ABI_CALL(0x00022740u, sub_00022740); /* call 0x00022740 */

loc_0001CD18: ;
    MEM32(0x30486C) = eax;
    PUSH32(esp, 0x0001CD22u); RECOMP_ABI_CALL(0x0001B980u, sub_0001B980); /* call 0x0001B980 */

loc_0001CD22: ;
    PUSH32(esp, 0x38E3);
    PUSH32(esp, 0xFFFFC71Du);
    PUSH32(esp, 0x0001CD31u); RECOMP_ABI_CALL(0x00022740u, sub_00022740); /* call 0x00022740 */

loc_0001CD31: ;
    ecx = MEM32(0x304944);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304A1C) = eax;

loc_0001CD41: ;
    PUSH32(esp, 0x0001CD46u); RECOMP_ABI_CALL(0x00023380u, sub_00023380); /* call 0x00023380 */

loc_0001CD46: ;
    PUSH32(esp, 0x0001CD4Bu); RECOMP_ABI_CALL(0x00022270u, sub_00022270); /* call 0x00022270 */

loc_0001CD4B: ;
    PUSH32(esp, 0x0001CD50u); RECOMP_ABI_CALL(0x0001B880u, sub_0001B880); /* call 0x0001B880 */

loc_0001CD50: ;
    eax = MEM32(0x30486C);
    PUSH32(esp, 0x2D8);
    PUSH32(esp, 4);
    PUSH32(esp, 0x16C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3049F8);
    PUSH32(esp, 0x0001CD6Cu); RECOMP_ABI_CALL(0x000232E0u, sub_000232E0); /* call 0x000232E0 */

loc_0001CD6C: ;
    ecx = MEM32(0x304A1C);
    PUSH32(esp, 0x2D8);
    PUSH32(esp, 4);
    PUSH32(esp, 0x16C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x304944);
    PUSH32(esp, 0x0001CD89u); RECOMP_ABI_CALL(0x000232E0u, sub_000232E0); /* call 0x000232E0 */

loc_0001CD89: ;
    PUSH32(esp, 0x304814);
    PUSH32(esp, 0x0001CD93u); RECOMP_ABI_CALL(0x00022CB0u, sub_00022CB0); /* call 0x00022CB0 */

loc_0001CD93: ;
    edx = MEM32(0x304780);
    PUSH32(esp, 0x41700000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x304814);
    PUSH32(esp, 0x0001CDA9u); RECOMP_ABI_CALL(0x00022A20u, sub_00022A20); /* call 0x00022A20 */

loc_0001CDA9: ;
    eax = MEM32(0x304814);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3048C4);
    PUSH32(esp, 0x0001CDC5u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001CDC5: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001CDCDu); RECOMP_ABI_CALL(0x0001BAD0u, sub_0001BAD0); /* call 0x0001BAD0 */

loc_0001CDCD: ;
    g_seh_ebp = ebp; sub_00023470(); return; /* tail jmp 0x00023470 */

}

/**
 * sub_0001CDE0
 * Original: 0x0001CDE0 - 0x0001CE41 (97 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001CDE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001CDE0: ;
    _fa = (uint32_t)(MEM8(0x3049C2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3049C2), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001CE0C; /* jne: not equal / not zero */

loc_0001CDE9: ;
    SET_LO8(eax, MEM8(0x316FF4));
    SET_LO8(eax, LO8(eax) ^ MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    if ((_fa != 0)) goto loc_0001CE00; /* jne: not equal / not zero */

loc_0001CDF4: ;
    ecx = MEM32(esp + 8);
    MEM32(0x304A1C) = ecx;
    goto loc_0001CE0C;

loc_0001CE00: ;
    edx = MEM32(esp + 8);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(0x304A1C) = edx;

loc_0001CE0C: ;
    PUSH32(esp, 0x0001CE11u); RECOMP_ABI_CALL(0x00023380u, sub_00023380); /* call 0x00023380 */

loc_0001CE11: ;
    PUSH32(esp, 0x0001CE16u); RECOMP_ABI_CALL(0x00022270u, sub_00022270); /* call 0x00022270 */

loc_0001CE16: ;
    PUSH32(esp, 0x0001CE1Bu); RECOMP_ABI_CALL(0x0001B880u, sub_0001B880); /* call 0x0001B880 */

loc_0001CE1B: ;
    ecx = MEM32(0x304944);
    eax = MEM32(0x304A1C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304944) = ecx;
    MEM16(0x304946) = 0;
    PUSH32(esp, 0x0001CE3Cu); RECOMP_ABI_CALL(0x0001BAD0u, sub_0001BAD0); /* call 0x0001BAD0 */

loc_0001CE3C: ;
    g_seh_ebp = ebp; sub_00023470(); return; /* tail jmp 0x00023470 */

}

/**
 * sub_0001CE50
 * Original: 0x0001CE50 - 0x0001CEFF (175 bytes, 36 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0001CE50(void)
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

loc_0001CE50: ;
    _fa = (uint32_t)(MEM8(0x3049C2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3049C2), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001CE8D; /* jne: not equal / not zero */

loc_0001CE59: ;
    eax = MEM32(esp + 8);
    MEM32(0x30486C) = eax;
    PUSH32(esp, 0x0001CE67u); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_0001CE67: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001CE77; /* jne: not equal / not zero */

loc_0001CE6B: ;
    ecx = MEM32(esp + 4);
    MEM32(0x304A1C) = ecx;
    goto loc_0001CE83;

loc_0001CE77: ;
    edx = MEM32(esp + 4);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(0x304A1C) = edx;

loc_0001CE83: ;
    MEM32(0x3048B8) = 0xBBA3D70Au;

loc_0001CE8D: ;
    PUSH32(esp, 0x0001CE92u); RECOMP_ABI_CALL(0x00023380u, sub_00023380); /* call 0x00023380 */

loc_0001CE92: ;
    PUSH32(esp, 0x0001CE97u); RECOMP_ABI_CALL(0x00022270u, sub_00022270); /* call 0x00022270 */

loc_0001CE97: ;
    PUSH32(esp, 0x0001CE9Cu); RECOMP_ABI_CALL(0x0001B880u, sub_0001B880); /* call 0x0001B880 */

loc_0001CE9C: ;
    ecx = MEM32(0x304944);
    eax = MEM32(0x304A1C);
    edx = MEM32(0x3049F8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304944) = ecx;
    ecx = MEM32(0x30486C);
    PUSH32(esp, 0x31C7);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFF556u);
    PUSH32(esp, 0x3049F8);
    MEM16(0x304946) = 0;
    MEM32(0x3049F8) = edx;
    PUSH32(esp, 0x0001CEE0u); RECOMP_ABI_CALL(0x00022A00u, sub_00022A00); /* call 0x00022A00 */

loc_0001CEE0: ;
    fp_push(MEMF(0x3048C4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3048B8)); /* fadd dword ptr [0x3048b8] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(0x3048C4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001CEFAu); RECOMP_ABI_CALL(0x0001BAD0u, sub_0001BAD0); /* call 0x0001BAD0 */

loc_0001CEFA: ;
    g_seh_ebp = ebp; sub_00023470(); return; /* tail jmp 0x00023470 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001CF00
 * Original: 0x0001CF00 - 0x0001CF90 (144 bytes, 31 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0001CF00(void)
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

loc_0001CF00: ;
    _fa = (uint32_t)(MEM8(0x3049C2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3049C2), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001CF49; /* jne: not equal / not zero */

loc_0001CF09: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x304900));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001CF17u); RECOMP_ABI_CALL(0x00022890u, sub_00022890); /* call 0x00022890 */

loc_0001CF17: ;
    esi = eax;
    PUSH32(esp, 0x0001CF1Eu); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_0001CF1E: ;
    eax = eax & 0x1FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi + eax + 0x7000;
    MEM32(0x304A1C) = ecx;
    PUSH32(esp, 0);
    MEM16(0x304A1E) = 0;
    PUSH32(esp, 0x0001CF40u); RECOMP_ABI_CALL(0x000224C0u, sub_000224C0); /* call 0x000224C0 */

loc_0001CF40: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x30486C) = eax;
    POP32(esp, esi);

loc_0001CF49: ;
    PUSH32(esp, 0x0001CF4Eu); RECOMP_ABI_CALL(0x00023380u, sub_00023380); /* call 0x00023380 */

loc_0001CF4E: ;
    PUSH32(esp, 0x0001CF53u); RECOMP_ABI_CALL(0x00022270u, sub_00022270); /* call 0x00022270 */

loc_0001CF53: ;
    PUSH32(esp, 0x0001CF58u); RECOMP_ABI_CALL(0x0001B880u, sub_0001B880); /* call 0x0001B880 */

loc_0001CF58: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    edx = MEM32(0x304A1C);
    eax = MEM32(0x30486C);
    MEM32(0x304944) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C230)); /* fadd dword ptr [0x22c230] */
    MEM32(0x3049F8) = eax;
    MEMF(0x3048C4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001CF8Bu); RECOMP_ABI_CALL(0x0001BAD0u, sub_0001BAD0); /* call 0x0001BAD0 */

loc_0001CF8B: ;
    g_seh_ebp = ebp; sub_00023470(); return; /* tail jmp 0x00023470 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001CF90
 * Original: 0x0001CF90 - 0x0001D020 (144 bytes, 31 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0001CF90(void)
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

loc_0001CF90: ;
    _fa = (uint32_t)(MEM8(0x3049C2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3049C2), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001CFD9; /* jne: not equal / not zero */

loc_0001CF99: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x304900));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001CFA7u); RECOMP_ABI_CALL(0x00022890u, sub_00022890); /* call 0x00022890 */

loc_0001CFA7: ;
    esi = eax;
    PUSH32(esp, 0x0001CFAEu); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_0001CFAE: ;
    eax = eax & 0x1FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi + eax + -4096;
    MEM32(0x304A1C) = ecx;
    PUSH32(esp, 0);
    MEM16(0x304A1E) = 0;
    PUSH32(esp, 0x0001CFD0u); RECOMP_ABI_CALL(0x000224C0u, sub_000224C0); /* call 0x000224C0 */

loc_0001CFD0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x30486C) = eax;
    POP32(esp, esi);

loc_0001CFD9: ;
    PUSH32(esp, 0x0001CFDEu); RECOMP_ABI_CALL(0x00023380u, sub_00023380); /* call 0x00023380 */

loc_0001CFDE: ;
    PUSH32(esp, 0x0001CFE3u); RECOMP_ABI_CALL(0x00022270u, sub_00022270); /* call 0x00022270 */

loc_0001CFE3: ;
    PUSH32(esp, 0x0001CFE8u); RECOMP_ABI_CALL(0x0001B880u, sub_0001B880); /* call 0x0001B880 */

loc_0001CFE8: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    edx = MEM32(0x304A1C);
    eax = MEM32(0x30486C);
    MEM32(0x304944) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C230)); /* fadd dword ptr [0x22c230] */
    MEM32(0x3049F8) = eax;
    MEMF(0x3048C4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001D01Bu); RECOMP_ABI_CALL(0x0001BAD0u, sub_0001BAD0); /* call 0x0001BAD0 */

loc_0001D01B: ;
    g_seh_ebp = ebp; sub_00023470(); return; /* tail jmp 0x00023470 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001D020
 * Original: 0x0001D020 - 0x0001D0AE (142 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D020(void)
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

loc_0001D020: ;
    PUSH32(esp, 0x0001D025u); RECOMP_ABI_CALL(0x00023380u, sub_00023380); /* call 0x00023380 */

loc_0001D025: ;
    PUSH32(esp, 0x0001D02Au); RECOMP_ABI_CALL(0x00022270u, sub_00022270); /* call 0x00022270 */

loc_0001D02A: ;
    PUSH32(esp, 0x304814);
    PUSH32(esp, 0x0001D034u); RECOMP_ABI_CALL(0x00022CB0u, sub_00022CB0); /* call 0x00022CB0 */

loc_0001D034: ;
    fp_push(MEMF(0x304780)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C1D4)); /* fsub dword ptr [0x22c1d4] */
    PUSH32(esp, 0x41700000);
    fp_push(MEMF(0x304814)); /* fld float */
    PUSH32(esp, 0x40800000);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C234)); /* fsub dword ptr [0x22c234] */
    PUSH32(esp, 0x304814);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(0x304814) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001D068u); RECOMP_ABI_CALL(0x00022A20u, sub_00022A20); /* call 0x00022A20 */

loc_0001D068: ;
    eax = MEM32(0x304814);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3048C4);
    PUSH32(esp, 0x0001D084u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001D084: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001D08Cu); RECOMP_ABI_CALL(0x0001B880u, sub_0001B880); /* call 0x0001B880 */

loc_0001D08C: ;
    ecx = MEM32(0x304A1C);
    edx = MEM32(0x30486C);
    MEM32(0x304944) = ecx;
    MEM32(0x3049F8) = edx;
    PUSH32(esp, 0x0001D0A9u); RECOMP_ABI_CALL(0x0001BAD0u, sub_0001BAD0); /* call 0x0001BAD0 */

loc_0001D0A9: ;
    g_seh_ebp = ebp; sub_00023470(); return; /* tail jmp 0x00023470 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001D0B0
 * Original: 0x0001D0B0 - 0x0001D41D (877 bytes, 200 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D0B0(void)
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

loc_0001D0B0: ;
    SET_LO8(eax, MEM8(0x30485C));
    SET_LO8(ecx, MEM8(0x307604));
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0001D340; /* je: equal / zero */

loc_0001D0C7: ;
    SET_LO8(ecx, MEM8(0x30EDC8));
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) ^ 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x304900) = LO8(eax);
    eax = ZX8(LO8(eax));
    edx = eax;
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x58);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    MEM8(edx + 0x30D9E8) = 1;
    MEM8(eax + 0x30D9E8) = 1;
    eax = MEM32(0x30D9AC);
    edx = MEM32(0x30D9A4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM8(0x304928) = LO8(ecx);
    PUSH32(esp, 0x0001D10Au); RECOMP_ABI_CALL(0x0001BB50u, sub_0001BB50); /* call 0x0001BB50 */

loc_0001D10A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001D158; /* jne: not equal / not zero */

loc_0001D113: ;
    eax = MEM32(0x30DA04);
    edx = MEM32(0x30D9FC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001D125u); RECOMP_ABI_CALL(0x0001BB50u, sub_0001BB50); /* call 0x0001BB50 */

loc_0001D125: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001D158; /* jne: not equal / not zero */

loc_0001D12C: ;
    ecx = ZX8(LO8(ecx));
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    MEM32(eax + 0x30D9A4) = esi;
    MEM32(eax + 0x30D9A8) = 0x3F800000;
    MEM32(eax + 0x30D9AC) = esi;
    MEM32(ecx * 4 + 0x3049B8) = esi;
    MEM32(ecx * 4 + 0x30490C) = esi;

loc_0001D158: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001D15Eu); RECOMP_ABI_CALL(0x00022140u, sub_00022140); /* call 0x00022140 */

loc_0001D15E: ;
    ecx = ZX8(MEM8(0x304900));
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0xB4);
    eax = MEM32(edx + 0x304A2C);
    MEM32(0x3048BC) = eax;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    edi = MEM32(eax + 0x30D9AC);
    eax = MEM32(eax + 0x30D9A4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001D190u); RECOMP_ABI_CALL(0x0001BB50u, sub_0001BB50); /* call 0x0001BB50 */

loc_0001D190: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    fp_push(MEMF(edx + 0x30C268)); /* fld float */
    if (CMP_NE(_fa, _fb)) goto loc_0001D1A5; /* jne: not equal / not zero */

loc_0001D19D: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C0D8)); /* fsub dword ptr [0x22c0d8] */
    goto loc_0001D1AB;

loc_0001D1A5: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C160)); /* fadd dword ptr [0x22c160] */

loc_0001D1AB: ;
    eax = ZX8(MEM8(0x304928));
    MEMF(0x3048F4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(edx + 0x304A34);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x304840) = edx;
    fp_push(MEMF(eax + 0x304838)); /* fld float */
    MEM32(0x3049F8) = 0x4000;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx * 4 + 0x304838)); /* fsub dword ptr [ecx*4 + 0x304838] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x304880)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx * 4 + 0x304880)); /* fsub dword ptr [ecx*4 + 0x304880] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001D1FAu); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_0001D1FA: ;
    PUSH32(esp, 0x71C);
    PUSH32(esp, 0xFFFFF8E4u);
    edi = eax;
    PUSH32(esp, 0x0001D20Bu); RECOMP_ABI_CALL(0x00022740u, sub_00022740); /* call 0x00022740 */

loc_0001D20B: ;
    eax = edi + eax + -16384;
    MEM32(0x304944) = eax;
    eax = ZX8(MEM8(0x304900));
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB4);
    ecx = MEM32(eax + 0x304A38);
    edx = MEM32(eax + 0x304A40);
    fp_push(MEMF(eax + 0x304A40)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x304A34)); /* fsub dword ptr [eax + 0x304a34] */
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(eax + 0x304A2C);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(eax + 0x304A34);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x304A38)); /* fld float */
    MEM16(0x304946) = LO16(esi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x304A2C)); /* fsub dword ptr [eax + 0x304a2c] */
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = 0;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x1C) = edx;
    MEM32(0x3048C4) = 0x40900000;
    PUSH32(esp, 0x0001D294u); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_0001D294: ;
    edi = MEM32(0x304944);
    ecx = eax;
    eax = 0x4000;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001D2ADu); RECOMP_ABI_CALL(0x0006A110u, sub_0006A110); /* call 0x0006A110 */

loc_0001D2AD: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001D2C0u); RECOMP_ABI_CALL(0x000110F0u, sub_000110F0); /* call 0x000110F0 */

loc_0001D2C0: ;
    eax = MEM32(0x30D9AC);
    ecx = MEM32(0x30D9A4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C23C)); /* fadd dword ptr [0x22c23c] */
    MEMF(0x304814) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001D2E2u); RECOMP_ABI_CALL(0x0001BB50u, sub_0001BB50); /* call 0x0001BB50 */

loc_0001D2E2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0001D303; /* je: equal / zero */

loc_0001D2EA: ;
    edx = MEM32(0x30DA04);
    eax = MEM32(0x30D9FC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001D2FCu); RECOMP_ABI_CALL(0x0001BB50u, sub_0001BB50); /* call 0x0001BB50 */

loc_0001D2FC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001D327; /* jne: not equal / not zero */

loc_0001D303: ;
    fp_push(MEMF(0x3048C4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C164)); /* fadd dword ptr [0x22c164] */
    MEMF(0x3048C4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x304814)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C164)); /* fadd dword ptr [0x22c164] */
    MEMF(0x304814) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001D327: ;
    MEM32(0x3049E8) = 0x3F4CCCCD;
    PUSH32(esp, 0x0001D336u); RECOMP_ABI_CALL(0x0001BAD0u, sub_0001BAD0); /* call 0x0001BAD0 */

loc_0001D336: ;
    PUSH32(esp, 0x0001D33Bu); RECOMP_ABI_CALL(0x00023470u, sub_00023470); /* call 0x00023470 */

loc_0001D33B: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0001D340: ;
    PUSH32(esp, 0x0001D345u); RECOMP_ABI_CALL(0x00023380u, sub_00023380); /* call 0x00023380 */

loc_0001D345: ;
    ecx = ZX8(MEM8(0x304900));
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(ecx + 0x304914);
    eax = MEM32(ecx + 0x304930);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001D362u); RECOMP_ABI_CALL(0x0001BB50u, sub_0001BB50); /* call 0x0001BB50 */

loc_0001D362: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001D38F; /* jne: not equal / not zero */

loc_0001D36B: ;
    edx = MEM32(ecx + 0x304838);
    eax = MEM32(ecx + 0x304844);
    ecx = MEM32(ecx + 0x304880);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001D385u); RECOMP_ABI_CALL(0x0001BCA0u, sub_0001BCA0); /* call 0x0001BCA0 */

loc_0001D385: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304870) = eax;
    goto loc_0001D395;

loc_0001D38F: ;
    MEM32(0x304870) = esi;

loc_0001D395: ;
    eax = ZX8(MEM8(0x304928));
    ecx = ZX8(MEM8(0x304900));
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(eax + 0x304838)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x304838)); /* fsub dword ptr [ecx + 0x304838] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x304880)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x304880)); /* fsub dword ptr [ecx + 0x304880] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001D3D0u); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_0001D3D0: ;
    ecx = ZX8(MEM8(0x304900));
    fp_push(MEMF(0x3049E8)); /* fld float */
    _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x4000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x304824) = eax;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB4);
    edx = MEM32(eax + 0x304A2C);
    PUSH32(esp, 0x41200000);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x30C268)); /* fadd dword ptr [eax + 0x30c268] */
    eax = MEM32(eax + 0x304A34);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x304828);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx * 4 + 0x304844)); /* fsub dword ptr [ecx*4 + 0x304844] */
    MEM32(0x3047F8) = edx;

    g_seh_ebp = ebp; sub_0001D41D(); return; /* fallthrough 0x0001D41D */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001D41D
 * Original: 0x0001D41D - 0x0001D539 (284 bytes, 63 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D41D(void)
{
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

loc_0001D41D: ;
    MEM32(0x304808) = eax;
    MEMF(0x304828) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3049E8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C238)); /* fsub dword ptr [0x22c238] */
    MEMF(0x3049E8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001D43Fu); RECOMP_ABI_CALL(0x00022A20u, sub_00022A20); /* call 0x00022A20 */

loc_0001D43F: ;
    ecx = MEM32(0x3047F8);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3048BC);
    PUSH32(esp, 0x0001D45Fu); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001D45F: ;
    fp_push(MEMF(0x3048F4)); /* fld float */
    edx = ZX8(MEM8(0x304900));
    eax = MEM32(0x304828);
    PUSH32(esp, 0x3E4CCCCD);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx * 4 + 0x304844)); /* fsub dword ptr [edx*4 + 0x304844] */
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3048F4);
    MEMF(0x3048F4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001D498u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001D498: ;
    ecx = ZX8(MEM8(0x304900));
    fp_push(MEMF(0x3048F4)); /* fld float */
    edx = MEM32(0x304808);
    PUSH32(esp, 0x3E4CCCCD);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx * 4 + 0x304844)); /* fadd dword ptr [ecx*4 + 0x304844] */
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, edx);
    PUSH32(esp, 0x304840);
    MEMF(0x3048F4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001D4D2u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001D4D2: ;
    eax = MEM32(0x304870);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3049F8);
    PUSH32(esp, 0x0001D4EAu); RECOMP_ABI_CALL(0x000232E0u, sub_000232E0); /* call 0x000232E0 */

loc_0001D4EA: ;
    ecx = MEM32(0x304824);
    PUSH32(esp, 0xB6);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x71C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x304944);
    PUSH32(esp, 0x0001D507u); RECOMP_ABI_CALL(0x000232E0u, sub_000232E0); /* call 0x000232E0 */

loc_0001D507: ;
    edx = MEM32(0x304814);
    PUSH32(esp, 0x3A83126F);
    PUSH32(esp, 0x42800000);
    PUSH32(esp, 0x3A83126F);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3048C4);
    PUSH32(esp, 0x0001D527u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001D527: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001D52Fu); RECOMP_ABI_CALL(0x0001BAD0u, sub_0001BAD0); /* call 0x0001BAD0 */

loc_0001D52F: ;
    PUSH32(esp, 0x0001D534u); RECOMP_ABI_CALL(0x00023470u, sub_00023470); /* call 0x00023470 */

loc_0001D534: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001D540
 * Original: 0x0001D540 - 0x0001D810 (720 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D540(void)
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

loc_0001D540: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x304A38);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, eax);
    PUSH32(esp, 0x304880);
    PUSH32(esp, 0x0001D563u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001D563: ;
    ecx = MEM32(0x30C274);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x304844);
    PUSH32(esp, 0x0001D583u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001D583: ;
    edx = MEM32(0x304A40);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, edx);
    PUSH32(esp, 0x304838);
    PUSH32(esp, 0x0001D5A3u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001D5A3: ;
    eax = MEM32(0x304AEC);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, eax);
    PUSH32(esp, 0x304884);
    PUSH32(esp, 0x0001D5C2u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001D5C2: ;
    ecx = MEM32(0x30C328);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x304848);
    PUSH32(esp, 0x0001D5E5u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001D5E5: ;
    edx = MEM32(0x304AF4);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, edx);
    PUSH32(esp, 0x30483C);
    PUSH32(esp, 0x0001D605u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001D605: ;
    PUSH32(esp, 0x0001D60Au); RECOMP_ABI_CALL(0x00022270u, sub_00022270); /* call 0x00022270 */

loc_0001D60A: ;
    fp_push(MEMF(0x304884)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x304880)); /* fadd dword ptr [0x304880] */
    esi = ZX8(MEM8(esp + 0x58));
    edx = MEM32(0x30C514);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    eax = esi;
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    MEMF(0x3047F8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x304848)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x304844)); /* fadd dword ptr [0x304844] */
    ecx = esi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    MEMF(0x304828) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x30483C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x304838)); /* fadd dword ptr [0x304838] */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(0x304808) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x30D9A8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x30D9A8)); /* fsub dword ptr [ecx + 0x30d9a8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001D682u); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_0001D682: ;
    edx = MEM32(0x30F910);
    ecx = 0xAAA;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi << 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = esi + edx + -16384;
    MEM32(0x304870) = ecx;
    MEM32(0x304824) = eax;
    fp_push(MEMF(0x304880)); /* fld float */
    edx = MEM32(0x304848);
    fp_push(MEMF(0x304844)); /* fld float */
    ecx = MEM32(0x304838);
    fp_push(MEMF(0x304884)); /* fld float */
    eax = MEM32(0x30483C);
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEM32(esp + 8) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0xC) = eax;
    ecx = esp + 0x1C;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x28) = 0;
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001D705u); RECOMP_ABI_CALL(0x0006A660u, sub_0006A660); /* call 0x0006A660 */

loc_0001D705: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0E0)); /* fmul dword ptr [0x22c0e0] */
    PUSH32(esp, 0x0001D710u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0001D710: ;
    ecx = MEM32(0x3047F8);
    MEM32(esp + 0x30) = eax;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3C23D70A);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0DC)); /* fmul dword ptr [0x22c0dc] */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3048BC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C164)); /* fadd dword ptr [0x22c164] */
    MEMF(0x304814) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001D750u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001D750: ;
    edx = MEM32(0x304828);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3048F4);
    PUSH32(esp, 0x0001D770u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001D770: ;
    eax = MEM32(0x304808);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, eax);
    PUSH32(esp, 0x304840);
    PUSH32(esp, 0x0001D78Fu); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001D78F: ;
    ecx = MEM32(0x304870);
    PUSH32(esp, 0xE38);
    PUSH32(esp, 8);
    PUSH32(esp, 0x38E);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3049F8);
    PUSH32(esp, 0x0001D7ACu); RECOMP_ABI_CALL(0x000232E0u, sub_000232E0); /* call 0x000232E0 */

loc_0001D7AC: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x22C240)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x22c240] */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001D7E3; /* jne: not equal / not zero */

loc_0001D7C3: ;
    edx = MEM32(0x304824);
    PUSH32(esp, 0x38E);
    PUSH32(esp, 8);
    PUSH32(esp, 0xAAA);
    PUSH32(esp, edx);
    PUSH32(esp, 0x304944);
    PUSH32(esp, 0x0001D7E0u); RECOMP_ABI_CALL(0x000232E0u, sub_000232E0); /* call 0x000232E0 */

loc_0001D7E0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001D7E3: ;
    eax = MEM32(0x304814);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3048C4);
    PUSH32(esp, 0x0001D802u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001D802: ;
    PUSH32(esp, 0x0001D807u); RECOMP_ABI_CALL(0x0001BAD0u, sub_0001BAD0); /* call 0x0001BAD0 */

loc_0001D807: ;
    PUSH32(esp, 0x0001D80Cu); RECOMP_ABI_CALL(0x00023470u, sub_00023470); /* call 0x00023470 */

loc_0001D80C: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001D810
 * Original: 0x0001D810 - 0x0001DB8E (894 bytes, 219 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D810(void)
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

loc_0001D810: ;
    SET_LO8(eax, MEM8(0x307604));
    SET_LO8(ecx, MEM8(0x30485C));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D83E; /* je: equal / zero */

loc_0001D822: ;
    PUSH32(esp, 0x0001D827u); RECOMP_ABI_CALL(0x00069F60u, sub_00069F60); /* call 0x00069F60 */

loc_0001D827: ;
    ecx = eax;
    ecx = ecx & 0x80000007u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0001D836; /* jns: not sign (positive) */

loc_0001D831: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0001D836: ;
    MEM8(0x3047B4) = LO8(ecx);
    goto loc_0001D844;

loc_0001D83E: ;
    SET_LO8(ecx, MEM8(0x3047B4));

loc_0001D844: ;
    fp_push(MEMF(0x2C66A0)); /* fld float */
    SET_LO8(edx, MEM8(0x30AE38));
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    PUSH32(esp, edi);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001D886; /* jne: not equal / not zero */

loc_0001D865: ;
    ecx = MEM32(0x2C66A4);
    eax = MEM32(0x2C66A0);
    ebp = MEM32(0x2C66A8);
    edi = MEM32(0x332824);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    goto loc_0001D8F1;

loc_0001D886: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(0x30EDC8)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(0x30EDC8) (8-bit) */
    eax = ZX8(LO8(ebx));
    if (CMP_NE(_fa, _fb)) goto loc_0001D8C7; /* jne: not equal / not zero */

loc_0001D891: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    eax = ZX8(MEM8(eax + 0x30D9A1));
    eax = MEM32(eax * 4 + 0x2C2780);
    ecx = SX8(LO8(ecx));
    esi = ZX8(LO8(edx));
    eax = MEM32(eax + esi * 4);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = MEM32(eax + ecx + 8);
    edi = MEM32(eax + ecx + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x14) = ecx;
    goto loc_0001D8F1;

loc_0001D8C7: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    ecx = ZX8(MEM8(eax + 0x30D9A1));
    ebp = 0x38E;
    MEM32(esp + 0x10) = 0x3D4CCCCD;
    fp_push(MEMF(ecx * 4 + 0x2C1898)); /* fld float */
    edi = ebp;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C224)); /* fadd dword ptr [0x22c224] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001D8F1: ;
    esi = ZX8(LO8(ebx));
    _fa = (uint32_t)(MEM16(esi * 2 + 0x30F920)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi * 2 + 0x30F920), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D907; /* je: equal / zero */

loc_0001D8FF: ;
    edi = (uint32_t)(0u - (uint32_t)(edi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = edi & 0xFFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0001D907: ;
    SET_LO8(eax, MEM8(0x307604));
    _fa = (uint32_t)(MEM8(0x30485C)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30485C), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001D926; /* jne: not equal / not zero */

loc_0001D914: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x304784);
    edx = ZX8(LO8(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001DA3C; /* je: equal / zero */

loc_0001D926: ;
    PUSH32(esp, 0x0001D92Bu); RECOMP_ABI_CALL(0x00022140u, sub_00022140); /* call 0x00022140 */

loc_0001D92B: ;
    SET_LO8(eax, MEM8(0x30485C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(0x307604)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(0x307604) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D9E2; /* je: equal / zero */

loc_0001D93C: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    ecx = esi;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C144)); /* fadd dword ptr [0x22c144] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    MEMF(0x3048C4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0x30D9AC);
    eax = MEM32(ecx + 0x30D9A4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(0x304870) = ebp;
    MEM32(0x304824) = edi;
    PUSH32(esp, 0x0001D970u); RECOMP_ABI_CALL(0x0001BB50u, sub_0001BB50); /* call 0x0001BB50 */

loc_0001D970: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001D989; /* jne: not equal / not zero */

loc_0001D977: ;
    fp_push(MEMF(0x3048C4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C24C)); /* fadd dword ptr [0x22c24c] */
    MEMF(0x3048C4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001D989: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB4);
    edx = MEM32(eax + 0x304A20);
    MEM32(0x3048BC) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x30C25C)); /* fadd dword ptr [eax + 0x30c25c] */
    edx = MEM32(eax + 0x304A28);
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x30D9A8)); /* fsub dword ptr [ecx + 0x30d9a8] */
    MEM32(0x304944) = eax;
    MEM32(0x304840) = edx;
    MEM16(0x304946) = 0;
    MEMF(0x3049E8) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x30D9A8)); /* fadd dword ptr [ecx + 0x30d9a8] */
    MEMF(0x3048F4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001D9E2: ;
    SET_LO8(ecx, MEM8(0x30AE38));
    PUSH32(esp, ebx);
    MEM8(0x304784) = LO8(ecx);
    PUSH32(esp, 0x0001D9F4u); RECOMP_ABI_CALL(0x0001BBC0u, sub_0001BBC0); /* call 0x0001BBC0 */

loc_0001D9F4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001DA3C; /* jne: not equal / not zero */

loc_0001D9FB: ;
    fp_push(MEMF(esi * 4 + 0x304838)); /* fld float */
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x58);
    fp_top() = -fp_top(); /* fchs */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = edx + 0x30D9BC;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi * 4 + 0x304880)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001DA27u); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_0001DA27: ;
    ecx = 0x8000;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;
    MEM16(ebp + 2) = 0;

loc_0001DA3C: ;
    edx = MEM32(esp + 0x14);
    edi = esi;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x58);
    _fa = (uint32_t)(MEM8(edi + 0x30D9A1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x30D9A1), 2 (8-bit) */
    MEM32(esp + 0x24) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0001DA6E; /* jne: not equal / not zero */

loc_0001DA52: ;
    SET_LO8(eax, MEM8(edi + 0x30D9A2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001DA60; /* je: equal / zero */

loc_0001DA5C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001DA6E; /* jne: not equal / not zero */

loc_0001DA60: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C248)); /* fadd dword ptr [0x22c248] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001DA6E: ;
    eax = MEM32(edi + 0x30D9AC);
    ecx = MEM32(edi + 0x30D9A4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001DA81u); RECOMP_ABI_CALL(0x0001BB50u, sub_0001BB50); /* call 0x0001BB50 */

loc_0001DA81: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001DA96; /* jne: not equal / not zero */

loc_0001DA88: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C180)); /* fadd dword ptr [0x22c180] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001DA96: ;
    PUSH32(esp, 0x0001DA9Bu); RECOMP_ABI_CALL(0x00023380u, sub_00023380); /* call 0x00023380 */

loc_0001DA9B: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xB4);
    edx = MEM32(esi + 0x304A20);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3D75C28F);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3048BC);
    PUSH32(esp, 0x0001DAC1u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001DAC1: ;
    eax = MEM32(esi + 0x304A28);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3D75C28F);
    PUSH32(esp, eax);
    PUSH32(esp, 0x304840);
    PUSH32(esp, 0x0001DAE1u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001DAE1: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x30C25C)); /* fadd dword ptr [esi + 0x30c25c] */
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x3D4CCCCD);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x30D9A8)); /* fsub dword ptr [edi + 0x30d9a8] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x3049E8);
    PUSH32(esp, 0x0001DB11u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001DB11: ;
    fp_push(MEMF(0x3049E8)); /* fld float */
    ecx = MEM32(0x304824);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x30D9A8)); /* fadd dword ptr [edi + 0x30d9a8] */
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, 0x222);
    PUSH32(esp, 8);
    MEMF(0x3048F4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x304944);
    PUSH32(esp, 0x0001DB43u); RECOMP_ABI_CALL(0x000232E0u, sub_000232E0); /* call 0x000232E0 */

loc_0001DB43: ;
    eax = MEM32(0x304870);
    PUSH32(esp, 0x222);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3049F8);
    PUSH32(esp, 0x0001DB5Cu); RECOMP_ABI_CALL(0x000232E0u, sub_000232E0); /* call 0x000232E0 */

loc_0001DB5C: ;
    ecx = MEM32(esp + 0x60);
    PUSH32(esp, 0x3CA3D70A);
    PUSH32(esp, 0x42800000);
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3048C4);
    PUSH32(esp, 0x0001DB7Au); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001DB7A: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001DB82u); RECOMP_ABI_CALL(0x0001BAD0u, sub_0001BAD0); /* call 0x0001BAD0 */

loc_0001DB82: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00023470(); return; /* tail jmp 0x00023470 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001DB90
 * Original: 0x0001DB90 - 0x0001DEF1 (865 bytes, 209 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001DB90(void)
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

loc_0001DB90: ;
    SET_LO8(eax, MEM8(0x307604));
    SET_LO8(ecx, MEM8(0x30485C));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001DBBE; /* je: equal / zero */

loc_0001DBA2: ;
    PUSH32(esp, 0x0001DBA7u); RECOMP_ABI_CALL(0x00069F60u, sub_00069F60); /* call 0x00069F60 */

loc_0001DBA7: ;
    ecx = eax;
    ecx = ecx & 0x80000007u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0001DBB6; /* jns: not sign (positive) */

loc_0001DBB1: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0001DBB6: ;
    MEM8(0x3047B4) = LO8(ecx);
    goto loc_0001DBC4;

loc_0001DBBE: ;
    SET_LO8(ecx, MEM8(0x3047B4));

loc_0001DBC4: ;
    fp_push(MEMF(0x2C66A0)); /* fld float */
    SET_LO8(edx, MEM8(0x30AE38));
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x18));
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    PUSH32(esp, edi);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001DC09; /* jne: not equal / not zero */

loc_0001DBE5: ;
    fp_push(MEMF(0x2C66A0)); /* fld float */
    ecx = MEM32(0x2C66A4);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    ebp = MEM32(0x2C66A8);
    edi = MEM32(0x332824);
    MEM32(esp + 0x10) = ecx;
    goto loc_0001DC73;

loc_0001DC09: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(0x30EDC8)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(0x30EDC8) (8-bit) */
    eax = ZX8(LO8(ebx));
    if (CMP_NE(_fa, _fb)) goto loc_0001DC4D; /* jne: not equal / not zero */

loc_0001DC14: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    eax = ZX8(MEM8(eax + 0x30D9A1));
    eax = MEM32(eax * 4 + 0x2C2780);
    ecx = SX8(LO8(ecx));
    esi = ZX8(LO8(edx));
    eax = MEM32(eax + esi * 4);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = MEM32(eax + ecx + 8);
    edi = MEM32(eax + ecx + 0xC);
    fp_push(MEMF(eax + ecx + 4)); /* fld float */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    ecx = MEM32(eax);
    MEM32(esp + 0x10) = ecx;
    goto loc_0001DC73;

loc_0001DC4D: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    ecx = ZX8(MEM8(eax + 0x30D9A1));
    ebp = 0x38E;
    MEM32(esp + 0x10) = 0x3D4CCCCD;
    fp_push(MEMF(ecx * 4 + 0x2C1898)); /* fld float */
    edi = ebp;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C250)); /* fadd dword ptr [0x22c250] */

loc_0001DC73: ;
    esi = ZX8(LO8(ebx));
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(MEM16(esi * 2 + 0x30F920)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi * 2 + 0x30F920), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001DC8D; /* je: equal / zero */

loc_0001DC85: ;
    edi = (uint32_t)(0u - (uint32_t)(edi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = edi & 0xFFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0001DC8D: ;
    SET_LO8(eax, MEM8(0x307604));
    _fa = (uint32_t)(MEM8(0x30485C)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30485C), LO8(eax) (8-bit) */
    ebx = MEM32(esp + 0x28);
    if (CMP_NE(_fa, _fb)) goto loc_0001DCB0; /* jne: not equal / not zero */

loc_0001DC9E: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x304784);
    edx = ZX8(LO8(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001DDC7; /* je: equal / zero */

loc_0001DCB0: ;
    PUSH32(esp, 0x0001DCB5u); RECOMP_ABI_CALL(0x00022140u, sub_00022140); /* call 0x00022140 */

loc_0001DCB5: ;
    SET_LO8(eax, MEM8(0x30485C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(0x307604)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(0x307604) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001DD69; /* je: equal / zero */

loc_0001DCC6: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    ecx = esi;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C144)); /* fadd dword ptr [0x22c144] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    MEMF(0x3048C4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0x30D9AC);
    eax = MEM32(ecx + 0x30D9A4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(0x304870) = ebp;
    MEM32(0x304824) = edi;
    PUSH32(esp, 0x0001DCFAu); RECOMP_ABI_CALL(0x0001BB50u, sub_0001BB50); /* call 0x0001BB50 */

loc_0001DCFA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001DD13; /* jne: not equal / not zero */

loc_0001DD01: ;
    fp_push(MEMF(0x3048C4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C24C)); /* fadd dword ptr [0x22c24c] */
    MEMF(0x3048C4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001DD13: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB4);
    edx = MEM32(eax + 0x304A20);
    MEM32(0x3048BC) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x30C25C)); /* fadd dword ptr [eax + 0x30c25c] */
    edx = MEM32(eax + 0x304A28);
    eax = ebx + 0x8000;
    MEM32(0x304944) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x30D9A8)); /* fsub dword ptr [ecx + 0x30d9a8] */
    MEM32(0x304840) = edx;
    MEM16(0x304946) = 0;
    MEMF(0x3049E8) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x30D9A8)); /* fadd dword ptr [ecx + 0x30d9a8] */
    MEMF(0x3048F4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001DD69: ;
    SET_LO8(ecx, MEM8(0x30AE38));
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    MEM8(0x304784) = LO8(ecx);
    PUSH32(esp, 0x0001DD7Fu); RECOMP_ABI_CALL(0x0001BBC0u, sub_0001BBC0); /* call 0x0001BBC0 */

loc_0001DD7F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001DDC7; /* jne: not equal / not zero */

loc_0001DD86: ;
    fp_push(MEMF(esi * 4 + 0x304838)); /* fld float */
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    fp_top() = -fp_top(); /* fchs */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = eax + 0x30D9BC;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi * 4 + 0x304880)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001DDB2u); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_0001DDB2: ;
    ecx = 0x8000;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;
    MEM16(ebp + 2) = 0;

loc_0001DDC7: ;
    edx = MEM32(esp + 0x14);
    edi = esi;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x58);
    eax = MEM32(edi + 0x30D9AC);
    ecx = MEM32(edi + 0x30D9A4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = edx;
    PUSH32(esp, 0x0001DDE7u); RECOMP_ABI_CALL(0x0001BB50u, sub_0001BB50); /* call 0x0001BB50 */

loc_0001DDE7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001DDFC; /* jne: not equal / not zero */

loc_0001DDEE: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C180)); /* fadd dword ptr [0x22c180] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001DDFC: ;
    PUSH32(esp, 0x0001DE01u); RECOMP_ABI_CALL(0x00023380u, sub_00023380); /* call 0x00023380 */

loc_0001DE01: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xB4);
    edx = MEM32(esi + 0x304A20);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3D75C28F);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3048BC);
    PUSH32(esp, 0x0001DE27u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001DE27: ;
    eax = MEM32(esi + 0x304A28);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3D75C28F);
    PUSH32(esp, eax);
    PUSH32(esp, 0x304840);
    PUSH32(esp, 0x0001DE47u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001DE47: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x30C25C)); /* fadd dword ptr [esi + 0x30c25c] */
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x3D4CCCCD);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x30D9A8)); /* fsub dword ptr [edi + 0x30d9a8] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x3049E8);
    PUSH32(esp, 0x0001DE77u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001DE77: ;
    fp_push(MEMF(0x3049E8)); /* fld float */
    ecx = MEM32(0x304824);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x30D9A8)); /* fadd dword ptr [edi + 0x30d9a8] */
    PUSH32(esp, 0x222);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    MEMF(0x3048F4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x304944);
    PUSH32(esp, 0x0001DEA5u); RECOMP_ABI_CALL(0x000232E0u, sub_000232E0); /* call 0x000232E0 */

loc_0001DEA5: ;
    edx = MEM32(0x304870);
    PUSH32(esp, 0x222);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3049F8);
    PUSH32(esp, 0x0001DEBFu); RECOMP_ABI_CALL(0x000232E0u, sub_000232E0); /* call 0x000232E0 */

loc_0001DEBF: ;
    eax = MEM32(esp + 0x60);
    PUSH32(esp, 0x3CA3D70A);
    PUSH32(esp, 0x42800000);
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3048C4);
    PUSH32(esp, 0x0001DEDDu); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001DEDD: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001DEE5u); RECOMP_ABI_CALL(0x0001BAD0u, sub_0001BAD0); /* call 0x0001BAD0 */

loc_0001DEE5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00023470(); return; /* tail jmp 0x00023470 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001DF00
 * Original: 0x0001DF00 - 0x0001DF26 (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001DF00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001DF00: ;
    eax = ZX8(MEM8(esp + 4));
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + 0x304838);
    edx = MEM32(eax + 0x304844);
    eax = MEM32(eax + 0x304880);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001DF22u); RECOMP_ABI_CALL(0x0001BCA0u, sub_0001BCA0); /* call 0x0001BCA0 */

loc_0001DF22: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0001DF30
 * Original: 0x0001DF30 - 0x0001DF56 (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001DF30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001DF30: ;
    eax = ZX8(MEM8(esp + 4));
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + 0x304914);
    edx = MEM32(eax + 0x3047FC);
    eax = MEM32(eax + 0x304930);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001DF52u); RECOMP_ABI_CALL(0x0001BCA0u, sub_0001BCA0); /* call 0x0001BCA0 */

loc_0001DF52: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0001DF60
 * Original: 0x0001DF60 - 0x0001E0C5 (357 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001DF60(void)
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

loc_0001DF60: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001DF6Au); RECOMP_ABI_CALL(0x00023380u, sub_00023380); /* call 0x00023380 */

loc_0001DF6A: ;
    _fa = (uint32_t)(MEM8(0x3047E2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3047E2), 1 (8-bit) */
    esi = ZX8(MEM8(esp + 0x24));
    if (CMP_NE(_fa, _fb)) goto loc_0001E033; /* jne: not equal / not zero */

loc_0001DF7C: ;
    ecx = MEM32(esi * 4 + 0x30490C);
    edx = MEM32(0x3048BC);
    eax = MEM32(esi * 4 + 0x3049B8);
    MEM32(esp + 0x1C) = ecx;
    ecx = esp + 8;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x304840);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEM8(0x3047E2) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x0001DFCBu); RECOMP_ABI_CALL(0x000110F0u, sub_000110F0); /* call 0x000110F0 */

loc_0001DFCB: ;
    MEMF(0x304B8C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x304840)); /* fld float */
    eax = esi;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi * 4 + 0x30490C)); /* fsub dword ptr [esi*4 + 0x30490c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3048BC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi * 4 + 0x3049B8)); /* fsub dword ptr [esi*4 + 0x3049b8] */
    edi = MEM32(eax + 0x30D9BC);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001E002u); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_0001E002: ;
    ecx = MEM32(0x304944);
    fp_push(MEMF(0x3048F4)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi * 4 + 0x304844)); /* fsub dword ptr [esi*4 + 0x304844] */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    MEMF(0x3049D4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x304964) = eax;
    MEM32(0x304824) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0001E033: ;
    eax = MEM32(0x304964);
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x58);
    ecx = MEM32(edx + 0x30D9BC);
    edi = edx + 0x30D9BC;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001E050u); RECOMP_ABI_CALL(0x0006A110u, sub_0006A110); /* call 0x0006A110 */

loc_0001E050: ;
    ecx = MEM32(edi);
    edx = MEM32(0x304964);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x304B8C)); /* fmul dword ptr [0x304b8c] */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi * 4 + 0x304880)); /* fadd dword ptr [esi*4 + 0x304880] */
    MEMF(0x3048BC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3049D4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi * 4 + 0x304844)); /* fadd dword ptr [esi*4 + 0x304844] */
    MEMF(0x3048F4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001E085u); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_0001E085: ;
    eax = MEM32(edi);
    ecx = MEM32(0x304824);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x304B8C)); /* fmul dword ptr [0x304b8c] */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304944) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi * 4 + 0x304838)); /* fadd dword ptr [esi*4 + 0x304838] */
    MEM16(0x304946) = 0;
    MEMF(0x304840) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001E0B5u); RECOMP_ABI_CALL(0x00022270u, sub_00022270); /* call 0x00022270 */

loc_0001E0B5: ;
    PUSH32(esp, 0x0001E0BAu); RECOMP_ABI_CALL(0x0001BAD0u, sub_0001BAD0); /* call 0x0001BAD0 */

loc_0001E0BA: ;
    PUSH32(esp, 0x0001E0BFu); RECOMP_ABI_CALL(0x00023470u, sub_00023470); /* call 0x00023470 */

loc_0001E0BF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001E0D0
 * Original: 0x0001E0D0 - 0x0001E0F4 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E0D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001E0D0: ;
    SET_LO8(eax, MEM8(0x30D9CD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    SET_LO8(ecx, MEM8(0x30DA25));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x3047B5));
    SET_LO8(edx, 0xB);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0001E142(); return; } /* jne: not equal / not zero */

loc_0001E0E8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0001E14B(); return; } /* jne: not equal / not zero */

loc_0001E0EC: ;
    _fa = (uint32_t)(MEM8(0x3025C0)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3025C0), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0001E16B(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0001E0F4(); return; /* fallthrough 0x0001E0F4 */

}

/**
 * sub_0001E0F4
 * Original: 0x0001E0F4 - 0x0001E120 (44 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E0F4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001E0F4: ;
    _fa = (uint32_t)(MEM8(0x3047E4)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3047E4), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001E10B; /* je: equal / zero */

loc_0001E0FD: ;
    MEM8(0x3049C2) = 1;
    MEM8(0x3047E4) = 0xFF;

loc_0001E10B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001E11B; /* je: equal / zero */

loc_0001E10F: ;
    PUSH32(esp, 0x0001E114u); RECOMP_ABI_CALL(0x0001B9C0u, sub_0001B9C0); /* call 0x0001B9C0 */

loc_0001E114: ;
    MEM8(0x3047B5) = 0;

loc_0001E11B: ;
    SET_LO8(eax, MEM8(0x304900));

    g_seh_ebp = ebp; sub_0001E120(); return; /* fallthrough 0x0001E120 */

}

/**
 * sub_0001E120
 * Original: 0x0001E120 - 0x0001E142 (34 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001E120: ;
    ecx = ZX8(MEM8(0x3047E4));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF1 (32-bit) */
    POP32(esp, ebx);
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_0001E446(); return; } /* ja: above (unsigned >) */

loc_0001E134: ;
    ecx = ZX8(MEM8(ecx + 0x1E530));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x1E4DC)); return; /* indirect tail jmp */

}

/**
 * sub_0001E142
 * Original: 0x0001E142 - 0x0001E14B (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E142(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001E142: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0001E15E(); return; } /* jne: not equal / not zero */

loc_0001E146: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0001E16B(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_0001E14B(); return; /* fallthrough 0x0001E14B */

}

/**
 * sub_0001E14B
 * Original: 0x0001E14B - 0x0001E15E (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E14B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001E14B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0001E17E(); return; } /* jne: not equal / not zero */

loc_0001E150: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0001E0F4(); return; } /* jne: not equal / not zero */

loc_0001E154: ;
    _fa = (uint32_t)(MEM8(0x3025C1)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3025C1), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0001E1A5(); return; } /* jne: not equal / not zero */

loc_0001E15C: ;
    g_seh_ebp = ebp; sub_0001E0F4(); return; /* tail jmp 0x0001E0F4 */

}

/**
 * sub_0001E15E
 * Original: 0x0001E15E - 0x0001E16B (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E15E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001E15E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xD (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0001E14B(); return; } /* jne: not equal / not zero */

loc_0001E162: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xF (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0001E14B(); return; } /* jne: not equal / not zero */

loc_0001E167: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0001E0F4(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0001E16B(); return; /* fallthrough 0x0001E16B */

}

/**
 * sub_0001E16B
 * Original: 0x0001E16B - 0x0001E17E (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E16B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001E16B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0001E172u); RECOMP_ABI_CALL(0x0001BA30u, sub_0001BA30); /* call 0x0001BA30 */

loc_0001E172: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x304900) = LO8(eax);
    g_seh_ebp = ebp; sub_0001E120(); return; /* tail jmp 0x0001E120 */

}

/**
 * sub_0001E17E
 * Original: 0x0001E17E - 0x0001E243 (197 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E17E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001E17E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001E18C; /* jne: not equal / not zero */

loc_0001E183: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001E1A5; /* je: equal / zero */

loc_0001E187: ;
    g_seh_ebp = ebp; sub_0001E0F4(); return; /* tail jmp 0x0001E0F4 */

loc_0001E18C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xD (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0001E0F4(); return; } /* jne: not equal / not zero */

loc_0001E195: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xF (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0001E0F4(); return; } /* jne: not equal / not zero */

loc_0001E19D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0001E0F4(); return; } /* jne: not equal / not zero */

loc_0001E1A5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0001E1ACu); RECOMP_ABI_CALL(0x0001BA30u, sub_0001BA30); /* call 0x0001BA30 */

loc_0001E1AC: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x304900) = LO8(eax);
    g_seh_ebp = ebp; sub_0001E120(); return; /* tail jmp 0x0001E120 */

    PUSH32(esp, 0x0001E1C0u); RECOMP_ABI_CALL(0x0001C6B0u, sub_0001C6B0); /* call 0x0001C6B0 */

loc_0001E1C0: ;
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001E236; /* jne: not equal / not zero */

loc_0001E229: ;
    PUSH32(esp, 0x0001E22Eu); RECOMP_ABI_CALL(0x0001CF00u, sub_0001CF00); /* call 0x0001CF00 */

loc_0001E22E: ;
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

loc_0001E236: ;
    PUSH32(esp, 0x0001E23Bu); RECOMP_ABI_CALL(0x0001CF90u, sub_0001CF90); /* call 0x0001CF90 */

loc_0001E23B: ;
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0001E1A5
 * Original: 0x0001E1A5 - 0x0001E243 (158 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E1A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001E1A5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0001E1ACu); RECOMP_ABI_CALL(0x0001BA30u, sub_0001BA30); /* call 0x0001BA30 */

loc_0001E1AC: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x304900) = LO8(eax);
    g_seh_ebp = ebp; sub_0001E120(); return; /* tail jmp 0x0001E120 */

    PUSH32(esp, 0x0001E1C0u); RECOMP_ABI_CALL(0x0001C6B0u, sub_0001C6B0); /* call 0x0001C6B0 */

loc_0001E1C0: ;
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001E236; /* jne: not equal / not zero */

loc_0001E229: ;
    PUSH32(esp, 0x0001E22Eu); RECOMP_ABI_CALL(0x0001CF00u, sub_0001CF00); /* call 0x0001CF00 */

loc_0001E22E: ;
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

loc_0001E236: ;
    PUSH32(esp, 0x0001E23Bu); RECOMP_ABI_CALL(0x0001CF90u, sub_0001CF90); /* call 0x0001CF90 */

loc_0001E23B: ;
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0001E1BB
 * Original: 0x0001E1BB - 0x0001E1C8 (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E1BB(void)
{

loc_0001E1BB: ;
    PUSH32(esp, 0x0001E1C0u); RECOMP_ABI_CALL(0x0001C6B0u, sub_0001C6B0); /* call 0x0001C6B0 */

loc_0001E1C0: ;
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0001E1C8
 * Original: 0x0001E1C8 - 0x0001E1DA (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E1C8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001E1C8: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x0001E1CFu); RECOMP_ABI_CALL(0x0001C7E0u, sub_0001C7E0); /* call 0x0001C7E0 */

loc_0001E1CF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0001E1DA
 * Original: 0x0001E1DA - 0x0001E1EC (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E1DA(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001E1DA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0001E1E1u); RECOMP_ABI_CALL(0x0001C970u, sub_0001C970); /* call 0x0001C970 */

loc_0001E1E1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0001E1EC
 * Original: 0x0001E1EC - 0x0001E1F9 (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E1EC(void)
{

loc_0001E1EC: ;
    PUSH32(esp, 0x0001E1F1u); RECOMP_ABI_CALL(0x0001CAC0u, sub_0001CAC0); /* call 0x0001CAC0 */

loc_0001E1F1: ;
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0001E1F9
 * Original: 0x0001E1F9 - 0x0001E206 (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E1F9(void)
{

loc_0001E1F9: ;
    PUSH32(esp, 0x0001E1FEu); RECOMP_ABI_CALL(0x0001CB70u, sub_0001CB70); /* call 0x0001CB70 */

loc_0001E1FE: ;
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0001E206
 * Original: 0x0001E206 - 0x0001E213 (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E206(void)
{

loc_0001E206: ;
    PUSH32(esp, 0x0001E20Bu); RECOMP_ABI_CALL(0x0001CC20u, sub_0001CC20); /* call 0x0001CC20 */

loc_0001E20B: ;
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0001E213
 * Original: 0x0001E213 - 0x0001E220 (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E213(void)
{

loc_0001E213: ;
    PUSH32(esp, 0x0001E218u); RECOMP_ABI_CALL(0x0001CD00u, sub_0001CD00); /* call 0x0001CD00 */

loc_0001E218: ;
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0001E220
 * Original: 0x0001E220 - 0x0001E243 (35 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001E220: ;
    PUSH32(esp, 0x0001E225u); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_0001E225: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001E236; /* jne: not equal / not zero */

loc_0001E229: ;
    PUSH32(esp, 0x0001E22Eu); RECOMP_ABI_CALL(0x0001CF00u, sub_0001CF00); /* call 0x0001CF00 */

loc_0001E22E: ;
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

loc_0001E236: ;
    PUSH32(esp, 0x0001E23Bu); RECOMP_ABI_CALL(0x0001CF90u, sub_0001CF90); /* call 0x0001CF90 */

loc_0001E23B: ;
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0001E229
 * Original: 0x0001E229 - 0x0001E236 (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E229(void)
{

loc_0001E229: ;
    PUSH32(esp, 0x0001E22Eu); RECOMP_ABI_CALL(0x0001CF00u, sub_0001CF00); /* call 0x0001CF00 */

loc_0001E22E: ;
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0001E236
 * Original: 0x0001E236 - 0x0001E243 (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E236(void)
{

loc_0001E236: ;
    PUSH32(esp, 0x0001E23Bu); RECOMP_ABI_CALL(0x0001CF90u, sub_0001CF90); /* call 0x0001CF90 */

loc_0001E23B: ;
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0001E243
 * Original: 0x0001E243 - 0x0001E257 (20 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E243(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001E243: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5B);
    PUSH32(esp, 0x0001E24Cu); RECOMP_ABI_CALL(0x0001CE50u, sub_0001CE50); /* call 0x0001CE50 */

loc_0001E24C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0001E257
 * Original: 0x0001E257 - 0x0001E26D (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E257(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001E257: ;
    PUSH32(esp, 0x91);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001E262u); RECOMP_ABI_CALL(0x0001CDE0u, sub_0001CDE0); /* call 0x0001CDE0 */

loc_0001E262: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0001E26D
 * Original: 0x0001E26D - 0x0001E285 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E26D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001E26D: ;
    SET_LO8(eax, LO8(eax) ^ 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x91);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001E27Au); RECOMP_ABI_CALL(0x0001CDE0u, sub_0001CDE0); /* call 0x0001CDE0 */

loc_0001E27A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0001E285
 * Original: 0x0001E285 - 0x0001E2AD (40 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E285(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001E285: ;
    _fa = (uint32_t)(MEM8(0x3049C2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3049C2), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001E29A; /* jne: not equal / not zero */

loc_0001E28E: ;
    PUSH32(esp, 0x0001E293u); RECOMP_ABI_CALL(0x0001C6B0u, sub_0001C6B0); /* call 0x0001C6B0 */

loc_0001E293: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x304900));

loc_0001E29A: ;
    PUSH32(esp, 0x36);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001E2A2u); RECOMP_ABI_CALL(0x0001CDE0u, sub_0001CDE0); /* call 0x0001CDE0 */

loc_0001E2A2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0001E2AD
 * Original: 0x0001E2AD - 0x0001E308 (91 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E2AD(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001E2AD: ;
    PUSH32(esp, 0x0001E2B2u); RECOMP_ABI_CALL(0x00022270u, sub_00022270); /* call 0x00022270 */

loc_0001E2B2: ;
    PUSH32(esp, 0x304814);
    PUSH32(esp, 0x0001E2BCu); RECOMP_ABI_CALL(0x00022CB0u, sub_00022CB0); /* call 0x00022CB0 */

loc_0001E2BC: ;
    edx = MEM32(0x304780);
    PUSH32(esp, 0x41700000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x304814);
    PUSH32(esp, 0x0001E2D2u); RECOMP_ABI_CALL(0x00022A20u, sub_00022A20); /* call 0x00022A20 */

loc_0001E2D2: ;
    eax = MEM32(0x304814);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3048C4);
    PUSH32(esp, 0x0001E2EEu); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001E2EE: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001E2F6u); RECOMP_ABI_CALL(0x0001B880u, sub_0001B880); /* call 0x0001B880 */

loc_0001E2F6: ;
    PUSH32(esp, 0x0001E2FBu); RECOMP_ABI_CALL(0x0001BAD0u, sub_0001BAD0); /* call 0x0001BAD0 */

loc_0001E2FB: ;
    PUSH32(esp, 0x0001E300u); RECOMP_ABI_CALL(0x00023470u, sub_00023470); /* call 0x00023470 */

loc_0001E300: ;
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0001E308
 * Original: 0x0001E308 - 0x0001E3C1 (185 bytes, 44 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E308(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001E308: ;
    PUSH32(esp, 0x304814);
    PUSH32(esp, 0x0001E312u); RECOMP_ABI_CALL(0x00022CB0u, sub_00022CB0); /* call 0x00022CB0 */

loc_0001E312: ;
    ecx = MEM32(0x304780);
    PUSH32(esp, 0x41700000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x304814);
    PUSH32(esp, 0x0001E328u); RECOMP_ABI_CALL(0x00022A20u, sub_00022A20); /* call 0x00022A20 */

loc_0001E328: ;
    edx = MEM32(0x304814);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3048C4);
    PUSH32(esp, 0x0001E345u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001E345: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001E34Du); RECOMP_ABI_CALL(0x0001B880u, sub_0001B880); /* call 0x0001B880 */

loc_0001E34D: ;
    SET_LO8(eax, MEM8(0x316FF4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001E367; /* jne: not equal / not zero */

loc_0001E356: ;
    eax = MEM32(0x30F910);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x304944) = eax;
    goto loc_0001E382;

loc_0001E367: ;
    ecx = MEM32(0x30F910);
    _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x8000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304944) = ecx;
    MEM16(0x304946) = 0;

loc_0001E382: ;
    PUSH32(esp, 0x222);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3049F8);
    PUSH32(esp, 0x0001E397u); RECOMP_ABI_CALL(0x000232E0u, sub_000232E0); /* call 0x000232E0 */

loc_0001E397: ;
    PUSH32(esp, 0x38E);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x304BA4);
    PUSH32(esp, 0x0001E3ACu); RECOMP_ABI_CALL(0x000232E0u, sub_000232E0); /* call 0x000232E0 */

loc_0001E3AC: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001E3B4u); RECOMP_ABI_CALL(0x0001BAD0u, sub_0001BAD0); /* call 0x0001BAD0 */

loc_0001E3B4: ;
    PUSH32(esp, 0x0001E3B9u); RECOMP_ABI_CALL(0x00023470u, sub_00023470); /* call 0x00023470 */

loc_0001E3B9: ;
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0001E3C1
 * Original: 0x0001E3C1 - 0x0001E4D9 (280 bytes, 27 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E3C1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001E3C1: ;
    PUSH32(esp, 0x0001E3C6u); RECOMP_ABI_CALL(0x00022270u, sub_00022270); /* call 0x00022270 */

loc_0001E3C6: ;
    PUSH32(esp, 0x304814);
    PUSH32(esp, 0x0001E3D0u); RECOMP_ABI_CALL(0x00022CB0u, sub_00022CB0); /* call 0x00022CB0 */

loc_0001E3D0: ;
    edx = MEM32(0x304780);
    PUSH32(esp, 0x41700000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x304814);
    PUSH32(esp, 0x0001E3E6u); RECOMP_ABI_CALL(0x00022A20u, sub_00022A20); /* call 0x00022A20 */

loc_0001E3E6: ;
    eax = MEM32(0x304814);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3048C4);
    PUSH32(esp, 0x0001E402u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001E402: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001E40Au); RECOMP_ABI_CALL(0x0001B880u, sub_0001B880); /* call 0x0001B880 */

loc_0001E40A: ;
    PUSH32(esp, 0x0001E40Fu); RECOMP_ABI_CALL(0x0001BAD0u, sub_0001BAD0); /* call 0x0001BAD0 */

loc_0001E40F: ;
    PUSH32(esp, 0x0001E414u); RECOMP_ABI_CALL(0x00023470u, sub_00023470); /* call 0x00023470 */

loc_0001E414: ;
    SET_LO8(ecx, MEM8(0x3049CC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(0x316FF4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(0x316FF4) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001E4D1; /* je: equal / zero */

loc_0001E426: ;
    MEM8(0x3047E4) = 0xFF;
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

loc_0001E4D1: ;
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0001E435
 * Original: 0x0001E435 - 0x0001E446 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E435(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001E435: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001E43Bu); RECOMP_ABI_CALL(0x0001D540u, sub_0001D540); /* call 0x0001D540 */

loc_0001E43B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0001E446
 * Original: 0x0001E446 - 0x0001E640 (506 bytes, 200 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E446(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001E446: ;
    _fa = (uint32_t)(MEM8(0x3049C2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3049C2), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0001E4CC; /* jne: not equal / not zero */

loc_0001E44F: ;
    eax = ZX8(MEM8(0x304868));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(0x304968) = 1;
    if (CMP_A(_fa, _fb)) goto loc_0001E4CC; /* ja: above (unsigned >) */

loc_0001E462: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1E624); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0001E469u) goto loc_0001E469;
    if (_jt == 0x0001E47Du) goto loc_0001E47D;
    if (_jt == 0x0001E491u) goto loc_0001E491;
    if (_jt == 0x0001E4A2u) goto loc_0001E4A2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0001E469: ;
    MEM8(0x3049EC) = 1;
    PUSH32(esp, 0x0001E475u); RECOMP_ABI_CALL(0x0001C580u, sub_0001C580); /* call 0x0001C580 */

loc_0001E475: ;
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

loc_0001E47D: ;
    MEM8(0x3049EC) = 0;
    PUSH32(esp, 0x0001E489u); RECOMP_ABI_CALL(0x0001C580u, sub_0001C580); /* call 0x0001C580 */

loc_0001E489: ;
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

loc_0001E491: ;
    PUSH32(esp, 0x0001E496u); RECOMP_ABI_CALL(0x00022140u, sub_00022140); /* call 0x00022140 */

loc_0001E496: ;
    PUSH32(esp, 0x0001E49Bu); RECOMP_ABI_CALL(0x0001B9C0u, sub_0001B9C0); /* call 0x0001B9C0 */

loc_0001E49B: ;
    PUSH32(esp, 0x0001E4A0u); RECOMP_ABI_CALL(0x0001B880u, sub_0001B880); /* call 0x0001B880 */

loc_0001E4A0: ;
    goto loc_0001E4B6;

loc_0001E4A2: ;
    PUSH32(esp, 0x0001E4A7u); RECOMP_ABI_CALL(0x00022140u, sub_00022140); /* call 0x00022140 */

loc_0001E4A7: ;
    PUSH32(esp, 0x0001E4ACu); RECOMP_ABI_CALL(0x0001B9C0u, sub_0001B9C0); /* call 0x0001B9C0 */

loc_0001E4AC: ;
    PUSH32(esp, 0x0001E4B1u); RECOMP_ABI_CALL(0x0001B880u, sub_0001B880); /* call 0x0001B880 */

loc_0001E4B1: ;
    PUSH32(esp, 0x0001E4B6u); RECOMP_ABI_CALL(0x000222A0u, sub_000222A0); /* call 0x000222A0 */

loc_0001E4B6: ;
    PUSH32(esp, 0x0001E4BBu); RECOMP_ABI_CALL(0x0001B980u, sub_0001B980); /* call 0x0001B980 */

loc_0001E4BB: ;
    PUSH32(esp, 0x0001E4C0u); RECOMP_ABI_CALL(0x0001B920u, sub_0001B920); /* call 0x0001B920 */

loc_0001E4C0: ;
    PUSH32(esp, 0x0001E4C5u); RECOMP_ABI_CALL(0x0001B930u, sub_0001B930); /* call 0x0001B930 */

loc_0001E4C5: ;
    MEM8(0x307604) = 2;

loc_0001E4CC: ;
    PUSH32(esp, 0x0001E4D1u); RECOMP_ABI_CALL(0x0001C580u, sub_0001C580); /* call 0x0001C580 */

loc_0001E4D1: ;
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn(0x01u, 1)); /* in al, 1 */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(edx)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    SET_LO8(edx, LO8(edx) + LO8(ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx -= 1; /* loope: count down */
    if ((ecx != 0) && ((_fa == 0))) (void)0; /* goto loc_0001E4EC - dead code, label not in function */ /* loope: ecx is non-zero and zero flag set */

loc_0001E4EB: ;
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(eax)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    SET_HI8(eax, HI8(eax) + HI8(ecx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx -= 1; /* loope: count down */
    if ((ecx != 0) && ((_fa == 0))) (void)0; /* goto loc_0001E4F0 - dead code, label not in function */ /* loope: ecx is non-zero and zero flag set */

loc_0001E4EF: ;
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + HI8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx -= 1; /* loope: count down */
    if ((ecx != 0) && ((_fa == 0))) (void)0; /* goto loc_0001E4F4 - dead code, label not in function */ /* loope: ecx is non-zero and zero flag set */

loc_0001E4F3: ;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(esi) = MEM8(esi) + LO8(eax);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx -= 1; /* loop: count down */
    if (ecx != 0) (void)0; /* goto loc_0001E4F8 - dead code, label not in function */ /* loop: ecx is non-zero */

loc_0001E4F7: ;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + 0x130001E2)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebp + 0x130001E2) = MEM8(ebp + 0x130001E2) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebp + 0x130001E2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx -= 1; /* loop: count down */
    if (ecx != 0) (void)0; /* goto loc_0001E500 - dead code, label not in function */ /* loop: ecx is non-zero */

loc_0001E4FF: ;
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx -= 1; /* loop: count down */
    if (ecx != 0) (void)0; /* goto loc_0001E504 - dead code, label not in function */ /* loop: ecx is non-zero */

loc_0001E503: ;
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(esi) = MEM8(esi) + HI8(edx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx -= 1; /* loop: count down */
    if (ecx != 0) (void)0; /* goto loc_0001E508 - dead code, label not in function */ /* loop: ecx is non-zero */

loc_0001E507: ;
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + HI8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx -= 1; /* loop: count down */
    if (ecx != 0) (void)0; /* goto loc_0001E50C - dead code, label not in function */ /* loop: ecx is non-zero */

loc_0001E50B: ;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + -30)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebx + -30) = MEM8(ebx + -30) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebx + -30)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx -= 1; /* loop: count down */
    if (ecx != 0) (void)0; /* goto loc_0001E514 - dead code, label not in function */ /* loop: ecx is non-zero */

loc_0001E513: ;
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + -30)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ebp + -30) = MEM8(ebp + -30) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ebp + -30)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    SET_LO8(eax, xbox_PortIn(0x01u, 1)); /* in al, 1 */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if (ecx == 0) (void)0; /* goto loc_0001E520 - dead code, label not in function */ /* jecxz */

loc_0001E51F: ;
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + -1056964126)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ebp + -1056964126) = MEM8(ebp + -1056964126) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ebp + -1056964126)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if (ecx == 0) (void)0; /* goto loc_0001E528 - dead code, label not in function */ /* jecxz */

loc_0001E527: ;
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(0x460001E4)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(0x460001E4) = MEM8(0x460001E4) + HI8(edx);
    _fa = (uint32_t)(MEM8(0x460001E4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn(0x01u, 1)); /* in al, 1 */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(edx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(edx) = MEM32(edx) + eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax + 0x14141414)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(eax + 0x14141414))) >> 32) & 1);
    eax = eax + MEM32(eax + 0x14141414);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    PUSH32(esp, 0 /* seg:es */);
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(MEM8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(MEM8(eax))) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    MEM32(edx) = MEM32(edx) | ecx;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(MEM8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(MEM8(edx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + MEM8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x1414020E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0xF) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x10) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(MEM32(edx)) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(edx) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x13) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(2) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(MEM8(ebx + 0x1E469FF)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(MEM8(ebx + 0x1E469FF))) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + MEM8(ebx + 0x1E469FF));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + -28)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(ebp + -28) = MEM8(ebp + -28) + HI8(ebx);
    _fa = (uint32_t)(MEM8(ebp + -28)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _tmp = ecx;
    ecx = eax;
    eax = _tmp; }
    SET_LO8(eax, xbox_PortIn(0x01u, 1)); /* in al, 1 */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + -872414748)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(edx + -872414748) = MEM8(edx + -872414748) + HI8(eax);
    _fa = (uint32_t)(MEM8(edx + -872414748)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0001E4CC
 * Original: 0x0001E4CC - 0x0001E4D9 (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E4CC(void)
{

loc_0001E4CC: ;
    PUSH32(esp, 0x0001E4D1u); RECOMP_ABI_CALL(0x0001C580u, sub_0001C580); /* call 0x0001C580 */

loc_0001E4D1: ;
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0001E4D1
 * Original: 0x0001E4D1 - 0x0001E640 (367 bytes, 172 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E4D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001E4D1: ;
    MEM8(0x3049C2) = 0;
    esp += 4; return; /* ret */

    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn(0x01u, 1)); /* in al, 1 */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(edx)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    SET_LO8(edx, LO8(edx) + LO8(ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx -= 1; /* loope: count down */
    if ((ecx != 0) && ((_fa == 0))) (void)0; /* goto loc_0001E4EC - dead code, label not in function */ /* loope: ecx is non-zero and zero flag set */

loc_0001E4EB: ;
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(eax)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    SET_HI8(eax, HI8(eax) + HI8(ecx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx -= 1; /* loope: count down */
    if ((ecx != 0) && ((_fa == 0))) (void)0; /* goto loc_0001E4F0 - dead code, label not in function */ /* loope: ecx is non-zero and zero flag set */

loc_0001E4EF: ;
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + HI8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx -= 1; /* loope: count down */
    if ((ecx != 0) && ((_fa == 0))) (void)0; /* goto loc_0001E4F4 - dead code, label not in function */ /* loope: ecx is non-zero and zero flag set */

loc_0001E4F3: ;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(esi) = MEM8(esi) + LO8(eax);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx -= 1; /* loop: count down */
    if (ecx != 0) (void)0; /* goto loc_0001E4F8 - dead code, label not in function */ /* loop: ecx is non-zero */

loc_0001E4F7: ;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + 0x130001E2)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebp + 0x130001E2) = MEM8(ebp + 0x130001E2) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebp + 0x130001E2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx -= 1; /* loop: count down */
    if (ecx != 0) (void)0; /* goto loc_0001E500 - dead code, label not in function */ /* loop: ecx is non-zero */

loc_0001E4FF: ;
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx -= 1; /* loop: count down */
    if (ecx != 0) (void)0; /* goto loc_0001E504 - dead code, label not in function */ /* loop: ecx is non-zero */

loc_0001E503: ;
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(esi) = MEM8(esi) + HI8(edx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx -= 1; /* loop: count down */
    if (ecx != 0) (void)0; /* goto loc_0001E508 - dead code, label not in function */ /* loop: ecx is non-zero */

loc_0001E507: ;
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + HI8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx -= 1; /* loop: count down */
    if (ecx != 0) (void)0; /* goto loc_0001E50C - dead code, label not in function */ /* loop: ecx is non-zero */

loc_0001E50B: ;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + -30)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebx + -30) = MEM8(ebx + -30) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebx + -30)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx -= 1; /* loop: count down */
    if (ecx != 0) (void)0; /* goto loc_0001E514 - dead code, label not in function */ /* loop: ecx is non-zero */

loc_0001E513: ;
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + -30)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ebp + -30) = MEM8(ebp + -30) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ebp + -30)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    SET_LO8(eax, xbox_PortIn(0x01u, 1)); /* in al, 1 */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if (ecx == 0) (void)0; /* goto loc_0001E520 - dead code, label not in function */ /* jecxz */

loc_0001E51F: ;
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + -1056964126)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ebp + -1056964126) = MEM8(ebp + -1056964126) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ebp + -1056964126)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if (ecx == 0) (void)0; /* goto loc_0001E528 - dead code, label not in function */ /* jecxz */

loc_0001E527: ;
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(0x460001E4)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(0x460001E4) = MEM8(0x460001E4) + HI8(edx);
    _fa = (uint32_t)(MEM8(0x460001E4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn(0x01u, 1)); /* in al, 1 */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(edx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(edx) = MEM32(edx) + eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax + 0x14141414)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(eax + 0x14141414))) >> 32) & 1);
    eax = eax + MEM32(eax + 0x14141414);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    PUSH32(esp, 0 /* seg:es */);
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(MEM8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(MEM8(eax))) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    MEM32(edx) = MEM32(edx) | ecx;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(MEM8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(MEM8(edx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + MEM8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x1414020E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0xF) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x10) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(MEM32(edx)) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(edx) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x13) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x14) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(2) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(MEM8(ebx + 0x1E469FF)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(MEM8(ebx + 0x1E469FF))) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + MEM8(ebx + 0x1E469FF));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + -28)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(ebp + -28) = MEM8(ebp + -28) + HI8(ebx);
    _fa = (uint32_t)(MEM8(ebp + -28)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _tmp = ecx;
    ecx = eax;
    eax = _tmp; }
    SET_LO8(eax, xbox_PortIn(0x01u, 1)); /* in al, 1 */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + -872414748)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(edx + -872414748) = MEM8(edx + -872414748) + HI8(eax);
    _fa = (uint32_t)(MEM8(edx + -872414748)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0001E640
 * Original: 0x0001E640 - 0x0001E813 (467 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E640(void)
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

loc_0001E640: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001E646u); RECOMP_ABI_CALL(0x00022140u, sub_00022140); /* call 0x00022140 */

loc_0001E646: ;
    PUSH32(esp, 0x0001E64Bu); RECOMP_ABI_CALL(0x00022270u, sub_00022270); /* call 0x00022270 */

loc_0001E64B: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x0001E652u); RECOMP_ABI_CALL(0x000224C0u, sub_000224C0); /* call 0x000224C0 */

loc_0001E652: ;
    ecx = MEM32(0x304914);
    edx = MEM32(0x304930);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(0x30486C) = eax;
    PUSH32(esp, 0x0001E66Au); RECOMP_ABI_CALL(0x0001BB50u, sub_0001BB50); /* call 0x0001BB50 */

loc_0001E66A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001E6FD; /* jne: not equal / not zero */

loc_0001E675: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001E67Cu); RECOMP_ABI_CALL(0x0001BC00u, sub_0001BC00); /* call 0x0001BC00 */

loc_0001E67C: ;
    ecx = MEM32(0x304944);
    esi = 0x1555;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(0x304A1C) = eax;
    PUSH32(esp, 0x0001E694u); RECOMP_ABI_CALL(0x00022A50u, sub_00022A50); /* call 0x00022A50 */

loc_0001E694: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001E7A4; /* jne: not equal / not zero */

loc_0001E69F: ;
    edx = MEM32(0x304944);
    ecx = MEM32(0x304A1C);
    PUSH32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001E6B6u); RECOMP_ABI_CALL(0x00022A70u, sub_00022A70); /* call 0x00022A70 */

loc_0001E6B6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(0x304A1C);
    if (CMP_NE(_fa, _fb)) goto loc_0001E6C6; /* jne: not equal / not zero */

loc_0001E6C2: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0001E6C8;

loc_0001E6C6: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0001E6C8: ;
    PUSH32(esp, 0);

loc_0001E6CA: ;
    MEM32(0x304A1C) = eax;
    PUSH32(esp, 0x0001E6D4u); RECOMP_ABI_CALL(0x0001DF30u, sub_0001DF30); /* call 0x0001DF30 */

loc_0001E6D4: ;
    esi = eax;
    eax = MEM32(0x3049F8);
    PUSH32(esp, 0x4000);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001E6E7u); RECOMP_ABI_CALL(0x00022A70u, sub_00022A70); /* call 0x00022A70 */

loc_0001E6E7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001E7A4; /* jne: not equal / not zero */

loc_0001E6F2: ;
    MEM32(0x3049F8) = esi;
    goto loc_0001E7A4;

loc_0001E6FD: ;
    ecx = MEM32(0x304918);
    edx = MEM32(0x304934);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001E710u); RECOMP_ABI_CALL(0x0001BB50u, sub_0001BB50); /* call 0x0001BB50 */

loc_0001E710: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001E772; /* jne: not equal / not zero */

loc_0001E717: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001E71Eu); RECOMP_ABI_CALL(0x0001BC00u, sub_0001BC00); /* call 0x0001BC00 */

loc_0001E71E: ;
    ecx = MEM32(0x304944);
    esi = 0x1555;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(0x304A1C) = eax;
    PUSH32(esp, 0x0001E736u); RECOMP_ABI_CALL(0x00022A50u, sub_00022A50); /* call 0x00022A50 */

loc_0001E736: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001E7A4; /* jne: not equal / not zero */

loc_0001E73D: ;
    edx = MEM32(0x304944);
    ecx = MEM32(0x304A1C);
    PUSH32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001E754u); RECOMP_ABI_CALL(0x00022A70u, sub_00022A70); /* call 0x00022A70 */

loc_0001E754: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(0x304A1C);
    if (CMP_NE(_fa, _fb)) goto loc_0001E769; /* jne: not equal / not zero */

loc_0001E760: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    goto loc_0001E6CA;

loc_0001E769: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 1);
    goto loc_0001E6CA;

loc_0001E772: ;
    PUSH32(esp, 0x0001E777u); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_0001E777: ;
    ecx = MEM32(0x304944);
    PUSH32(esp, 0x2000);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(0x304A1C) = eax;
    PUSH32(esp, 0x0001E793u); RECOMP_ABI_CALL(0x00022A50u, sub_00022A50); /* call 0x00022A50 */

loc_0001E793: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001E7A4; /* jne: not equal / not zero */

loc_0001E79A: ;
    _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x304A1C) = MEM32(0x304A1C) + 0x4000;
    _fa = (uint32_t)(MEM32(0x304A1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001E7A4: ;
    PUSH32(esp, 0x3048C4);
    PUSH32(esp, 0x0001E7AEu); RECOMP_ABI_CALL(0x00022CB0u, sub_00022CB0); /* call 0x00022CB0 */

loc_0001E7AE: ;
    fp_push(MEMF(0x304780)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C1D4)); /* fsub dword ptr [0x22c1d4] */
    PUSH32(esp, 0x41700000);
    fp_push(MEMF(0x3048C4)); /* fld float */
    PUSH32(esp, 0x40800000);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C234)); /* fsub dword ptr [0x22c234] */
    PUSH32(esp, 0x3048C4);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(0x3048C4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001E7E2u); RECOMP_ABI_CALL(0x00022A20u, sub_00022A20); /* call 0x00022A20 */

loc_0001E7E2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001E7EAu); RECOMP_ABI_CALL(0x0001B880u, sub_0001B880); /* call 0x0001B880 */

loc_0001E7EA: ;
    edx = MEM32(0x304A1C);
    eax = MEM32(0x30486C);
    MEM32(0x304944) = edx;
    MEM32(0x3049F8) = eax;
    PUSH32(esp, 0x0001E805u); RECOMP_ABI_CALL(0x0001BAD0u, sub_0001BAD0); /* call 0x0001BAD0 */

loc_0001E805: ;
    PUSH32(esp, 0x0001E80Au); RECOMP_ABI_CALL(0x00023470u, sub_00023470); /* call 0x00023470 */

loc_0001E80A: ;
    MEM8(0x3048C0) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001E820
 * Original: 0x0001E820 - 0x0001EDE2 (1474 bytes, 383 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E820(void)
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

loc_0001E820: ;
    SET_LO8(eax, MEM8(0x307604));
    ecx = ZX8(LO8(eax));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x14 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0001EA2D; /* ja: above (unsigned >) */

loc_0001E831: ;
    PUSH32(esp, ebx);
    { uint32_t _jt = MEM32(ecx * 4 + 0x1EDE4); /* switch: 26 entries, 24 targets */
    if (_jt == 0x0001E839u) goto loc_0001E839;
    if (_jt == 0x0001E88Cu) goto loc_0001E88C;
    if (_jt == 0x0001E8C9u) goto loc_0001E8C9;
    if (_jt == 0x0001E8E5u) goto loc_0001E8E5;
    if (_jt == 0x0001E8EBu) goto loc_0001E8EB;
    if (_jt == 0x0001E8FBu) goto loc_0001E8FB;
    if (_jt == 0x0001E907u) goto loc_0001E907;
    if (_jt == 0x0001E913u) goto loc_0001E913;
    if (_jt == 0x0001E967u) goto loc_0001E967;
    if (_jt == 0x0001EA2Cu) goto loc_0001EA2C;
    if (_jt == 0x0001EB68u) goto loc_0001EB68;
    if (_jt == 0x0001EB9Fu) goto loc_0001EB9F;
    if (_jt == 0x0001EBA8u) goto loc_0001EBA8;
    if (_jt == 0x0001EBAEu) goto loc_0001EBAE;
    if (_jt == 0x0001EBBCu) goto loc_0001EBBC;
    if (_jt == 0x0001EBC2u) goto loc_0001EBC2;
    if (_jt == 0x0001EC3Fu) goto loc_0001EC3F;
    if (_jt == 0x0001ECB6u) goto loc_0001ECB6;
    if (_jt == 0x0001ED55u) goto loc_0001ED55;
    if (_jt == 0x0001ED5Bu) goto loc_0001ED5B;
    if (_jt == 0x0001ED7Fu) goto loc_0001ED7F;
    if (_jt == 0x0001ED92u) goto loc_0001ED92;
    if (_jt == 0x0001EDA4u) goto loc_0001EDA4;
    if (_jt == 0x0001EDC8u) goto loc_0001EDC8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0001E839: ;
    PUSH32(esp, 0x0001E83Eu); RECOMP_ABI_CALL(0x00022140u, sub_00022140); /* call 0x00022140 */

loc_0001E83E: ;
    SET_LO8(eax, MEM8(0x30485C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001E852; /* je: equal / zero */

loc_0001E847: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001E852; /* je: equal / zero */

loc_0001E84B: ;
    PUSH32(esp, 0x0001E850u); RECOMP_ABI_CALL(0x0001B9C0u, sub_0001B9C0); /* call 0x0001B9C0 */

loc_0001E850: ;
    goto loc_0001E857;

loc_0001E852: ;
    PUSH32(esp, 0x0001E857u); RECOMP_ABI_CALL(0x0001B9F0u, sub_0001B9F0); /* call 0x0001B9F0 */

loc_0001E857: ;
    PUSH32(esp, 0x0001E85Cu); RECOMP_ABI_CALL(0x0001B880u, sub_0001B880); /* call 0x0001B880 */

loc_0001E85C: ;
    MEM8(0x316FF4) = 0;
    PUSH32(esp, 0x0001E868u); RECOMP_ABI_CALL(0x0001B920u, sub_0001B920); /* call 0x0001B920 */

loc_0001E868: ;
    PUSH32(esp, 0x0001E86Du); RECOMP_ABI_CALL(0x0001B980u, sub_0001B980); /* call 0x0001B980 */

loc_0001E86D: ;
    PUSH32(esp, 0x0001E872u); RECOMP_ABI_CALL(0x0001B930u, sub_0001B930); /* call 0x0001B930 */

loc_0001E872: ;
    PUSH32(esp, 0x0001E877u); RECOMP_ABI_CALL(0x0001BAD0u, sub_0001BAD0); /* call 0x0001BAD0 */

loc_0001E877: ;
    PUSH32(esp, 0x0001E87Cu); RECOMP_ABI_CALL(0x00023470u, sub_00023470); /* call 0x00023470 */

loc_0001E87C: ;
    MEM8(0x307604) = 2;
    MEM8(0x3047E4) = 0xFF;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001E88C: ;
    PUSH32(esp, 0x0001E891u); RECOMP_ABI_CALL(0x00022140u, sub_00022140); /* call 0x00022140 */

loc_0001E891: ;
    PUSH32(esp, 0x0001E896u); RECOMP_ABI_CALL(0x0001B9C0u, sub_0001B9C0); /* call 0x0001B9C0 */

loc_0001E896: ;
    PUSH32(esp, 0x0001E89Bu); RECOMP_ABI_CALL(0x0001B880u, sub_0001B880); /* call 0x0001B880 */

loc_0001E89B: ;
    PUSH32(esp, 0x0001E8A0u); RECOMP_ABI_CALL(0x000222A0u, sub_000222A0); /* call 0x000222A0 */

loc_0001E8A0: ;
    PUSH32(esp, 0x0001E8A5u); RECOMP_ABI_CALL(0x0001B920u, sub_0001B920); /* call 0x0001B920 */

loc_0001E8A5: ;
    PUSH32(esp, 0x0001E8AAu); RECOMP_ABI_CALL(0x0001B980u, sub_0001B980); /* call 0x0001B980 */

loc_0001E8AA: ;
    PUSH32(esp, 0x0001E8AFu); RECOMP_ABI_CALL(0x0001B930u, sub_0001B930); /* call 0x0001B930 */

loc_0001E8AF: ;
    PUSH32(esp, 0x0001E8B4u); RECOMP_ABI_CALL(0x0001BAD0u, sub_0001BAD0); /* call 0x0001BAD0 */

loc_0001E8B4: ;
    PUSH32(esp, 0x0001E8B9u); RECOMP_ABI_CALL(0x00023470u, sub_00023470); /* call 0x00023470 */

loc_0001E8B9: ;
    MEM8(0x307604) = 2;
    MEM8(0x3047E4) = 0xFF;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001E8C9: ;
    PUSH32(esp, 0x0001E8CEu); RECOMP_ABI_CALL(0x00023380u, sub_00023380); /* call 0x00023380 */

loc_0001E8CE: ;
    eax = ZX8(MEM8(0x30493C));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0001EA2C; /* ja: above (unsigned >) */

loc_0001E8DE: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1EE38); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0001E8E5u) goto loc_0001E8E5;
    if (_jt == 0x0001E8EBu) goto loc_0001E8EB;
    if (_jt == 0x0001E8FBu) goto loc_0001E8FB;
    if (_jt == 0x0001E907u) goto loc_0001E907;
    if (_jt == 0x0001E913u) goto loc_0001E913;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0001E8E5: ;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0001E0D0(); return; /* tail jmp 0x0001E0D0 */

loc_0001E8EB: ;
    PUSH32(esp, 0x0001E8F0u); RECOMP_ABI_CALL(0x00022270u, sub_00022270); /* call 0x00022270 */

loc_0001E8F0: ;
    PUSH32(esp, 0x0001E8F5u); RECOMP_ABI_CALL(0x0001BAD0u, sub_0001BAD0); /* call 0x0001BAD0 */

loc_0001E8F5: ;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000222F0(); return; /* tail jmp 0x000222F0 */

loc_0001E8FB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0001E902u); RECOMP_ABI_CALL(0x0001DF60u, sub_0001DF60); /* call 0x0001DF60 */

loc_0001E902: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001E907: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0001E90Eu); RECOMP_ABI_CALL(0x0001DF60u, sub_0001DF60); /* call 0x0001DF60 */

loc_0001E90E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001E913: ;
    PUSH32(esp, 0x0001E918u); RECOMP_ABI_CALL(0x00022270u, sub_00022270); /* call 0x00022270 */

loc_0001E918: ;
    PUSH32(esp, 0x304814);
    PUSH32(esp, 0x0001E922u); RECOMP_ABI_CALL(0x00022CB0u, sub_00022CB0); /* call 0x00022CB0 */

loc_0001E922: ;
    eax = MEM32(0x304780);
    PUSH32(esp, 0x41700000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x304814);
    PUSH32(esp, 0x0001E937u); RECOMP_ABI_CALL(0x00022A20u, sub_00022A20); /* call 0x00022A20 */

loc_0001E937: ;
    ecx = MEM32(0x304814);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x41800000);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3048C4);
    PUSH32(esp, 0x0001E954u); RECOMP_ABI_CALL(0x00023250u, sub_00023250); /* call 0x00023250 */

loc_0001E954: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001E95Cu); RECOMP_ABI_CALL(0x0001B8A0u, sub_0001B8A0); /* call 0x0001B8A0 */

loc_0001E95C: ;
    PUSH32(esp, 0x0001E961u); RECOMP_ABI_CALL(0x0001BAD0u, sub_0001BAD0); /* call 0x0001BAD0 */

loc_0001E961: ;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00023470(); return; /* tail jmp 0x00023470 */

loc_0001E967: ;
    SET_LO8(ecx, MEM8(0x30EDC8));
    SET_LO8(ebx, MEM8(0x305B14));
    eax = ZX8(LO8(ecx));
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x58);
    SET_LO8(edx, MEM8(esi + 0x30D9A3));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    SET_LO8(edx, MEM8(esi + 0x30D9A0));
    if (CMP_B(_fa, _fb)) goto loc_0001EA7C; /* jb: below (unsigned <) */

loc_0001E990: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001EA55; /* jne: not equal / not zero */

loc_0001E99A: ;
    edx = eax;
    edx = edx ^ 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x58);
    _fa = (uint32_t)(MEM8(edx + 0x30D9A0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x30D9A0), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001EA55; /* jne: not equal / not zero */

loc_0001E9AF: ;
    _fa = (uint32_t)(MEM16(edx + 0x30D9C0)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0x30D9C0), LO16(ebx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0001EA55; /* jbe: below or equal (unsigned <=) */

loc_0001E9BC: ;
    SET_LO8(ecx, LO8(ecx) ^ 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(ecx));
    ecx = ZX8(LO8(edx));
    eax = MEM32(ecx * 4 + 0x304914);
    PUSH32(esp, eax);
    eax = MEM32(ecx * 4 + 0x304930);
    PUSH32(esp, eax);
    MEM8(0x304900) = LO8(edx);
    PUSH32(esp, 0x0001E9DFu); RECOMP_ABI_CALL(0x0001BB50u, sub_0001BB50); /* call 0x0001BB50 */

loc_0001E9DF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001EA2E; /* jne: not equal / not zero */

loc_0001E9E6: ;
    fp_push(MEMF(ecx * 4 + 0x30490C)); /* fld float */
    edx = ecx;
    edx = edx ^ 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = -fp_top(); /* fchs */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x58);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(edx + 0x30D9E8) = LO8(ebx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx * 4 + 0x3049B8)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001EA15u); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_0001EA15: ;
    _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x4000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x304900));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001EA28u); RECOMP_ABI_CALL(0x0001D810u, sub_0001D810); /* call 0x0001D810 */

loc_0001EA28: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_0001EA2C: ;
    POP32(esp, ebx);

loc_0001EA2D: ;
    esp += 4; return; /* ret */

loc_0001EA2E: ;
    ecx = ecx ^ 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    PUSH32(esp, edx);
    MEM8(ecx + 0x30D9E8) = LO8(ebx);
    PUSH32(esp, 0x0001EA40u); RECOMP_ABI_CALL(0x00022890u, sub_00022890); /* call 0x00022890 */

loc_0001EA40: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(0x304900));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001EA4Fu); RECOMP_ABI_CALL(0x0001D810u, sub_0001D810); /* call 0x0001D810 */

loc_0001EA4F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001EA55: ;
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    PUSH32(esp, ecx);
    MEM8(eax + 0x30D9E8) = LO8(ebx);
    PUSH32(esp, 0x0001EA67u); RECOMP_ABI_CALL(0x00022890u, sub_00022890); /* call 0x00022890 */

loc_0001EA67: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(0x30EDC8));
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001EA76u); RECOMP_ABI_CALL(0x0001D810u, sub_0001D810); /* call 0x0001D810 */

loc_0001EA76: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001EA7C: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001EB41; /* jne: not equal / not zero */

loc_0001EA86: ;
    edx = eax;
    edx = edx ^ 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x58);
    _fa = (uint32_t)(MEM8(edx + 0x30D9A0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x30D9A0), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001EB41; /* jne: not equal / not zero */

loc_0001EA9B: ;
    _fa = (uint32_t)(MEM16(edx + 0x30D9C0)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0x30D9C0), LO16(ebx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0001EB41; /* jbe: below or equal (unsigned <=) */

loc_0001EAA8: ;
    SET_LO8(ecx, LO8(ecx) ^ 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(ecx));
    ecx = ZX8(LO8(edx));
    eax = MEM32(ecx * 4 + 0x304914);
    PUSH32(esp, eax);
    eax = MEM32(ecx * 4 + 0x304930);
    PUSH32(esp, eax);
    MEM8(0x304900) = LO8(edx);
    PUSH32(esp, 0x0001EACBu); RECOMP_ABI_CALL(0x0001BB50u, sub_0001BB50); /* call 0x0001BB50 */

loc_0001EACB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001EB1A; /* jne: not equal / not zero */

loc_0001EAD2: ;
    fp_push(MEMF(ecx * 4 + 0x30490C)); /* fld float */
    edx = ecx;
    edx = edx ^ 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = -fp_top(); /* fchs */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x58);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(edx + 0x30D9E8) = LO8(ebx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx * 4 + 0x3049B8)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001EB01u); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_0001EB01: ;
    _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x4000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x304900));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001EB14u); RECOMP_ABI_CALL(0x0001DB90u, sub_0001DB90); /* call 0x0001DB90 */

loc_0001EB14: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001EB1A: ;
    ecx = ecx ^ 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    PUSH32(esp, edx);
    MEM8(ecx + 0x30D9E8) = LO8(ebx);
    PUSH32(esp, 0x0001EB2Cu); RECOMP_ABI_CALL(0x00022890u, sub_00022890); /* call 0x00022890 */

loc_0001EB2C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(0x304900));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001EB3Bu); RECOMP_ABI_CALL(0x0001DB90u, sub_0001DB90); /* call 0x0001DB90 */

loc_0001EB3B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001EB41: ;
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    PUSH32(esp, ecx);
    MEM8(eax + 0x30D9E8) = LO8(ebx);
    PUSH32(esp, 0x0001EB53u); RECOMP_ABI_CALL(0x00022890u, sub_00022890); /* call 0x00022890 */

loc_0001EB53: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(0x30EDC8));
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001EB62u); RECOMP_ABI_CALL(0x0001DB90u, sub_0001DB90); /* call 0x0001DB90 */

loc_0001EB62: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001EB68: ;
    _fa = (uint32_t)(MEM8(0x30485C)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30485C), LO8(eax) (8-bit) */
    SET_LO8(eax, MEM8(0x30EDC8));
    if (CMP_EQ(_fa, _fb)) goto loc_0001EB85; /* je: equal / zero */

loc_0001EB75: ;
    ecx = ZX8(LO8(eax));
    ecx = ecx ^ 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    MEM8(ecx + 0x30D9E8) = 0;

loc_0001EB85: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001EB8Bu); RECOMP_ABI_CALL(0x00022890u, sub_00022890); /* call 0x00022890 */

loc_0001EB8B: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(0x30EDC8));
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001EB9Au); RECOMP_ABI_CALL(0x0001D810u, sub_0001D810); /* call 0x0001D810 */

loc_0001EB9A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001EB9F: ;
    MEM8(0x307604) = 0x12;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001EBA8: ;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0001D0B0(); return; /* tail jmp 0x0001D0B0 */

loc_0001EBAE: ;
    PUSH32(esp, 0x0001EBB3u); RECOMP_ABI_CALL(0x0001E640u, sub_0001E640); /* call 0x0001E640 */

loc_0001EBB3: ;
    MEM8(0x307604) = 6;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001EBBC: ;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0001D020(); return; /* tail jmp 0x0001D020 */

loc_0001EBC2: ;
    _fa = (uint32_t)(MEM8(0x30485C)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30485C), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001EC34; /* je: equal / zero */

loc_0001EBCA: ;
    PUSH32(esp, 0x0001EBCFu); RECOMP_ABI_CALL(0x00022140u, sub_00022140); /* call 0x00022140 */

loc_0001EBCF: ;
    PUSH32(esp, 0x0001EBD4u); RECOMP_ABI_CALL(0x0001B840u, sub_0001B840); /* call 0x0001B840 */

loc_0001EBD4: ;
    eax = ZX8(LO8(eax));
    ecx = MEM32(eax * 4 + 0x2C0EF0);
    MEM32(0x30492C) = ecx;
    PUSH32(esp, 0x0001EBE9u); RECOMP_ABI_CALL(0x0001F930u, sub_0001F930); /* call 0x0001F930 */

loc_0001EBE9: ;
    eax = ZX8(MEM8(0x30D9A1));
    edx = eax + eax * 8;
    eax = ZX8(MEM8(0x30D9A2));
    eax = (uint32_t)(int32_t)SMEM8(edx + eax + 0x2C15D8);
    ecx = eax + eax * 2;
    eax = ZX8(MEM8(0x30D9F9));
    edx = eax + eax * 8;
    eax = ZX8(MEM8(0x30D9FA));
    edx = (uint32_t)(int32_t)SMEM8(edx + eax + 0x2C15D8);
    eax = edx + ecx * 4;
    POP32(esp, ebx);
    fp_push(MEMF(eax * 4 + 0x2C1658)); /* fld float */
    MEMF(0x304780) = (float)fp_top(); fp_pop(); /* fstp */
    g_seh_ebp = ebp; sub_00021E10(); return; /* tail jmp 0x00021E10 */

loc_0001EC34: ;
    PUSH32(esp, 0x0001EC39u); RECOMP_ABI_CALL(0x00023380u, sub_00023380); /* call 0x00023380 */

loc_0001EC39: ;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00021E10(); return; /* tail jmp 0x00021E10 */

loc_0001EC3F: ;
    _fa = (uint32_t)(MEM8(0x30485C)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30485C), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001EC34; /* je: equal / zero */

loc_0001EC47: ;
    PUSH32(esp, 0x0001EC4Cu); RECOMP_ABI_CALL(0x00022140u, sub_00022140); /* call 0x00022140 */

loc_0001EC4C: ;
    PUSH32(esp, 0x0001EC51u); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_0001EC51: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x17;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = MEM32(edx * 4 + 0x2C12D0);
    MEM32(0x30492C) = edx;
    PUSH32(esp, 0x0001EC6Bu); RECOMP_ABI_CALL(0x0001F930u, sub_0001F930); /* call 0x0001F930 */

loc_0001EC6B: ;
    eax = ZX8(MEM8(0x30D9A1));
    ecx = ZX8(MEM8(0x30D9A2));
    eax = eax + eax * 8;
    eax = (uint32_t)(int32_t)SMEM8(eax + ecx + 0x2C15D8);
    ecx = ZX8(MEM8(0x30D9FA));
    edx = eax + eax * 2;
    eax = ZX8(MEM8(0x30D9F9));
    eax = eax + eax * 8;
    eax = (uint32_t)(int32_t)SMEM8(eax + ecx + 0x2C15D8);
    ecx = eax + edx * 4;
    POP32(esp, ebx);
    fp_push(MEMF(ecx * 4 + 0x2C1658)); /* fld float */
    MEMF(0x304780) = (float)fp_top(); fp_pop(); /* fstp */
    g_seh_ebp = ebp; sub_00021E10(); return; /* tail jmp 0x00021E10 */

loc_0001ECB6: ;
    _fa = (uint32_t)(MEM8(0x30485C)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30485C), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001EC34; /* je: equal / zero */

loc_0001ECC2: ;
    PUSH32(esp, 0x0001ECC7u); RECOMP_ABI_CALL(0x00022140u, sub_00022140); /* call 0x00022140 */

loc_0001ECC7: ;
    SET_LO8(ecx, MEM8(0x30D9A0));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    SET_LO8(eax, 0xB);
    if (CMP_NE(_fa, _fb)) goto loc_0001ECEB; /* jne: not equal / not zero */

loc_0001ECD5: ;
    _fa = (uint32_t)(MEM8(0x30D9A1)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9A1), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001ECEB; /* jne: not equal / not zero */

loc_0001ECDD: ;
    edx = MEM32(0x2C0F10);
    MEM32(0x30492C) = edx;
    goto loc_0001ED05;

loc_0001ECEB: ;
    _fa = (uint32_t)(MEM8(0x30D9F8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9F8), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001ED05; /* jne: not equal / not zero */

loc_0001ECF3: ;
    _fa = (uint32_t)(MEM8(0x30D9F9)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9F9), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001ED05; /* jne: not equal / not zero */

loc_0001ECFB: ;
    eax = MEM32(0x2C0F14);
    MEM32(0x30492C) = eax;

loc_0001ED05: ;
    PUSH32(esp, 0x0001ED0Au); RECOMP_ABI_CALL(0x0001F930u, sub_0001F930); /* call 0x0001F930 */

loc_0001ED0A: ;
    eax = ZX8(MEM8(0x30D9A1));
    edx = ZX8(MEM8(0x30D9A2));
    ecx = eax + eax * 8;
    eax = (uint32_t)(int32_t)SMEM8(ecx + edx + 0x2C15D8);
    ecx = eax + eax * 2;
    eax = ZX8(MEM8(0x30D9F9));
    edx = eax + eax * 8;
    eax = ZX8(MEM8(0x30D9FA));
    edx = (uint32_t)(int32_t)SMEM8(edx + eax + 0x2C15D8);
    eax = edx + ecx * 4;
    POP32(esp, ebx);
    fp_push(MEMF(eax * 4 + 0x2C1658)); /* fld float */
    MEMF(0x304780) = (float)fp_top(); fp_pop(); /* fstp */
    g_seh_ebp = ebp; sub_00021E10(); return; /* tail jmp 0x00021E10 */

loc_0001ED55: ;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0001C1B0(); return; /* tail jmp 0x0001C1B0 */

loc_0001ED5B: ;
    _fa = (uint32_t)(MEM8(0x30485C)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30485C), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001EDC2; /* je: equal / zero */

loc_0001ED63: ;
    PUSH32(esp, 0x0001ED68u); RECOMP_ABI_CALL(0x00022140u, sub_00022140); /* call 0x00022140 */

loc_0001ED68: ;
    ecx = MEM32(0x2C1410);
    MEM32(0x30492C) = ecx;
    PUSH32(esp, 0x0001ED79u); RECOMP_ABI_CALL(0x0001F930u, sub_0001F930); /* call 0x0001F930 */

loc_0001ED79: ;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00021E10(); return; /* tail jmp 0x00021E10 */

loc_0001ED7F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(0x30EDC8));
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001ED8Du); RECOMP_ABI_CALL(0x0001BEA0u, sub_0001BEA0); /* call 0x0001BEA0 */

loc_0001ED8D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001ED92: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x30EDC8));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001ED9Fu); RECOMP_ABI_CALL(0x0001C040u, sub_0001C040); /* call 0x0001C040 */

loc_0001ED9F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001EDA4: ;
    _fa = (uint32_t)(MEM8(0x30485C)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30485C), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001EDC2; /* je: equal / zero */

loc_0001EDAC: ;
    PUSH32(esp, 0x0001EDB1u); RECOMP_ABI_CALL(0x00022140u, sub_00022140); /* call 0x00022140 */

loc_0001EDB1: ;
    ecx = MEM32(0x2C1414);
    MEM32(0x30492C) = ecx;
    PUSH32(esp, 0x0001EDC2u); RECOMP_ABI_CALL(0x0001F930u, sub_0001F930); /* call 0x0001F930 */

loc_0001EDC2: ;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00021E10(); return; /* tail jmp 0x00021E10 */

loc_0001EDC8: ;
    PUSH32(esp, 0x0001EDCDu); RECOMP_ABI_CALL(0x00022140u, sub_00022140); /* call 0x00022140 */

loc_0001EDCD: ;
    PUSH32(esp, 0x0001EDD2u); RECOMP_ABI_CALL(0x0001B880u, sub_0001B880); /* call 0x0001B880 */

loc_0001EDD2: ;
    MEM8(0x307604) = 2;
    MEM8(0x3047E4) = 0xFF;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001EE50
 * Original: 0x0001EE50 - 0x0001EEF0 (160 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001EE50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001EE50: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 2;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x28) = edi;
    MEM32(0x3048BC) = ebp;
    MEM32(0x3048F4) = ebp;
    MEM32(0x304840) = ebp;
    MEM32(0x3048E4) = ebp;
    MEM32(0x3049FC) = ebp;
    MEM32(0x304894) = ebp;
    MEM32(0x3049F8) = edi;
    MEM32(0x304944) = edi;
    MEM32(0x304BA4) = edi;
    MEM32(0x3048C4) = ebp;
    MEM8(0x30485C) = 0xFF;
    MEM8(0x30487C) = 0;
    MEM32(0x3049A8) = ebp;
    MEM8(0x30476C) = 0;
    MEM8(0x3047B5) = 0;
    MEM8(0x3047B4) = 0xF;
    MEM32(0x304814) = 0x40880000;
    MEM8(0x304868) = 2;
    edi = edi;

    g_seh_ebp = ebp; sub_0001EEF0(); return; /* fallthrough 0x0001EEF0 */

}

/**
 * sub_0001EEF0
 * Original: 0x0001EEF0 - 0x0001EF70 (128 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
/* GEN-EDIT: constant-stack 0001EEF0/0001EF70 cycle.
 * Original fallthrough/back-jumps are NOT recursive calls. Keep this explicit:
 * correctness must not depend on compiler tail-call optimization.
 */
static void game_loop_0001EEF0_0001EF70(int from_prefix);
void sub_0001EEF0(void) { game_loop_0001EEF0_0001EF70(1); }
void sub_0001EF70(void) { game_loop_0001EEF0_0001EF70(0); }

static void game_loop_0001EEF0_0001EF70(int from_prefix)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

    if (!from_prefix) goto game_loop_0001EF70;

game_loop_0001EEF0: ;
    _flags = 0; _fa = _fb = 0; _fas = _fbs = 0;
loc_0001EEF0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0001EEF7u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0001EEF7: ;
    SET_LO8(eax, MEM8(0x3139CB));
    SET_LO8(edx, MEM8(0x30AE18));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001EF18; /* jne: not equal / not zero */

loc_0001EF09: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001EF18; /* je: equal / zero */

loc_0001EF0D: ;
    PUSH32(esp, 0x0001EF12u); RECOMP_ABI_CALL(0x00048910u, sub_00048910); /* call 0x00048910 */

loc_0001EF12: ;
    SET_LO8(edx, MEM8(0x30AE18));

loc_0001EF18: ;
    SET_LO8(eax, MEM8(0x332295));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001EF38; /* je: equal / zero */

loc_0001EF21: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(0x332295) = LO8(eax);
    if ((_fa != 0)) goto loc_0001EF38; /* jne: not equal / not zero */

loc_0001EF2A: ;
    MEM8(0x30D9E8) = 1;
    MEM8(0x30DA40) = 1;

loc_0001EF38: ;
    eax = MEM32(0x30D9A4);
    SET_LO8(ecx, MEM8(0x307604));
    MEM32(0x3049B8) = eax;
    eax = MEM32(0x30D9AC);
    MEM32(0x30490C) = eax;
    eax = MEM32(0x30D9FC);
    MEM32(0x3049BC) = eax;
    eax = MEM32(0x30DA04);
    MEM32(0x304910) = eax;
    MEM8(0x304854) = LO8(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

    g_seh_ebp = ebp; goto game_loop_0001EF70;

game_loop_0001EF70: ;
    _flags = 0; _fa = _fb = 0; _fas = _fbs = 0; _cf = 0;
loc_0001EF70: ;
    ebx = MEM32(eax + 0x30C258);
    MEM32(eax + 0x304A20) = ebx;
    ebx = MEM32(eax + 0x30C260);
    MEM32(eax + 0x304A28) = ebx;
    ebx = MEM32(eax + 0x30C30C);
    MEM32(eax + 0x304AD4) = ebx;
    ebx = MEM32(eax + 0x30C314);
    MEM32(eax + 0x304ADC) = ebx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC)) >> 32) & 1);
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0001EF70; /* jl: less (signed <) */

loc_0001EFAA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xF8 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0001F813; /* jb: below (unsigned <) */

loc_0001EFB3: ;
    ecx = MEM32(0x30DABC);
    edx = MEM32(0x30AA68);
    eax = MEM32(0x30F9B0);
    MEM32(0x3049F8) = ecx;
    ecx = MEM32(0x3062A0);
    MEM32(0x304944) = edx;
    edx = MEM32(0x30AAB4);
    MEM32(0x3048BC) = eax;
    MEM32(0x3048F4) = ecx;
    MEM32(0x304840) = edx;
    PUSH32(esp, 0x0001EFF2u); RECOMP_ABI_CALL(0x00022BE0u, sub_00022BE0); /* call 0x00022BE0 */

loc_0001EFF2: ;
    eax = ZX8(MEM8(0x307604));
    _fb = (uint32_t)(0xFFFFFF08u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFF08u)) >> 32) & 1);
    eax = eax + 0xFFFFFF08u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; goto game_loop_0001EEF0; } /* ja: above (unsigned >) */

loc_0001F007: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1F91C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0001F00Eu) goto loc_0001F00E;
    if (_jt == 0x0001F27Au) goto loc_0001F27A;
    if (_jt == 0x0001F545u) goto loc_0001F545;
    if (_jt == 0x0001F5FEu) goto loc_0001F5FE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0001F00E: ;
    eax = MEM32(0x6E9B74);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0001F01F; /* je: equal / zero */

loc_0001F018: ;
    _cf = 0; /* logical op clears CF */
    MEM32(0x3047BC) = MEM32(0x3047BC) ^ 1;
    _fa = (uint32_t)(MEM32(0x3047BC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001F01F: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0001F033; /* je: equal / zero */

loc_0001F024: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = eax;
    MEM32(esp + 0x10) = esi;

loc_0001F033: ;
    ebx = MEM32(0x6E9B6C);
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0001F047; /* je: equal / zero */

loc_0001F03E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001F044u); RECOMP_ABI_CALL(0x0001C370u, sub_0001C370); /* call 0x0001C370 */

loc_0001F044: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001F047: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0001F203; /* je: equal / zero */

loc_0001F050: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x6E9A90;

loc_0001F057: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0001F069; /* jne: not equal / not zero */

loc_0001F05E: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x2C)) >> 32) & 1);
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E9B40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6E9B40 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0001F057; /* jl: less (signed <) */

loc_0001F069: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0001F0B8; /* je: equal / zero */

loc_0001F06E: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    ecx = MEM32(0x304944);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x22C1F8)); /* fmul qword ptr [0x22c1f8] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001F087u); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_0001F087: ;
    ecx = MEM32(0x304944);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(0x30F9B0) - fp_top()); /* fsubr dword ptr [0x30f9b0] */
    MEMF(0x30F9B0) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001F0A2u); RECOMP_ABI_CALL(0x0006A110u, sub_0006A110); /* call 0x0006A110 */

loc_0001F0A2: ;
    ebx = MEM32(0x6E9B6C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x30AAB4)); /* fadd dword ptr [0x30aab4] */
    MEMF(0x30AAB4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001F0B8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0001F107; /* je: equal / zero */

loc_0001F0BD: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    ecx = MEM32(0x304944);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x22C1F8)); /* fmul qword ptr [0x22c1f8] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001F0D6u); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_0001F0D6: ;
    ecx = MEM32(0x304944);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x30F9B0)); /* fadd dword ptr [0x30f9b0] */
    MEMF(0x30F9B0) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001F0F1u); RECOMP_ABI_CALL(0x0006A110u, sub_0006A110); /* call 0x0006A110 */

loc_0001F0F1: ;
    ebx = MEM32(0x6E9B6C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(0x30AAB4) - fp_top()); /* fsubr dword ptr [0x30aab4] */
    MEMF(0x30AAB4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001F107: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0001F11C; /* jne: not equal / not zero */

loc_0001F10C: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    _fa = (uint32_t)(MEM16(ecx + 0x6E9AB0)) & 0xFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x6E9AB0), 0x2000 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0001F166; /* jle: less or equal (signed <=) */

loc_0001F11C: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    ecx = MEM32(0x304944);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x22C1F8)); /* fmul qword ptr [0x22c1f8] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001F135u); RECOMP_ABI_CALL(0x0006A110u, sub_0006A110); /* call 0x0006A110 */

loc_0001F135: ;
    ecx = MEM32(0x304944);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x30F9B0)); /* fadd dword ptr [0x30f9b0] */
    MEMF(0x30F9B0) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001F150u); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_0001F150: ;
    ebx = MEM32(0x6E9B6C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x30AAB4)); /* fadd dword ptr [0x30aab4] */
    MEMF(0x30AAB4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001F166: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0001F17B; /* jne: not equal / not zero */

loc_0001F16B: ;
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    _fa = (uint32_t)(MEM16(edx + 0x6E9AB0)) & 0xFFFFu; _fb = (uint32_t)(0xE000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0x6E9AB0), 0xE000 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0001F1BF; /* jge: greater or equal (signed >=) */

loc_0001F17B: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    ecx = MEM32(0x304944);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x22C1F8)); /* fmul qword ptr [0x22c1f8] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001F194u); RECOMP_ABI_CALL(0x0006A110u, sub_0006A110); /* call 0x0006A110 */

loc_0001F194: ;
    ecx = MEM32(0x304944);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(0x30F9B0) - fp_top()); /* fsubr dword ptr [0x30f9b0] */
    MEMF(0x30F9B0) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001F1AFu); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_0001F1AF: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(0x30AAB4) - fp_top()); /* fsubr dword ptr [0x30aab4] */
    MEMF(0x30AAB4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001F1BF: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    SET_LO16(esi, MEM16(esi + 0x6E9AB2));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0x2000 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0001F1E6; /* jle: less or equal (signed <=) */

loc_0001F1D0: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C260)); /* fmul dword ptr [0x22c260] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3062A0)); /* fadd dword ptr [0x3062a0] */
    MEMF(0x3062A0) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001F1E6: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0xE000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0xE000 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0001F203; /* jge: greater or equal (signed >=) */

loc_0001F1ED: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C260)); /* fmul dword ptr [0x22c260] */
    fp_top() = RECOMP_FP_PC(MEMF(0x3062A0) - fp_top()); /* fsubr dword ptr [0x3062a0] */
    MEMF(0x3062A0) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001F203: ;
    ecx = MEM32(0x3049F8);
    PUSH32(esp, 0x0001F20Eu); RECOMP_ABI_CALL(0x0006A110u, sub_0006A110); /* call 0x0006A110 */

loc_0001F20E: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x304944);
    PUSH32(esp, 0x0001F21Du); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_0001F21D: ;
    ecx = MEM32(0x3049F8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3048C4)); /* fmul dword ptr [0x3048c4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3048BC)); /* fadd dword ptr [0x3048bc] */
    MEMF(0x30D010) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001F23Eu); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_0001F23E: ;
    ecx = MEM32(0x304944);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3048C4)); /* fmul dword ptr [0x3048c4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3048F4)); /* fadd dword ptr [0x3048f4] */
    MEMF(0x3145A8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001F25Bu); RECOMP_ABI_CALL(0x0006A110u, sub_0006A110); /* call 0x0006A110 */

loc_0001F25B: ;
    esi = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3048C4)); /* fmul dword ptr [0x3048c4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(0x304840) - fp_top()); /* fsubr dword ptr [0x304840] */
    MEMF(0x30AE50) = (float)fp_top(); fp_pop(); /* fstp */
    g_seh_ebp = ebp; goto game_loop_0001EEF0; /* tail jmp 0x0001EEF0 */

loc_0001F27A: ;
    eax = MEM32(0x6E9B74);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0001F28D; /* je: equal / zero */

loc_0001F284: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ebp = ecx;

loc_0001F28D: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0001F2A1; /* je: equal / zero */

loc_0001F292: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = edx;
    MEM32(esp + 0x10) = esi;

loc_0001F2A1: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0001F2BE; /* je: equal / zero */

loc_0001F2A6: ;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x1C) = 0;

loc_0001F2BE: ;
    ebx = MEM32(0x6E9B6C);
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0001F2D2; /* je: equal / zero */

loc_0001F2C9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001F2CFu); RECOMP_ABI_CALL(0x0001C370u, sub_0001C370); /* call 0x0001C370 */

loc_0001F2CF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001F2D2: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0001F466; /* je: equal / zero */

loc_0001F2DB: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x6E9A90;

loc_0001F2E2: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0001F2F4; /* jne: not equal / not zero */

loc_0001F2E9: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x2C)) >> 32) & 1);
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E9B40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6E9B40 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0001F2E2; /* jl: less (signed <) */

loc_0001F2F4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0001F33B; /* je: equal / zero */

loc_0001F2F9: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    ecx = MEM32(0x304944);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x22C258)); /* fmul qword ptr [0x22c258] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001F312u); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_0001F312: ;
    ecx = MEM32(0x304944);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x18) - fp_top()); /* fsubr dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001F329u); RECOMP_ABI_CALL(0x0006A110u, sub_0006A110); /* call 0x0006A110 */

loc_0001F329: ;
    ebx = MEM32(0x6E9B6C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x1C)); /* fadd dword ptr [esp + 0x1c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001F33B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0001F382; /* je: equal / zero */

loc_0001F340: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    ecx = MEM32(0x304944);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x22C258)); /* fmul qword ptr [0x22c258] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001F359u); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_0001F359: ;
    ecx = MEM32(0x304944);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001F370u); RECOMP_ABI_CALL(0x0006A110u, sub_0006A110); /* call 0x0006A110 */

loc_0001F370: ;
    ebx = MEM32(0x6E9B6C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x1C) - fp_top()); /* fsubr dword ptr [esp + 0x1c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001F382: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0001F397; /* jne: not equal / not zero */

loc_0001F387: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    _fa = (uint32_t)(MEM16(eax + 0x6E9AB0)) & 0xFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x6E9AB0), 0x2000 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0001F3D9; /* jle: less or equal (signed <=) */

loc_0001F397: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    ecx = MEM32(0x304944);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x22C258)); /* fmul qword ptr [0x22c258] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001F3B0u); RECOMP_ABI_CALL(0x0006A110u, sub_0006A110); /* call 0x0006A110 */

loc_0001F3B0: ;
    ecx = MEM32(0x304944);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001F3C7u); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_0001F3C7: ;
    ebx = MEM32(0x6E9B6C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x1C)); /* fadd dword ptr [esp + 0x1c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001F3D9: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0001F3EE; /* jne: not equal / not zero */

loc_0001F3DE: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    _fa = (uint32_t)(MEM16(ecx + 0x6E9AB0)) & 0xFFFFu; _fb = (uint32_t)(0xE000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x6E9AB0), 0xE000 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0001F42A; /* jge: greater or equal (signed >=) */

loc_0001F3EE: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    ecx = MEM32(0x304944);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x22C258)); /* fmul qword ptr [0x22c258] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001F407u); RECOMP_ABI_CALL(0x0006A110u, sub_0006A110); /* call 0x0006A110 */

loc_0001F407: ;
    ecx = MEM32(0x304944);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x18) - fp_top()); /* fsubr dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001F41Eu); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_0001F41E: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x1C) - fp_top()); /* fsubr dword ptr [esp + 0x1c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001F42A: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    SET_LO16(esi, MEM16(esi + 0x6E9AB2));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0x2000 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0001F44D; /* jle: less or equal (signed <=) */

loc_0001F43B: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C220)); /* fmul dword ptr [0x22c220] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001F44D: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0xE000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0xE000 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0001F466; /* jge: greater or equal (signed >=) */

loc_0001F454: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C220)); /* fmul dword ptr [0x22c220] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x20) - fp_top()); /* fsubr dword ptr [esp + 0x20] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001F466: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0001F498; /* jne: not equal / not zero */

loc_0001F46A: ;
    fp_push(MEMF(0x30D9A4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEMF(0x30F9B0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x30D9A8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C144)); /* fadd dword ptr [0x22c144] */
    MEMF(0x3062A0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x30D9AC)); /* fld float */
    goto loc_0001F4C4;

loc_0001F498: ;
    fp_push(MEMF(0x30D9FC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEMF(0x30F9B0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x30DA00)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C144)); /* fadd dword ptr [0x22c144] */
    MEMF(0x3062A0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x30DA04)); /* fld float */

loc_0001F4C4: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x1C)); /* fadd dword ptr [esp + 0x1c] */
    ecx = MEM32(0x3049F8);
    MEMF(0x30AAB4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001F4D9u); RECOMP_ABI_CALL(0x0006A110u, sub_0006A110); /* call 0x0006A110 */

loc_0001F4D9: ;
    ecx = MEM32(0x304944);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001F4E8u); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_0001F4E8: ;
    ecx = MEM32(0x3049F8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3048C4)); /* fmul dword ptr [0x3048c4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3048BC)); /* fadd dword ptr [0x3048bc] */
    MEMF(0x30D010) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001F509u); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_0001F509: ;
    ecx = MEM32(0x304944);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3048C4)); /* fmul dword ptr [0x3048c4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3048F4)); /* fadd dword ptr [0x3048f4] */
    MEMF(0x3145A8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001F526u); RECOMP_ABI_CALL(0x0006A110u, sub_0006A110); /* call 0x0006A110 */

loc_0001F526: ;
    esi = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3048C4)); /* fmul dword ptr [0x3048c4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(0x304840) - fp_top()); /* fsubr dword ptr [0x304840] */
    MEMF(0x30AE50) = (float)fp_top(); fp_pop(); /* fstp */
    g_seh_ebp = ebp; goto game_loop_0001EEF0; /* tail jmp 0x0001EEF0 */

loc_0001F545: ;
    eax = MEM32(0x6E9B74);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0001F556; /* je: equal / zero */

loc_0001F54F: ;
    _cf = 0; /* logical op clears CF */
    MEM32(0x3047BC) = MEM32(0x3047BC) ^ 1;
    _fa = (uint32_t)(MEM32(0x3047BC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001F556: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0001F5B1; /* je: equal / zero */

loc_0001F55B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0001F5AD; /* jne: not equal / not zero */

loc_0001F55F: ;
    ebp = 1;

loc_0001F564: ;
    edx = MEM32(0x304AE0);
    eax = MEM32(0x30C31C);
    ecx = MEM32(0x304AE8);
    MEM32(0x30D010) = edx;
    edx = MEM32(0x304A2C);
    MEM32(0x3145A8) = eax;
    eax = MEM32(0x30C268);
    MEM32(0x30AE50) = ecx;
    ecx = MEM32(0x304A34);
    MEM32(0x30F9B0) = edx;
    MEM32(0x3062A0) = eax;
    MEM32(0x30AAB4) = ecx;
    g_seh_ebp = ebp; goto game_loop_0001EEF0; /* tail jmp 0x0001EEF0 */

loc_0001F5AD: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0001F5B5;

loc_0001F5B1: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0001F564; /* jne: not equal / not zero */

loc_0001F5B5: ;
    edx = MEM32(0x304A2C);
    eax = MEM32(0x30C268);
    ecx = MEM32(0x304A34);
    MEM32(0x30D010) = edx;
    edx = MEM32(0x304AE0);
    MEM32(0x3145A8) = eax;
    eax = MEM32(0x30C31C);
    MEM32(0x30AE50) = ecx;
    ecx = MEM32(0x304AE8);
    MEM32(0x30F9B0) = edx;
    MEM32(0x3062A0) = eax;
    MEM32(0x30AAB4) = ecx;
    g_seh_ebp = ebp; goto game_loop_0001EEF0; /* tail jmp 0x0001EEF0 */

loc_0001F5FE: ;
    eax = MEM32(0x6E9B74);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0001F60F; /* je: equal / zero */

loc_0001F608: ;
    _cf = 0; /* logical op clears CF */
    MEM32(0x3047BC) = MEM32(0x3047BC) ^ 1;
    _fa = (uint32_t)(MEM32(0x3047BC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001F60F: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0001F621; /* je: equal / zero */

loc_0001F614: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = edx;

loc_0001F621: ;
    ebx = MEM32(0x6E9B6C);
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0001F758; /* je: equal / zero */

loc_0001F630: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x6E9A90;

loc_0001F637: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0001F649; /* jne: not equal / not zero */

loc_0001F63E: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x2C)) >> 32) & 1);
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E9B40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6E9B40 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0001F637; /* jl: less (signed <) */

loc_0001F649: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0001F65E; /* jne: not equal / not zero */

loc_0001F64E: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    _fa = (uint32_t)(MEM16(eax + 0x6E9AB0)) & 0xFFFFu; _fb = (uint32_t)(0xE000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x6E9AB0), 0xE000 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0001F677; /* jge: greater or equal (signed >=) */

loc_0001F65E: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x22C210)); /* fmul qword ptr [0x22c210] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C20C)); /* fmul dword ptr [0x22c20c] */
    PUSH32(esp, 0x0001F673u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0001F673: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x28)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(esp + 0x28) = MEM32(esp + 0x28) + eax;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001F677: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0001F68C; /* jne: not equal / not zero */

loc_0001F67C: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    _fa = (uint32_t)(MEM16(ecx + 0x6E9AB0)) & 0xFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x6E9AB0), 0x2000 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0001F6A5; /* jle: less or equal (signed <=) */

loc_0001F68C: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x22C210)); /* fmul qword ptr [0x22c210] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C208)); /* fmul dword ptr [0x22c208] */
    PUSH32(esp, 0x0001F6A1u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0001F6A1: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x28)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(esp + 0x28) = MEM32(esp + 0x28) + eax;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001F6A5: ;
    ecx = MEM32(esp + 0x28);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x28) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0001F6D1; /* je: equal / zero */

loc_0001F6B8: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x22C200)); /* fmul qword ptr [0x22c200] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C20C)); /* fmul dword ptr [0x22c20c] */
    PUSH32(esp, 0x0001F6CDu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0001F6CD: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x24)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(esp + 0x24) = MEM32(esp + 0x24) + eax;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001F6D1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0001F6EF; /* je: equal / zero */

loc_0001F6D6: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x22C200)); /* fmul qword ptr [0x22c200] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C208)); /* fmul dword ptr [0x22c208] */
    PUSH32(esp, 0x0001F6EBu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0001F6EB: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x24)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(esp + 0x24) = MEM32(esp + 0x24) + eax;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001F6EF: ;
    ecx = MEM32(esp + 0x24);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    SET_LO16(esi, MEM16(esi + 0x6E9AB2));
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0x2000 (16-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x24) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0001F73B; /* jle: less or equal (signed <=) */

loc_0001F70E: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x22C1F8)); /* fmul qword ptr [0x22c1f8] */
    fp_top() = RECOMP_FP_PC(MEMF(0x3048C4) - fp_top()); /* fsubr dword ptr [0x3048c4] */
    MEMF(0x3048C4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001F73B; /* jp: parity */

loc_0001F731: ;
    MEM32(0x3048C4) = 0x3F000000;

loc_0001F73B: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0xE000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0xE000 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0001F758; /* jge: greater or equal (signed >=) */

loc_0001F742: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x22C1F8)); /* fmul qword ptr [0x22c1f8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3048C4)); /* fadd dword ptr [0x3048c4] */
    MEMF(0x3048C4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001F758: ;
    PUSH32(esp, 0x0001F75Du); RECOMP_ABI_CALL(0x00022140u, sub_00022140); /* call 0x00022140 */

loc_0001F75D: ;
    PUSH32(esp, 0x0001F762u); RECOMP_ABI_CALL(0x00022270u, sub_00022270); /* call 0x00022270 */

loc_0001F762: ;
    PUSH32(esp, 0x0001F767u); RECOMP_ABI_CALL(0x0001B8A0u, sub_0001B8A0); /* call 0x0001B8A0 */

loc_0001F767: ;
    ecx = MEM32(0x3049F8);
    PUSH32(esp, 0x0001F772u); RECOMP_ABI_CALL(0x0006A110u, sub_0006A110); /* call 0x0006A110 */

loc_0001F772: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x304944);
    PUSH32(esp, 0x0001F781u); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_0001F781: ;
    ecx = MEM32(0x3049F8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3048C4)); /* fmul dword ptr [0x3048c4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3048BC)); /* fadd dword ptr [0x3048bc] */
    MEMF(0x30D010) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001F7A2u); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_0001F7A2: ;
    ecx = MEM32(0x304944);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3048C4)); /* fmul dword ptr [0x3048c4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3048F4)); /* fadd dword ptr [0x3048f4] */
    MEMF(0x3145A8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001F7BFu); RECOMP_ABI_CALL(0x0006A110u, sub_0006A110); /* call 0x0006A110 */

loc_0001F7BF: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x28);
    ecx = MEM32(0x3048BC);
    esi = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3048C4)); /* fmul dword ptr [0x3048c4] */
    MEM32(0x30DABC) = edx;
    edx = MEM32(0x3048F4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEM32(0x30AA68) = eax;
    eax = MEM32(0x304840);
    fp_top() = RECOMP_FP_PC(MEMF(0x304840) - fp_top()); /* fsubr dword ptr [0x304840] */
    MEM32(0x30F9B0) = ecx;
    MEM32(0x3062A0) = edx;
    MEMF(0x30AE50) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x30AAB4) = eax;
    g_seh_ebp = ebp; goto game_loop_0001EEF0; /* tail jmp 0x0001EEF0 */

loc_0001F813: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0001F81D; /* je: equal / zero */

loc_0001F818: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 2 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0001F85F; /* jne: not equal / not zero */

loc_0001F81D: ;
    ecx = MEM32(0x304880);
    eax = MEM32(0x304844);
    MEM32(0x304930) = ecx;
    ecx = MEM32(0x304838);
    MEM32(0x3047FC) = eax;
    eax = MEM32(0x304884);
    MEM32(0x304914) = ecx;
    ecx = MEM32(0x304848);
    MEM32(0x304934) = eax;
    eax = MEM32(0x30483C);
    MEM32(0x304800) = ecx;
    MEM32(0x304918) = eax;

loc_0001F85F: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(0x3047EC)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(0x3047EC) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0001F871; /* je: equal / zero */

loc_0001F867: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0001F871; /* jne: not equal / not zero */

loc_0001F86B: ;
    MEM8(0x30487C) = LO8(edx);

loc_0001F871: ;
    PUSH32(esp, 0x0001F876u); RECOMP_ABI_CALL(0x00022BE0u, sub_00022BE0); /* call 0x00022BE0 */

loc_0001F876: ;
    SET_LO8(eax, MEM8(0x307604));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFE (8-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x3049A8) = 0;
    if (CMP_B(_fa, _fb)) goto loc_0001F892; /* jb: below (unsigned <) */

loc_0001F889: ;
    if (CMP_NE(_fa, _fb)) goto loc_0001F8A2; /* jne: not equal / not zero */

loc_0001F88B: ;
    PUSH32(esp, 0x0001F890u); RECOMP_ABI_CALL(0x000220F0u, sub_000220F0); /* call 0x000220F0 */

loc_0001F890: ;
    goto loc_0001F8A2;

loc_0001F892: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0001F89D; /* jb: below (unsigned <) */

loc_0001F896: ;
    PUSH32(esp, 0x0001F89Bu); RECOMP_ABI_CALL(0x000220C0u, sub_000220C0); /* call 0x000220C0 */

loc_0001F89B: ;
    goto loc_0001F8A2;

loc_0001F89D: ;
    PUSH32(esp, 0x0001F8A2u); RECOMP_ABI_CALL(0x0001E820u, sub_0001E820); /* call 0x0001E820 */

loc_0001F8A2: ;
    ecx = MEM32(0x3049F8);
    edx = MEM32(0x304944);
    eax = MEM32(0x3048BC);
    MEM32(0x30DABC) = ecx;
    ecx = MEM32(0x3048F4);
    MEM32(0x30AA68) = edx;
    edx = MEM32(0x304840);
    MEM32(0x30F9B0) = eax;
    SET_LO8(eax, MEM8(0x304854));
    MEM32(0x3062A0) = ecx;
    SET_LO8(ecx, MEM8(0x316FF4));
    MEM32(0x30AAB4) = edx;
    SET_LO8(edx, MEM8(0x30AE18));
    MEM8(0x30485C) = LO8(eax);
    SET_LO8(eax, MEM8(0x30D9CA));
    MEM8(0x3049CC) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x30DA22));
    MEM8(0x3047EC) = LO8(edx);
    MEM8(0x3049DC) = LO8(eax);
    MEM8(0x3049DD) = LO8(ecx);

loc_0001F914: ;
    g_seh_ebp = ebp; goto game_loop_0001EEF0; /* tail jmp 0x0001EEF0 */

    /* nop */
    PUSH32(esp, 0 /* seg:cs */);
    RECOMP_UNIMPL("lock add dword ptr [eax], eax", 0x0001F91Du); /* TODO: lock add dword ptr [eax], eax */
    if (_flags /* jp: parity */) goto loc_0001F914;

loc_0001F922: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = !_cf; /* cmc */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_0001F930(); return; /* fallthrough 0x0001F930 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001F930
 * Original: 0x0001F930 - 0x0001F96C (60 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001F930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001F930: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x3048D7) = 1;
    MEM8(0x30488E) = LO8(eax);
    MEM8(0x304901) = LO8(eax);
    MEM8(0x3048E0) = LO8(eax);
    MEM8(0x3048C2) = LO8(eax);
    MEM8(0x3049CD) = LO8(eax);
    MEM8(0x304984) = LO8(eax);
    MEM8(0x304B98) = LO8(eax);
    MEM8(0x3049A4) = LO8(eax);
    MEM32(0x3049E0) = eax;
    MEM8(0x304954) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0001F970
 * Original: 0x0001F970 - 0x0001F97B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001F970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001F970: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x70) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x70 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0001F97A; /* jbe: below or equal (unsigned <=) */

loc_0001F978: ;
    SET_LO8(eax, 0x70);

loc_0001F97A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0001F980
 * Original: 0x0001F980 - 0x0001F9E0 (96 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001F980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001F980: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3049F8) = eax;
    MEM32(0x304944) = eax;
    MEM32(0x304BA4) = eax;
    MEM32(0x3048C4) = eax;
    eax = MEM32(0x30492C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3048BC) = 0;
    MEM32(0x3048F4) = 0;
    MEM32(0x304840) = 0;
    MEM32(0x3048E4) = 0;
    MEM32(0x3049FC) = 0;
    MEM32(0x304894) = 0;
    MEM32(0x30492C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0001F9E0
 * Original: 0x0001F9E0 - 0x0001FA0C (44 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001F9E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001F9E0: ;
    eax = MEM32(0x30492C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3048BC) = 0;
    MEM32(0x3048F4) = 0;
    MEM32(0x304840) = 0;
    MEM32(0x30492C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0001FA10
 * Original: 0x0001FA10 - 0x0001FA29 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FA10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001FA10: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3049F8) = eax;
    MEM32(0x304944) = eax;
    MEM32(0x304BA4) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x30492C) = MEM32(0x30492C) + 4;
    _fa = (uint32_t)(MEM32(0x30492C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0001FA30
 * Original: 0x0001FA30 - 0x0001FA48 (24 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FA30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001FA30: ;
    eax = MEM32(0x30492C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3048C4) = 0;
    MEM32(0x30492C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0001FA50
 * Original: 0x0001FA50 - 0x0001FAD6 (134 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FA50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001FA50: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x80 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0001FAB8; /* jae: above or equal (unsigned >=) */

loc_0001FA58: ;
    eax = ZX8(LO8(eax));
    ecx = MEM32(eax * 4 + 0x30473C);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM32(0x304BA0) = ecx;
    MEM8(0x30488E) = 1;
    MEM32(0x304860) = 0;
    MEM32(0x3049C8) = 0;
    MEM32(0x3048AC) = 0;
    MEM32(0x304988) = 0;
    MEM8(0x3049C1) = LO8(eax);
    MEM32(0x304850) = 0x3F800000;
    MEM32(0x304830) = 0x3F800000;
    MEM8(0x3047E3) = LO8(eax);
    esp += 4; return; /* ret */

loc_0001FAB8: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(edx * 4 + 0x304540);
    MEM8(0x3049CD) = 1;
    MEM32(0x304990) = eax;
    MEM8(0x3048CC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0001FAE0
 * Original: 0x0001FAE0 - 0x0001FB66 (134 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FAE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001FAE0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x80 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0001FB48; /* jae: above or equal (unsigned >=) */

loc_0001FAE8: ;
    eax = ZX8(LO8(eax));
    ecx = MEM32(eax * 4 + 0x30473C);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM32(0x3048EC) = ecx;
    MEM8(0x304901) = 1;
    MEM32(0x3048C8) = 0;
    MEM32(0x304938) = 0;
    MEM32(0x304924) = 0;
    MEM32(0x3049AC) = 0;
    MEM8(0x304948) = LO8(eax);
    MEM32(0x3048A4) = 0x3F800000;
    MEM32(0x30495C) = 0x3F800000;
    MEM8(0x304898) = LO8(eax);
    esp += 4; return; /* ret */

loc_0001FB48: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(edx * 4 + 0x304540);
    MEM8(0x304984) = 1;
    MEM32(0x3048D8) = eax;
    MEM8(0x304998) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0001FB70
 * Original: 0x0001FB70 - 0x0001FBC9 (89 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001FB70: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x80 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0001FBAB; /* jae: above or equal (unsigned >=) */

loc_0001FB78: ;
    eax = ZX8(LO8(eax));
    ecx = MEM32(eax * 4 + 0x304744);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x304970) = ecx;
    MEM8(0x3048E0) = 1;
    MEM32(0x30481C) = eax;
    MEM32(0x304958) = eax;
    MEM32(0x3048B4) = eax;
    MEM32(0x304A0C) = eax;
    MEM8(0x30498C) = LO8(eax);
    esp += 4; return; /* ret */

loc_0001FBAB: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(edx * 4 + 0x304548);
    MEM8(0x304B98) = 1;
    MEM32(0x304B94) = eax;
    MEM8(0x304962) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0001FBD0
 * Original: 0x0001FBD0 - 0x0001FC05 (53 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FBD0(void)
{

loc_0001FBD0: ;
    eax = ZX8(MEM8(esp + 4));
    ecx = MEM32(eax * 4 + 0x30474C);
    MEM32(0x3048F8) = ecx;
    MEM8(0x3048C2) = 1;
    MEM32(0x3049F0) = 0;
    MEM32(0x304950) = 0;
    MEM8(0x3048D5) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0001FC10
 * Original: 0x0001FC10 - 0x0001FC6D (93 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FC10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001FC10: ;
    eax = MEM32(0x30492C);
    ecx = MEM32(eax);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM32(0x304BA0) = ecx;
    MEM8(0x30488E) = 1;
    MEM32(0x304860) = 0;
    MEM32(0x3049C8) = 0;
    MEM32(0x3048AC) = 0;
    MEM32(0x304988) = 0;
    MEM8(0x3049C1) = LO8(eax);
    MEM32(0x304850) = 0x3F800000;
    MEM32(0x304830) = 0x3F800000;
    MEM8(0x3047E3) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0001FC70
 * Original: 0x0001FC70 - 0x0001FCCD (93 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FC70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001FC70: ;
    eax = MEM32(0x30492C);
    ecx = MEM32(eax);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM32(0x3048EC) = ecx;
    MEM8(0x304901) = 1;
    MEM32(0x3048C8) = 0;
    MEM32(0x304938) = 0;
    MEM32(0x304924) = 0;
    MEM32(0x3049AC) = 0;
    MEM8(0x304948) = LO8(eax);
    MEM32(0x3048A4) = 0x3F800000;
    MEM32(0x30495C) = 0x3F800000;
    MEM8(0x304898) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0001FCD0
 * Original: 0x0001FCD0 - 0x0001FD00 (48 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FCD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001FCD0: ;
    eax = MEM32(0x30492C);
    ecx = MEM32(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x304970) = ecx;
    MEM8(0x3048E0) = 1;
    MEM32(0x30481C) = eax;
    MEM32(0x304958) = eax;
    MEM32(0x3048B4) = eax;
    MEM32(0x304A0C) = eax;
    MEM8(0x30498C) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0001FD00
 * Original: 0x0001FD00 - 0x0001FD30 (48 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FD00(void)
{

loc_0001FD00: ;
    eax = MEM32(0x30492C);
    ecx = MEM32(eax);
    MEM32(0x3048F8) = ecx;
    MEM8(0x3048C2) = 1;
    MEM32(0x3049F0) = 0;
    MEM32(0x304950) = 0;
    MEM8(0x3048D5) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0001FD30
 * Original: 0x0001FD30 - 0x0001FD38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FD30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001FD30: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x30492C) = MEM32(0x30492C) + 8;
    _fa = (uint32_t)(MEM32(0x30492C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0001FD40
 * Original: 0x0001FD40 - 0x0001FD5C (28 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FD40(void)
{

loc_0001FD40: ;
    eax = MEM32(0x30492C);
    MEM8(0x3049CD) = 1;
    ecx = MEM32(eax);
    MEM32(0x304990) = ecx;
    MEM8(0x3048CC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0001FD60
 * Original: 0x0001FD60 - 0x0001FD7C (28 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FD60(void)
{

loc_0001FD60: ;
    eax = MEM32(0x30492C);
    MEM8(0x304984) = 1;
    ecx = MEM32(eax);
    MEM32(0x3048D8) = ecx;
    MEM8(0x304998) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0001FD80
 * Original: 0x0001FD80 - 0x0001FD9C (28 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FD80(void)
{

loc_0001FD80: ;
    eax = MEM32(0x30492C);
    MEM8(0x304B98) = 1;
    ecx = MEM32(eax);
    MEM32(0x304B94) = ecx;
    MEM8(0x304962) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0001FDA0
 * Original: 0x0001FDA0 - 0x0001FDCB (43 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FDA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001FDA0: ;
    eax = MEM32(0x30492C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x30492C) = eax;
    ecx = MEM32(eax);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x30492C) = eax;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x30492C) = eax;
    MEM8(ecx + 0x30D9E8) = LO8(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_0001FDD0
 * Original: 0x0001FDD0 - 0x0001FDEE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FDD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001FDD0: ;
    eax = MEM32(0x30492C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x30492C) = eax;
    SET_LO8(ecx, MEM8(eax));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3049A4) = LO8(ecx);
    MEM32(0x30492C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0001FDF0
 * Original: 0x0001FDF0 - 0x0001FE3F (79 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FDF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001FDF0: ;
    SET_LO8(eax, MEM8(0x30488E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001FE37; /* jne: not equal / not zero */

loc_0001FDF9: ;
    SET_LO8(eax, MEM8(0x304901));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001FE37; /* jne: not equal / not zero */

loc_0001FE02: ;
    SET_LO8(eax, MEM8(0x3048E0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001FE37; /* jne: not equal / not zero */

loc_0001FE0B: ;
    SET_LO8(eax, MEM8(0x3048C2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001FE37; /* jne: not equal / not zero */

loc_0001FE14: ;
    SET_LO8(eax, MEM8(0x3049CD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001FE37; /* jne: not equal / not zero */

loc_0001FE1D: ;
    SET_LO8(eax, MEM8(0x304984));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001FE37; /* jne: not equal / not zero */

loc_0001FE26: ;
    SET_LO8(eax, MEM8(0x304B98));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001FE37; /* jne: not equal / not zero */

loc_0001FE2F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x30492C) = MEM32(0x30492C) + 4;
    _fa = (uint32_t)(MEM32(0x30492C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0001FE37: ;
    MEM8(0x3048A8) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0001FE40
 * Original: 0x0001FE40 - 0x0001FE72 (50 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001FE40: ;
    eax = MEM32(0x3049E0);
    ecx = MEM32(0x30492C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x3049E0) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    MEM8(0x3048A8) = 1;
    if (CMP_L(_fas, _fbs)) goto loc_0001FE71; /* jl: less (signed <) */

loc_0001FE5D: ;
    eax = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x30492C) = eax;
    MEM32(0x3049E0) = 0;

loc_0001FE71: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0001FE80
 * Original: 0x0001FE80 - 0x0001FEA3 (35 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FE80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001FE80: ;
    eax = MEM32(0x30492C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x30492C) = eax;
    MEM8(0x3048D7) = 0;
    SET_LO8(eax, MEM8(eax));
    MEM8(0x307604) = LO8(eax);
    MEM8(0x3048A8) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0001FEB0
 * Original: 0x0001FEB0 - 0x0001FEBF (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FEB0(void)
{

loc_0001FEB0: ;
    MEM8(0x3048D7) = 0;
    MEM8(0x3048A8) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0001FEC0
 * Original: 0x0001FEC0 - 0x0001FF05 (69 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FEC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001FEC0: ;
    eax = MEM32(0x304A04);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304A04) = eax;
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304A04) = eax;
    MEM32(0x304A08) = ecx;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304A04) = eax;
    MEM32(0x3048A0) = edx;
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304810) = ecx;
    MEM32(0x304A04) = eax;
    MEM8(0x3048A8) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0001FF10
 * Original: 0x0001FF10 - 0x0001FF7A (106 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FF10(void)
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

loc_0001FF10: ;
    ecx = MEM32(0x304A04);
    fp_push(MEMF(0x304A08)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(0x304A08) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3048A0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    MEMF(0x3048A0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x304810)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC)); /* fadd dword ptr [ecx + 0xc] */
    MEMF(0x304810) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x30482C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    MEMF(0x30482C) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x10] */
    MEM8(0x3048A8) = 1;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001FF79; /* jne: not equal / not zero */

loc_0001FF66: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304A04) = ecx;
    MEM32(0x30482C) = 0;

loc_0001FF79: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001FF5F
 * Original: 0x0001FF5F - 0x0001FF7A (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FF5F(void)
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

loc_0001FF5F: ;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001FF79; /* jne: not equal / not zero */

loc_0001FF66: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304A04) = ecx;
    MEM32(0x30482C) = 0;

loc_0001FF79: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001FF80
 * Original: 0x0001FF80 - 0x00020004 (132 bytes, 25 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0001FF80(void)
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

loc_0001FF80: ;
    ecx = MEM32(0x304A04);
    fp_push(MEMF(0x3048B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x304A08)); /* fadd dword ptr [0x304a08] */
    MEMF(0x304A08) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3049B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3048A0)); /* fadd dword ptr [0x3048a0] */
    MEMF(0x3048A0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x304818)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC)); /* fadd dword ptr [ecx + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x304810)); /* fadd dword ptr [0x304810] */
    MEMF(0x304810) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3048B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x10)); /* fadd dword ptr [ecx + 0x10] */
    MEMF(0x3048B0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3049B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x14)); /* fadd dword ptr [ecx + 0x14] */
    MEMF(0x3049B0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x304818)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x18)); /* fadd dword ptr [ecx + 0x18] */
    MEMF(0x304818) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x30482C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    MEMF(0x30482C) = (float)fp_top(); /* fst */

    g_seh_ebp = ebp; sub_00020004(); return; /* fallthrough 0x00020004 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00020004
 * Original: 0x00020004 - 0x00020007 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020004(void)
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

loc_00020004: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x1c] */

    g_seh_ebp = ebp; sub_00020007(); return; /* fallthrough 0x00020007 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00020007
 * Original: 0x00020007 - 0x0002000E (7 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020007(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00020007: ;
    MEM8(0x3048A8) = 1;

    g_seh_ebp = ebp; sub_0002000E(); return; /* fallthrough 0x0002000E */

}

/**
 * sub_0002000E
 * Original: 0x0002000E - 0x00020010 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002000E(void)
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

loc_0002000E: ;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */

    g_seh_ebp = ebp; sub_00020010(); return; /* fallthrough 0x00020010 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00020010
 * Original: 0x00020010 - 0x00020028 (24 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00020010: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_00020046(); return; } /* jne: not equal / not zero */

loc_00020015: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304A04) = ecx;
    MEM32(0x30482C) = 0;

    g_seh_ebp = ebp; sub_00020028(); return; /* fallthrough 0x00020028 */

}

/**
 * sub_00020028
 * Original: 0x00020028 - 0x0002003C (20 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020028(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00020028: ;
    MEM32(0x3048B0) = 0;
    MEM32(0x3049B0) = 0;

    g_seh_ebp = ebp; sub_0002003C(); return; /* fallthrough 0x0002003C */

}

/**
 * sub_0002003C
 * Original: 0x0002003C - 0x00020047 (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002003C(void)
{

loc_0002003C: ;
    MEM32(0x304818) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00020046
 * Original: 0x00020046 - 0x00020047 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020046(void)
{

loc_00020046: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00020050
 * Original: 0x00020050 - 0x0002005F (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020050(void)
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

loc_00020050: ;
    ecx = MEM32(0x304A04);
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x30482C)); /* fsub dword ptr [0x30482c] */

    g_seh_ebp = ebp; sub_0002005F(); return; /* fallthrough 0x0002005F */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002005F
 * Original: 0x0002005F - 0x0002007C (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0002005F(void)
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

loc_0002005F: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) / fp_top()); /* fdivr dword ptr [0x22c0d0] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x3048E8)); /* fsub dword ptr [0x3048e8] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3048E8)); /* fadd dword ptr [0x3048e8] */
    MEMF(0x304A08) = (float)fp_top(); fp_pop(); /* fstp */

    g_seh_ebp = ebp; sub_0002007C(); return; /* fallthrough 0x0002007C */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002007C
 * Original: 0x0002007C - 0x000200A4 (40 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002007C(void)
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

loc_0002007C: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x3049A0)); /* fsub dword ptr [0x3049a0] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3049A0)); /* fadd dword ptr [0x3049a0] */
    MEMF(0x3048A0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x304888)); /* fsub dword ptr [0x304888] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x304888)); /* fadd dword ptr [0x304888] */

    g_seh_ebp = ebp; sub_000200A4(); return; /* fallthrough 0x000200A4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000200A4
 * Original: 0x000200A4 - 0x000200AA (6 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000200A4(void)
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

loc_000200A4: ;
    MEMF(0x304810) = (float)fp_top(); fp_pop(); /* fstp */

    g_seh_ebp = ebp; sub_000200AA(); return; /* fallthrough 0x000200AA */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000200AA
 * Original: 0x000200AA - 0x000200AC (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000200AA(void)
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

loc_000200AA: ;
    fp_pop(); /* fstp st(0) */

    g_seh_ebp = ebp; sub_000200AC(); return; /* fallthrough 0x000200AC */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000200AC
 * Original: 0x000200AC - 0x000200B2 (6 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000200AC(void)
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

loc_000200AC: ;
    fp_push(MEMF(0x30482C)); /* fld float */

    g_seh_ebp = ebp; sub_000200B2(); return; /* fallthrough 0x000200B2 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000200B2
 * Original: 0x000200B2 - 0x000200B8 (6 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000200B2(void)
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

loc_000200B2: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */

    g_seh_ebp = ebp; sub_000200B8(); return; /* fallthrough 0x000200B8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000200B8
 * Original: 0x000200B8 - 0x000200BE (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000200B8(void)
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

loc_000200B8: ;
    MEMF(0x30482C) = (float)fp_top(); /* fst */

    g_seh_ebp = ebp; sub_000200BE(); return; /* fallthrough 0x000200BE */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000200BE
 * Original: 0x000200BE - 0x000200E3 (37 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000200BE(void)
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

loc_000200BE: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x10] */
    MEM8(0x3048A8) = 1;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000200E2; /* jne: not equal / not zero */

loc_000200CF: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304A04) = ecx;
    MEM32(0x30482C) = 0;

loc_000200E2: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000200C1
 * Original: 0x000200C1 - 0x000200E3 (34 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000200C1(void)
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

loc_000200C1: ;
    MEM8(0x3048A8) = 1;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000200E2; /* jne: not equal / not zero */

loc_000200CF: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304A04) = ecx;
    MEM32(0x30482C) = 0;

loc_000200E2: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000200D2
 * Original: 0x000200D2 - 0x000200E3 (17 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000200D2(void)
{

loc_000200D2: ;
    MEM32(0x304A04) = ecx;
    MEM32(0x30482C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000200D8
 * Original: 0x000200D8 - 0x000200E3 (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000200D8(void)
{

loc_000200D8: ;
    MEM32(0x30482C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000200F0
 * Original: 0x000200F0 - 0x000201B8 (200 bytes, 41 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000200F0(void)
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

loc_000200F0: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */
    fp_push(MEMF(0x30482C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00020127; /* jp: parity */

loc_00020105: ;
    eax = MEM32(0x304A08);
    ecx = MEM32(0x3048A0);
    edx = MEM32(0x304810);
    MEM32(0x3048B0) = eax;
    MEM32(0x3049B0) = ecx;
    MEM32(0x304818) = edx;

loc_00020127: ;
    fp_push(MEMF(0x30482C)); /* fld float */
    ecx = MEM32(0x304A04);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    MEMF(0x30482C) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x10)); /* fdiv dword ptr [ecx + 0x10] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3048B0)); /* fadd dword ptr [0x3048b0] */
    MEMF(0x304A08) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3049B0)); /* fadd dword ptr [0x3049b0] */
    MEMF(0x3048A0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x304818)); /* fadd dword ptr [0x304818] */
    MEMF(0x304810) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x10] */
    MEM8(0x3048A8) = 1;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000201B7; /* jne: not equal / not zero */

loc_00020186: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304A04) = ecx;
    MEM32(0x30482C) = 0;
    MEM32(0x3048B0) = 0;
    MEM32(0x3049B0) = 0;
    MEM32(0x304818) = 0;

loc_000201B7: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00020100
 * Original: 0x00020100 - 0x000201B8 (184 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020100(void)
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

loc_00020100: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00020127; /* jp: parity */

loc_00020105: ;
    eax = MEM32(0x304A08);
    ecx = MEM32(0x3048A0);
    edx = MEM32(0x304810);
    MEM32(0x3048B0) = eax;
    MEM32(0x3049B0) = ecx;
    MEM32(0x304818) = edx;

loc_00020127: ;
    fp_push(MEMF(0x30482C)); /* fld float */
    ecx = MEM32(0x304A04);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    MEMF(0x30482C) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x10)); /* fdiv dword ptr [ecx + 0x10] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3048B0)); /* fadd dword ptr [0x3048b0] */
    MEMF(0x304A08) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3049B0)); /* fadd dword ptr [0x3049b0] */
    MEMF(0x3048A0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x304818)); /* fadd dword ptr [0x304818] */
    MEMF(0x304810) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x10] */
    MEM8(0x3048A8) = 1;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000201B7; /* jne: not equal / not zero */

loc_00020186: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304A04) = ecx;
    MEM32(0x30482C) = 0;
    MEM32(0x3048B0) = 0;
    MEM32(0x3049B0) = 0;
    MEM32(0x304818) = 0;

loc_000201B7: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00020141
 * Original: 0x00020141 - 0x000201B8 (119 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020141(void)
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

loc_00020141: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x10)); /* fdiv dword ptr [ecx + 0x10] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3048B0)); /* fadd dword ptr [0x3048b0] */
    MEMF(0x304A08) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3049B0)); /* fadd dword ptr [0x3049b0] */
    MEMF(0x3048A0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x304818)); /* fadd dword ptr [0x304818] */
    MEMF(0x304810) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x10] */
    MEM8(0x3048A8) = 1;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000201B7; /* jne: not equal / not zero */

loc_00020186: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304A04) = ecx;
    MEM32(0x30482C) = 0;
    MEM32(0x3048B0) = 0;
    MEM32(0x3049B0) = 0;
    MEM32(0x304818) = 0;

loc_000201B7: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00020144
 * Original: 0x00020144 - 0x000201B8 (116 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020144(void)
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

loc_00020144: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3048B0)); /* fadd dword ptr [0x3048b0] */
    MEMF(0x304A08) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3049B0)); /* fadd dword ptr [0x3049b0] */
    MEMF(0x3048A0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x304818)); /* fadd dword ptr [0x304818] */
    MEMF(0x304810) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x10] */
    MEM8(0x3048A8) = 1;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000201B7; /* jne: not equal / not zero */

loc_00020186: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304A04) = ecx;
    MEM32(0x30482C) = 0;
    MEM32(0x3048B0) = 0;
    MEM32(0x3049B0) = 0;
    MEM32(0x304818) = 0;

loc_000201B7: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00020146
 * Original: 0x00020146 - 0x000201B8 (114 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020146(void)
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

loc_00020146: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3048B0)); /* fadd dword ptr [0x3048b0] */
    MEMF(0x304A08) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3049B0)); /* fadd dword ptr [0x3049b0] */
    MEMF(0x3048A0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x304818)); /* fadd dword ptr [0x304818] */
    MEMF(0x304810) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x10] */
    MEM8(0x3048A8) = 1;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000201B7; /* jne: not equal / not zero */

loc_00020186: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304A04) = ecx;
    MEM32(0x30482C) = 0;
    MEM32(0x3048B0) = 0;
    MEM32(0x3049B0) = 0;
    MEM32(0x304818) = 0;

loc_000201B7: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002016F
 * Original: 0x0002016F - 0x000201B8 (73 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002016F(void)
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

loc_0002016F: ;
    MEMF(0x304810) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x10] */
    MEM8(0x3048A8) = 1;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000201B7; /* jne: not equal / not zero */

loc_00020186: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304A04) = ecx;
    MEM32(0x30482C) = 0;
    MEM32(0x3048B0) = 0;
    MEM32(0x3049B0) = 0;
    MEM32(0x304818) = 0;

loc_000201B7: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000201C0
 * Original: 0x000201C0 - 0x000202BF (255 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000201C0(void)
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

loc_000201C0: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */
    fp_push(MEMF(0x30482C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000201F7; /* jp: parity */

loc_000201D5: ;
    eax = MEM32(0x304A08);
    ecx = MEM32(0x3048A0);
    edx = MEM32(0x304810);
    MEM32(0x3048B0) = eax;
    MEM32(0x3049B0) = ecx;
    MEM32(0x304818) = edx;

loc_000201F7: ;
    fp_push(MEMF(0x30482C)); /* fld float */
    eax = MEM32(0x304A04);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    PUSH32(esp, esi);
    MEMF(0x30482C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x10)); /* fld float */
    PUSH32(esp, 0x00020217u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00020217: ;
    fp_push(MEMF(0x30482C)); /* fld float */
    ecx = eax;
    eax = 0x4000;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = eax;
    PUSH32(esp, 0x0002022Eu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0002022E: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    ecx = esi;
    PUSH32(esp, 0x00020238u); RECOMP_ABI_CALL(0x0006A110u, sub_0006A110); /* call 0x0006A110 */

loc_00020238: ;
    ecx = MEM32(0x304A04);
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) - fp_top()); /* fsubr dword ptr [0x22c0d0] */
    POP32(esp, esi);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3048B0)); /* fadd dword ptr [0x3048b0] */
    MEMF(0x304A08) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3049B0)); /* fadd dword ptr [0x3049b0] */
    MEMF(0x3048A0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x304818)); /* fadd dword ptr [0x304818] */
    MEMF(0x304810) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x30482C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x10] */
    MEM8(0x3048A8) = 1;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000202BE; /* jne: not equal / not zero */

loc_0002028D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304A04) = ecx;
    MEM32(0x30482C) = 0;
    MEM32(0x3048B0) = 0;
    MEM32(0x3049B0) = 0;
    MEM32(0x304818) = 0;

loc_000202BE: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00020202
 * Original: 0x00020202 - 0x000202BF (189 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020202(void)
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

loc_00020202: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    PUSH32(esp, esi);
    MEMF(0x30482C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x10)); /* fld float */
    PUSH32(esp, 0x00020217u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00020217: ;
    fp_push(MEMF(0x30482C)); /* fld float */
    ecx = eax;
    eax = 0x4000;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = eax;
    PUSH32(esp, 0x0002022Eu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0002022E: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    ecx = esi;
    PUSH32(esp, 0x00020238u); RECOMP_ABI_CALL(0x0006A110u, sub_0006A110); /* call 0x0006A110 */

loc_00020238: ;
    ecx = MEM32(0x304A04);
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) - fp_top()); /* fsubr dword ptr [0x22c0d0] */
    POP32(esp, esi);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3048B0)); /* fadd dword ptr [0x3048b0] */
    MEMF(0x304A08) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3049B0)); /* fadd dword ptr [0x3049b0] */
    MEMF(0x3048A0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x304818)); /* fadd dword ptr [0x304818] */
    MEMF(0x304810) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x30482C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x10] */
    MEM8(0x3048A8) = 1;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000202BE; /* jne: not equal / not zero */

loc_0002028D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304A04) = ecx;
    MEM32(0x30482C) = 0;
    MEM32(0x3048B0) = 0;
    MEM32(0x3049B0) = 0;
    MEM32(0x304818) = 0;

loc_000202BE: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000202C0
 * Original: 0x000202C0 - 0x000203B9 (249 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000202C0(void)
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

loc_000202C0: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */
    fp_push(MEMF(0x30482C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000202F7; /* jp: parity */

loc_000202D5: ;
    eax = MEM32(0x304A08);
    ecx = MEM32(0x3048A0);
    edx = MEM32(0x304810);
    MEM32(0x3048B0) = eax;
    MEM32(0x3049B0) = ecx;
    MEM32(0x304818) = edx;

loc_000202F7: ;
    fp_push(MEMF(0x30482C)); /* fld float */
    eax = MEM32(0x304A04);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    PUSH32(esp, esi);
    MEMF(0x30482C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x10)); /* fld float */
    PUSH32(esp, 0x00020317u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00020317: ;
    fp_push(MEMF(0x30482C)); /* fld float */
    ecx = eax;
    eax = 0x4000;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = eax;
    PUSH32(esp, 0x0002032Eu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0002032E: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    ecx = esi;
    PUSH32(esp, 0x00020338u); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_00020338: ;
    ecx = MEM32(0x304A04);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3048B0)); /* fadd dword ptr [0x3048b0] */
    MEMF(0x304A08) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3049B0)); /* fadd dword ptr [0x3049b0] */
    MEMF(0x3048A0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x304818)); /* fadd dword ptr [0x304818] */
    MEMF(0x304810) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x30482C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x10] */
    MEM8(0x3048A8) = 1;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000203B8; /* jne: not equal / not zero */

loc_00020387: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304A04) = ecx;
    MEM32(0x30482C) = 0;
    MEM32(0x3048B0) = 0;
    MEM32(0x3049B0) = 0;
    MEM32(0x304818) = 0;

loc_000203B8: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00020308
 * Original: 0x00020308 - 0x000203B9 (177 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020308(void)
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

loc_00020308: ;
    PUSH32(esp, esi);
    MEMF(0x30482C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x10)); /* fld float */
    PUSH32(esp, 0x00020317u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00020317: ;
    fp_push(MEMF(0x30482C)); /* fld float */
    ecx = eax;
    eax = 0x4000;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = eax;
    PUSH32(esp, 0x0002032Eu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0002032E: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    ecx = esi;
    PUSH32(esp, 0x00020338u); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_00020338: ;
    ecx = MEM32(0x304A04);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3048B0)); /* fadd dword ptr [0x3048b0] */
    MEMF(0x304A08) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3049B0)); /* fadd dword ptr [0x3049b0] */
    MEMF(0x3048A0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x304818)); /* fadd dword ptr [0x304818] */
    MEMF(0x304810) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x30482C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x10] */
    MEM8(0x3048A8) = 1;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000203B8; /* jne: not equal / not zero */

loc_00020387: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304A04) = ecx;
    MEM32(0x30482C) = 0;
    MEM32(0x3048B0) = 0;
    MEM32(0x3049B0) = 0;
    MEM32(0x304818) = 0;

loc_000203B8: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000203C0
 * Original: 0x000203C0 - 0x0002047A (186 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000203C0(void)
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

loc_000203C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x3049F8);
    PUSH32(esp, 0x000203CEu); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_000203CE: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x304944);
    PUSH32(esp, 0x000203DDu); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_000203DD: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x3049F8);
    PUSH32(esp, 0x000203ECu); RECOMP_ABI_CALL(0x0006A110u, sub_0006A110); /* call 0x0006A110 */

loc_000203EC: ;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x304944);
    PUSH32(esp, 0x000203FAu); RECOMP_ABI_CALL(0x0006A110u, sub_0006A110); /* call 0x0006A110 */

loc_000203FA: ;
    ecx = MEM32(0x304A04);
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(MEMF(0x304A08) - fp_top()); /* fsubr dword ptr [0x304a08] */
    MEMF(0x304A08) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(MEMF(0x3048A0) - fp_top()); /* fsubr dword ptr [0x3048a0] */
    MEMF(0x3048A0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = -fp_top(); /* fchs */
    fp_top() = RECOMP_FP_PC(MEMF(0x304810) - fp_top()); /* fsubr dword ptr [0x304810] */
    MEMF(0x304810) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x30482C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    MEMF(0x30482C) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 8] */
    MEM8(0x3048A8) = 1;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00020476; /* jne: not equal / not zero */

loc_00020463: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304A04) = ecx;
    MEM32(0x30482C) = 0;

loc_00020476: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00020480
 * Original: 0x00020480 - 0x00020551 (209 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020480(void)
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

loc_00020480: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(0x3048B0)); /* fld float */
    eax = MEM32(0x304A04);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    ecx = MEM32(0x3049F8);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0002049Fu); RECOMP_ABI_CALL(0x0006A110u, sub_0006A110); /* call 0x0006A110 */

loc_0002049F: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    ecx = MEM32(0x304944);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000204B1u); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_000204B1: ;
    ecx = MEM32(0x3049F8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(MEMF(0x304A08) - fp_top()); /* fsubr dword ptr [0x304a08] */
    MEMF(0x304A08) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000204CCu); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_000204CC: ;
    ecx = MEM32(0x304944);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_top() = RECOMP_FP_PC(MEMF(0x3048A0) - fp_top()); /* fsubr dword ptr [0x3048a0] */
    MEMF(0x3048A0) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000204E6u); RECOMP_ABI_CALL(0x0006A110u, sub_0006A110); /* call 0x0006A110 */

loc_000204E6: ;
    ecx = MEM32(0x304A04);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = -fp_top(); /* fchs */
    fp_top() = RECOMP_FP_PC(MEMF(0x304810) - fp_top()); /* fsubr dword ptr [0x304810] */
    MEMF(0x304810) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3048B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    MEMF(0x3048B0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x30482C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    MEMF(0x30482C) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0xc] */
    MEM8(0x3048A8) = 1;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002054D; /* jne: not equal / not zero */

loc_00020530: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304A04) = ecx;
    MEM32(0x30482C) = 0;
    MEM32(0x3048B0) = 0;

loc_0002054D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00020560
 * Original: 0x00020560 - 0x00020590 (48 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020560(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00020560: ;
    eax = MEM32(0x3048E8);
    ecx = MEM32(0x3049A0);
    edx = MEM32(0x304888);
    MEM32(0x304A08) = eax;
    eax = MEM32(0x304A04);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3048A0) = ecx;
    MEM32(0x304810) = edx;
    MEM32(0x304A04) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00020590
 * Original: 0x00020590 - 0x000205C5 (53 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020590(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00020590: ;
    eax = MEM32(0x304A04);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304A04) = eax;
    MEM8(0x30484C) = 1;
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304A04) = eax;
    MEM32(0x304BA8) = ecx;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x30494C) = edx;
    MEM32(0x304A04) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000205D0
 * Original: 0x000205D0 - 0x000205DF (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000205D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000205D0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x304A04) = MEM32(0x304A04) + 4;
    _fa = (uint32_t)(MEM32(0x304A04)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x30484C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000205E0
 * Original: 0x000205E0 - 0x00020707 (295 bytes, 86 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000205E0(void)
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

loc_000205E0: ;
    eax = ZX8(MEM8(esp + 4));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00020703; /* ja: above (unsigned >) */

loc_000205F1: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x20708); /* switch: 5 entries, 5 targets */
    if (_jt == 0x000205F8u) goto loc_000205F8;
    if (_jt == 0x0002066Fu) goto loc_0002066F;
    if (_jt == 0x00020691u) goto loc_00020691;
    if (_jt == 0x000206B3u) goto loc_000206B3;
    if (_jt == 0x000206DBu) goto loc_000206DB;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000205F8: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00020614u); RECOMP_ABI_CALL(0x00022760u, sub_00022760); /* call 0x00022760 */

loc_00020614: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0002062Bu); RECOMP_ABI_CALL(0x00022760u, sub_00022760); /* call 0x00022760 */

loc_0002062B: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(0x304A08) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(0x3048A0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(0x304810) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002066F: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0x304810);
    PUSH32(esp, 0x3048A0);
    PUSH32(esp, 0x304A08);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0002068Au); RECOMP_ABI_CALL(0x00022760u, sub_00022760); /* call 0x00022760 */

loc_0002068A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00020691: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x304810);
    PUSH32(esp, 0x3048A0);
    PUSH32(esp, 0x304A08);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000206ACu); RECOMP_ABI_CALL(0x00022760u, sub_00022760); /* call 0x00022760 */

loc_000206AC: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000206B3: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x304810);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x30EDC8));
    PUSH32(esp, 0x3048A0);
    PUSH32(esp, 0x304A08);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000206D4u); RECOMP_ABI_CALL(0x00022760u, sub_00022760); /* call 0x00022760 */

loc_000206D4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000206DB: ;
    ecx = MEM32(esp + 0x1C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(0x30EDC8));
    PUSH32(esp, 0x304810);
    SET_LO8(edx, LO8(edx) ^ 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x3048A0);
    PUSH32(esp, 0x304A08);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00020700u); RECOMP_ABI_CALL(0x00022760u, sub_00022760); /* call 0x00022760 */

loc_00020700: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00020703: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00020780
 * Original: 0x00020780 - 0x000207BA (58 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020780(void)
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

loc_00020780: ;
    fp_push(MEMF(0x30482C)); /* fld float */
    eax = MEM32(0x304A04);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    MEMF(0x30482C) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [eax + 4] */
    MEM8(0x3048A8) = 1;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000207B9; /* jne: not equal / not zero */

loc_000207A8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x304A04) = MEM32(0x304A04) + 8;
    _fa = (uint32_t)(MEM32(0x304A04)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x30482C) = 0;

loc_000207B9: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000207C0
 * Original: 0x000207C0 - 0x000207CF (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000207C0(void)
{

loc_000207C0: ;
    MEM8(0x304804) = 0;
    MEM8(0x3048A8) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000207D0
 * Original: 0x000207D0 - 0x00020815 (69 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000207D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000207D0: ;
    eax = MEM32(0x304970);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304970) = eax;
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304970) = eax;
    MEM32(0x3049F8) = ecx;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304970) = eax;
    MEM32(0x304944) = edx;
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304BA4) = ecx;
    MEM32(0x304970) = eax;
    MEM8(0x3048A8) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00020820
 * Original: 0x00020820 - 0x00020884 (100 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00020820: ;
    eax = MEM32(0x304970);
    ecx = MEM32(eax + 4);
    edx = MEM32(0x3049F8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(0x304944);
    MEM32(0x3049F8) = edx;
    edx = MEM32(eax + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(0x304BA4);
    MEM32(0x304944) = ecx;
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(0x30481C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x304BA4) = edx;
    MEM32(0x30481C) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x10) (32-bit) */
    MEM8(0x3048A8) = 1;
    if (CMP_L(_fas, _fbs)) goto loc_00020883; /* jl: less (signed <) */

loc_00020871: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304970) = eax;
    MEM32(0x30481C) = 0;

loc_00020883: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00020890
 * Original: 0x00020890 - 0x00020939 (169 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00020890: ;
    eax = MEM32(0x304970);
    edx = MEM32(eax + 4);
    ecx = MEM32(0x304958);
    PUSH32(esp, ebx);
    ebx = MEM32(0x304BA4);
    PUSH32(esp, esi);
    esi = MEM32(0x3049F8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(0x3048B4);
    MEM32(0x3049F8) = esi;
    esi = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = MEM32(0x304944);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(0x304A0C);
    MEM32(0x304944) = edi;
    edi = MEM32(eax + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304BA4) = ebx;
    _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304958) = ecx;
    _fb = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(eax + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(0x30481C);
    MEM32(0x3048B4) = edx;
    _fb = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(eax + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x304A0C) = esi;
    POP32(esp, edi);
    MEM32(0x30481C) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x1C) (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM8(0x3048A8) = 1;
    if (CMP_L(_fas, _fbs)) goto loc_00020938; /* jl: less (signed <) */

loc_0002091A: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304970) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x30481C) = eax;
    MEM32(0x304958) = eax;
    MEM32(0x3048B4) = eax;
    MEM32(0x304A0C) = eax;

loc_00020938: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00020940
 * Original: 0x00020940 - 0x000209F9 (185 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020940(void)
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

loc_00020940: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x30481C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00020971; /* jne: not equal / not zero */

loc_0002094F: ;
    eax = MEM32(0x3049F8);
    ecx = MEM32(0x304944);
    edx = MEM32(0x304BA4);
    MEM32(0x304958) = eax;
    MEM32(0x3048B4) = ecx;
    MEM32(0x304A0C) = edx;

loc_00020971: ;
    esi = MEM32(0x304970);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x30481C) = edi;
    fp_push((double)SMEM32(0x30481C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esi + 0x10)); /* fidiv dword ptr [esi + 0x10] */
    fp_push((double)SMEM32(esi + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, 0x00020991u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00020991: ;
    _fb = (uint32_t)(MEM32(0x304958)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x304958);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3049F8) = eax;
    fp_push((double)SMEM32(esi + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, 0x000209A6u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000209A6: ;
    _fb = (uint32_t)(MEM32(0x3048B4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x3048B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304944) = eax;
    fp_push((double)SMEM32(esi + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, 0x000209BBu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000209BB: ;
    fp_pop(); /* fstp st(0) */
    _fb = (uint32_t)(MEM32(0x304A0C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x304A0C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304BA4) = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x10) (32-bit) */
    MEM8(0x3048A8) = 1;
    if (CMP_L(_fas, _fbs)) goto loc_000209F5; /* jl: less (signed <) */

loc_000209D4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304970) = esi;
    MEM32(0x30481C) = ebx;
    MEM32(0x304958) = ebx;
    MEM32(0x3048B4) = ebx;
    MEM32(0x304A0C) = ebx;

loc_000209F5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00020A00
 * Original: 0x00020A00 - 0x00020AD5 (213 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020A00(void)
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

loc_00020A00: ;
    PUSH32(esp, esi);
    esi = MEM32(0x30481C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00020A30; /* jne: not equal / not zero */

loc_00020A0E: ;
    eax = MEM32(0x3049F8);
    ecx = MEM32(0x304944);
    edx = MEM32(0x304BA4);
    MEM32(0x304958) = eax;
    MEM32(0x3048B4) = ecx;
    MEM32(0x304A0C) = edx;

loc_00020A30: ;
    ecx = MEM32(0x304970);
    eax = 0x4000;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(0x30481C) = esi;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ecx + 0x10)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ecx + 0x10))); }
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    PUSH32(esp, 0x00020A50u); RECOMP_ABI_CALL(0x0006A110u, sub_0006A110); /* call 0x0006A110 */

loc_00020A50: ;
    esi = MEM32(0x304970);
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) - fp_top()); /* fsubr dword ptr [0x22c0d0] */
    fp_push((double)SMEM32(esi + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, 0x00020A66u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00020A66: ;
    _fb = (uint32_t)(MEM32(0x304958)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x304958);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3049F8) = eax;
    fp_push((double)SMEM32(esi + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, 0x00020A7Bu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00020A7B: ;
    _fb = (uint32_t)(MEM32(0x3048B4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x3048B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304944) = eax;
    fp_push((double)SMEM32(esi + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, 0x00020A90u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00020A90: ;
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(0x304A0C);
    edx = MEM32(0x30481C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304BA4) = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x10) (32-bit) */
    MEM8(0x3048A8) = 1;
    if (CMP_L(_fas, _fbs)) goto loc_00020AD2; /* jl: less (signed <) */

loc_00020AB1: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304970) = esi;
    MEM32(0x30481C) = edi;
    MEM32(0x304958) = edi;
    MEM32(0x3048B4) = edi;
    MEM32(0x304A0C) = edi;

loc_00020AD2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00020AE0
 * Original: 0x00020AE0 - 0x00020BB6 (214 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020AE0(void)
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

loc_00020AE0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x30481C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00020B10; /* jne: not equal / not zero */

loc_00020AEE: ;
    eax = MEM32(0x3049F8);
    ecx = MEM32(0x304944);
    edx = MEM32(0x304BA4);
    MEM32(0x304958) = eax;
    MEM32(0x3048B4) = ecx;
    MEM32(0x304A0C) = edx;

loc_00020B10: ;
    ecx = MEM32(0x304970);
    eax = 0x4000;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(0x30481C) = esi;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ecx + 0x10)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ecx + 0x10))); }
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    PUSH32(esp, 0x00020B30u); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_00020B30: ;
    esi = MEM32(0x304970);
    fp_push((double)SMEM32(esi + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, 0x00020B40u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00020B40: ;
    _fb = (uint32_t)(MEM32(0x304958)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x304958);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3049F8) = eax;
    fp_push((double)SMEM32(esi + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, 0x00020B55u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00020B55: ;
    _fb = (uint32_t)(MEM32(0x3048B4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x3048B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304944) = eax;
    MEM16(0x304946) = LO16(edi);
    fp_push((double)SMEM32(esi + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, 0x00020B71u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00020B71: ;
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(0x304A0C);
    edx = MEM32(0x30481C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304BA4) = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x10) (32-bit) */
    MEM8(0x3048A8) = 1;
    if (CMP_L(_fas, _fbs)) goto loc_00020BB3; /* jl: less (signed <) */

loc_00020B92: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304970) = esi;
    MEM32(0x30481C) = edi;
    MEM32(0x304958) = edi;
    MEM32(0x3048B4) = edi;
    MEM32(0x304A0C) = edi;

loc_00020BB3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00020BC0
 * Original: 0x00020BC0 - 0x00020C40 (128 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00020BC0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x3049F8);
    PUSH32(esp, esi);
    esi = MEM32(0x304970);
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 0x10);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edi);
    edi = MEM32(0x30481C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3049F8) = ebx;
    eax = MEM32(esi + 8);
    ebx = MEM32(0x304944);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304944) = ebx;
    eax = MEM32(esi + 0xC);
    ebx = MEM32(0x304BA4);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x304BA4) = ebx;
    MEM32(0x30481C) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x10) (32-bit) */
    MEM8(0x3048A8) = 1;
    if (CMP_L(_fas, _fbs)) goto loc_00020C3C; /* jl: less (signed <) */

loc_00020C29: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304970) = esi;
    MEM32(0x30481C) = 0;

loc_00020C3C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00020C40
 * Original: 0x00020C40 - 0x00020C64 (36 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020C40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00020C40: ;
    eax = ZX8(MEM8(esp + 4));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    ecx = MEM32(eax + 0x30D9BC);
    _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x4000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x304944) = ecx;
    MEM16(0x304946) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00020C70
 * Original: 0x00020C70 - 0x00020CA2 (50 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00020C70: ;
    eax = MEM32(0x30481C);
    ecx = MEM32(0x304970);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x30481C) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    MEM8(0x3048A8) = 1;
    if (CMP_L(_fas, _fbs)) goto loc_00020CA1; /* jl: less (signed <) */

loc_00020C8D: ;
    eax = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x304970) = eax;
    MEM32(0x30481C) = 0;

loc_00020CA1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00020CB0
 * Original: 0x00020CB0 - 0x00020CBF (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020CB0(void)
{

loc_00020CB0: ;
    MEM8(0x3048E0) = 0;
    MEM8(0x3048A8) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00020CC0
 * Original: 0x00020CC0 - 0x00020CE5 (37 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020CC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00020CC0: ;
    eax = MEM32(0x3048F8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3048F8) = eax;
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3048C4) = ecx;
    MEM32(0x3048F8) = eax;
    MEM8(0x3048A8) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00020CF0
 * Original: 0x00020CF0 - 0x00020D3C (76 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020CF0(void)
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

loc_00020CF0: ;
    fp_push(MEMF(0x3048C4)); /* fld float */
    ecx = MEM32(0x3048F8);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(0x3048C4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3049F0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    MEMF(0x3049F0) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 8] */
    MEM8(0x3048A8) = 1;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00020D3B; /* jne: not equal / not zero */

loc_00020D28: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3048F8) = ecx;
    MEM32(0x3049F0) = 0;

loc_00020D3B: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00020D40
 * Original: 0x00020D40 - 0x00020DAB (107 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020D40(void)
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

loc_00020D40: ;
    ecx = MEM32(0x3048F8);
    fp_push(MEMF(0x304950)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3048C4)); /* fadd dword ptr [0x3048c4] */
    MEMF(0x3048C4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x304950)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    MEMF(0x304950) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3049F0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    MEMF(0x3049F0) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0xc] */
    MEM8(0x3048A8) = 1;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00020DAA; /* jne: not equal / not zero */

loc_00020D8D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3048F8) = ecx;
    MEM32(0x3049F0) = 0;
    MEM32(0x304950) = 0;

loc_00020DAA: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00020DB0
 * Original: 0x00020DB0 - 0x00020E2A (122 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020DB0(void)
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

loc_00020DB0: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */
    fp_push(MEMF(0x3049F0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00020DCF; /* jp: parity */

loc_00020DC5: ;
    eax = MEM32(0x3048C4);
    MEM32(0x304950) = eax;

loc_00020DCF: ;
    fp_push(MEMF(0x3049F0)); /* fld float */
    ecx = MEM32(0x3048F8);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    MEMF(0x3049F0) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 8)); /* fdiv dword ptr [ecx + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x304950)); /* fadd dword ptr [0x304950] */
    MEMF(0x3048C4) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 8] */
    MEM8(0x3048A8) = 1;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00020E29; /* jne: not equal / not zero */

loc_00020E0C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3048F8) = ecx;
    MEM32(0x3049F0) = 0;
    MEM32(0x304950) = 0;

loc_00020E29: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00020E30
 * Original: 0x00020E30 - 0x00020EE2 (178 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020E30(void)
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

loc_00020E30: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */
    fp_push(MEMF(0x3049F0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00020E4F; /* jp: parity */

loc_00020E45: ;
    eax = MEM32(0x3048C4);
    MEM32(0x304950) = eax;

loc_00020E4F: ;
    fp_push(MEMF(0x3049F0)); /* fld float */
    ecx = MEM32(0x3048F8);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    PUSH32(esp, esi);
    MEMF(0x3049F0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    PUSH32(esp, 0x00020E70u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00020E70: ;
    fp_push(MEMF(0x3049F0)); /* fld float */
    ecx = eax;
    eax = 0x4000;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = eax;
    PUSH32(esp, 0x00020E87u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00020E87: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    ecx = esi;
    PUSH32(esp, 0x00020E91u); RECOMP_ABI_CALL(0x0006A110u, sub_0006A110); /* call 0x0006A110 */

loc_00020E91: ;
    ecx = MEM32(0x3048F8);
    fp_top() = RECOMP_FP_PC(MEMF(0x22C0D0) - fp_top()); /* fsubr dword ptr [0x22c0d0] */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x304950)); /* fadd dword ptr [0x304950] */
    MEMF(0x3048C4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3049F0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 8] */
    MEM8(0x3048A8) = 1;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00020EE1; /* jne: not equal / not zero */

loc_00020EC4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3048F8) = ecx;
    MEM32(0x3049F0) = 0;
    MEM32(0x304950) = 0;

loc_00020EE1: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00020EF0
 * Original: 0x00020EF0 - 0x00020FAF (191 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020EF0(void)
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

loc_00020EF0: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(0x22C0D4)); /* fld float */
    fp_push(MEMF(0x3049F0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00020F10; /* jp: parity */

loc_00020F06: ;
    eax = MEM32(0x3048C4);
    MEM32(0x304950) = eax;

loc_00020F10: ;
    fp_push(MEMF(0x3049F0)); /* fld float */
    ecx = MEM32(0x3048F8);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    PUSH32(esp, esi);
    MEMF(0x3049F0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    PUSH32(esp, 0x00020F31u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00020F31: ;
    fp_push(MEMF(0x3049F0)); /* fld float */
    ecx = eax;
    eax = 0x4000;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = eax;
    PUSH32(esp, 0x00020F48u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00020F48: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    ecx = esi;
    PUSH32(esp, 0x00020F52u); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_00020F52: ;
    esi = MEM32(0x3048F8);
    fp_push(MEMF(esi + 4)); /* fld float */
    PUSH32(esp, 0x00020F60u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00020F60: ;
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x304950)); /* fadd dword ptr [0x304950] */
    MEMF(0x3048C4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3049F0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 8] */
    MEM8(0x3048A8) = 1;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00020FAC; /* jne: not equal / not zero */

loc_00020F8F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3048F8) = esi;
    MEM32(0x3049F0) = 0;
    MEM32(0x304950) = 0;

loc_00020FAC: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00020FB0
 * Original: 0x00020FB0 - 0x00021017 (103 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020FB0(void)
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

loc_00020FB0: ;
    ecx = MEM32(0x3048F8);
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x3048C4)); /* fsub dword ptr [0x3048c4] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x3049F0)); /* fsub dword ptr [0x3049f0] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3048C4)); /* fadd dword ptr [0x3048c4] */
    MEMF(0x3048C4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3049F0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    MEMF(0x3049F0) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 8] */
    MEM8(0x3048A8) = 1;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00021016; /* jne: not equal / not zero */

loc_00020FF9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3048F8) = ecx;
    MEM32(0x3049F0) = 0;
    MEM32(0x304950) = 0;

loc_00021016: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00021020
 * Original: 0x00021020 - 0x0002104A (42 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00021020: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00021049; /* jne: not equal / not zero */

loc_00021028: ;
    PUSH32(esp, 0x3048C4);
    PUSH32(esp, 0x00021032u); RECOMP_ABI_CALL(0x00022CB0u, sub_00022CB0); /* call 0x00022CB0 */

loc_00021032: ;
    PUSH32(esp, 0x41700000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x3048C4);
    PUSH32(esp, 0x00021046u); RECOMP_ABI_CALL(0x00022A20u, sub_00022A20); /* call 0x00022A20 */

loc_00021046: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00021049: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00021050
 * Original: 0x00021050 - 0x0002108A (58 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021050(void)
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

loc_00021050: ;
    fp_push(MEMF(0x3049F0)); /* fld float */
    eax = MEM32(0x3048F8);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    MEMF(0x3049F0) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [eax + 4] */
    MEM8(0x3048A8) = 1;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00021089; /* jne: not equal / not zero */

loc_00021078: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x3048F8) = MEM32(0x3048F8) + 8;
    _fa = (uint32_t)(MEM32(0x3048F8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3049F0) = 0;

loc_00021089: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00021090
 * Original: 0x00021090 - 0x0002109F (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021090(void)
{

loc_00021090: ;
    MEM8(0x3048C2) = 0;
    MEM8(0x3048A8) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000210A0
 * Original: 0x000210A0 - 0x000210C8 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000210A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000210A0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x30492C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x30492C) = esi;
    SET_LO8(eax, MEM8(esi));
    PUSH32(esp, eax);
    PUSH32(esp, 0x000210BAu); RECOMP_ABI_CALL(0x0001FA50u, sub_0001FA50); /* call 0x0001FA50 */

loc_000210BA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x30492C) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000210D0
 * Original: 0x000210D0 - 0x000210F8 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000210D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000210D0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x30492C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x30492C) = esi;
    SET_LO8(eax, MEM8(esi));
    PUSH32(esp, eax);
    PUSH32(esp, 0x000210EAu); RECOMP_ABI_CALL(0x0001FAE0u, sub_0001FAE0); /* call 0x0001FAE0 */

loc_000210EA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x30492C) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00021100
 * Original: 0x00021100 - 0x00021128 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021100(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00021100: ;
    PUSH32(esp, esi);
    esi = MEM32(0x30492C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x30492C) = esi;
    SET_LO8(eax, MEM8(esi));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002111Au); RECOMP_ABI_CALL(0x0001FB70u, sub_0001FB70); /* call 0x0001FB70 */

loc_0002111A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x30492C) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00021130
 * Original: 0x00021130 - 0x00021156 (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00021130: ;
    edx = MEM32(0x30492C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x30492C) = edx;
    SET_LO8(eax, MEM8(edx));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00021149u); RECOMP_ABI_CALL(0x0001FBD0u, sub_0001FBD0); /* call 0x0001FBD0 */

loc_00021149: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x30492C) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00021160
 * Original: 0x00021160 - 0x000211A2 (66 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021160(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00021160: ;
    PUSH32(esp, esi);
    esi = MEM32(0x30492C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x30492C) = esi;
    SET_LO8(eax, MEM8(esi));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002117Au); RECOMP_ABI_CALL(0x0001FAE0u, sub_0001FAE0); /* call 0x0001FAE0 */

loc_0002117A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x30492C) = esi;
    SET_LO8(ecx, MEM8(esi));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002118Du); RECOMP_ABI_CALL(0x0001FB70u, sub_0001FB70); /* call 0x0001FB70 */

loc_0002118D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x30492C) = esi;
    MEM8(0x3049A4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000211B0
 * Original: 0x000211B0 - 0x000211F2 (66 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000211B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000211B0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x30492C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x30492C) = esi;
    SET_LO8(eax, MEM8(esi));
    PUSH32(esp, eax);
    PUSH32(esp, 0x000211CAu); RECOMP_ABI_CALL(0x0001FA50u, sub_0001FA50); /* call 0x0001FA50 */

loc_000211CA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x30492C) = esi;
    SET_LO8(ecx, MEM8(esi));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000211DDu); RECOMP_ABI_CALL(0x0001FAE0u, sub_0001FAE0); /* call 0x0001FAE0 */

loc_000211DD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x30492C) = esi;
    MEM8(0x3049A4) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00021200
 * Original: 0x00021200 - 0x00021255 (85 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021200(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00021200: ;
    PUSH32(esp, esi);
    esi = MEM32(0x30492C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x30492C) = esi;
    SET_LO8(eax, MEM8(esi));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002121Au); RECOMP_ABI_CALL(0x0001FA50u, sub_0001FA50); /* call 0x0001FA50 */

loc_0002121A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x30492C) = esi;
    SET_LO8(ecx, MEM8(esi));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002122Du); RECOMP_ABI_CALL(0x0001FB70u, sub_0001FB70); /* call 0x0001FB70 */

loc_0002122D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x30492C) = esi;
    SET_LO8(edx, MEM8(esi));
    PUSH32(esp, edx);
    PUSH32(esp, 0x00021240u); RECOMP_ABI_CALL(0x0001FBD0u, sub_0001FBD0); /* call 0x0001FBD0 */

loc_00021240: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x30492C) = esi;
    MEM8(0x3049A4) = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00021260
 * Original: 0x00021260 - 0x0002127F (31 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021260(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00021260: ;
    ecx = MEM32(0x30492C);
    edx = 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x30492C) = ecx;
    PUSH32(esp, 0x00021278u); RECOMP_ABI_CALL(0x0001FC10u, sub_0001FC10); /* call 0x0001FC10 */

loc_00021278: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x30492C) = MEM32(0x30492C) + edx;
    _fa = (uint32_t)(MEM32(0x30492C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00021280
 * Original: 0x00021280 - 0x0002129F (31 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021280(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00021280: ;
    ecx = MEM32(0x30492C);
    edx = 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x30492C) = ecx;
    PUSH32(esp, 0x00021298u); RECOMP_ABI_CALL(0x0001FC70u, sub_0001FC70); /* call 0x0001FC70 */

loc_00021298: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x30492C) = MEM32(0x30492C) + edx;
    _fa = (uint32_t)(MEM32(0x30492C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000212A0
 * Original: 0x000212A0 - 0x000212BF (31 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000212A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000212A0: ;
    ecx = MEM32(0x30492C);
    edx = 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x30492C) = ecx;
    PUSH32(esp, 0x000212B8u); RECOMP_ABI_CALL(0x0001FCD0u, sub_0001FCD0); /* call 0x0001FCD0 */

loc_000212B8: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x30492C) = MEM32(0x30492C) + edx;
    _fa = (uint32_t)(MEM32(0x30492C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000212C0
 * Original: 0x000212C0 - 0x000212DF (31 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000212C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000212C0: ;
    ecx = MEM32(0x30492C);
    edx = 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x30492C) = ecx;
    PUSH32(esp, 0x000212D8u); RECOMP_ABI_CALL(0x0001FD00u, sub_0001FD00); /* call 0x0001FD00 */

loc_000212D8: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x30492C) = MEM32(0x30492C) + edx;
    _fa = (uint32_t)(MEM32(0x30492C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000212E0
 * Original: 0x000212E0 - 0x0002130F (47 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000212E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000212E0: ;
    eax = MEM32(0x30492C);
    edx = 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x30492C) = eax;
    PUSH32(esp, 0x000212F6u); RECOMP_ABI_CALL(0x0001FC70u, sub_0001FC70); /* call 0x0001FC70 */

loc_000212F6: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x30492C) = MEM32(0x30492C) + edx;
    _fa = (uint32_t)(MEM32(0x30492C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00021301u); RECOMP_ABI_CALL(0x0001FCD0u, sub_0001FCD0); /* call 0x0001FCD0 */

loc_00021301: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x30492C) = MEM32(0x30492C) + edx;
    _fa = (uint32_t)(MEM32(0x30492C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3049A4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00021310
 * Original: 0x00021310 - 0x0002133F (47 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021310(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00021310: ;
    eax = MEM32(0x30492C);
    edx = 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x30492C) = eax;
    PUSH32(esp, 0x00021326u); RECOMP_ABI_CALL(0x0001FC10u, sub_0001FC10); /* call 0x0001FC10 */

loc_00021326: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x30492C) = MEM32(0x30492C) + edx;
    _fa = (uint32_t)(MEM32(0x30492C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00021331u); RECOMP_ABI_CALL(0x0001FC70u, sub_0001FC70); /* call 0x0001FC70 */

loc_00021331: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x30492C) = MEM32(0x30492C) + edx;
    _fa = (uint32_t)(MEM32(0x30492C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3049A4) = 1;
    esp += 4; return; /* ret */

}
